// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSPARTITIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSPARTITIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsPartitionsShrinkRequestSorter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsPartitionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsPartitionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, statusShrink_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsPartitionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, statusShrink_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListMmsPartitionsShrinkRequest() = default ;
    ListMmsPartitionsShrinkRequest(const ListMmsPartitionsShrinkRequest &) = default ;
    ListMmsPartitionsShrinkRequest(ListMmsPartitionsShrinkRequest &&) = default ;
    ListMmsPartitionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsPartitionsShrinkRequest() = default ;
    ListMmsPartitionsShrinkRequest& operator=(const ListMmsPartitionsShrinkRequest &) = default ;
    ListMmsPartitionsShrinkRequest& operator=(ListMmsPartitionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sorter_ != nullptr
        && this->dbId_ != nullptr && this->dbName_ != nullptr && this->lastDdlTimeEnd_ != nullptr && this->lastDdlTimeStart_ != nullptr && this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->statusShrink_ != nullptr && this->tableName_ != nullptr && this->updated_ != nullptr && this->value_ != nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsPartitionsShrinkRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsPartitionsShrinkRequestSorter) };
    inline ListMmsPartitionsShrinkRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsPartitionsShrinkRequestSorter) };
    inline ListMmsPartitionsShrinkRequest& setSorter(const ListMmsPartitionsShrinkRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsPartitionsShrinkRequest& setSorter(ListMmsPartitionsShrinkRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsPartitionsShrinkRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsPartitionsShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // lastDdlTimeEnd Field Functions 
    bool hasLastDdlTimeEnd() const { return this->lastDdlTimeEnd_ != nullptr;};
    void deleteLastDdlTimeEnd() { this->lastDdlTimeEnd_ = nullptr;};
    inline string lastDdlTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeEnd_, "") };
    inline ListMmsPartitionsShrinkRequest& setLastDdlTimeEnd(string lastDdlTimeEnd) { DARABONBA_PTR_SET_VALUE(lastDdlTimeEnd_, lastDdlTimeEnd) };


    // lastDdlTimeStart Field Functions 
    bool hasLastDdlTimeStart() const { return this->lastDdlTimeStart_ != nullptr;};
    void deleteLastDdlTimeStart() { this->lastDdlTimeStart_ = nullptr;};
    inline string lastDdlTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeStart_, "") };
    inline ListMmsPartitionsShrinkRequest& setLastDdlTimeStart(string lastDdlTimeStart) { DARABONBA_PTR_SET_VALUE(lastDdlTimeStart_, lastDdlTimeStart) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsPartitionsShrinkRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsPartitionsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string statusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListMmsPartitionsShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListMmsPartitionsShrinkRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline ListMmsPartitionsShrinkRequest& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListMmsPartitionsShrinkRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<ListMmsPartitionsShrinkRequestSorter> sorter_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> lastDdlTimeEnd_ = nullptr;
    std::shared_ptr<string> lastDdlTimeStart_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> statusShrink_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
