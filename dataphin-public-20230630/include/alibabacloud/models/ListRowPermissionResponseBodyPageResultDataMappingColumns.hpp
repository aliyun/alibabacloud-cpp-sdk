// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATAMAPPINGCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATAMAPPINGCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionResponseBodyPageResultDataMappingColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionResponseBodyPageResultDataMappingColumns& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnDesc, columnDesc_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionResponseBodyPageResultDataMappingColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnDesc, columnDesc_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
    };
    ListRowPermissionResponseBodyPageResultDataMappingColumns() = default ;
    ListRowPermissionResponseBodyPageResultDataMappingColumns(const ListRowPermissionResponseBodyPageResultDataMappingColumns &) = default ;
    ListRowPermissionResponseBodyPageResultDataMappingColumns(ListRowPermissionResponseBodyPageResultDataMappingColumns &&) = default ;
    ListRowPermissionResponseBodyPageResultDataMappingColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionResponseBodyPageResultDataMappingColumns() = default ;
    ListRowPermissionResponseBodyPageResultDataMappingColumns& operator=(const ListRowPermissionResponseBodyPageResultDataMappingColumns &) = default ;
    ListRowPermissionResponseBodyPageResultDataMappingColumns& operator=(ListRowPermissionResponseBodyPageResultDataMappingColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnDesc_ != nullptr
        && this->columnName_ != nullptr && this->columnType_ != nullptr; };
    // columnDesc Field Functions 
    bool hasColumnDesc() const { return this->columnDesc_ != nullptr;};
    void deleteColumnDesc() { this->columnDesc_ = nullptr;};
    inline string columnDesc() const { DARABONBA_PTR_GET_DEFAULT(columnDesc_, "") };
    inline ListRowPermissionResponseBodyPageResultDataMappingColumns& setColumnDesc(string columnDesc) { DARABONBA_PTR_SET_VALUE(columnDesc_, columnDesc) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListRowPermissionResponseBodyPageResultDataMappingColumns& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ListRowPermissionResponseBodyPageResultDataMappingColumns& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


  protected:
    std::shared_ptr<string> columnDesc_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
