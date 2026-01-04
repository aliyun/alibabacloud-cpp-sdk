// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMPRIVACYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CustomPrivacyPolicyContents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomPrivacyPolicyContents& obj) { 
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
        DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
      };
      friend void from_json(const Darabonba::Json& j, CustomPrivacyPolicyContents& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItems, customPrivacyPolicyItems_);
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyTip, customPrivacyPolicyTip_);
        DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
      };
      CustomPrivacyPolicyContents() = default ;
      CustomPrivacyPolicyContents(const CustomPrivacyPolicyContents &) = default ;
      CustomPrivacyPolicyContents(CustomPrivacyPolicyContents &&) = default ;
      CustomPrivacyPolicyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomPrivacyPolicyContents() = default ;
      CustomPrivacyPolicyContents& operator=(const CustomPrivacyPolicyContents &) = default ;
      CustomPrivacyPolicyContents& operator=(CustomPrivacyPolicyContents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomPrivacyPolicyItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPrivacyPolicyItems& obj) { 
          DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItemName, customPrivacyPolicyItemName_);
          DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyItemUrl, customPrivacyPolicyItemUrl_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPrivacyPolicyItems& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItemName, customPrivacyPolicyItemName_);
          DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyItemUrl, customPrivacyPolicyItemUrl_);
        };
        CustomPrivacyPolicyItems() = default ;
        CustomPrivacyPolicyItems(const CustomPrivacyPolicyItems &) = default ;
        CustomPrivacyPolicyItems(CustomPrivacyPolicyItems &&) = default ;
        CustomPrivacyPolicyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPrivacyPolicyItems() = default ;
        CustomPrivacyPolicyItems& operator=(const CustomPrivacyPolicyItems &) = default ;
        CustomPrivacyPolicyItems& operator=(CustomPrivacyPolicyItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customPrivacyPolicyItemName_ == nullptr
        && this->customPrivacyPolicyItemUrl_ == nullptr; };
        // customPrivacyPolicyItemName Field Functions 
        bool hasCustomPrivacyPolicyItemName() const { return this->customPrivacyPolicyItemName_ != nullptr;};
        void deleteCustomPrivacyPolicyItemName() { this->customPrivacyPolicyItemName_ = nullptr;};
        inline string getCustomPrivacyPolicyItemName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyItemName_, "") };
        inline CustomPrivacyPolicyItems& setCustomPrivacyPolicyItemName(string customPrivacyPolicyItemName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItemName_, customPrivacyPolicyItemName) };


        // customPrivacyPolicyItemUrl Field Functions 
        bool hasCustomPrivacyPolicyItemUrl() const { return this->customPrivacyPolicyItemUrl_ != nullptr;};
        void deleteCustomPrivacyPolicyItemUrl() { this->customPrivacyPolicyItemUrl_ = nullptr;};
        inline string getCustomPrivacyPolicyItemUrl() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyItemUrl_, "") };
        inline CustomPrivacyPolicyItems& setCustomPrivacyPolicyItemUrl(string customPrivacyPolicyItemUrl) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItemUrl_, customPrivacyPolicyItemUrl) };


      protected:
        // 自定义条款名称
        shared_ptr<string> customPrivacyPolicyItemName_ {};
        // 自定义条款访问地址
        shared_ptr<string> customPrivacyPolicyItemUrl_ {};
      };

      virtual bool empty() const override { return this->customPrivacyPolicyItems_ == nullptr
        && this->customPrivacyPolicyTip_ == nullptr && this->languageCode_ == nullptr; };
      // customPrivacyPolicyItems Field Functions 
      bool hasCustomPrivacyPolicyItems() const { return this->customPrivacyPolicyItems_ != nullptr;};
      void deleteCustomPrivacyPolicyItems() { this->customPrivacyPolicyItems_ = nullptr;};
      inline const vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems> & getCustomPrivacyPolicyItems() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyItems_, vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems>) };
      inline vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems> getCustomPrivacyPolicyItems() { DARABONBA_PTR_GET(customPrivacyPolicyItems_, vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems>) };
      inline CustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(const vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems> & customPrivacyPolicyItems) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };
      inline CustomPrivacyPolicyContents& setCustomPrivacyPolicyItems(vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems> && customPrivacyPolicyItems) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyItems_, customPrivacyPolicyItems) };


      // customPrivacyPolicyTip Field Functions 
      bool hasCustomPrivacyPolicyTip() const { return this->customPrivacyPolicyTip_ != nullptr;};
      void deleteCustomPrivacyPolicyTip() { this->customPrivacyPolicyTip_ = nullptr;};
      inline string getCustomPrivacyPolicyTip() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyTip_, "") };
      inline CustomPrivacyPolicyContents& setCustomPrivacyPolicyTip(string customPrivacyPolicyTip) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyTip_, customPrivacyPolicyTip) };


      // languageCode Field Functions 
      bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
      void deleteLanguageCode() { this->languageCode_ = nullptr;};
      inline string getLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
      inline CustomPrivacyPolicyContents& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    protected:
      // 自定义条款项
      shared_ptr<vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems>> customPrivacyPolicyItems_ {};
      // 自定义条款提示
      shared_ptr<string> customPrivacyPolicyTip_ {};
      // 自定义条款所属语言
      shared_ptr<string> languageCode_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->customPrivacyPolicyContents_ == nullptr && this->customPrivacyPolicyName_ == nullptr && this->defaultLanguageCode_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr
        && this->userConsentType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCustomPrivacyPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customPrivacyPolicyContents Field Functions 
    bool hasCustomPrivacyPolicyContents() const { return this->customPrivacyPolicyContents_ != nullptr;};
    void deleteCustomPrivacyPolicyContents() { this->customPrivacyPolicyContents_ = nullptr;};
    inline const vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> & getCustomPrivacyPolicyContents() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyContents_, vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents>) };
    inline vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> getCustomPrivacyPolicyContents() { DARABONBA_PTR_GET(customPrivacyPolicyContents_, vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents>) };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(const vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> & customPrivacyPolicyContents) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyContents(vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents> && customPrivacyPolicyContents) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };


    // customPrivacyPolicyName Field Functions 
    bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
    void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
    inline string getCustomPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
    inline CreateCustomPrivacyPolicyRequest& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


    // defaultLanguageCode Field Functions 
    bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
    void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
    inline string getDefaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
    inline CreateCustomPrivacyPolicyRequest& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomPrivacyPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCustomPrivacyPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userConsentType Field Functions 
    bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
    void deleteUserConsentType() { this->userConsentType_ = nullptr;};
    inline string getUserConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
    inline CreateCustomPrivacyPolicyRequest& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


  protected:
    shared_ptr<string> clientToken_ {};
    // 自定义条款内容详情
    shared_ptr<vector<CreateCustomPrivacyPolicyRequest::CustomPrivacyPolicyContents>> customPrivacyPolicyContents_ {};
    // 自定义条款名称
    // 
    // This parameter is required.
    shared_ptr<string> customPrivacyPolicyName_ {};
    // 默认条款语言，若其他语言未配置条款，则使用默认的
    shared_ptr<string> defaultLanguageCode_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 自定义条款状态
    shared_ptr<string> status_ {};
    // 手动勾选同意，还是默认同意
    shared_ptr<string> userConsentType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
