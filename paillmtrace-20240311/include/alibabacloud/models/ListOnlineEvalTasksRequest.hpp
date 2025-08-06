// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONLINEEVALTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTONLINEEVALTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class ListOnlineEvalTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnlineEvalTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SamplingMethod, samplingMethod_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnlineEvalTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SamplingMethod, samplingMethod_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListOnlineEvalTasksRequest() = default ;
    ListOnlineEvalTasksRequest(const ListOnlineEvalTasksRequest &) = default ;
    ListOnlineEvalTasksRequest(ListOnlineEvalTasksRequest &&) = default ;
    ListOnlineEvalTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnlineEvalTasksRequest() = default ;
    ListOnlineEvalTasksRequest& operator=(const ListOnlineEvalTasksRequest &) = default ;
    ListOnlineEvalTasksRequest& operator=(ListOnlineEvalTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->keyword_ != nullptr && this->maxTime_ != nullptr && this->minTime_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->samplingMethod_ != nullptr && this->sortBy_ != nullptr && this->sortOrder_ != nullptr && this->status_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListOnlineEvalTasksRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListOnlineEvalTasksRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline string maxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, "") };
    inline ListOnlineEvalTasksRequest& setMaxTime(string maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline string minTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, "") };
    inline ListOnlineEvalTasksRequest& setMinTime(string minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOnlineEvalTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOnlineEvalTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // samplingMethod Field Functions 
    bool hasSamplingMethod() const { return this->samplingMethod_ != nullptr;};
    void deleteSamplingMethod() { this->samplingMethod_ = nullptr;};
    inline string samplingMethod() const { DARABONBA_PTR_GET_DEFAULT(samplingMethod_, "") };
    inline ListOnlineEvalTasksRequest& setSamplingMethod(string samplingMethod) { DARABONBA_PTR_SET_VALUE(samplingMethod_, samplingMethod) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListOnlineEvalTasksRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListOnlineEvalTasksRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOnlineEvalTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    // Search keyword. It will match on fields such as task name, application name (appName), task description, and evaluation metric name.
    std::shared_ptr<string> keyword_ = nullptr;
    // The UTC end time of the search time range
    std::shared_ptr<string> maxTime_ = nullptr;
    // The UTC start time of the search time range
    std::shared_ptr<string> minTime_ = nullptr;
    // The current page number. Value range: integers greater than 0. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, default is 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> samplingMethod_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> sortOrder_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
