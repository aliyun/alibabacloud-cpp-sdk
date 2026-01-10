// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrivateEnable, privateEnable_);
      DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_TO_JSON(ProtocolPort, protocolPort_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(PublicEnable, publicEnable_);
      DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateEnable, privateEnable_);
      DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_FROM_JSON(ProtocolPort, protocolPort_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(PublicEnable, publicEnable_);
      DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProxyResponseBody() = default ;
    GetProxyResponseBody(const GetProxyResponseBody &) = default ;
    GetProxyResponseBody(GetProxyResponseBody &&) = default ;
    GetProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProxyResponseBody() = default ;
    GetProxyResponseBody& operator=(const GetProxyResponseBody &) = default ;
    GetProxyResponseBody& operator=(GetProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpsPort_ == nullptr && this->instanceId_ == nullptr
        && this->privateEnable_ == nullptr && this->privateHost_ == nullptr && this->protocolPort_ == nullptr && this->protocolType_ == nullptr && this->proxyId_ == nullptr
        && this->publicEnable_ == nullptr && this->publicHost_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline GetProxyResponseBody& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetProxyResponseBody& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetProxyResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetProxyResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t getHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline GetProxyResponseBody& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetProxyResponseBody& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privateEnable Field Functions 
    bool hasPrivateEnable() const { return this->privateEnable_ != nullptr;};
    void deletePrivateEnable() { this->privateEnable_ = nullptr;};
    inline bool getPrivateEnable() const { DARABONBA_PTR_GET_DEFAULT(privateEnable_, false) };
    inline GetProxyResponseBody& setPrivateEnable(bool privateEnable) { DARABONBA_PTR_SET_VALUE(privateEnable_, privateEnable) };


    // privateHost Field Functions 
    bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
    void deletePrivateHost() { this->privateHost_ = nullptr;};
    inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
    inline GetProxyResponseBody& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


    // protocolPort Field Functions 
    bool hasProtocolPort() const { return this->protocolPort_ != nullptr;};
    void deleteProtocolPort() { this->protocolPort_ = nullptr;};
    inline int32_t getProtocolPort() const { DARABONBA_PTR_GET_DEFAULT(protocolPort_, 0) };
    inline GetProxyResponseBody& setProtocolPort(int32_t protocolPort) { DARABONBA_PTR_SET_VALUE(protocolPort_, protocolPort) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline GetProxyResponseBody& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline GetProxyResponseBody& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // publicEnable Field Functions 
    bool hasPublicEnable() const { return this->publicEnable_ != nullptr;};
    void deletePublicEnable() { this->publicEnable_ = nullptr;};
    inline bool getPublicEnable() const { DARABONBA_PTR_GET_DEFAULT(publicEnable_, false) };
    inline GetProxyResponseBody& setPublicEnable(bool publicEnable) { DARABONBA_PTR_SET_VALUE(publicEnable_, publicEnable) };


    // publicHost Field Functions 
    bool hasPublicHost() const { return this->publicHost_ != nullptr;};
    void deletePublicHost() { this->publicHost_ = nullptr;};
    inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
    inline GetProxyResponseBody& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetProxyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProxyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the user who enabled the secure access proxy feature.
    shared_ptr<int64_t> creatorId_ {};
    // The nickname of the user who enabled the secure access proxy feature.
    shared_ptr<string> creatorName_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The port number used by the HTTPS protocol.
    shared_ptr<int32_t> httpsPort_ {};
    // The ID of the instance.
    shared_ptr<int64_t> instanceId_ {};
    // Indicates whether the internal endpoint was enabled. Default value: **true**.
    shared_ptr<bool> privateEnable_ {};
    // The internal endpoint.
    shared_ptr<string> privateHost_ {};
    // The port number used by the protocol.
    shared_ptr<int32_t> protocolPort_ {};
    // The protocol type of the database. Example: MYSQL.
    shared_ptr<string> protocolType_ {};
    // The ID of the secure access proxy.
    shared_ptr<int64_t> proxyId_ {};
    // Indicates whether the public endpoint was enabled. Valid values:
    // 
    // *   **true**: The public endpoint was enabled.
    // *   **false**: The public endpoint was disabled.
    shared_ptr<bool> publicEnable_ {};
    // The public endpoint. A public endpoint is returned no matter whether the public endpoint is enabled or disabled.
    // 
    // > 
    // 
    // *   If the value of the PublicEnable parameter is **true**, a valid public endpoint that can be resolved by using Alibaba Cloud DNS is returned.
    // 
    // *   If the value of the PublicEnable parameter is **false**, an invalid public endpoint that cannot be resolved by using Alibaba Cloud DNS is returned.
    shared_ptr<string> publicHost_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
