// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODYSERVICEINSTANCESLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODYSERVICEINSTANCESLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceLogsResponseBodyServiceInstancesLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceLogsResponseBodyServiceInstancesLogs& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackType, compliancePackType_);
      DARABONBA_PTR_TO_JSON(ComplianceRuleName, complianceRuleName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceLogsResponseBodyServiceInstancesLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackType, compliancePackType_);
      DARABONBA_PTR_FROM_JSON(ComplianceRuleName, complianceRuleName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs() = default ;
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs(const ListServiceInstanceLogsResponseBodyServiceInstancesLogs &) = default ;
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs(ListServiceInstanceLogsResponseBodyServiceInstancesLogs &&) = default ;
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceLogsResponseBodyServiceInstancesLogs() = default ;
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs& operator=(const ListServiceInstanceLogsResponseBodyServiceInstancesLogs &) = default ;
    ListServiceInstanceLogsResponseBodyServiceInstancesLogs& operator=(ListServiceInstanceLogsResponseBodyServiceInstancesLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compliancePackType_ != nullptr
        && this->complianceRuleName_ != nullptr && this->content_ != nullptr && this->logType_ != nullptr && this->resourceId_ != nullptr && this->resourceType_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->timestamp_ != nullptr; };
    // compliancePackType Field Functions 
    bool hasCompliancePackType() const { return this->compliancePackType_ != nullptr;};
    void deleteCompliancePackType() { this->compliancePackType_ = nullptr;};
    inline string compliancePackType() const { DARABONBA_PTR_GET_DEFAULT(compliancePackType_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setCompliancePackType(string compliancePackType) { DARABONBA_PTR_SET_VALUE(compliancePackType_, compliancePackType) };


    // complianceRuleName Field Functions 
    bool hasComplianceRuleName() const { return this->complianceRuleName_ != nullptr;};
    void deleteComplianceRuleName() { this->complianceRuleName_ = nullptr;};
    inline string complianceRuleName() const { DARABONBA_PTR_GET_DEFAULT(complianceRuleName_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setComplianceRuleName(string complianceRuleName) { DARABONBA_PTR_SET_VALUE(complianceRuleName_, complianceRuleName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListServiceInstanceLogsResponseBodyServiceInstancesLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // Compliance package risk types. For example, data security checks within a VPC, such as VpcDataRisk
    std::shared_ptr<string> compliancePackType_ = nullptr;
    // Specific risk rule names for the compliance package. For example, ECS instance migration out of VPC - ecs-move-out-vpc.
    std::shared_ptr<string> complianceRuleName_ = nullptr;
    // The log content.
    std::shared_ptr<string> content_ = nullptr;
    // The log type. Valid values:
    // 
    // *   serviceInstance: log generated by the service instance.
    // *   resource: log generated by ROS resources.
    std::shared_ptr<string> logType_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The log source. Valid values:
    // 
    // computeNest : logs of the deployment and upgrade of the service instance.
    // application: logs generated by the application.
    // actionTrail: logs generated by ActionTrail.
    // compliancePack: Logs originating from the compliance package.
    // ros: Logs originating from ROS.
    // meteringData：Logs originating from the pay-as-you-go model.
    std::shared_ptr<string> source_ = nullptr;
    // The state of the service instance. Valid values:
    // 
    // *   Creating: The service instance is being created.
    // *   Created: The service instance is created.
    // *   Deploying: The service instance is being deployed.
    // *   Deployed: The service instance is deployed.
    // *   DeployedFailed: The service instance failed to be deployed.
    // *   Expired: The service instance expired.
    // *   ExtendSuccess: The service instance is renewed.
    // *   Upgrading: The service instance is being updated.
    // *   UpgradeSuccess: The service instance is updated.
    std::shared_ptr<string> status_ = nullptr;
    // The timestamp of the service instance log.
    std::shared_ptr<string> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
