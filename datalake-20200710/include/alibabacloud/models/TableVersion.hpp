// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEVERSION_HPP_
#define ALIBABACLOUD_MODELS_TABLEVERSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Table.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableVersion& obj) { 
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, TableVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    TableVersion() = default ;
    TableVersion(const TableVersion &) = default ;
    TableVersion(TableVersion &&) = default ;
    TableVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableVersion() = default ;
    TableVersion& operator=(const TableVersion &) = default ;
    TableVersion& operator=(TableVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->table_ == nullptr
        && return this->versionId_ == nullptr; };
    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const Table & table() const { DARABONBA_PTR_GET_CONST(table_, Table) };
    inline Table table() { DARABONBA_PTR_GET(table_, Table) };
    inline TableVersion& setTable(const Table & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline TableVersion& setTable(Table && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int32_t versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0) };
    inline TableVersion& setVersionId(int32_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    std::shared_ptr<Table> table_ = nullptr;
    std::shared_ptr<int32_t> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
