// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERAUTHORIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERAUTHORIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiApiInfo.hpp>
#include <alibabacloud/models/EnvironmentInfo.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerAuthorizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiInfo, apiInfo_);
      DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
      DARABONBA_PTR_TO_JSON(expireStatus, expireStatus_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiInfo, apiInfo_);
      DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleId, consumerAuthorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
      DARABONBA_PTR_FROM_JSON(expireStatus, expireStatus_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
    };
    GetConsumerAuthorizationRuleResponseBody() = default ;
    GetConsumerAuthorizationRuleResponseBody(const GetConsumerAuthorizationRuleResponseBody &) = default ;
    GetConsumerAuthorizationRuleResponseBody(GetConsumerAuthorizationRuleResponseBody &&) = default ;
    GetConsumerAuthorizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerAuthorizationRuleResponseBody() = default ;
    GetConsumerAuthorizationRuleResponseBody& operator=(const GetConsumerAuthorizationRuleResponseBody &) = default ;
    GetConsumerAuthorizationRuleResponseBody& operator=(GetConsumerAuthorizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfo_ == nullptr
        && return this->consumerAuthorizationRuleId_ == nullptr && return this->consumerId_ == nullptr && return this->createTimestamp_ == nullptr && return this->deployStatus_ == nullptr && return this->environmentInfo_ == nullptr
        && return this->expireMode_ == nullptr && return this->expireStatus_ == nullptr && return this->expireTimestamp_ == nullptr && return this->gatewayInfo_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceType_ == nullptr && return this->updateTimestamp_ == nullptr; };
    // apiInfo Field Functions 
    bool hasApiInfo() const { return this->apiInfo_ != nullptr;};
    void deleteApiInfo() { this->apiInfo_ = nullptr;};
    inline const HttpApiApiInfo & apiInfo() const { DARABONBA_PTR_GET_CONST(apiInfo_, HttpApiApiInfo) };
    inline HttpApiApiInfo apiInfo() { DARABONBA_PTR_GET(apiInfo_, HttpApiApiInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setApiInfo(const HttpApiApiInfo & apiInfo) { DARABONBA_PTR_SET_VALUE(apiInfo_, apiInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setApiInfo(HttpApiApiInfo && apiInfo) { DARABONBA_PTR_SET_RVALUE(apiInfo_, apiInfo) };


    // consumerAuthorizationRuleId Field Functions 
    bool hasConsumerAuthorizationRuleId() const { return this->consumerAuthorizationRuleId_ != nullptr;};
    void deleteConsumerAuthorizationRuleId() { this->consumerAuthorizationRuleId_ = nullptr;};
    inline string consumerAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(consumerAuthorizationRuleId_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setConsumerAuthorizationRuleId(string consumerAuthorizationRuleId) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleId_, consumerAuthorizationRuleId) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetConsumerAuthorizationRuleResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const EnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, EnvironmentInfo) };
    inline EnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, EnvironmentInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setEnvironmentInfo(const EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setEnvironmentInfo(EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string expireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // expireStatus Field Functions 
    bool hasExpireStatus() const { return this->expireStatus_ != nullptr;};
    void deleteExpireStatus() { this->expireStatus_ = nullptr;};
    inline string expireStatus() const { DARABONBA_PTR_GET_DEFAULT(expireStatus_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setExpireStatus(string expireStatus) { DARABONBA_PTR_SET_VALUE(expireStatus_, expireStatus) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline GetConsumerAuthorizationRuleResponseBody& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline GetConsumerAuthorizationRuleResponseBody& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetConsumerAuthorizationRuleResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline GetConsumerAuthorizationRuleResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The API information.
    std::shared_ptr<HttpApiApiInfo> apiInfo_ = nullptr;
    // Filters the list of operations by a specific consumer authorization rule ID. Only authorized operations are returned in the response.
    std::shared_ptr<string> consumerAuthorizationRuleId_ = nullptr;
    // The consumer ID.
    std::shared_ptr<string> consumerId_ = nullptr;
    // The creation timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The publishing status of the API in the current environment.
    std::shared_ptr<string> deployStatus_ = nullptr;
    // The environment information.
    std::shared_ptr<EnvironmentInfo> environmentInfo_ = nullptr;
    // The expiry mode. Valid values: LongTerm and ShortTerm.
    std::shared_ptr<string> expireMode_ = nullptr;
    // The rule status.
    std::shared_ptr<string> expireStatus_ = nullptr;
    // The expiration time.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The gateway information.
    std::shared_ptr<GatewayInfo> gatewayInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The update timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
