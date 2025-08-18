// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestNetwork.hpp>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestNodePool.hpp>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestSecurityPolicy.hpp>
#include <alibabacloud/models/ModifyAppInstanceGroupAttributeRequestStoragePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePool_);
      DARABONBA_PTR_TO_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePool_);
      DARABONBA_PTR_FROM_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicy_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicy_);
    };
    ModifyAppInstanceGroupAttributeRequest() = default ;
    ModifyAppInstanceGroupAttributeRequest(const ModifyAppInstanceGroupAttributeRequest &) = default ;
    ModifyAppInstanceGroupAttributeRequest(ModifyAppInstanceGroupAttributeRequest &&) = default ;
    ModifyAppInstanceGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeRequest() = default ;
    ModifyAppInstanceGroupAttributeRequest& operator=(const ModifyAppInstanceGroupAttributeRequest &) = default ;
    ModifyAppInstanceGroupAttributeRequest& operator=(ModifyAppInstanceGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->appInstanceGroupName_ != nullptr && this->network_ != nullptr && this->nodePool_ != nullptr && this->perSessionPerApp_ != nullptr && this->preOpenAppId_ != nullptr
        && this->preOpenMode_ != nullptr && this->productType_ != nullptr && this->securityPolicy_ != nullptr && this->sessionTimeout_ != nullptr && this->storagePolicy_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequestNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, ModifyAppInstanceGroupAttributeRequestNetwork) };
    inline ModifyAppInstanceGroupAttributeRequestNetwork network() { DARABONBA_PTR_GET(network_, ModifyAppInstanceGroupAttributeRequestNetwork) };
    inline ModifyAppInstanceGroupAttributeRequest& setNetwork(const ModifyAppInstanceGroupAttributeRequestNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ModifyAppInstanceGroupAttributeRequest& setNetwork(ModifyAppInstanceGroupAttributeRequestNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // nodePool Field Functions 
    bool hasNodePool() const { return this->nodePool_ != nullptr;};
    void deleteNodePool() { this->nodePool_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequestNodePool & nodePool() const { DARABONBA_PTR_GET_CONST(nodePool_, ModifyAppInstanceGroupAttributeRequestNodePool) };
    inline ModifyAppInstanceGroupAttributeRequestNodePool nodePool() { DARABONBA_PTR_GET(nodePool_, ModifyAppInstanceGroupAttributeRequestNodePool) };
    inline ModifyAppInstanceGroupAttributeRequest& setNodePool(const ModifyAppInstanceGroupAttributeRequestNodePool & nodePool) { DARABONBA_PTR_SET_VALUE(nodePool_, nodePool) };
    inline ModifyAppInstanceGroupAttributeRequest& setNodePool(ModifyAppInstanceGroupAttributeRequestNodePool && nodePool) { DARABONBA_PTR_SET_RVALUE(nodePool_, nodePool) };


    // perSessionPerApp Field Functions 
    bool hasPerSessionPerApp() const { return this->perSessionPerApp_ != nullptr;};
    void deletePerSessionPerApp() { this->perSessionPerApp_ = nullptr;};
    inline bool perSessionPerApp() const { DARABONBA_PTR_GET_DEFAULT(perSessionPerApp_, false) };
    inline ModifyAppInstanceGroupAttributeRequest& setPerSessionPerApp(bool perSessionPerApp) { DARABONBA_PTR_SET_VALUE(perSessionPerApp_, perSessionPerApp) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string preOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // preOpenMode Field Functions 
    bool hasPreOpenMode() const { return this->preOpenMode_ != nullptr;};
    void deletePreOpenMode() { this->preOpenMode_ = nullptr;};
    inline string preOpenMode() const { DARABONBA_PTR_GET_DEFAULT(preOpenMode_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setPreOpenMode(string preOpenMode) { DARABONBA_PTR_SET_VALUE(preOpenMode_, preOpenMode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppInstanceGroupAttributeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // securityPolicy Field Functions 
    bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
    void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequestSecurityPolicy & securityPolicy() const { DARABONBA_PTR_GET_CONST(securityPolicy_, ModifyAppInstanceGroupAttributeRequestSecurityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequestSecurityPolicy securityPolicy() { DARABONBA_PTR_GET(securityPolicy_, ModifyAppInstanceGroupAttributeRequestSecurityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setSecurityPolicy(const ModifyAppInstanceGroupAttributeRequestSecurityPolicy & securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setSecurityPolicy(ModifyAppInstanceGroupAttributeRequestSecurityPolicy && securityPolicy) { DARABONBA_PTR_SET_RVALUE(securityPolicy_, securityPolicy) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline ModifyAppInstanceGroupAttributeRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicy Field Functions 
    bool hasStoragePolicy() const { return this->storagePolicy_ != nullptr;};
    void deleteStoragePolicy() { this->storagePolicy_ = nullptr;};
    inline const ModifyAppInstanceGroupAttributeRequestStoragePolicy & storagePolicy() const { DARABONBA_PTR_GET_CONST(storagePolicy_, ModifyAppInstanceGroupAttributeRequestStoragePolicy) };
    inline ModifyAppInstanceGroupAttributeRequestStoragePolicy storagePolicy() { DARABONBA_PTR_GET(storagePolicy_, ModifyAppInstanceGroupAttributeRequestStoragePolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setStoragePolicy(const ModifyAppInstanceGroupAttributeRequestStoragePolicy & storagePolicy) { DARABONBA_PTR_SET_VALUE(storagePolicy_, storagePolicy) };
    inline ModifyAppInstanceGroupAttributeRequest& setStoragePolicy(ModifyAppInstanceGroupAttributeRequestStoragePolicy && storagePolicy) { DARABONBA_PTR_SET_RVALUE(storagePolicy_, storagePolicy) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The name of the delivery group.
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    // The network settings.
    // 
    // >  If you want to use this parameter, submit a ticket.
    std::shared_ptr<ModifyAppInstanceGroupAttributeRequestNetwork> network_ = nullptr;
    // The information about the resource group.
    std::shared_ptr<ModifyAppInstanceGroupAttributeRequestNodePool> nodePool_ = nullptr;
    // Specifies whether only one application can be opened in a session.
    // 
    // *   After you enable this feature, the system assigns a session to each application if you open multiple applications in a delivery group. This consumes a larger number of sessions.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> perSessionPerApp_ = nullptr;
    // The application ID of the pre-open application. If you set `PreOpenMode` to `SINGLE_APP`, you cannot leave this parameter empty.``
    std::shared_ptr<string> preOpenAppId_ = nullptr;
    // The pre-open mode.
    // 
    // Valid values:
    // 
    // *   SINGLE_APP: enables the pre-open mode for a single application.
    // *   OFF: disables the pre-open mode. This is the default value.
    std::shared_ptr<string> preOpenMode_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The security policy.
    std::shared_ptr<ModifyAppInstanceGroupAttributeRequestSecurityPolicy> securityPolicy_ = nullptr;
    // The duration for which sessions are retained after disconnection. Unit: minutes. After an end user disconnects from a session, the session is closed only after the specified duration elapses. If you want to permanently retain sessions, set this parameter to `-1`. Valid values:-1 and 3 to 300. Default value: `15`.
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    // The storage policy.
    std::shared_ptr<ModifyAppInstanceGroupAttributeRequestStoragePolicy> storagePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
