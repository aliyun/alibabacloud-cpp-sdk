// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECUSTOMPRIVACYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECUSTOMPRIVACYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableCustomPrivacyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EnableCustomPrivacyPolicyRequest() = default ;
    EnableCustomPrivacyPolicyRequest(const EnableCustomPrivacyPolicyRequest &) = default ;
    EnableCustomPrivacyPolicyRequest(EnableCustomPrivacyPolicyRequest &&) = default ;
    EnableCustomPrivacyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCustomPrivacyPolicyRequest() = default ;
    EnableCustomPrivacyPolicyRequest& operator=(const EnableCustomPrivacyPolicyRequest &) = default ;
    EnableCustomPrivacyPolicyRequest& operator=(EnableCustomPrivacyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyId_ == nullptr
        && this->instanceId_ == nullptr; };
    // customPrivacyPolicyId Field Functions 
    bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
    void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
    inline string getCustomPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
    inline EnableCustomPrivacyPolicyRequest& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableCustomPrivacyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> customPrivacyPolicyId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
