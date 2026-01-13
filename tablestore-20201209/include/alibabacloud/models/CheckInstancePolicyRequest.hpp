// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class CheckInstancePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstancePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstancePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    CheckInstancePolicyRequest() = default ;
    CheckInstancePolicyRequest(const CheckInstancePolicyRequest &) = default ;
    CheckInstancePolicyRequest(CheckInstancePolicyRequest &&) = default ;
    CheckInstancePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstancePolicyRequest() = default ;
    CheckInstancePolicyRequest& operator=(const CheckInstancePolicyRequest &) = default ;
    CheckInstancePolicyRequest& operator=(CheckInstancePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->policy_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CheckInstancePolicyRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CheckInstancePolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The instance policy in the JSON format.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
