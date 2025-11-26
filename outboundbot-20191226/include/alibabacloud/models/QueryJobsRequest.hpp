// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeAlignment, timeAlignment_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeAlignment, timeAlignment_);
    };
    QueryJobsRequest() = default ;
    QueryJobsRequest(const QueryJobsRequest &) = default ;
    QueryJobsRequest(QueryJobsRequest &&) = default ;
    QueryJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsRequest() = default ;
    QueryJobsRequest& operator=(const QueryJobsRequest &) = default ;
    QueryJobsRequest& operator=(QueryJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactName_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->phoneNumber_ == nullptr && return this->scenarioId_ == nullptr && return this->startTime_ == nullptr && return this->timeAlignment_ == nullptr; };
    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline QueryJobsRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryJobsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline QueryJobsRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline QueryJobsRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline string scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
    inline QueryJobsRequest& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryJobsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeAlignment Field Functions 
    bool hasTimeAlignment() const { return this->timeAlignment_ != nullptr;};
    void deleteTimeAlignment() { this->timeAlignment_ = nullptr;};
    inline string timeAlignment() const { DARABONBA_PTR_GET_DEFAULT(timeAlignment_, "") };
    inline QueryJobsRequest& setTimeAlignment(string timeAlignment) { DARABONBA_PTR_SET_VALUE(timeAlignment_, timeAlignment) };


  protected:
    std::shared_ptr<string> contactName_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> phoneNumber_ = nullptr;
    std::shared_ptr<string> scenarioId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> timeAlignment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
