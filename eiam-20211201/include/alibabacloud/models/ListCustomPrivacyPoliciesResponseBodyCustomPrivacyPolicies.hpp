// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESRESPONSEBODYCUSTOMPRIVACYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESRESPONSEBODYCUSTOMPRIVACYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_TO_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserConsentType, userConsentType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserConsentType, userConsentType_);
    };
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies() = default ;
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies(const ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies &) = default ;
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies(ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies &&) = default ;
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies() = default ;
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& operator=(const ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies &) = default ;
    ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& operator=(ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyId_ == nullptr
        && return this->customPrivacyPolicyName_ == nullptr && return this->defaultLanguageCode_ == nullptr && return this->instanceId_ == nullptr && return this->status_ == nullptr && return this->userConsentType_ == nullptr; };
    // customPrivacyPolicyId Field Functions 
    bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
    void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
    inline string customPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


    // customPrivacyPolicyName Field Functions 
    bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
    void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
    inline string customPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


    // defaultLanguageCode Field Functions 
    bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
    void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
    inline string defaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userConsentType Field Functions 
    bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
    void deleteUserConsentType() { this->userConsentType_ = nullptr;};
    inline string userConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
    inline ListCustomPrivacyPoliciesResponseBodyCustomPrivacyPolicies& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


  protected:
    // 自定义条款Id
    std::shared_ptr<string> customPrivacyPolicyId_ = nullptr;
    // 自定义条款名称
    std::shared_ptr<string> customPrivacyPolicyName_ = nullptr;
    // 若显示语言未配置时，门户侧展示默认语言展示条款。
    std::shared_ptr<string> defaultLanguageCode_ = nullptr;
    // 实例id
    std::shared_ptr<string> instanceId_ = nullptr;
    // 自定义条款状态
    std::shared_ptr<string> status_ = nullptr;
    // 自定义条款同意类型，是默认同意，还是用户勾选同意
    std::shared_ptr<string> userConsentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
