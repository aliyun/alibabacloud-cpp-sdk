// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCCACTIVITYLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ActivityLog : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActivityLog& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(TriggerObject, triggerObject_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ActivityLog& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(TriggerObject, triggerObject_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ActivityLog() = default ;
      ActivityLog(const ActivityLog &) = default ;
      ActivityLog(ActivityLog &&) = default ;
      ActivityLog(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActivityLog() = default ;
      ActivityLog& operator=(const ActivityLog &) = default ;
      ActivityLog& operator=(ActivityLog &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->domainName_ == nullptr && this->ruleName_ == nullptr && this->timeStamp_ == nullptr && this->triggerObject_ == nullptr && this->ttl_ == nullptr
        && this->value_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ActivityLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline ActivityLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ActivityLog& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline ActivityLog& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // triggerObject Field Functions 
      bool hasTriggerObject() const { return this->triggerObject_ != nullptr;};
      void deleteTriggerObject() { this->triggerObject_ = nullptr;};
      inline string getTriggerObject() const { DARABONBA_PTR_GET_DEFAULT(triggerObject_, "") };
      inline ActivityLog& setTriggerObject(string triggerObject) { DARABONBA_PTR_SET_VALUE(triggerObject_, triggerObject) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
      inline ActivityLog& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ActivityLog& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The action that was triggered.
      shared_ptr<string> action_ {};
      // The accelerated domain name whose ICP filing status you want to update.
      shared_ptr<string> domainName_ {};
      // The name of the rule that was triggered.
      shared_ptr<string> ruleName_ {};
      // The timestamp of the data returned.
      shared_ptr<string> timeStamp_ {};
      // The object that triggered the blocking event.
      shared_ptr<string> triggerObject_ {};
      // The period of time during which rate limiting remains effective.
      shared_ptr<int64_t> ttl_ {};
      // The value of the trigger for rate limiting.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->activityLog_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // activityLog Field Functions 
    bool hasActivityLog() const { return this->activityLog_ != nullptr;};
    void deleteActivityLog() { this->activityLog_ = nullptr;};
    inline const vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog> & getActivityLog() const { DARABONBA_PTR_GET_CONST(activityLog_, vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog>) };
    inline vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog> getActivityLog() { DARABONBA_PTR_GET(activityLog_, vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog>) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setActivityLog(const vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog> & activityLog) { DARABONBA_PTR_SET_VALUE(activityLog_, activityLog) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setActivityLog(vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog> && activityLog) { DARABONBA_PTR_SET_RVALUE(activityLog_, activityLog) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeDcdnDomainCcActivityLogResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The log data of the event that triggered rate limiting.
    shared_ptr<vector<DescribeDcdnDomainCcActivityLogResponseBody::ActivityLog>> activityLog_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageIndex_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
