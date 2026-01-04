// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMPRIVACYPOLICYRESPONSEBODY_HPP_
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
  class GetCustomPrivacyPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicy, customPrivacyPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomPrivacyPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicy, customPrivacyPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCustomPrivacyPolicyResponseBody() = default ;
    GetCustomPrivacyPolicyResponseBody(const GetCustomPrivacyPolicyResponseBody &) = default ;
    GetCustomPrivacyPolicyResponseBody(GetCustomPrivacyPolicyResponseBody &&) = default ;
    GetCustomPrivacyPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomPrivacyPolicyResponseBody() = default ;
    GetCustomPrivacyPolicyResponseBody& operator=(const GetCustomPrivacyPolicyResponseBody &) = default ;
    GetCustomPrivacyPolicyResponseBody& operator=(GetCustomPrivacyPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomPrivacyPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomPrivacyPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
        DARABONBA_PTR_TO_JSON(DefaultLanguageCode, defaultLanguageCode_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserConsentType, userConsentType_);
      };
      friend void from_json(const Darabonba::Json& j, CustomPrivacyPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyContents, customPrivacyPolicyContents_);
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
        DARABONBA_PTR_FROM_JSON(DefaultLanguageCode, defaultLanguageCode_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserConsentType, userConsentType_);
      };
      CustomPrivacyPolicy() = default ;
      CustomPrivacyPolicy(const CustomPrivacyPolicy &) = default ;
      CustomPrivacyPolicy(CustomPrivacyPolicy &&) = default ;
      CustomPrivacyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomPrivacyPolicy() = default ;
      CustomPrivacyPolicy& operator=(const CustomPrivacyPolicy &) = default ;
      CustomPrivacyPolicy& operator=(CustomPrivacyPolicy &&) = default ;
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
          shared_ptr<string> customPrivacyPolicyItemName_ {};
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
        shared_ptr<vector<CustomPrivacyPolicyContents::CustomPrivacyPolicyItems>> customPrivacyPolicyItems_ {};
        shared_ptr<string> customPrivacyPolicyTip_ {};
        shared_ptr<string> languageCode_ {};
      };

      virtual bool empty() const override { return this->customPrivacyPolicyContents_ == nullptr
        && this->customPrivacyPolicyId_ == nullptr && this->customPrivacyPolicyName_ == nullptr && this->defaultLanguageCode_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr
        && this->userConsentType_ == nullptr; };
      // customPrivacyPolicyContents Field Functions 
      bool hasCustomPrivacyPolicyContents() const { return this->customPrivacyPolicyContents_ != nullptr;};
      void deleteCustomPrivacyPolicyContents() { this->customPrivacyPolicyContents_ = nullptr;};
      inline const vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents> & getCustomPrivacyPolicyContents() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyContents_, vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents>) };
      inline vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents> getCustomPrivacyPolicyContents() { DARABONBA_PTR_GET(customPrivacyPolicyContents_, vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents>) };
      inline CustomPrivacyPolicy& setCustomPrivacyPolicyContents(const vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents> & customPrivacyPolicyContents) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };
      inline CustomPrivacyPolicy& setCustomPrivacyPolicyContents(vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents> && customPrivacyPolicyContents) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyContents_, customPrivacyPolicyContents) };


      // customPrivacyPolicyId Field Functions 
      bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
      void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
      inline string getCustomPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
      inline CustomPrivacyPolicy& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


      // customPrivacyPolicyName Field Functions 
      bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
      void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
      inline string getCustomPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
      inline CustomPrivacyPolicy& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


      // defaultLanguageCode Field Functions 
      bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
      void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
      inline string getDefaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
      inline CustomPrivacyPolicy& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CustomPrivacyPolicy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomPrivacyPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userConsentType Field Functions 
      bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
      void deleteUserConsentType() { this->userConsentType_ = nullptr;};
      inline string getUserConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
      inline CustomPrivacyPolicy& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


    protected:
      shared_ptr<vector<CustomPrivacyPolicy::CustomPrivacyPolicyContents>> customPrivacyPolicyContents_ {};
      shared_ptr<string> customPrivacyPolicyId_ {};
      shared_ptr<string> customPrivacyPolicyName_ {};
      shared_ptr<string> defaultLanguageCode_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userConsentType_ {};
    };

    virtual bool empty() const override { return this->customPrivacyPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // customPrivacyPolicy Field Functions 
    bool hasCustomPrivacyPolicy() const { return this->customPrivacyPolicy_ != nullptr;};
    void deleteCustomPrivacyPolicy() { this->customPrivacyPolicy_ = nullptr;};
    inline const GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy & getCustomPrivacyPolicy() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicy_, GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy getCustomPrivacyPolicy() { DARABONBA_PTR_GET(customPrivacyPolicy_, GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBody& setCustomPrivacyPolicy(const GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy & customPrivacyPolicy) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicy_, customPrivacyPolicy) };
    inline GetCustomPrivacyPolicyResponseBody& setCustomPrivacyPolicy(GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy && customPrivacyPolicy) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicy_, customPrivacyPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomPrivacyPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetCustomPrivacyPolicyResponseBody::CustomPrivacyPolicy> customPrivacyPolicy_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
