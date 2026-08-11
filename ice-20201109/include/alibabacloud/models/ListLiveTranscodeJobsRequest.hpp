// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartMode, startMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartMode, startMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveTranscodeJobsRequest() = default ;
    ListLiveTranscodeJobsRequest(const ListLiveTranscodeJobsRequest &) = default ;
    ListLiveTranscodeJobsRequest(ListLiveTranscodeJobsRequest &&) = default ;
    ListLiveTranscodeJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeJobsRequest() = default ;
    ListLiveTranscodeJobsRequest& operator=(const ListLiveTranscodeJobsRequest &) = default ;
    ListLiveTranscodeJobsRequest& operator=(ListLiveTranscodeJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyWord_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->startMode_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListLiveTranscodeJobsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveTranscodeJobsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveTranscodeJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveTranscodeJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startMode Field Functions 
    bool hasStartMode() const { return this->startMode_ != nullptr;};
    void deleteStartMode() { this->startMode_ = nullptr;};
    inline int32_t getStartMode() const { DARABONBA_PTR_GET_DEFAULT(startMode_, 0) };
    inline ListLiveTranscodeJobsRequest& setStartMode(int32_t startMode) { DARABONBA_PTR_SET_VALUE(startMode_, startMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListLiveTranscodeJobsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveTranscodeJobsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The search keyword. You can search by task ID or name. Name supports fuzzy match.
    shared_ptr<string> keyWord_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sort order. Sorts by CreateTime. Default value: desc.
    // 
    // - asc: ascending order
    // - desc: descending order
    shared_ptr<string> sortBy_ {};
    // The start mode.
    // 
    // - 0: start immediately
    // - 1: scheduled start
    shared_ptr<int32_t> startMode_ {};
    // The task status.
    // 
    // - 0: not started
    // 
    // - 1: running
    // 
    // - 2: stopped
    shared_ptr<int32_t> status_ {};
    // The template type corresponding to the transcoding task.
    // 
    // - normal: standard
    // - narrow-band: narrow bandwidth high definition
    // - audio-only: audio only
    // - origin: original quality
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
