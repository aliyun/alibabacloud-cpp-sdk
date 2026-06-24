// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(Network, networkShrink_);
      DARABONBA_PTR_TO_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_TO_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_TO_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_TO_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StoragePolicy, storagePolicyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(Network, networkShrink_);
      DARABONBA_PTR_FROM_JSON(NodePool, nodePoolShrink_);
      DARABONBA_PTR_FROM_JSON(PerSessionPerApp, perSessionPerApp_);
      DARABONBA_PTR_FROM_JSON(PreOpenAppId, preOpenAppId_);
      DARABONBA_PTR_FROM_JSON(PreOpenMode, preOpenMode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicy, securityPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StoragePolicy, storagePolicyShrink_);
    };
    ModifyAppInstanceGroupAttributeShrinkRequest() = default ;
    ModifyAppInstanceGroupAttributeShrinkRequest(const ModifyAppInstanceGroupAttributeShrinkRequest &) = default ;
    ModifyAppInstanceGroupAttributeShrinkRequest(ModifyAppInstanceGroupAttributeShrinkRequest &&) = default ;
    ModifyAppInstanceGroupAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupAttributeShrinkRequest() = default ;
    ModifyAppInstanceGroupAttributeShrinkRequest& operator=(const ModifyAppInstanceGroupAttributeShrinkRequest &) = default ;
    ModifyAppInstanceGroupAttributeShrinkRequest& operator=(ModifyAppInstanceGroupAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupName_ == nullptr && this->networkShrink_ == nullptr && this->nodePoolShrink_ == nullptr && this->perSessionPerApp_ == nullptr && this->preOpenAppId_ == nullptr
        && this->preOpenMode_ == nullptr && this->productType_ == nullptr && this->securityPolicyShrink_ == nullptr && this->sessionTimeout_ == nullptr && this->storagePolicyShrink_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string getAppInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // networkShrink Field Functions 
    bool hasNetworkShrink() const { return this->networkShrink_ != nullptr;};
    void deleteNetworkShrink() { this->networkShrink_ = nullptr;};
    inline string getNetworkShrink() const { DARABONBA_PTR_GET_DEFAULT(networkShrink_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setNetworkShrink(string networkShrink) { DARABONBA_PTR_SET_VALUE(networkShrink_, networkShrink) };


    // nodePoolShrink Field Functions 
    bool hasNodePoolShrink() const { return this->nodePoolShrink_ != nullptr;};
    void deleteNodePoolShrink() { this->nodePoolShrink_ = nullptr;};
    inline string getNodePoolShrink() const { DARABONBA_PTR_GET_DEFAULT(nodePoolShrink_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setNodePoolShrink(string nodePoolShrink) { DARABONBA_PTR_SET_VALUE(nodePoolShrink_, nodePoolShrink) };


    // perSessionPerApp Field Functions 
    bool hasPerSessionPerApp() const { return this->perSessionPerApp_ != nullptr;};
    void deletePerSessionPerApp() { this->perSessionPerApp_ = nullptr;};
    inline bool getPerSessionPerApp() const { DARABONBA_PTR_GET_DEFAULT(perSessionPerApp_, false) };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setPerSessionPerApp(bool perSessionPerApp) { DARABONBA_PTR_SET_VALUE(perSessionPerApp_, perSessionPerApp) };


    // preOpenAppId Field Functions 
    bool hasPreOpenAppId() const { return this->preOpenAppId_ != nullptr;};
    void deletePreOpenAppId() { this->preOpenAppId_ = nullptr;};
    inline string getPreOpenAppId() const { DARABONBA_PTR_GET_DEFAULT(preOpenAppId_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setPreOpenAppId(string preOpenAppId) { DARABONBA_PTR_SET_VALUE(preOpenAppId_, preOpenAppId) };


    // preOpenMode Field Functions 
    bool hasPreOpenMode() const { return this->preOpenMode_ != nullptr;};
    void deletePreOpenMode() { this->preOpenMode_ = nullptr;};
    inline string getPreOpenMode() const { DARABONBA_PTR_GET_DEFAULT(preOpenMode_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setPreOpenMode(string preOpenMode) { DARABONBA_PTR_SET_VALUE(preOpenMode_, preOpenMode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // securityPolicyShrink Field Functions 
    bool hasSecurityPolicyShrink() const { return this->securityPolicyShrink_ != nullptr;};
    void deleteSecurityPolicyShrink() { this->securityPolicyShrink_ = nullptr;};
    inline string getSecurityPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyShrink_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setSecurityPolicyShrink(string securityPolicyShrink) { DARABONBA_PTR_SET_VALUE(securityPolicyShrink_, securityPolicyShrink) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // storagePolicyShrink Field Functions 
    bool hasStoragePolicyShrink() const { return this->storagePolicyShrink_ != nullptr;};
    void deleteStoragePolicyShrink() { this->storagePolicyShrink_ = nullptr;};
    inline string getStoragePolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(storagePolicyShrink_, "") };
    inline ModifyAppInstanceGroupAttributeShrinkRequest& setStoragePolicyShrink(string storagePolicyShrink) { DARABONBA_PTR_SET_VALUE(storagePolicyShrink_, storagePolicyShrink) };


  protected:
    // The delivery group ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The delivery group name.
    shared_ptr<string> appInstanceGroupName_ {};
    // The network configuration.
    // 
    // > To use this parameter, submit a ticket.
    shared_ptr<string> networkShrink_ {};
    // The resource group object.
    shared_ptr<string> nodePoolShrink_ {};
    // Specifies whether to allow only one application per session.
    // - If enabled, opening multiple applications within a delivery group allocates a separate session for each application, consuming more sessions.
    shared_ptr<bool> perSessionPerApp_ {};
    // The AppId of the pre-open application. If the PreOpenMode parameter is set to `SINGLE_APP`, PreOpenAppId cannot be an empty string.
    shared_ptr<string> preOpenAppId_ {};
    // The pre-open mode.
    shared_ptr<string> preOpenMode_ {};
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The security policy.
    shared_ptr<string> securityPolicyShrink_ {};
    // The session retention duration after disconnection, in minutes. After an end user session is disconnected, the session is retained for the specified duration before being logged off. Set this parameter to `-1` to retain the session indefinitely. Valid values: -1 and 3 to 300. Default value: `15`.
    shared_ptr<int32_t> sessionTimeout_ {};
    // The storage policy.
    shared_ptr<string> storagePolicyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
