// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHEALTHCHECKTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListHealthCheckTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHealthCheckTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckTemplates, healthCheckTemplates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHealthCheckTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplates, healthCheckTemplates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHealthCheckTemplatesResponseBody() = default ;
    ListHealthCheckTemplatesResponseBody(const ListHealthCheckTemplatesResponseBody &) = default ;
    ListHealthCheckTemplatesResponseBody(ListHealthCheckTemplatesResponseBody &&) = default ;
    ListHealthCheckTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHealthCheckTemplatesResponseBody() = default ;
    ListHealthCheckTemplatesResponseBody& operator=(const ListHealthCheckTemplatesResponseBody &) = default ;
    ListHealthCheckTemplatesResponseBody& operator=(ListHealthCheckTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthCheckTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthCheckTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(HealthCheckCodes, healthCheckCodes_);
        DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
        DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
        DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
        DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_TO_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
        DARABONBA_PTR_TO_JSON(HealthCheckTemplateName, healthCheckTemplateName_);
        DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
        DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      };
      friend void from_json(const Darabonba::Json& j, HealthCheckTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(HealthCheckCodes, healthCheckCodes_);
        DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
        DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
        DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_FROM_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
        DARABONBA_PTR_FROM_JSON(HealthCheckTemplateName, healthCheckTemplateName_);
        DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
        DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      };
      HealthCheckTemplates() = default ;
      HealthCheckTemplates(const HealthCheckTemplates &) = default ;
      HealthCheckTemplates(HealthCheckTemplates &&) = default ;
      HealthCheckTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthCheckTemplates() = default ;
      HealthCheckTemplates& operator=(const HealthCheckTemplates &) = default ;
      HealthCheckTemplates& operator=(HealthCheckTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key can be up to 128 characters in length, and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
        shared_ptr<string> key_ {};
        // The tag value. The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->healthCheckCodes_ == nullptr
        && this->healthCheckConnectPort_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr
        && this->healthCheckPath_ == nullptr && this->healthCheckProtocol_ == nullptr && this->healthCheckTemplateId_ == nullptr && this->healthCheckTemplateName_ == nullptr && this->healthCheckTimeout_ == nullptr
        && this->healthyThreshold_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->unhealthyThreshold_ == nullptr; };
      // healthCheckCodes Field Functions 
      bool hasHealthCheckCodes() const { return this->healthCheckCodes_ != nullptr;};
      void deleteHealthCheckCodes() { this->healthCheckCodes_ = nullptr;};
      inline const vector<string> & getHealthCheckCodes() const { DARABONBA_PTR_GET_CONST(healthCheckCodes_, vector<string>) };
      inline vector<string> getHealthCheckCodes() { DARABONBA_PTR_GET(healthCheckCodes_, vector<string>) };
      inline HealthCheckTemplates& setHealthCheckCodes(const vector<string> & healthCheckCodes) { DARABONBA_PTR_SET_VALUE(healthCheckCodes_, healthCheckCodes) };
      inline HealthCheckTemplates& setHealthCheckCodes(vector<string> && healthCheckCodes) { DARABONBA_PTR_SET_RVALUE(healthCheckCodes_, healthCheckCodes) };


      // healthCheckConnectPort Field Functions 
      bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
      void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
      inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
      inline HealthCheckTemplates& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


      // healthCheckHost Field Functions 
      bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
      void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
      inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
      inline HealthCheckTemplates& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


      // healthCheckHttpVersion Field Functions 
      bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
      void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
      inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
      inline HealthCheckTemplates& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


      // healthCheckInterval Field Functions 
      bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
      void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
      inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
      inline HealthCheckTemplates& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


      // healthCheckMethod Field Functions 
      bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
      void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
      inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
      inline HealthCheckTemplates& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


      // healthCheckPath Field Functions 
      bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
      void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
      inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
      inline HealthCheckTemplates& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


      // healthCheckProtocol Field Functions 
      bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
      void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
      inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
      inline HealthCheckTemplates& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


      // healthCheckTemplateId Field Functions 
      bool hasHealthCheckTemplateId() const { return this->healthCheckTemplateId_ != nullptr;};
      void deleteHealthCheckTemplateId() { this->healthCheckTemplateId_ = nullptr;};
      inline string getHealthCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateId_, "") };
      inline HealthCheckTemplates& setHealthCheckTemplateId(string healthCheckTemplateId) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateId_, healthCheckTemplateId) };


      // healthCheckTemplateName Field Functions 
      bool hasHealthCheckTemplateName() const { return this->healthCheckTemplateName_ != nullptr;};
      void deleteHealthCheckTemplateName() { this->healthCheckTemplateName_ = nullptr;};
      inline string getHealthCheckTemplateName() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateName_, "") };
      inline HealthCheckTemplates& setHealthCheckTemplateName(string healthCheckTemplateName) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateName_, healthCheckTemplateName) };


      // healthCheckTimeout Field Functions 
      bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
      void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
      inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
      inline HealthCheckTemplates& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


      // healthyThreshold Field Functions 
      bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
      void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
      inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
      inline HealthCheckTemplates& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline HealthCheckTemplates& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<HealthCheckTemplates::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<HealthCheckTemplates::Tags>) };
      inline vector<HealthCheckTemplates::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<HealthCheckTemplates::Tags>) };
      inline HealthCheckTemplates& setTags(const vector<HealthCheckTemplates::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline HealthCheckTemplates& setTags(vector<HealthCheckTemplates::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // unhealthyThreshold Field Functions 
      bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
      void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
      inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
      inline HealthCheckTemplates& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    protected:
      // The HTTP status codes that indicate healthy backend servers.
      shared_ptr<vector<string>> healthCheckCodes_ {};
      // The port that is used for health checks.
      // 
      // Valid values: \\*\\* 0 to 65535\\*\\*.
      // 
      // The default value is **0**, which specifies that the port of a backend server is used for health checks.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // The domain name that is used for health checks. Valid values:
      // 
      // *   **$SERVER_IP** (default): the private IP address of a backend server. If an IP address is specified, or this parameter is not specified, the ALB instance uses the private IP address of each backend server as the domain name for health checks.
      // *   **domain**: The domain name must be 1 to 80 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
      // 
      // >  This parameter takes effect only if you set `HealthCheckProtocol` to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckHost_ {};
      // The HTTP version for health checks.
      // 
      // Valid values: **HTTP 1.0** and **HTTP 1.1**.
      // 
      // Default value: **HTTP 1.1**.
      // 
      // >  This parameter takes effect only if you set `HealthCheckProtocol` to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckHttpVersion_ {};
      // The interval at which health checks are performed. Unit: seconds. Valid values: **1 to 50**. Default value: **2**.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The HTTP method that is used for health checks. Valid values:
      // 
      // *   **HEAD** (default): By default, HTTP and HTTPS health checks use the HEAD method.
      // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
      // *   **POST**: gRPC health checks use the POST method by default.
      // 
      // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
      shared_ptr<string> healthCheckMethod_ {};
      // The URL path that you want to use for health checks.
      // 
      // The URL must be 1 to 80 characters in length, and can contain letters, digits, the following special characters: - / . % ? # &, and the following extended characters: `_ ; ~ ! ( ) * [ ] @ $ ^ : \\" , +`. The URL must start with a forward slash (/).
      shared_ptr<string> healthCheckPath_ {};
      // The protocol that is used for health checks. Valid values:
      // 
      // *   **HTTP** (default): The ALB instance sends HEAD or GET requests, which simulate browser requests, to check whether the backend server is healthy.
      // *   **HTTPS**: HTTPS health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers. HTTPS provides higher security because HTTPS supports data encryption.
      // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
      // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
      shared_ptr<string> healthCheckProtocol_ {};
      // The ID of the health check template.
      shared_ptr<string> healthCheckTemplateId_ {};
      // The name of the health check template.
      // 
      // The name must be 2 to 128 character characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
      shared_ptr<string> healthCheckTemplateName_ {};
      // The timeout period of a health check response. If a backend Elastic Compute Service (ECS) instance does not respond within the specified timeout period, the ECS instance fails to pass the health check.
      // 
      // Valid values: **1 to 300**. Unit: seconds.
      // 
      // Default value: **5**.
      shared_ptr<int32_t> healthCheckTimeout_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status changes from **fail** to **success**.
      // 
      // Valid values: **2 to 10**.
      // 
      // Default value: **3**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The tags.
      shared_ptr<vector<HealthCheckTemplates::Tags>> tags_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status changes from **success** to **fail**.
      // 
      // Valid values: **2 to 10**.
      // 
      // Default value: **3**.
      shared_ptr<int32_t> unhealthyThreshold_ {};
    };

    virtual bool empty() const override { return this->healthCheckTemplates_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // healthCheckTemplates Field Functions 
    bool hasHealthCheckTemplates() const { return this->healthCheckTemplates_ != nullptr;};
    void deleteHealthCheckTemplates() { this->healthCheckTemplates_ = nullptr;};
    inline const vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates> & getHealthCheckTemplates() const { DARABONBA_PTR_GET_CONST(healthCheckTemplates_, vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates>) };
    inline vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates> getHealthCheckTemplates() { DARABONBA_PTR_GET(healthCheckTemplates_, vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates>) };
    inline ListHealthCheckTemplatesResponseBody& setHealthCheckTemplates(const vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates> & healthCheckTemplates) { DARABONBA_PTR_SET_VALUE(healthCheckTemplates_, healthCheckTemplates) };
    inline ListHealthCheckTemplatesResponseBody& setHealthCheckTemplates(vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates> && healthCheckTemplates) { DARABONBA_PTR_SET_RVALUE(healthCheckTemplates_, healthCheckTemplates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHealthCheckTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHealthCheckTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHealthCheckTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHealthCheckTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The health check templates.
    shared_ptr<vector<ListHealthCheckTemplatesResponseBody::HealthCheckTemplates>> healthCheckTemplates_ {};
    // The number of entries returned per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
