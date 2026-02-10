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
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBind, postPaidHostAutoBind_);
      DARABONBA_PTR_TO_JSON(PostPaidHostAutoBindVersion, postPaidHostAutoBindVersion_);
      DARABONBA_PTR_TO_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitchObj, postPayModuleSwitchObjShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPostPayModuleSwitchShrinkRequest& obj) { 
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
    virtual bool empty() const override { return this->postPaidHostAutoBind_ == nullptr
        && this->postPaidHostAutoBindVersion_ == nullptr && this->postPayInstanceId_ == nullptr && this->postPayModuleSwitch_ == nullptr && this->postPayModuleSwitchObjShrink_ == nullptr; };
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
    // Automatic binding switch for new assets in host and container protection. Values:
    // 
    // - **0**: Off
    // - **1**: On
    shared_ptr<int32_t> postPaidHostAutoBind_ {};
    // Version for automatic binding of new assets in host and container protection. Values:
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Flagship Edition
    shared_ptr<int32_t> postPaidHostAutoBindVersion_ {};
    // Pay-as-you-go instance ID, which must be filled in.
    // 
    // > Call the [DescribeVersionConfig](~~DescribeVersionConfig~~) interface to obtain this parameter.
    shared_ptr<string> postPayInstanceId_ {};
    // Status of the pay-as-you-go module switch, in JsonString format. Values:
    // - Key:
    //   - **VUL**: Vulnerability Repair Module
    //   - **CSPM**: Cloud Security Posture Management Module
    //   - **AGENTLESS**: Agentless Detection Module
    //   - **SERVERLESS**: Serverless Security Module
    //   - **CTDR**: Threat Analysis and Response Module
    //   - **POST_HOST**: Host and Container Security Module
    //   - **SDK**: Malicious File Detection SDK Module
    //   - **RASP**: Application Protection Module
    //   - **CTDR_STORAGE**: Log Management Module
    //   - **ANTI_RANSOMWARE**: Anti-Ransomware Management
    // - Value: 0 means off, 1 means on
    // 
    // > The values of modules not passed will not change.
    // 
    // <notice>The meaning is the same as the PostPayModuleSwitchObj field. When both exist, the value of PostPayModuleSwitch takes precedence.
    shared_ptr<string> postPayModuleSwitch_ {};
    // Pay-as-you-go module switch.
    // >Notice:  The meaning is the same as the PostPayModuleSwitch field. When both exist, the value of PostPayModuleSwitch takes precedence.
    shared_ptr<string> postPayModuleSwitchObjShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
