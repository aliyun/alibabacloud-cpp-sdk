// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOSTPAYMODULESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPostPayModuleSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPostPayModuleSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_TO_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPostPayModuleSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PostPayInstanceId, postPayInstanceId_);
      DARABONBA_PTR_FROM_JSON(PostPayModuleSwitch, postPayModuleSwitch_);
    };
    ModifyPostPayModuleSwitchRequest() = default ;
    ModifyPostPayModuleSwitchRequest(const ModifyPostPayModuleSwitchRequest &) = default ;
    ModifyPostPayModuleSwitchRequest(ModifyPostPayModuleSwitchRequest &&) = default ;
    ModifyPostPayModuleSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPostPayModuleSwitchRequest() = default ;
    ModifyPostPayModuleSwitchRequest& operator=(const ModifyPostPayModuleSwitchRequest &) = default ;
    ModifyPostPayModuleSwitchRequest& operator=(ModifyPostPayModuleSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->postPayInstanceId_ != nullptr
        && this->postPayModuleSwitch_ != nullptr; };
    // postPayInstanceId Field Functions 
    bool hasPostPayInstanceId() const { return this->postPayInstanceId_ != nullptr;};
    void deletePostPayInstanceId() { this->postPayInstanceId_ = nullptr;};
    inline string postPayInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postPayInstanceId_, "") };
    inline ModifyPostPayModuleSwitchRequest& setPostPayInstanceId(string postPayInstanceId) { DARABONBA_PTR_SET_VALUE(postPayInstanceId_, postPayInstanceId) };


    // postPayModuleSwitch Field Functions 
    bool hasPostPayModuleSwitch() const { return this->postPayModuleSwitch_ != nullptr;};
    void deletePostPayModuleSwitch() { this->postPayModuleSwitch_ = nullptr;};
    inline string postPayModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPayModuleSwitch_, "") };
    inline ModifyPostPayModuleSwitchRequest& setPostPayModuleSwitch(string postPayModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPayModuleSwitch_, postPayModuleSwitch) };


  protected:
    // The ID of the pay-as-you-go instance. This parameter is required.
    // 
    // >  You can call the [DescribeVersionConfig](https://help.aliyun.com/document_detail/421770.html) operation to obtain the ID.
    std::shared_ptr<string> postPayInstanceId_ = nullptr;
    // The switch status of the pay-as-you-go module. The value is a JSON string. Valid values:
    // 
    // *   Key:
    // 
    //     *   **VUL**: vulnerability fixing module
    //     *   **CSPM**: cloud service configuration check module
    //     *   **AGENTLESS**: agentless detection module
    //     *   **SERVERLESS**: serverless asset module
    // 
    // *   Value: A value of 0 specifies disabled. A value of 1 specifies enabled.
    // 
    // >  If you do not specify a value for a module, the original value of the module is retained.
    std::shared_ptr<string> postPayModuleSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
