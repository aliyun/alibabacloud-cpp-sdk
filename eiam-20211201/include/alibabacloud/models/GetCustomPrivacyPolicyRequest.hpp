// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCustomPrivacyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetCustomPrivacyPolicyRequest() = default ;
    GetCustomPrivacyPolicyRequest(const GetCustomPrivacyPolicyRequest &) = default ;
    GetCustomPrivacyPolicyRequest(GetCustomPrivacyPolicyRequest &&) = default ;
    GetCustomPrivacyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomPrivacyPolicyRequest() = default ;
    GetCustomPrivacyPolicyRequest& operator=(const GetCustomPrivacyPolicyRequest &) = default ;
    GetCustomPrivacyPolicyRequest& operator=(GetCustomPrivacyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // customPrivacyPolicyId Field Functions 
    bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
    void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
    inline string customPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
    inline GetCustomPrivacyPolicyRequest& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCustomPrivacyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 自定义条款ID
    // 
    // This parameter is required.
    std::shared_ptr<string> customPrivacyPolicyId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
