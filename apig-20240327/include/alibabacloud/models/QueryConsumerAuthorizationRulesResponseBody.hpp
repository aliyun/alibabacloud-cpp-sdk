// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONSUMERAUTHORIZATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiOperationInfo.hpp>
#include <alibabacloud/models/HttpRoute.hpp>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
#include <alibabacloud/models/ConsumerInfo.hpp>
#include <alibabacloud/models/EnvironmentInfo.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class QueryConsumerAuthorizationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConsumerAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConsumerAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryConsumerAuthorizationRulesResponseBody() = default ;
    QueryConsumerAuthorizationRulesResponseBody(const QueryConsumerAuthorizationRulesResponseBody &) = default ;
    QueryConsumerAuthorizationRulesResponseBody(QueryConsumerAuthorizationRulesResponseBody &&) = default ;
    QueryConsumerAuthorizationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConsumerAuthorizationRulesResponseBody() = default ;
    QueryConsumerAuthorizationRulesResponseBody& operator=(const QueryConsumerAuthorizationRulesResponseBody &) = default ;
    QueryConsumerAuthorizationRulesResponseBody& operator=(QueryConsumerAuthorizationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(apiInfo, apiInfo_);
          DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
          DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
          DARABONBA_PTR_TO_JSON(consumerInfo, consumerInfo_);
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
          DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
          DARABONBA_PTR_TO_JSON(expireStatus, expireStatus_);
          DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
          DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceInfo, resourceInfo_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(apiInfo, apiInfo_);
          DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
          DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
          DARABONBA_PTR_FROM_JSON(consumerInfo, consumerInfo_);
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
          DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
          DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
          DARABONBA_PTR_FROM_JSON(expireStatus, expireStatus_);
          DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
          DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceInfo, resourceInfo_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(operationInfo, operationInfo_);
            DARABONBA_PTR_TO_JSON(route, route_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(operationInfo, operationInfo_);
            DARABONBA_PTR_FROM_JSON(route, route_);
          };
          ResourceInfo() = default ;
          ResourceInfo(const ResourceInfo &) = default ;
          ResourceInfo(ResourceInfo &&) = default ;
          ResourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceInfo() = default ;
          ResourceInfo& operator=(const ResourceInfo &) = default ;
          ResourceInfo& operator=(ResourceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operationInfo_ == nullptr
        && this->route_ == nullptr; };
          // operationInfo Field Functions 
          bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
          void deleteOperationInfo() { this->operationInfo_ = nullptr;};
          inline const HttpApiOperationInfo & getOperationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, HttpApiOperationInfo) };
          inline HttpApiOperationInfo getOperationInfo() { DARABONBA_PTR_GET(operationInfo_, HttpApiOperationInfo) };
          inline ResourceInfo& setOperationInfo(const HttpApiOperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
          inline ResourceInfo& setOperationInfo(HttpApiOperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


          // route Field Functions 
          bool hasRoute() const { return this->route_ != nullptr;};
          void deleteRoute() { this->route_ = nullptr;};
          inline const HttpRoute & getRoute() const { DARABONBA_PTR_GET_CONST(route_, HttpRoute) };
          inline HttpRoute getRoute() { DARABONBA_PTR_GET(route_, HttpRoute) };
          inline ResourceInfo& setRoute(const HttpRoute & route) { DARABONBA_PTR_SET_VALUE(route_, route) };
          inline ResourceInfo& setRoute(HttpRoute && route) { DARABONBA_PTR_SET_RVALUE(route_, route) };


        protected:
          // The operation information.
          shared_ptr<HttpApiOperationInfo> operationInfo_ {};
          // The route.
          shared_ptr<HttpRoute> route_ {};
        };

        virtual bool empty() const override { return this->apiInfo_ == nullptr
        && this->consumerAuthorizationRuleId_ == nullptr && this->consumerId_ == nullptr && this->consumerInfo_ == nullptr && this->createTimestamp_ == nullptr && this->deployStatus_ == nullptr
        && this->environmentInfo_ == nullptr && this->expireMode_ == nullptr && this->expireStatus_ == nullptr && this->expireTimestamp_ == nullptr && this->gatewayInfo_ == nullptr
        && this->resourceId_ == nullptr && this->resourceInfo_ == nullptr && this->resourceType_ == nullptr && this->updateTimestamp_ == nullptr; };
        // apiInfo Field Functions 
        bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
        void deleteApiInfo() { this->apiInfo_ = nullptr;};
        inline const HttpApiApiInfo & getApiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, HttpApiApiInfo) };
        inline HttpApiApiInfo getApiInfo() { DARABONBA_PTR_GET(apiInfo_, HttpApiApiInfo) };
        inline Items& setApiInfo(const HttpApiApiInfo & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
        inline Items& setApiInfo(HttpApiApiInfo && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


        // consumerAuthorizationRuleId Field Functions 
        bool hasConsumerAuthorizationRuleId() const { return this->consumerAuthorizationRuleId_ != nullptr;};
        void deleteConsumerAuthorizationRuleId() { this->consumerAuthorizationRuleId_ = nullptr;};
        inline string getConsumerAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleId_, "") };
        inline Items& setConsumerAuthorizationRuleId(string consumerAuthorizationRuleId) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleId_, consumerAuthorizationRuleId) };


        // consumerId Field Functions 
        bool hasConsumerId() const { return this->consumerId_ != nullptr;};
        void deleteConsumerId() { this->consumerId_ = nullptr;};
        inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
        inline Items& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


        // consumerInfo Field Functions 
        bool hasConsumerInfo() const { return this->consumerInfo_ != nullptr;};
        void deleteConsumerInfo() { this->consumerInfo_ = nullptr;};
        inline const ConsumerInfo & getConsumerInfo() const { DARABONBA_PTR_GET_CONST(consumerInfo_, ConsumerInfo) };
        inline ConsumerInfo getConsumerInfo() { DARABONBA_PTR_GET(consumerInfo_, ConsumerInfo) };
        inline Items& setConsumerInfo(const ConsumerInfo & consumerInfo) { DARABONBA_PTR_SET_VALUE(consumerInfo_, consumerInfo) };
        inline Items& setConsumerInfo(ConsumerInfo && consumerInfo) { DARABONBA_PTR_SET_RVALUE(consumerInfo_, consumerInfo) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // deployStatus Field Functions 
        bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
        void deleteDeployStatus() { this->deployStatus_ = nullptr;};
        inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
        inline Items& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


        // environmentInfo Field Functions 
        bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
        void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
        inline const EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, EnvironmentInfo) };
        inline EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, EnvironmentInfo) };
        inline Items& setEnvironmentInfo(const EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
        inline Items& setEnvironmentInfo(EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


        // expireMode Field Functions 
        bool hasExpireMode() const { return this->expireMode_ != nullptr;};
        void deleteExpireMode() { this->expireMode_ = nullptr;};
        inline string getExpireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
        inline Items& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


        // expireStatus Field Functions 
        bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
        void deleteExpireStatus() { this->expireStatus_ = nullptr;};
        inline string getExpireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
        inline Items& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


        // expireTimestamp Field Functions 
        bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
        void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
        inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
        inline Items& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


        // gatewayInfo Field Functions 
        bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
        void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
        inline const GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
        inline GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
        inline Items& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
        inline Items& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Items& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceInfo Field Functions 
        bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
        void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
        inline const Items::ResourceInfo & getResourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Items::ResourceInfo) };
        inline Items::ResourceInfo getResourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Items::ResourceInfo) };
        inline Items& setResourceInfo(const Items::ResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
        inline Items& setResourceInfo(Items::ResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Items& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      protected:
        // The API details.
        shared_ptr<HttpApiApiInfo> apiInfo_ {};
        // The rule ID.
        shared_ptr<string> consumerAuthorizationRuleId_ {};
        // The consumer ID.
        shared_ptr<string> consumerId_ {};
        // The consumer information.
        shared_ptr<ConsumerInfo> consumerInfo_ {};
        // The creation timestamp. Unit: milliseconds.
        shared_ptr<int64_t> createTimestamp_ {};
        // The deployment status of the API in the current environment.
        shared_ptr<string> deployStatus_ {};
        // The environment information.
        shared_ptr<EnvironmentInfo> environmentInfo_ {};
        // The expiry mode. Valid values: LongTerm and ShortTerm.
        shared_ptr<string> expireMode_ {};
        // The rule status.
        shared_ptr<string> expireStatus_ {};
        // The time when the rule expires.
        shared_ptr<int64_t> expireTimestamp_ {};
        // The instance information.
        shared_ptr<GatewayInfo> gatewayInfo_ {};
        // The resource IDs.
        shared_ptr<string> resourceId_ {};
        // The resource information.
        shared_ptr<Items::ResourceInfo> resourceInfo_ {};
        // The resource type.
        shared_ptr<string> resourceType_ {};
        // The update timestamp. Unit: milliseconds.
        shared_ptr<int64_t> updateTimestamp_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline string getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
      inline Data& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The rules.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<string> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryConsumerAuthorizationRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryConsumerAuthorizationRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryConsumerAuthorizationRulesResponseBody::Data) };
    inline QueryConsumerAuthorizationRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryConsumerAuthorizationRulesResponseBody::Data) };
    inline QueryConsumerAuthorizationRulesResponseBody& setData(const QueryConsumerAuthorizationRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryConsumerAuthorizationRulesResponseBody& setData(QueryConsumerAuthorizationRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryConsumerAuthorizationRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConsumerAuthorizationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<QueryConsumerAuthorizationRulesResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
