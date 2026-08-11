// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLASHSMSACCESSPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLASHSMSACCESSPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateFlashSmsAccessProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlashSmsAccessProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfile, accessProfile_);
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlashSmsAccessProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfile, accessProfile_);
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    UpdateFlashSmsAccessProfileRequest() = default ;
    UpdateFlashSmsAccessProfileRequest(const UpdateFlashSmsAccessProfileRequest &) = default ;
    UpdateFlashSmsAccessProfileRequest(UpdateFlashSmsAccessProfileRequest &&) = default ;
    UpdateFlashSmsAccessProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlashSmsAccessProfileRequest() = default ;
    UpdateFlashSmsAccessProfileRequest& operator=(const UpdateFlashSmsAccessProfileRequest &) = default ;
    UpdateFlashSmsAccessProfileRequest& operator=(UpdateFlashSmsAccessProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessProfile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessProfile& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(AesKey, aesKey_);
        DARABONBA_PTR_TO_JSON(ApiAccount, apiAccount_);
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiPassword, apiPassword_);
        DARABONBA_PTR_TO_JSON(CapAppId, capAppId_);
        DARABONBA_PTR_TO_JSON(DySmsAccessProfiles, dySmsAccessProfiles_);
        DARABONBA_PTR_TO_JSON(Extno, extno_);
        DARABONBA_PTR_TO_JSON(ManagementPassword, managementPassword_);
        DARABONBA_PTR_TO_JSON(ManagementSubUserId, managementSubUserId_);
        DARABONBA_PTR_TO_JSON(ManagementUsername, managementUsername_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Pwd, pwd_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, AccessProfile& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(AesKey, aesKey_);
        DARABONBA_PTR_FROM_JSON(ApiAccount, apiAccount_);
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiPassword, apiPassword_);
        DARABONBA_PTR_FROM_JSON(CapAppId, capAppId_);
        DARABONBA_PTR_FROM_JSON(DySmsAccessProfiles, dySmsAccessProfiles_);
        DARABONBA_PTR_FROM_JSON(Extno, extno_);
        DARABONBA_PTR_FROM_JSON(ManagementPassword, managementPassword_);
        DARABONBA_PTR_FROM_JSON(ManagementSubUserId, managementSubUserId_);
        DARABONBA_PTR_FROM_JSON(ManagementUsername, managementUsername_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Pwd, pwd_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      AccessProfile() = default ;
      AccessProfile(const AccessProfile &) = default ;
      AccessProfile(AccessProfile &&) = default ;
      AccessProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessProfile() = default ;
      AccessProfile& operator=(const AccessProfile &) = default ;
      AccessProfile& operator=(AccessProfile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DySmsAccessProfiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DySmsAccessProfiles& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SignName, signName_);
          DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        };
        friend void from_json(const Darabonba::Json& j, DySmsAccessProfiles& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SignName, signName_);
          DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        };
        DySmsAccessProfiles() = default ;
        DySmsAccessProfiles(const DySmsAccessProfiles &) = default ;
        DySmsAccessProfiles(DySmsAccessProfiles &&) = default ;
        DySmsAccessProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DySmsAccessProfiles() = default ;
        DySmsAccessProfiles& operator=(const DySmsAccessProfiles &) = default ;
        DySmsAccessProfiles& operator=(DySmsAccessProfiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->signName_ == nullptr && this->templateCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DySmsAccessProfiles& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DySmsAccessProfiles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // signName Field Functions 
        bool hasSignName() const { return this->signName_ != nullptr;};
        void deleteSignName() { this->signName_ = nullptr;};
        inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
        inline DySmsAccessProfiles& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


        // templateCode Field Functions 
        bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
        void deleteTemplateCode() { this->templateCode_ = nullptr;};
        inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
        inline DySmsAccessProfiles& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      protected:
        // The template content.
        shared_ptr<string> description_ {};
        // The template name.
        shared_ptr<string> name_ {};
        // The signature name.
        shared_ptr<string> signName_ {};
        // The template code.
        shared_ptr<string> templateCode_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr
        && this->aesKey_ == nullptr && this->apiAccount_ == nullptr && this->apiId_ == nullptr && this->apiKey_ == nullptr && this->apiPassword_ == nullptr
        && this->capAppId_ == nullptr && this->dySmsAccessProfiles_ == nullptr && this->extno_ == nullptr && this->managementPassword_ == nullptr && this->managementSubUserId_ == nullptr
        && this->managementUsername_ == nullptr && this->password_ == nullptr && this->pwd_ == nullptr && this->user_ == nullptr && this->userName_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline AccessProfile& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // aesKey Field Functions 
      bool hasAesKey() const { return this->aesKey_ != nullptr;};
      void deleteAesKey() { this->aesKey_ = nullptr;};
      inline string getAesKey() const { DARABONBA_PTR_GET_DEFAULT(aesKey_, "") };
      inline AccessProfile& setAesKey(string aesKey) { DARABONBA_PTR_SET_VALUE(aesKey_, aesKey) };


      // apiAccount Field Functions 
      bool hasApiAccount() const { return this->apiAccount_ != nullptr;};
      void deleteApiAccount() { this->apiAccount_ = nullptr;};
      inline string getApiAccount() const { DARABONBA_PTR_GET_DEFAULT(apiAccount_, "") };
      inline AccessProfile& setApiAccount(string apiAccount) { DARABONBA_PTR_SET_VALUE(apiAccount_, apiAccount) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline AccessProfile& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline AccessProfile& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiPassword Field Functions 
      bool hasApiPassword() const { return this->apiPassword_ != nullptr;};
      void deleteApiPassword() { this->apiPassword_ = nullptr;};
      inline string getApiPassword() const { DARABONBA_PTR_GET_DEFAULT(apiPassword_, "") };
      inline AccessProfile& setApiPassword(string apiPassword) { DARABONBA_PTR_SET_VALUE(apiPassword_, apiPassword) };


      // capAppId Field Functions 
      bool hasCapAppId() const { return this->capAppId_ != nullptr;};
      void deleteCapAppId() { this->capAppId_ = nullptr;};
      inline string getCapAppId() const { DARABONBA_PTR_GET_DEFAULT(capAppId_, "") };
      inline AccessProfile& setCapAppId(string capAppId) { DARABONBA_PTR_SET_VALUE(capAppId_, capAppId) };


      // dySmsAccessProfiles Field Functions 
      bool hasDySmsAccessProfiles() const { return this->dySmsAccessProfiles_ != nullptr;};
      void deleteDySmsAccessProfiles() { this->dySmsAccessProfiles_ = nullptr;};
      inline const vector<AccessProfile::DySmsAccessProfiles> & getDySmsAccessProfiles() const { DARABONBA_PTR_GET_CONST(dySmsAccessProfiles_, vector<AccessProfile::DySmsAccessProfiles>) };
      inline vector<AccessProfile::DySmsAccessProfiles> getDySmsAccessProfiles() { DARABONBA_PTR_GET(dySmsAccessProfiles_, vector<AccessProfile::DySmsAccessProfiles>) };
      inline AccessProfile& setDySmsAccessProfiles(const vector<AccessProfile::DySmsAccessProfiles> & dySmsAccessProfiles) { DARABONBA_PTR_SET_VALUE(dySmsAccessProfiles_, dySmsAccessProfiles) };
      inline AccessProfile& setDySmsAccessProfiles(vector<AccessProfile::DySmsAccessProfiles> && dySmsAccessProfiles) { DARABONBA_PTR_SET_RVALUE(dySmsAccessProfiles_, dySmsAccessProfiles) };


      // extno Field Functions 
      bool hasExtno() const { return this->extno_ != nullptr;};
      void deleteExtno() { this->extno_ = nullptr;};
      inline string getExtno() const { DARABONBA_PTR_GET_DEFAULT(extno_, "") };
      inline AccessProfile& setExtno(string extno) { DARABONBA_PTR_SET_VALUE(extno_, extno) };


      // managementPassword Field Functions 
      bool hasManagementPassword() const { return this->managementPassword_ != nullptr;};
      void deleteManagementPassword() { this->managementPassword_ = nullptr;};
      inline string getManagementPassword() const { DARABONBA_PTR_GET_DEFAULT(managementPassword_, "") };
      inline AccessProfile& setManagementPassword(string managementPassword) { DARABONBA_PTR_SET_VALUE(managementPassword_, managementPassword) };


      // managementSubUserId Field Functions 
      bool hasManagementSubUserId() const { return this->managementSubUserId_ != nullptr;};
      void deleteManagementSubUserId() { this->managementSubUserId_ = nullptr;};
      inline string getManagementSubUserId() const { DARABONBA_PTR_GET_DEFAULT(managementSubUserId_, "") };
      inline AccessProfile& setManagementSubUserId(string managementSubUserId) { DARABONBA_PTR_SET_VALUE(managementSubUserId_, managementSubUserId) };


      // managementUsername Field Functions 
      bool hasManagementUsername() const { return this->managementUsername_ != nullptr;};
      void deleteManagementUsername() { this->managementUsername_ = nullptr;};
      inline string getManagementUsername() const { DARABONBA_PTR_GET_DEFAULT(managementUsername_, "") };
      inline AccessProfile& setManagementUsername(string managementUsername) { DARABONBA_PTR_SET_VALUE(managementUsername_, managementUsername) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline AccessProfile& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // pwd Field Functions 
      bool hasPwd() const { return this->pwd_ != nullptr;};
      void deletePwd() { this->pwd_ = nullptr;};
      inline string getPwd() const { DARABONBA_PTR_GET_DEFAULT(pwd_, "") };
      inline AccessProfile& setPwd(string pwd) { DARABONBA_PTR_SET_VALUE(pwd_, pwd) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline AccessProfile& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline AccessProfile& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // Required when ProviderId is set to ShangHaiTianNan or Uincall.
      shared_ptr<string> account_ {};
      // Required when ProviderId is set to ChinaMobile.
      shared_ptr<string> aesKey_ {};
      // Required when ProviderId is set to ChuangLan.
      shared_ptr<string> apiAccount_ {};
      // Required when ProviderId is set to ChinaMobile.
      shared_ptr<string> apiId_ {};
      // Required when ProviderId is set to ChinaMobile.
      shared_ptr<string> apiKey_ {};
      // Required when ProviderId is set to ChuangLan.
      shared_ptr<string> apiPassword_ {};
      // Required when ProviderId is set to ChinaMobile.
      shared_ptr<string> capAppId_ {};
      // The list of Alibaba Communication configurations. Required when ProviderId is set to DySms.
      shared_ptr<vector<AccessProfile::DySmsAccessProfiles>> dySmsAccessProfiles_ {};
      // Required when ProviderId is set to ShangHaiTianNan.
      shared_ptr<string> extno_ {};
      // Required when ProviderId is set to ChuangLan.
      shared_ptr<string> managementPassword_ {};
      // Required when ProviderId is set to ChuangLan.
      shared_ptr<string> managementSubUserId_ {};
      // Required when ProviderId is set to ChuangLan.
      shared_ptr<string> managementUsername_ {};
      // Required when ProviderId is set to ShangHaiTianNan or HeDao.
      shared_ptr<string> password_ {};
      // Required when ProviderId is set to Uincall.
      shared_ptr<string> pwd_ {};
      // Required when ProviderId is set to Uincall.
      shared_ptr<string> user_ {};
      // Required when ProviderId is set to HeDao.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->accessProfile_ == nullptr
        && this->accessProfileId_ == nullptr && this->instanceId_ == nullptr && this->providerId_ == nullptr; };
    // accessProfile Field Functions 
    bool hasAccessProfile() const { return this->accessProfile_ != nullptr;};
    void deleteAccessProfile() { this->accessProfile_ = nullptr;};
    inline const UpdateFlashSmsAccessProfileRequest::AccessProfile & getAccessProfile() const { DARABONBA_PTR_GET_CONST(accessProfile_, UpdateFlashSmsAccessProfileRequest::AccessProfile) };
    inline UpdateFlashSmsAccessProfileRequest::AccessProfile getAccessProfile() { DARABONBA_PTR_GET(accessProfile_, UpdateFlashSmsAccessProfileRequest::AccessProfile) };
    inline UpdateFlashSmsAccessProfileRequest& setAccessProfile(const UpdateFlashSmsAccessProfileRequest::AccessProfile & accessProfile) { DARABONBA_PTR_SET_VALUE(accessProfile_, accessProfile) };
    inline UpdateFlashSmsAccessProfileRequest& setAccessProfile(UpdateFlashSmsAccessProfileRequest::AccessProfile && accessProfile) { DARABONBA_PTR_SET_RVALUE(accessProfile_, accessProfile) };


    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline UpdateFlashSmsAccessProfileRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFlashSmsAccessProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline UpdateFlashSmsAccessProfileRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    // The access configuration.
    shared_ptr<UpdateFlashSmsAccessProfileRequest::AccessProfile> accessProfile_ {};
    // The access configuration ID.
    shared_ptr<string> accessProfileId_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The provider ID. Valid values:
    // - Uincall: Beijing Youyin Communication Co., Ltd.
    // - ChuangLan: Beijing Chuanglan Cloud Intelligence Information Co., Ltd.
    // - ChinaMobile: China Mobile.
    // - ShangHaiTianNan: Shanghai Tiannan.
    // - HeDao: Galaxis.
    // - DySms: Alibaba Communication.
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
