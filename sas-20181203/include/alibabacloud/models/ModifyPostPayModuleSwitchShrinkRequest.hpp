// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPostPayModuleSwitchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPostPayModuleSwitchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EdrModuleSwitch, edrModuleSwitchShrink_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_TO_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitchObj, postPayModuleSwitchObjShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPostPayModuleSwitchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EdrModuleSwitch, edrModuleSwitchShrink_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_FROM_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_FROM_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitchObj, postPayModuleSwitchObjShrink_);
    };
    ModifyPostPayModuleSwitchShrinkRequest() = default ;
    ModifyPostPayModuleSwitchShrinkRequest(const ModifyPostPayModuleSwitchShrinkRequest &) = default ;
    ModifyPostPayModuleSwitchShrinkRequest(ModifyPostPayModuleSwitchShrinkRequest &&) = default ;
    ModifyPostPayModuleSwitchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPostPayModuleSwitchShrinkRequest() = default ;
    ModifyPostPayModuleSwitchShrinkRequest& operator=(const ModifyPostPayModuleSwitchShrinkRequest &) = default ;
    ModifyPostPayModuleSwitchShrinkRequest& operator=(ModifyPostPayModuleSwitchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->edrModuleSwitchShrink_ == nullptr && this->postPaidHostAutoBind_ == nullptr && this->postPaidHostAutoBindVersion_ == nullptr && this->postPayInstanceId_ == nullptr
        && this->postPayModuleSwitch_ == nullptr && this->postPayModuleSwitchObjShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyPostPayModuleSwitchShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyPostPayModuleSwitchShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // edrModuleSwitchShrink Field Functions 
    bool hasEdrModuleSwitchShrink() const { return this->edrModuleSwitchShrink_ != nullptr;};
    void deleteEdrModuleSwitchShrink() { this->edrModuleSwitchShrink_ = nullptr;};
    inline string getEdrModuleSwitchShrink() const { DARABONBA_PTR_GET_DEFAULT(edrModuleSwitchShrink_, "") };
    inline ModifyPostPayModuleSwitchShrinkRequest& setEdrModuleSwitchShrink(string edrModuleSwitchShrink) { DARABONBA_PTR_SET_VALUE(edrModuleSwitchShrink_, edrModuleSwitchShrink) };


    // postPaidHostAutoBind Field Functions 
    bool hasPostPaidHostAutoBind() const { return this->postPaidHostAutoBind_ != nullptr;};
    void deletePostPaidHostAutoBind() { this->postPaidHostAutoBind_ = nullptr;};
    inline int32_t getPostPaidHostAutoBind() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBind_, 0) };
    inline ModifyPostPayModuleSwitchShrinkRequest& setPostPaidHostAutoBind(int32_t postPaidHostAutoBind) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBind_, postPaidHostAutoBind) };


    // postPaidHostAutoBindVersion Field Functions 
    bool hasPostPaidHostAutoBindVersion() const { return this->postPaidHostAutoBindVersion_ != nullptr;};
    void deletePostPaidHostAutoBindVersion() { this->postPaidHostAutoBindVersion_ = nullptr;};
    inline int32_t getPostPaidHostAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(postPaidHostAutoBindVersion_, 0) };
    inline ModifyPostPayModuleSwitchShrinkRequest& setPostPaidHostAutoBindVersion(int32_t postPaidHostAutoBindVersion) { DARABONBA_PTR_SET_VALUE(postPaidHostAutoBindVersion_, postPaidHostAutoBindVersion) };


    // postPayInstanceId Field Functions 
    bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
    void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
    inline string getPostPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
    inline ModifyPostPayModuleSwitchShrinkRequest& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string getPostPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline ModifyPostPayModuleSwitchShrinkRequest& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


    // postPayModuleSwitchObjShrink Field Functions 
    bool hasPostPayModuleSwitchObjShrink() const { return this->postPayModuleSwitchObjShrink_ != nullptr;};
    void deletePostPayModuleSwitchObjShrink() { this->postPayModuleSwitchObjShrink_ = nullptr;};
    inline string getPostPayModuleSwitchObjShrink() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitchObjShrink_, "") };
    inline ModifyPostPayModuleSwitchShrinkRequest& setPostPayModuleSwitchObjShrink(string postPayModuleSwitchObjShrink) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitchObjShrink_, postPayModuleSwitchObjShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use different tokens for different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - true: Only prechecks the request and does not perform the actual operation.
    // - false: Performs the actual operation.
    shared_ptr<bool> dryRun_ {};
    // The switch configuration for the EDR module.
    shared_ptr<string> edrModuleSwitchShrink_ {};
    // Specifies whether to automatically bind new assets to the host and container protection feature. Valid values:
    // 
    // - **0**: disabled
    // - **1**: enabled
    shared_ptr<int32_t> postPaidHostAutoBind_ {};
    // The edition to which new assets are automatically bound for host and container protection. Valid values:
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Premium Edition
    // - **6**: Anti-virus Edition    
    // - **7**: Ultimate Edition
    shared_ptr<int32_t> postPaidHostAutoBindVersion_ {};
    // The pay-as-you-go instance ID. This parameter is required.
    // 
    // > Invoke the [DescribeVersionConfig](~~DescribeVersionConfig~~) operation to obtain this parameter.
    shared_ptr<string> postPayInstanceId_ {};
    // The switch status of the pay-as-you-go modules. The value is a JSON string. Valid values:
    // - Key:
    //   - **VUL**: Vulnerability fixing module
    //   - **CSPM**: Cloud Security Posture Management module
    //   - **AGENTLESS**: Agentless detection module
    //   - **SERVERLESS**: Serverless security module
    //   - **CTDR**: Cloud Threat Detection and Response module
    //   - **POST_HOST**: Host and container security module
    //   - **SDK**: Malicious file detection SDK module
    //   - **RASP**: Application protection module
    //   - **CTDR_STORAGE**: Log management module
    //   - **ANTI_RANSOMWARE**: Anti-ransomware management
    // - Value: 0 indicates disabled, and 1 indicates enabled.
    // 
    // > The values of modules that are not specified remain unchanged.
    // 
    // <notice>This parameter has the same meaning as the PostPayModuleSwitchObj parameter. If both parameters are specified, the value of PostPayModuleSwitch takes precedence.</notice>
    shared_ptr<string> postPayModuleSwitch_ {};
    // The switch status of the pay-as-you-go modules.
    // >Notice: This parameter has the same meaning as the PostPayModuleSwitch parameter. If both parameters are specified, the value of PostPayModuleSwitch takes precedence.</notice>
    shared_ptr<string> postPayModuleSwitchObjShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
