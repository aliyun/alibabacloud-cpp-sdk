// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateCustomPrivacyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_TO_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserConsentType, userConsentType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserConsentType, userConsentType_);
    };
    UpdateCustomPrivacyPolicyRequest() = default ;
    UpdateCustomPrivacyPolicyRequest(const UpdateCustomPrivacyPolicyRequest &) = default ;
    UpdateCustomPrivacyPolicyRequest(UpdateCustomPrivacyPolicyRequest &&) = default ;
    UpdateCustomPrivacyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomPrivacyPolicyRequest() = default ;
    UpdateCustomPrivacyPolicyRequest& operator=(const UpdateCustomPrivacyPolicyRequest &) = default ;
    UpdateCustomPrivacyPolicyRequest& operator=(UpdateCustomPrivacyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyContents_ == nullptr
        && return this->customPrivacyPolicyId_ == nullptr && return this->customPrivacyPolicyName_ == nullptr && return this->defaultLanguageCode_ == nullptr && return this->instanceId_ == nullptr && return this->userConsentType_ == nullptr; };
    // customPrivacyPolicyContents Field Functions 
    bool hasCustomPrivacyPolicyContents() const { return this->customPrivacyPolicyContents_ != nullptr;};
    void deleteCustomPrivacyPolicyContents() { this->customPrivacyPolicyContents_ = nullptr;};
    inline const vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> & customPrivacyPolicyContents() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyContents_, vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>) };
    inline vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> customPrivacyPolicyContents() { DARABONBA_PTR_GET(customPrivacyPolicyContents_, vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>) };
    inline UpdateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(const vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> & customPrivacyPolicyContents) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };
    inline UpdateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> && customPrivacyPolicyContents) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };


    // customPrivacyPolicyId Field Functions 
    bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
    void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
    inline string customPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
    inline UpdateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


    // customPrivacyPolicyName Field Functions 
    bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
    void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
    inline string customPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
    inline UpdateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


    // defaultLanguageCode Field Functions 
    bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
    void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
    inline string defaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
    inline UpdateCustomPrivacyPolicyRequest& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCustomPrivacyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userConsentType Field Functions 
    bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
    void deleteUserConsentType() { this->userConsentType_ = nullptr;};
    inline string userConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
    inline UpdateCustomPrivacyPolicyRequest& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


  protected:
    std::shared_ptr<vector<UpdateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>> customPrivacyPolicyContents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> customPrivacyPolicyId_ = nullptr;
    std::shared_ptr<string> customPrivacyPolicyName_ = nullptr;
    std::shared_ptr<string> defaultLanguageCode_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> userConsentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
