// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsPartitionsRequestSorter.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsPartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsPartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsPartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ListMmsPartitionsRequest() = default ;
    ListMmsPartitionsRequest(const ListMmsPartitionsRequest &) = default ;
    ListMmsPartitionsRequest(ListMmsPartitionsRequest &&) = default ;
    ListMmsPartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsPartitionsRequest() = default ;
    ListMmsPartitionsRequest& operator=(const ListMmsPartitionsRequest &) = default ;
    ListMmsPartitionsRequest& operator=(ListMmsPartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sorter_ == nullptr
        && return this->dbId_ == nullptr && return this->dbName_ == nullptr && return this->lastDdlTimeEnd_ == nullptr && return this->lastDdlTimeStart_ == nullptr && return this->pageNum_ == nullptr
        && return this->pageSize_ == nullptr && return this->status_ == nullptr && return this->tableId_ == nullptr && return this->tableName_ == nullptr && return this->updated_ == nullptr
        && return this->value_ == nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsPartitionsRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsPartitionsRequestSorter) };
    inline ListMmsPartitionsRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsPartitionsRequestSorter) };
    inline ListMmsPartitionsRequest& setSorter(const ListMmsPartitionsRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsPartitionsRequest& setSorter(ListMmsPartitionsRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsPartitionsRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsPartitionsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // lastDdlTimeEnd Field Functions 
    bool hasLastDdlTimeEnd() const { return this->lastDdlTimeEnd_ != nullptr;};
    void deleteLastDdlTimeEnd() { this->lastDdlTimeEnd_ = nullptr;};
    inline string lastDdlTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeEnd_, "") };
    inline ListMmsPartitionsRequest& setLastDdlTimeEnd(string lastDdlTimeEnd) { DARABONBA_PTR_SET_VALUE(lastDdlTimeEnd_, lastDdlTimeEnd) };


    // lastDdlTimeStart Field Functions 
    bool hasLastDdlTimeStart() const { return this->lastDdlTimeStart_ != nullptr;};
    void deleteLastDdlTimeStart() { this->lastDdlTimeStart_ = nullptr;};
    inline string lastDdlTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeStart_, "") };
    inline ListMmsPartitionsRequest& setLastDdlTimeStart(string lastDdlTimeStart) { DARABONBA_PTR_SET_VALUE(lastDdlTimeStart_, lastDdlTimeStart) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsPartitionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsPartitionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListMmsPartitionsRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListMmsPartitionsRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline ListMmsPartitionsRequest& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListMmsPartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline ListMmsPartitionsRequest& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListMmsPartitionsRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<ListMmsPartitionsRequestSorter> sorter_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> lastDdlTimeEnd_ = nullptr;
    std::shared_ptr<string> lastDdlTimeStart_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
