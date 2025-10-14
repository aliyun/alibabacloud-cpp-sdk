// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTALERTCONFIGTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMONITORINGAGENTPROCESSREQUESTALERTCONFIGTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList() = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList(const CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList &) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList(CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList &&) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList() = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& operator=(const CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList &) = default ;
    CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& operator=(CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->id_ == nullptr && return this->jsonParams_ == nullptr && return this->level_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonParams Field Functions 
    bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
    void deleteJsonParams() { this->jsonParams_ = nullptr;};
    inline string jsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateGroupMonitoringAgentProcessRequestAlertConfigTargetList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the resource.
    // 
    // For more information about how to query the ARN of a resource, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
    // 
    // Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. Fields:
    // 
    // *   {Service name abbreviation}: the abbreviation of the service name. Set the value to Simple Message Queue (formerly MNS) (SMQ).
    // 
    // *   {userId}: the ID of the Alibaba Cloud account.
    // 
    // *   {regionId}: the region ID of the SMQ queue or topic.
    // 
    // *   {Resource type}: the type of the resource that triggers the alert. Valid values:
    // 
    //     *   **queues**
    //     *   **topics**
    // 
    // *   {Resource name}: the resource name.
    // 
    //     *   If the resource type is **queues**, the resource name is the queue name.
    //     *   If the resource type is **topics**, the resource name is the topic name.
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the resource for which alerts are triggered.
    // 
    // For more information about how to obtain the ID of a resource for which alerts are triggered, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
    std::shared_ptr<string> id_ = nullptr;
    // The parameters of the alert callback. The parameters are in the JSON format.
    std::shared_ptr<string> jsonParams_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   INFO
    // *   WARN
    // *   CRITICAL
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
