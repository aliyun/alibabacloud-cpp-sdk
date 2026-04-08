// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKITEMREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRAFFICCONTROLTASKITEMREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryTrafficControlTaskItemReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTrafficControlTaskItemReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTrafficControlTaskItemReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryTrafficControlTaskItemReportRequest() = default ;
    QueryTrafficControlTaskItemReportRequest(const QueryTrafficControlTaskItemReportRequest &) = default ;
    QueryTrafficControlTaskItemReportRequest(QueryTrafficControlTaskItemReportRequest &&) = default ;
    QueryTrafficControlTaskItemReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTrafficControlTaskItemReportRequest() = default ;
    QueryTrafficControlTaskItemReportRequest& operator=(const QueryTrafficControlTaskItemReportRequest &) = default ;
    QueryTrafficControlTaskItemReportRequest& operator=(QueryTrafficControlTaskItemReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->environment_ == nullptr && this->instanceId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryTrafficControlTaskItemReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline QueryTrafficControlTaskItemReportRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryTrafficControlTaskItemReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryTrafficControlTaskItemReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<string> environment_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
