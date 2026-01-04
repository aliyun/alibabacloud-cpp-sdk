// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPORTAUTOCCSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPORTAUTOCCSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyPortAutoCcStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPortAutoCcStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPortAutoCcStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
    };
    ModifyPortAutoCcStatusRequest() = default ;
    ModifyPortAutoCcStatusRequest(const ModifyPortAutoCcStatusRequest &) = default ;
    ModifyPortAutoCcStatusRequest(ModifyPortAutoCcStatusRequest &&) = default ;
    ModifyPortAutoCcStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPortAutoCcStatusRequest() = default ;
    ModifyPortAutoCcStatusRequest& operator=(const ModifyPortAutoCcStatusRequest &) = default ;
    ModifyPortAutoCcStatusRequest& operator=(ModifyPortAutoCcStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mode_ == nullptr && this->switch_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPortAutoCcStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyPortAutoCcStatusRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string getSwitch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline ModifyPortAutoCcStatusRequest& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The mode of the Intelligent Protection policy. Valid values:
    // 
    // *   **normal**
    // *   **loose**
    // *   **strict**
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // Specifies the status of the Intelligent Protection policy. Valid values:
    // 
    // *   **on**: enables the policy.
    // *   **off**: disables the policy.
    // 
    // This parameter is required.
    shared_ptr<string> switch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
