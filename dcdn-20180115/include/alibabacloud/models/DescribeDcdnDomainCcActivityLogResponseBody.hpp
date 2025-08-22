// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainCcActivityLogResponseBodyActivityLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCcActivityLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCcActivityLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityLog, activityLog_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCcActivityLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityLog, activityLog_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeDcdnDomainCcActivityLogResponseBody() = default ;
    DescribeDcdnDomainCcActivityLogResponseBody(const DescribeDcdnDomainCcActivityLogResponseBody &) = default ;
    DescribeDcdnDomainCcActivityLogResponseBody(DescribeDcdnDomainCcActivityLogResponseBody &&) = default ;
    DescribeDcdnDomainCcActivityLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCcActivityLogResponseBody() = default ;
    DescribeDcdnDomainCcActivityLogResponseBody& operator=(const DescribeDcdnDomainCcActivityLogResponseBody &) = default ;
    DescribeDcdnDomainCcActivityLogResponseBody& operator=(DescribeDcdnDomainCcActivityLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityLog_ != nullptr
        && this->pageIndex_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // activityLog Field Functions 
    bool hasActivityLog() const { return this->activityLog_ != nullptr;};
    void deleteActivityLog() { this->activityLog_ = nullptr;};
    inline const vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog> & activityLog() const { DARABONBA_PTR_GET_CONST(activityLog_, vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog>) };
    inline vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog> activityLog() { DARABONBA_PTR_GET(activityLog_, vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog>) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setActivityLog(const vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog> & activityLog) { DARABONBA_PTR_SET_VALUE(activityLog_, activityLog) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setActivityLog(vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog> && activityLog) { DARABONBA_PTR_SET_RVALUE(activityLog_, activityLog) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The log data of the event that triggered rate limiting.
    std::shared_ptr<vector<DescribeDcdnDomainCcActivityLogResponseBodyActivityLog>> activityLog_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
