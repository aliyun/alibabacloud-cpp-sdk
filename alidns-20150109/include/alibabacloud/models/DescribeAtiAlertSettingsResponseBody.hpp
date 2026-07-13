// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATIALERTSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATIALERTSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeAtiAlertSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAtiAlertSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAtiAlertSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAtiAlertSettingsResponseBody() = default ;
    DescribeAtiAlertSettingsResponseBody(const DescribeAtiAlertSettingsResponseBody &) = default ;
    DescribeAtiAlertSettingsResponseBody(DescribeAtiAlertSettingsResponseBody &&) = default ;
    DescribeAtiAlertSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAtiAlertSettingsResponseBody() = default ;
    DescribeAtiAlertSettingsResponseBody& operator=(const DescribeAtiAlertSettingsResponseBody &) = default ;
    DescribeAtiAlertSettingsResponseBody& operator=(DescribeAtiAlertSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      };
      friend void from_json(const Darabonba::Json& j, AlertGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      };
      AlertGroup() = default ;
      AlertGroup(const AlertGroup &) = default ;
      AlertGroup(AlertGroup &&) = default ;
      AlertGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertGroup() = default ;
      AlertGroup& operator=(const AlertGroup &) = default ;
      AlertGroup& operator=(AlertGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertGroup_ == nullptr; };
      // alertGroup Field Functions 
      bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
      void deleteAlertGroup() { this->alertGroup_ = nullptr;};
      inline const vector<string> & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
      inline vector<string> getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
      inline AlertGroup& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
      inline AlertGroup& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    protected:
      shared_ptr<vector<string>> alertGroup_ {};
    };

    class AlertConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      };
      AlertConfig() = default ;
      AlertConfig(const AlertConfig &) = default ;
      AlertConfig(AlertConfig &&) = default ;
      AlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfig() = default ;
      AlertConfig& operator=(const AlertConfig &) = default ;
      AlertConfig& operator=(AlertConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertConfigItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertConfigItem& obj) { 
          DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
          DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
          DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
        };
        friend void from_json(const Darabonba::Json& j, AlertConfigItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
          DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
          DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
        };
        AlertConfigItem() = default ;
        AlertConfigItem(const AlertConfigItem &) = default ;
        AlertConfigItem(AlertConfigItem &&) = default ;
        AlertConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertConfigItem() = default ;
        AlertConfigItem& operator=(const AlertConfigItem &) = default ;
        AlertConfigItem& operator=(AlertConfigItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dingtalkNotice_ == nullptr
        && this->emailNotice_ == nullptr && this->noticeType_ == nullptr && this->smsNotice_ == nullptr; };
        // dingtalkNotice Field Functions 
        bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
        void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
        inline bool getDingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, false) };
        inline AlertConfigItem& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


        // emailNotice Field Functions 
        bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
        void deleteEmailNotice() { this->emailNotice_ = nullptr;};
        inline bool getEmailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
        inline AlertConfigItem& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


        // noticeType Field Functions 
        bool hasNoticeType() const { return this->noticeType_ != nullptr;};
        void deleteNoticeType() { this->noticeType_ = nullptr;};
        inline string getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
        inline AlertConfigItem& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


        // smsNotice Field Functions 
        bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
        void deleteSmsNotice() { this->smsNotice_ = nullptr;};
        inline bool getSmsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
        inline AlertConfigItem& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


      protected:
        shared_ptr<bool> dingtalkNotice_ {};
        shared_ptr<bool> emailNotice_ {};
        shared_ptr<string> noticeType_ {};
        shared_ptr<bool> smsNotice_ {};
      };

      virtual bool empty() const override { return this->alertConfig_ == nullptr; };
      // alertConfig Field Functions 
      bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
      void deleteAlertConfig() { this->alertConfig_ = nullptr;};
      inline const vector<AlertConfig::AlertConfigItem> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
      inline vector<AlertConfig::AlertConfigItem> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
      inline AlertConfig& setAlertConfig(const vector<AlertConfig::AlertConfigItem> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
      inline AlertConfig& setAlertConfig(vector<AlertConfig::AlertConfigItem> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    protected:
      shared_ptr<vector<AlertConfig::AlertConfigItem>> alertConfig_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      // The unauthorized operation that was attempted.
      shared_ptr<string> authAction_ {};
      // The display name of the authorization principal.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The ID of the authorization principal owner.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The identity type.
      shared_ptr<string> authPrincipalType_ {};
      // The encrypted diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The reason for the authentication failure. Valid values:
      // - ExplicitDeny: explicit deny.
      // - ImplicitDeny: implicit deny.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->alertConfig_ == nullptr && this->alertGroup_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail) };
    inline DescribeAtiAlertSettingsResponseBody& setAccessDeniedDetail(const DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeAtiAlertSettingsResponseBody& setAccessDeniedDetail(DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const DescribeAtiAlertSettingsResponseBody::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, DescribeAtiAlertSettingsResponseBody::AlertConfig) };
    inline DescribeAtiAlertSettingsResponseBody::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, DescribeAtiAlertSettingsResponseBody::AlertConfig) };
    inline DescribeAtiAlertSettingsResponseBody& setAlertConfig(const DescribeAtiAlertSettingsResponseBody::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeAtiAlertSettingsResponseBody& setAlertConfig(DescribeAtiAlertSettingsResponseBody::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const DescribeAtiAlertSettingsResponseBody::AlertGroup & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, DescribeAtiAlertSettingsResponseBody::AlertGroup) };
    inline DescribeAtiAlertSettingsResponseBody::AlertGroup getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, DescribeAtiAlertSettingsResponseBody::AlertGroup) };
    inline DescribeAtiAlertSettingsResponseBody& setAlertGroup(const DescribeAtiAlertSettingsResponseBody::AlertGroup & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline DescribeAtiAlertSettingsResponseBody& setAlertGroup(DescribeAtiAlertSettingsResponseBody::AlertGroup && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAtiAlertSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial. This field is returned only when the RAM authentication fails.
    shared_ptr<DescribeAtiAlertSettingsResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<DescribeAtiAlertSettingsResponseBody::AlertConfig> alertConfig_ {};
    shared_ptr<DescribeAtiAlertSettingsResponseBody::AlertGroup> alertGroup_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
