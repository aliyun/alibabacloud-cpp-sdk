// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveRecordFilesResponseBodyFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveRecordFilesResponseBody() = default ;
    ListLiveRecordFilesResponseBody(const ListLiveRecordFilesResponseBody &) = default ;
    ListLiveRecordFilesResponseBody(ListLiveRecordFilesResponseBody &&) = default ;
    ListLiveRecordFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordFilesResponseBody() = default ;
    ListLiveRecordFilesResponseBody& operator=(const ListLiveRecordFilesResponseBody &) = default ;
    ListLiveRecordFilesResponseBody& operator=(ListLiveRecordFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->files_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->sortBy_ == nullptr && return this->totalCount_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ListLiveRecordFilesResponseBodyFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ListLiveRecordFilesResponseBodyFiles>) };
    inline vector<ListLiveRecordFilesResponseBodyFiles> files() { DARABONBA_PTR_GET(files_, vector<ListLiveRecordFilesResponseBodyFiles>) };
    inline ListLiveRecordFilesResponseBody& setFiles(const vector<ListLiveRecordFilesResponseBodyFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListLiveRecordFilesResponseBody& setFiles(vector<ListLiveRecordFilesResponseBodyFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLiveRecordFilesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListLiveRecordFilesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordFilesResponseBody& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListLiveRecordFilesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of index files.
    std::shared_ptr<vector<ListLiveRecordFilesResponseBodyFiles>> files_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The sorting order of the index files by creation time.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The total number of files that meet the specified conditions.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
