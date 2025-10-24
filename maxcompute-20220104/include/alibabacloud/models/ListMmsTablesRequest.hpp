// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMmsTablesRequestSorter.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sorter, sorter_);
      DARABONBA_PTR_TO_JSON(dbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(dstName, dstName_);
      DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_TO_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_TO_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(onlyName, onlyName_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sorter, sorter_);
      DARABONBA_PTR_FROM_JSON(dbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(dstName, dstName_);
      DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
      DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
      DARABONBA_PTR_FROM_JSON(hasPartitions, hasPartitions_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeEnd, lastDdlTimeEnd_);
      DARABONBA_PTR_FROM_JSON(lastDdlTimeStart, lastDdlTimeStart_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(onlyName, onlyName_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsTablesRequest() = default ;
    ListMmsTablesRequest(const ListMmsTablesRequest &) = default ;
    ListMmsTablesRequest(ListMmsTablesRequest &&) = default ;
    ListMmsTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesRequest() = default ;
    ListMmsTablesRequest& operator=(const ListMmsTablesRequest &) = default ;
    ListMmsTablesRequest& operator=(ListMmsTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sorter_ == nullptr
        && return this->dbId_ == nullptr && return this->dbName_ == nullptr && return this->dstName_ == nullptr && return this->dstProjectName_ == nullptr && return this->dstSchemaName_ == nullptr
        && return this->hasPartitions_ == nullptr && return this->lastDdlTimeEnd_ == nullptr && return this->lastDdlTimeStart_ == nullptr && return this->name_ == nullptr && return this->onlyName_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // sorter Field Functions 
    bool hasSorter() const { return this->sorter_ != nullptr;};
    void deleteSorter() { this->sorter_ = nullptr;};
    inline const ListMmsTablesRequestSorter & sorter() const { DARABONBA_PTR_GET_CONST(sorter_, ListMmsTablesRequestSorter) };
    inline ListMmsTablesRequestSorter sorter() { DARABONBA_PTR_GET(sorter_, ListMmsTablesRequestSorter) };
    inline ListMmsTablesRequest& setSorter(const ListMmsTablesRequestSorter & sorter) { DARABONBA_PTR_SET_VALUE(sorter_, sorter) };
    inline ListMmsTablesRequest& setSorter(ListMmsTablesRequestSorter && sorter) { DARABONBA_PTR_SET_RVALUE(sorter_, sorter) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListMmsTablesRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMmsTablesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string dstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline ListMmsTablesRequest& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // dstProjectName Field Functions 
    bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
    void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
    inline string dstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
    inline ListMmsTablesRequest& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


    // dstSchemaName Field Functions 
    bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
    void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
    inline string dstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
    inline ListMmsTablesRequest& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


    // hasPartitions Field Functions 
    bool hasHasPartitions() const { return this->hasPartitions_ != nullptr;};
    void deleteHasPartitions() { this->hasPartitions_ = nullptr;};
    inline bool hasPartitions() const { DARABONBA_PTR_GET_DEFAULT(hasPartitions_, false) };
    inline ListMmsTablesRequest& setHasPartitions(bool hasPartitions) { DARABONBA_PTR_SET_VALUE(hasPartitions_, hasPartitions) };


    // lastDdlTimeEnd Field Functions 
    bool hasLastDdlTimeEnd() const { return this->lastDdlTimeEnd_ != nullptr;};
    void deleteLastDdlTimeEnd() { this->lastDdlTimeEnd_ = nullptr;};
    inline string lastDdlTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeEnd_, "") };
    inline ListMmsTablesRequest& setLastDdlTimeEnd(string lastDdlTimeEnd) { DARABONBA_PTR_SET_VALUE(lastDdlTimeEnd_, lastDdlTimeEnd) };


    // lastDdlTimeStart Field Functions 
    bool hasLastDdlTimeStart() const { return this->lastDdlTimeStart_ != nullptr;};
    void deleteLastDdlTimeStart() { this->lastDdlTimeStart_ = nullptr;};
    inline string lastDdlTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTimeStart_, "") };
    inline ListMmsTablesRequest& setLastDdlTimeStart(string lastDdlTimeStart) { DARABONBA_PTR_SET_VALUE(lastDdlTimeStart_, lastDdlTimeStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onlyName Field Functions 
    bool hasOnlyName() const { return this->onlyName_ != nullptr;};
    void deleteOnlyName() { this->onlyName_ = nullptr;};
    inline bool onlyName() const { DARABONBA_PTR_GET_DEFAULT(onlyName_, false) };
    inline ListMmsTablesRequest& setOnlyName(bool onlyName) { DARABONBA_PTR_SET_VALUE(onlyName_, onlyName) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsTablesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListMmsTablesRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListMmsTablesRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTablesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<ListMmsTablesRequestSorter> sorter_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<string> dstName_ = nullptr;
    std::shared_ptr<string> dstProjectName_ = nullptr;
    std::shared_ptr<string> dstSchemaName_ = nullptr;
    std::shared_ptr<bool> hasPartitions_ = nullptr;
    std::shared_ptr<string> lastDdlTimeEnd_ = nullptr;
    std::shared_ptr<string> lastDdlTimeStart_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> onlyName_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
