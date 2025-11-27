// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODYITEMSMETA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODYITEMSMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMetaListResponseBodyItemsMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaListResponseBodyItemsMeta& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaListResponseBodyItemsMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeMetaListResponseBodyItemsMeta() = default ;
    DescribeMetaListResponseBodyItemsMeta(const DescribeMetaListResponseBodyItemsMeta &) = default ;
    DescribeMetaListResponseBodyItemsMeta(DescribeMetaListResponseBodyItemsMeta &&) = default ;
    DescribeMetaListResponseBodyItemsMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaListResponseBodyItemsMeta() = default ;
    DescribeMetaListResponseBodyItemsMeta& operator=(const DescribeMetaListResponseBodyItemsMeta &) = default ;
    DescribeMetaListResponseBodyItemsMeta& operator=(DescribeMetaListResponseBodyItemsMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->size_ == nullptr && return this->tables_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeMetaListResponseBodyItemsMeta& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeMetaListResponseBodyItemsMeta& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribeMetaListResponseBodyItemsMeta& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


  protected:
    // The database name.
    std::shared_ptr<string> database_ = nullptr;
    // The table size. Unit: KB.
    std::shared_ptr<string> size_ = nullptr;
    // The table name.
    std::shared_ptr<string> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
