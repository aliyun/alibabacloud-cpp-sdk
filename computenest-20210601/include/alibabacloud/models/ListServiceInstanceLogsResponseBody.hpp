// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceInstancesLogs, serviceInstancesLogs_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstancesLogs, serviceInstancesLogs_);
    };
    ListServiceInstanceLogsResponseBody() = default ;
    ListServiceInstanceLogsResponseBody(const ListServiceInstanceLogsResponseBody &) = default ;
    ListServiceInstanceLogsResponseBody(ListServiceInstanceLogsResponseBody &&) = default ;
    ListServiceInstanceLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceLogsResponseBody() = default ;
    ListServiceInstanceLogsResponseBody& operator=(const ListServiceInstanceLogsResponseBody &) = default ;
    ListServiceInstanceLogsResponseBody& operator=(ListServiceInstanceLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceInstancesLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInstancesLogs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ServiceInstancesLogs& obj) { 
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
      ServiceInstancesLogs() = default ;
      ServiceInstancesLogs(const ServiceInstancesLogs &) = default ;
      ServiceInstancesLogs(ServiceInstancesLogs &&) = default ;
      ServiceInstancesLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInstancesLogs() = default ;
      ServiceInstancesLogs& operator=(const ServiceInstancesLogs &) = default ;
      ServiceInstancesLogs& operator=(ServiceInstancesLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compliancePackType_ == nullptr
        && this->complianceRuleName_ == nullptr && this->content_ == nullptr && this->logType_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->timestamp_ == nullptr; };
      // compliancePackType Field Functions 
      bool hasCompliancePackType() const { return this->compliancePackType_ != nullptr;};
      void deleteCompliancePackType() { this->compliancePackType_ = nullptr;};
      inline string getCompliancePackType() const { DARABONBA_PTR_GET_DEFAULT(compliancePackType_, "") };
      inline ServiceInstancesLogs& setCompliancePackType(string compliancePackType) { DARABONBA_PTR_SET_VALUE(compliancePackType_, compliancePackType) };


      // complianceRuleName Field Functions 
      bool hasComplianceRuleName() const { return this->complianceRuleName_ != nullptr;};
      void deleteComplianceRuleName() { this->complianceRuleName_ = nullptr;};
      inline string getComplianceRuleName() const { DARABONBA_PTR_GET_DEFAULT(complianceRuleName_, "") };
      inline ServiceInstancesLogs& setComplianceRuleName(string complianceRuleName) { DARABONBA_PTR_SET_VALUE(complianceRuleName_, complianceRuleName) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ServiceInstancesLogs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
      inline ServiceInstancesLogs& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ServiceInstancesLogs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ServiceInstancesLogs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ServiceInstancesLogs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ServiceInstancesLogs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline ServiceInstancesLogs& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // Compliance package risk types. For example, data security checks within a VPC, such as VpcDataRisk
      shared_ptr<string> compliancePackType_ {};
      // Specific risk rule names for the compliance package. For example, ECS instance migration out of VPC - ecs-move-out-vpc.
      shared_ptr<string> complianceRuleName_ {};
      // The log content.
      shared_ptr<string> content_ {};
      // The log type. Valid values:
      // 
      // *   serviceInstance: log generated by the service instance.
      // *   resource: log generated by ROS resources.
      shared_ptr<string> logType_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The log source. Valid values:
      // 
      // computeNest : logs of the deployment and upgrade of the service instance.
      // application: logs generated by the application.
      // actionTrail: logs generated by ActionTrail.
      // compliancePack: Logs originating from the compliance package.
      // ros: Logs originating from ROS.
      // meteringData：Logs originating from the pay-as-you-go model.
      shared_ptr<string> source_ {};
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
      shared_ptr<string> status_ {};
      // The timestamp of the service instance log.
      shared_ptr<string> timestamp_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serviceInstancesLogs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceLogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceLogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceInstanceLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceInstancesLogs Field Functions 
    bool hasServiceInstancesLogs() const { return this->serviceInstancesLogs_ != nullptr;};
    void deleteServiceInstancesLogs() { this->serviceInstancesLogs_ = nullptr;};
    inline const vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs> & getServiceInstancesLogs() const { DARABONBA_PTR_GET_CONST(serviceInstancesLogs_, vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs>) };
    inline vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs> getServiceInstancesLogs() { DARABONBA_PTR_GET(serviceInstancesLogs_, vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs>) };
    inline ListServiceInstanceLogsResponseBody& setServiceInstancesLogs(const vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs> & serviceInstancesLogs) { DARABONBA_PTR_SET_VALUE(serviceInstancesLogs_, serviceInstancesLogs) };
    inline ListServiceInstanceLogsResponseBody& setServiceInstancesLogs(vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs> && serviceInstancesLogs) { DARABONBA_PTR_SET_RVALUE(serviceInstancesLogs_, serviceInstancesLogs) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The logs of the service instance.
    shared_ptr<vector<ListServiceInstanceLogsResponseBody::ServiceInstancesLogs>> serviceInstancesLogs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
