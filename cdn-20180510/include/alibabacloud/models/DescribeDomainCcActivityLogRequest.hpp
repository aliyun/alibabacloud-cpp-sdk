// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCACTIVITYLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCCACTIVITYLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCcActivityLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCcActivityLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TriggerObject, triggerObject_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCcActivityLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TriggerObject, triggerObject_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainCcActivityLogRequest() = default ;
    DescribeDomainCcActivityLogRequest(const DescribeDomainCcActivityLogRequest &) = default ;
    DescribeDomainCcActivityLogRequest(DescribeDomainCcActivityLogRequest &&) = default ;
    DescribeDomainCcActivityLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCcActivityLogRequest() = default ;
    DescribeDomainCcActivityLogRequest& operator=(const DescribeDomainCcActivityLogRequest &) = default ;
    DescribeDomainCcActivityLogRequest& operator=(DescribeDomainCcActivityLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->endTime_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->ruleName_ == nullptr && return this->startTime_ == nullptr
        && return this->triggerObject_ == nullptr && return this->value_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainCcActivityLogRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainCcActivityLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainCcActivityLogRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainCcActivityLogRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeDomainCcActivityLogRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainCcActivityLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // triggerObject Field Functions 
    bool hasTriggerObject() const { return this->triggerObject_ != nullptr;};
    void deleteTriggerObject() { this->triggerObject_ = nullptr;};
    inline string triggerObject() const { DARABONBA_PTR_GET_DEFAULT(triggerObject_, "") };
    inline DescribeDomainCcActivityLogRequest& setTriggerObject(string triggerObject) { DARABONBA_PTR_SET_VALUE(triggerObject_, triggerObject) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainCcActivityLogRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The accelerated domain name. You can specify multiple domain names and separate them with commas (,).
    // 
    // If you do not specify this parameter, data of all accelerated domain names under your account is queried.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The page number of the page to return. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **30**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // A custom rule name. Valid values:
    // 
    // *   default_normal: rule for the normal mode
    // *   default_attack: rule for the emergency mode
    // 
    // If you leave this parameter empty, events that triggered rate limiting based on all rules are queried.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The minimum time granularity of data collection is 5 minutes.
    // 
    // If you leave this parameter empty, the data collected over the last 24 hours is queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The trigger of rate limiting by which you want to query data.
    // 
    // If you leave this parameter empty, all events that triggered rate limiting are queried.
    std::shared_ptr<string> triggerObject_ = nullptr;
    // The value of the trigger.
    // 
    // If you leave this parameter empty, all events recorded for the trigger are queried.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
