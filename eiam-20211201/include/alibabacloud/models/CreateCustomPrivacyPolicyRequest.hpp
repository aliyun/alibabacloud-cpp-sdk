// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCustomPrivacyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_TO_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserConsentType, userConsentType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomPrivacyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
      DARABONBA_PTR_FROM_JSON(DefaultLanguageCode, defaultLanguageCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserConsentType, userConsentType_);
    };
    CreateCustomPrivacyPolicyRequest() = default ;
    CreateCustomPrivacyPolicyRequest(const CreateCustomPrivacyPolicyRequest &) = default ;
    CreateCustomPrivacyPolicyRequest(CreateCustomPrivacyPolicyRequest &&) = default ;
    CreateCustomPrivacyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomPrivacyPolicyRequest() = default ;
    CreateCustomPrivacyPolicyRequest& operator=(const CreateCustomPrivacyPolicyRequest &) = default ;
    CreateCustomPrivacyPolicyRequest& operator=(CreateCustomPrivacyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->customPrivacyPolicyContents_ == nullptr && return this->customPrivacyPolicyName_ == nullptr && return this->defaultLanguageCode_ == nullptr && return this->instanceId_ == nullptr && return this->status_ == nullptr
        && return this->userConsentType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomPrivacyPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customPrivacyPolicyContents Field Functions 
    bool hasCustomPrivacyPolicyContents() const { return this->customPrivacyPolicyContents_ != nullptr;};
    void deleteCustomPrivacyPolicyContents() { this->customPrivacyPolicyContents_ = nullptr;};
    inline const vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> & customPrivacyPolicyContents() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyContents_, vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>) };
    inline vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> customPrivacyPolicyContents() { DARABONBA_PTR_GET(customPrivacyPolicyContents_, vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>) };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(const vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> & customPrivacyPolicyContents) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents> && customPrivacyPolicyContents) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };


    // customPrivacyPolicyName Field Functions 
    bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
    void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
    inline string customPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


    // defaultLanguageCode Field Functions 
    bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
    void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
    inline string defaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
    inline CreateCustomPrivacyPolicyRequest& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomPrivacyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCustomPrivacyPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userConsentType Field Functions 
    bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
    void deleteUserConsentType() { this->userConsentType_ = nullptr;};
    inline string userConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
    inline CreateCustomPrivacyPolicyRequest& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // 自定义条款内容详情
    std::shared_ptr<vector<CreateCustomPrivacyPolicyRequestCustomPrivacyPolicyContents>> customPrivacyPolicyContents_ = nullptr;
    // 自定义条款名称
    // 
    // This parameter is required.
    std::shared_ptr<string> customPrivacyPolicyName_ = nullptr;
    // 默认条款语言，若其他语言未配置条款，则使用默认的
    std::shared_ptr<string> defaultLanguageCode_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 自定义条款状态
    std::shared_ptr<string> status_ = nullptr;
    // 手动勾选同意，还是默认同意
    std::shared_ptr<string> userConsentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
