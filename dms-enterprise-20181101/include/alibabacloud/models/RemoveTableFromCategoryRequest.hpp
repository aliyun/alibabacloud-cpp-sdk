// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETABLEFROMCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETABLEFROMCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RemoveTableFromCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTableFromCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTableFromCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    RemoveTableFromCategoryRequest() = default ;
    RemoveTableFromCategoryRequest(const RemoveTableFromCategoryRequest &) = default ;
    RemoveTableFromCategoryRequest(RemoveTableFromCategoryRequest &&) = default ;
    RemoveTableFromCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTableFromCategoryRequest() = default ;
    RemoveTableFromCategoryRequest& operator=(const RemoveTableFromCategoryRequest &) = default ;
    RemoveTableFromCategoryRequest& operator=(RemoveTableFromCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->dbId_ != nullptr && this->tableName_ != nullptr && this->tableSchemaName_ != nullptr && this->tid_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline RemoveTableFromCategoryRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline RemoveTableFromCategoryRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline RemoveTableFromCategoryRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string tableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline RemoveTableFromCategoryRequest& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RemoveTableFromCategoryRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableSchemaName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
