// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ProxyList, proxyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListProxiesResponseBody() = default ;
    ListProxiesResponseBody(const ListProxiesResponseBody &) = default ;
    ListProxiesResponseBody(ListProxiesResponseBody &&) = default ;
    ListProxiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxiesResponseBody() = default ;
    ListProxiesResponseBody& operator=(const ListProxiesResponseBody &) = default ;
    ListProxiesResponseBody& operator=(ListProxiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
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
      };
      friend void from_json(const Darabonba::Json& j, ProxyList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
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
      };
      ProxyList() = default ;
      ProxyList(const ProxyList &) = default ;
      ProxyList(ProxyList &&) = default ;
      ProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyList() = default ;
      ProxyList& operator=(const ProxyList &) = default ;
      ProxyList& operator=(ProxyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorName_ == nullptr && this->httpsPort_ == nullptr && this->instanceId_ == nullptr && this->privateEnable_ == nullptr && this->privateHost_ == nullptr
        && this->protocolPort_ == nullptr && this->protocolType_ == nullptr && this->proxyId_ == nullptr && this->publicEnable_ == nullptr && this->publicHost_ == nullptr
        && this->regionId_ == nullptr; };
      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
      inline ProxyList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline ProxyList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // httpsPort Field Functions 
      bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
      void deleteHttpsPort() { this->httpsPort_ = nullptr;};
      inline int32_t getHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
      inline ProxyList& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline ProxyList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // privateEnable Field Functions 
      bool hasPrivateEnable() const { return this->privateEnable_ != nullptr;};
      void deletePrivateEnable() { this->privateEnable_ = nullptr;};
      inline bool getPrivateEnable() const { DARABONBA_PTR_GET_DEFAULT(privateEnable_, false) };
      inline ProxyList& setPrivateEnable(bool privateEnable) { DARABONBA_PTR_SET_VALUE(privateEnable_, privateEnable) };


      // privateHost Field Functions 
      bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
      void deletePrivateHost() { this->privateHost_ = nullptr;};
      inline string getPrivateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
      inline ProxyList& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


      // protocolPort Field Functions 
      bool hasProtocolPort() const { return this->protocolPort_ != nullptr;};
      void deleteProtocolPort() { this->protocolPort_ = nullptr;};
      inline int32_t getProtocolPort() const { DARABONBA_PTR_GET_DEFAULT(protocolPort_, 0) };
      inline ProxyList& setProtocolPort(int32_t protocolPort) { DARABONBA_PTR_SET_VALUE(protocolPort_, protocolPort) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline ProxyList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // proxyId Field Functions 
      bool hasProxyId() const { return this->proxyId_ != nullptr;};
      void deleteProxyId() { this->proxyId_ = nullptr;};
      inline int64_t getProxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
      inline ProxyList& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


      // publicEnable Field Functions 
      bool hasPublicEnable() const { return this->publicEnable_ != nullptr;};
      void deletePublicEnable() { this->publicEnable_ = nullptr;};
      inline bool getPublicEnable() const { DARABONBA_PTR_GET_DEFAULT(publicEnable_, false) };
      inline ProxyList& setPublicEnable(bool publicEnable) { DARABONBA_PTR_SET_VALUE(publicEnable_, publicEnable) };


      // publicHost Field Functions 
      bool hasPublicHost() const { return this->publicHost_ != nullptr;};
      void deletePublicHost() { this->publicHost_ = nullptr;};
      inline string getPublicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
      inline ProxyList& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ProxyList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The ID of the user who enabled the secure access proxy feature.
      shared_ptr<int64_t> creatorId_ {};
      // The nickname of the user who enabled the secure access proxy feature.
      shared_ptr<string> creatorName_ {};
      // The number of the port that was used by HTTPS clients to connect to the database instance.
      shared_ptr<int32_t> httpsPort_ {};
      // The ID of the instance.
      shared_ptr<int64_t> instanceId_ {};
      // Indicates whether the internal endpoint is enabled. Default value: **true**.
      shared_ptr<bool> privateEnable_ {};
      // The internal endpoint.
      shared_ptr<string> privateHost_ {};
      // The number of the port that is used to connect the database instance.
      shared_ptr<int32_t> protocolPort_ {};
      // The type of the database. Example: MYSQL.
      shared_ptr<string> protocolType_ {};
      // The ID of the secure access proxy.
      shared_ptr<int64_t> proxyId_ {};
      // Indicates whether the public endpoint is enabled. Valid values:
      // 
      // *   **true**: The public endpoint is enabled.
      // *   **false**: The public endpoint is disabled.
      shared_ptr<bool> publicEnable_ {};
      // The public endpoint. A public endpoint is returned no matter whether the public endpoint is enabled or disabled.
      // 
      // > 
      // 
      // *   If the value of the PublicEnable parameter is **true**, a valid public endpoint that can be resolved by using Alibaba Cloud DNS (DNS) is returned.
      // 
      // *   If the value of the PublicEnable parameter is **false**, an invalid public endpoint that cannot be resolved by using DNS is returned.
      shared_ptr<string> publicHost_ {};
      // The ID of the region.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->proxyList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListProxiesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListProxiesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // proxyList Field Functions 
    bool hasProxyList() const { return this->proxyList_ != nullptr;};
    void deleteProxyList() { this->proxyList_ = nullptr;};
    inline const vector<ListProxiesResponseBody::ProxyList> & getProxyList() const { DARABONBA_PTR_GET_CONST(proxyList_, vector<ListProxiesResponseBody::ProxyList>) };
    inline vector<ListProxiesResponseBody::ProxyList> getProxyList() { DARABONBA_PTR_GET(proxyList_, vector<ListProxiesResponseBody::ProxyList>) };
    inline ListProxiesResponseBody& setProxyList(const vector<ListProxiesResponseBody::ProxyList> & proxyList) { DARABONBA_PTR_SET_VALUE(proxyList_, proxyList) };
    inline ListProxiesResponseBody& setProxyList(vector<ListProxiesResponseBody::ProxyList> && proxyList) { DARABONBA_PTR_SET_RVALUE(proxyList_, proxyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProxiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListProxiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The proxies that are generated by the secure access proxy feature.
    shared_ptr<vector<ListProxiesResponseBody::ProxyList>> proxyList_ {};
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
