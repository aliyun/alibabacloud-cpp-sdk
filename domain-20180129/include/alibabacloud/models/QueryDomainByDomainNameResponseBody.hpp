// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainByDomainNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByDomainNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameProxyService, domainNameProxyService_);
      DARABONBA_PTR_TO_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(RegistrantUpdatingStatus, registrantUpdatingStatus_);
      DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_TO_JSON(TransferProhibitionLock, transferProhibitionLock_);
      DARABONBA_PTR_TO_JSON(UpdateProhibitionLock, updateProhibitionLock_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_TO_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByDomainNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainGroupName, domainGroupName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameProxyService, domainNameProxyService_);
      DARABONBA_PTR_FROM_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(RegistrantUpdatingStatus, registrantUpdatingStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_FROM_JSON(TransferProhibitionLock, transferProhibitionLock_);
      DARABONBA_PTR_FROM_JSON(UpdateProhibitionLock, updateProhibitionLock_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantName, zhRegistrantName_);
      DARABONBA_PTR_FROM_JSON(ZhRegistrantOrganization, zhRegistrantOrganization_);
    };
    QueryDomainByDomainNameResponseBody() = default ;
    QueryDomainByDomainNameResponseBody(const QueryDomainByDomainNameResponseBody &) = default ;
    QueryDomainByDomainNameResponseBody(QueryDomainByDomainNameResponseBody &&) = default ;
    QueryDomainByDomainNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByDomainNameResponseBody() = default ;
    QueryDomainByDomainNameResponseBody& operator=(const QueryDomainByDomainNameResponseBody &) = default ;
    QueryDomainByDomainNameResponseBody& operator=(QueryDomainByDomainNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagItem& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Vaue, vaue_);
        };
        friend void from_json(const Darabonba::Json& j, TagItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Vaue, vaue_);
        };
        TagItem() = default ;
        TagItem(const TagItem &) = default ;
        TagItem(TagItem &&) = default ;
        TagItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagItem() = default ;
        TagItem& operator=(const TagItem &) = default ;
        TagItem& operator=(TagItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->vaue_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline TagItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // vaue Field Functions 
        bool hasVaue() const { return this->vaue_ != nullptr;};
        void deleteVaue() { this->vaue_ = nullptr;};
        inline string getVaue() const { DARABONBA_PTR_GET_DEFAULT(vaue_, "") };
        inline TagItem& setVaue(string vaue) { DARABONBA_PTR_SET_VALUE(vaue_, vaue) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> vaue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tag::TagItem> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tag::TagItem>) };
      inline vector<Tag::TagItem> getTag() { DARABONBA_PTR_GET(tag_, vector<Tag::TagItem>) };
      inline Tag& setTag(const vector<Tag::TagItem> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tag& setTag(vector<Tag::TagItem> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tag::TagItem>> tag_ {};
    };

    class DnsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsList& obj) { 
        DARABONBA_PTR_TO_JSON(Dns, dns_);
      };
      friend void from_json(const Darabonba::Json& j, DnsList& obj) { 
        DARABONBA_PTR_FROM_JSON(Dns, dns_);
      };
      DnsList() = default ;
      DnsList(const DnsList &) = default ;
      DnsList(DnsList &&) = default ;
      DnsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsList() = default ;
      DnsList& operator=(const DnsList &) = default ;
      DnsList& operator=(DnsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dns_ == nullptr; };
      // dns Field Functions 
      bool hasDns() const { return this->dns_ != nullptr;};
      void deleteDns() { this->dns_ = nullptr;};
      inline const vector<string> & getDns() const { DARABONBA_PTR_GET_CONST(dns_, vector<string>) };
      inline vector<string> getDns() { DARABONBA_PTR_GET(dns_, vector<string>) };
      inline DnsList& setDns(const vector<string> & dns) { DARABONBA_PTR_SET_VALUE(dns_, dns) };
      inline DnsList& setDns(vector<string> && dns) { DARABONBA_PTR_SET_RVALUE(dns_, dns) };


    protected:
      shared_ptr<vector<string>> dns_ {};
    };

    virtual bool empty() const override { return this->dnsList_ == nullptr
        && this->domainGroupId_ == nullptr && this->domainGroupName_ == nullptr && this->domainName_ == nullptr && this->domainNameProxyService_ == nullptr && this->domainNameVerificationStatus_ == nullptr
        && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->email_ == nullptr && this->emailVerificationClientHold_ == nullptr && this->emailVerificationStatus_ == nullptr
        && this->expirationCurrDateDiff_ == nullptr && this->expirationDate_ == nullptr && this->expirationDateLong_ == nullptr && this->expirationDateStatus_ == nullptr && this->instanceId_ == nullptr
        && this->premium_ == nullptr && this->realNameStatus_ == nullptr && this->registrantName_ == nullptr && this->registrantOrganization_ == nullptr && this->registrantType_ == nullptr
        && this->registrantUpdatingStatus_ == nullptr && this->registrationDate_ == nullptr && this->registrationDateLong_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->transferOutStatus_ == nullptr && this->transferProhibitionLock_ == nullptr && this->updateProhibitionLock_ == nullptr
        && this->userId_ == nullptr && this->zhRegistrantName_ == nullptr && this->zhRegistrantOrganization_ == nullptr; };
    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const QueryDomainByDomainNameResponseBody::DnsList & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, QueryDomainByDomainNameResponseBody::DnsList) };
    inline QueryDomainByDomainNameResponseBody::DnsList getDnsList() { DARABONBA_PTR_GET(dnsList_, QueryDomainByDomainNameResponseBody::DnsList) };
    inline QueryDomainByDomainNameResponseBody& setDnsList(const QueryDomainByDomainNameResponseBody::DnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline QueryDomainByDomainNameResponseBody& setDnsList(QueryDomainByDomainNameResponseBody::DnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline int64_t getDomainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, 0L) };
    inline QueryDomainByDomainNameResponseBody& setDomainGroupId(int64_t domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainGroupName Field Functions 
    bool hasDomainGroupName() const { return this->domainGroupName_ != nullptr;};
    void deleteDomainGroupName() { this->domainGroupName_ = nullptr;};
    inline string getDomainGroupName() const { DARABONBA_PTR_GET_DEFAULT(domainGroupName_, "") };
    inline QueryDomainByDomainNameResponseBody& setDomainGroupName(string domainGroupName) { DARABONBA_PTR_SET_VALUE(domainGroupName_, domainGroupName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainByDomainNameResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameProxyService Field Functions 
    bool hasDomainNameProxyService() const { return this->domainNameProxyService_ != nullptr;};
    void deleteDomainNameProxyService() { this->domainNameProxyService_ = nullptr;};
    inline bool getDomainNameProxyService() const { DARABONBA_PTR_GET_DEFAULT(domainNameProxyService_, false) };
    inline QueryDomainByDomainNameResponseBody& setDomainNameProxyService(bool domainNameProxyService) { DARABONBA_PTR_SET_VALUE(domainNameProxyService_, domainNameProxyService) };


    // domainNameVerificationStatus Field Functions 
    bool hasDomainNameVerificationStatus() const { return this->domainNameVerificationStatus_ != nullptr;};
    void deleteDomainNameVerificationStatus() { this->domainNameVerificationStatus_ = nullptr;};
    inline string getDomainNameVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(domainNameVerificationStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setDomainNameVerificationStatus(string domainNameVerificationStatus) { DARABONBA_PTR_SET_VALUE(domainNameVerificationStatus_, domainNameVerificationStatus) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryDomainByDomainNameResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryDomainByDomainNameResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerificationClientHold Field Functions 
    bool hasEmailVerificationClientHold() const { return this->emailVerificationClientHold_ != nullptr;};
    void deleteEmailVerificationClientHold() { this->emailVerificationClientHold_ = nullptr;};
    inline bool getEmailVerificationClientHold() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationClientHold_, false) };
    inline QueryDomainByDomainNameResponseBody& setEmailVerificationClientHold(bool emailVerificationClientHold) { DARABONBA_PTR_SET_VALUE(emailVerificationClientHold_, emailVerificationClientHold) };


    // emailVerificationStatus Field Functions 
    bool hasEmailVerificationStatus() const { return this->emailVerificationStatus_ != nullptr;};
    void deleteEmailVerificationStatus() { this->emailVerificationStatus_ = nullptr;};
    inline int32_t getEmailVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationStatus_, 0) };
    inline QueryDomainByDomainNameResponseBody& setEmailVerificationStatus(int32_t emailVerificationStatus) { DARABONBA_PTR_SET_VALUE(emailVerificationStatus_, emailVerificationStatus) };


    // expirationCurrDateDiff Field Functions 
    bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
    void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
    inline int32_t getExpirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
    inline QueryDomainByDomainNameResponseBody& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryDomainByDomainNameResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // expirationDateLong Field Functions 
    bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
    void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
    inline int64_t getExpirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
    inline QueryDomainByDomainNameResponseBody& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


    // expirationDateStatus Field Functions 
    bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
    void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
    inline string getExpirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDomainByDomainNameResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline QueryDomainByDomainNameResponseBody& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // realNameStatus Field Functions 
    bool hasRealNameStatus() const { return this->realNameStatus_ != nullptr;};
    void deleteRealNameStatus() { this->realNameStatus_ = nullptr;};
    inline string getRealNameStatus() const { DARABONBA_PTR_GET_DEFAULT(realNameStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setRealNameStatus(string realNameStatus) { DARABONBA_PTR_SET_VALUE(realNameStatus_, realNameStatus) };


    // registrantName Field Functions 
    bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
    void deleteRegistrantName() { this->registrantName_ = nullptr;};
    inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
    inline QueryDomainByDomainNameResponseBody& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


    // registrantOrganization Field Functions 
    bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
    void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
    inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
    inline QueryDomainByDomainNameResponseBody& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


    // registrantType Field Functions 
    bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
    void deleteRegistrantType() { this->registrantType_ = nullptr;};
    inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
    inline QueryDomainByDomainNameResponseBody& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


    // registrantUpdatingStatus Field Functions 
    bool hasRegistrantUpdatingStatus() const { return this->registrantUpdatingStatus_ != nullptr;};
    void deleteRegistrantUpdatingStatus() { this->registrantUpdatingStatus_ = nullptr;};
    inline string getRegistrantUpdatingStatus() const { DARABONBA_PTR_GET_DEFAULT(registrantUpdatingStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setRegistrantUpdatingStatus(string registrantUpdatingStatus) { DARABONBA_PTR_SET_VALUE(registrantUpdatingStatus_, registrantUpdatingStatus) };


    // registrationDate Field Functions 
    bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
    void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
    inline string getRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
    inline QueryDomainByDomainNameResponseBody& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


    // registrationDateLong Field Functions 
    bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
    void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
    inline int64_t getRegistrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
    inline QueryDomainByDomainNameResponseBody& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryDomainByDomainNameResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainByDomainNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryDomainByDomainNameResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const QueryDomainByDomainNameResponseBody::Tag & getTag() const { DARABONBA_PTR_GET_CONST(tag_, QueryDomainByDomainNameResponseBody::Tag) };
    inline QueryDomainByDomainNameResponseBody::Tag getTag() { DARABONBA_PTR_GET(tag_, QueryDomainByDomainNameResponseBody::Tag) };
    inline QueryDomainByDomainNameResponseBody& setTag(const QueryDomainByDomainNameResponseBody::Tag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryDomainByDomainNameResponseBody& setTag(QueryDomainByDomainNameResponseBody::Tag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transferOutStatus Field Functions 
    bool hasTransferOutStatus() const { return this->transferOutStatus_ != nullptr;};
    void deleteTransferOutStatus() { this->transferOutStatus_ = nullptr;};
    inline string getTransferOutStatus() const { DARABONBA_PTR_GET_DEFAULT(transferOutStatus_, "") };
    inline QueryDomainByDomainNameResponseBody& setTransferOutStatus(string transferOutStatus) { DARABONBA_PTR_SET_VALUE(transferOutStatus_, transferOutStatus) };


    // transferProhibitionLock Field Functions 
    bool hasTransferProhibitionLock() const { return this->transferProhibitionLock_ != nullptr;};
    void deleteTransferProhibitionLock() { this->transferProhibitionLock_ = nullptr;};
    inline string getTransferProhibitionLock() const { DARABONBA_PTR_GET_DEFAULT(transferProhibitionLock_, "") };
    inline QueryDomainByDomainNameResponseBody& setTransferProhibitionLock(string transferProhibitionLock) { DARABONBA_PTR_SET_VALUE(transferProhibitionLock_, transferProhibitionLock) };


    // updateProhibitionLock Field Functions 
    bool hasUpdateProhibitionLock() const { return this->updateProhibitionLock_ != nullptr;};
    void deleteUpdateProhibitionLock() { this->updateProhibitionLock_ = nullptr;};
    inline string getUpdateProhibitionLock() const { DARABONBA_PTR_GET_DEFAULT(updateProhibitionLock_, "") };
    inline QueryDomainByDomainNameResponseBody& setUpdateProhibitionLock(string updateProhibitionLock) { DARABONBA_PTR_SET_VALUE(updateProhibitionLock_, updateProhibitionLock) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDomainByDomainNameResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // zhRegistrantName Field Functions 
    bool hasZhRegistrantName() const { return this->zhRegistrantName_ != nullptr;};
    void deleteZhRegistrantName() { this->zhRegistrantName_ = nullptr;};
    inline string getZhRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantName_, "") };
    inline QueryDomainByDomainNameResponseBody& setZhRegistrantName(string zhRegistrantName) { DARABONBA_PTR_SET_VALUE(zhRegistrantName_, zhRegistrantName) };


    // zhRegistrantOrganization Field Functions 
    bool hasZhRegistrantOrganization() const { return this->zhRegistrantOrganization_ != nullptr;};
    void deleteZhRegistrantOrganization() { this->zhRegistrantOrganization_ = nullptr;};
    inline string getZhRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(zhRegistrantOrganization_, "") };
    inline QueryDomainByDomainNameResponseBody& setZhRegistrantOrganization(string zhRegistrantOrganization) { DARABONBA_PTR_SET_VALUE(zhRegistrantOrganization_, zhRegistrantOrganization) };


  protected:
    // The Domain Name System (DNS) servers of the domain name.
    shared_ptr<QueryDomainByDomainNameResponseBody::DnsList> dnsList_ {};
    // The ID of the domain name group. You can call the [QueryDomainGroupList](https://help.aliyun.com/document_detail/69362.html) operation to query the ID of the domain name group.
    shared_ptr<int64_t> domainGroupId_ {};
    // The name of the domain name group.
    shared_ptr<string> domainGroupName_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // Indicates whether privacy protection is enabled for the domain name.
    shared_ptr<bool> domainNameProxyService_ {};
    // The status of name auditing for the domain name. Valid values:
    // 
    // *   **NONAUDIT**: The name auditing for the domain name is not performed.
    // *   **SUCCEED**: The name auditing for the domain name is successful.
    // *   **FAILED**: The name auditing for the domain name fails.
    // *   **AUDITING**: The name auditing for the domain name is in progress.
    shared_ptr<string> domainNameVerificationStatus_ {};
    // The status of the domain name. Valid values:
    // 
    // *   1: The domain name needs to be renewed.
    // *   2: The domain name needs to be redeemed.
    // *   3: The domain name is normal.
    shared_ptr<string> domainStatus_ {};
    // The type of the domain name. Valid values:
    // 
    // *   New gTLD
    // *   gTLD
    // *   ccTLD
    shared_ptr<string> domainType_ {};
    // The email address of the domain name registrant.
    shared_ptr<string> email_ {};
    // Indicates whether the domain name is in the ClientHold state.
    shared_ptr<bool> emailVerificationClientHold_ {};
    // Indicates whether the email address passes verification. Valid values:
    // 
    // *   **0**: The email address fails the verification.
    // *   **1**: The email address passes the verification.
    shared_ptr<int32_t> emailVerificationStatus_ {};
    // The number of days from the expiration date of the domain name to the current date.
    shared_ptr<int32_t> expirationCurrDateDiff_ {};
    // The expiration date.
    shared_ptr<string> expirationDate_ {};
    // The timestamp generated when the domain name expired.
    shared_ptr<int64_t> expirationDateLong_ {};
    // Indicates whether the domain name expires. Valid values:
    // 
    // *   **1**: The domain name does not expire.
    // *   **2**: The domain name expires.
    shared_ptr<string> expirationDateStatus_ {};
    // The instance ID of the domain name.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the domain name is a premium domain name.
    shared_ptr<bool> premium_ {};
    // The status of real-name verification for the domain name. Valid values:
    // 
    // *   **NONAUDIT**: The real-name verification is not performed.
    // *   **SUCCEED**: The real-name verification is successful.
    // *   **FAILED**: The real-name verification fails.
    // *   **AUDITING**: The real-name verification is in progress.
    shared_ptr<string> realNameStatus_ {};
    // The name of the contact.
    shared_ptr<string> registrantName_ {};
    // The registrant of the domain name.
    shared_ptr<string> registrantOrganization_ {};
    // The type of contact who registers the domain name. Valid values:
    // 
    // *   **1**: individual.
    // *   **2**: enterprise.
    shared_ptr<string> registrantType_ {};
    // The status of the information about the domain name registrant. Valid values:
    // 
    // *   **PENDING**: The information about the domain name registrant is being modified.
    // *   **NORMAL**: normal.
    shared_ptr<string> registrantUpdatingStatus_ {};
    // The time when the domain name was registered.
    shared_ptr<string> registrationDate_ {};
    // The timestamp generated when the domain name was registered.
    shared_ptr<int64_t> registrationDateLong_ {};
    // The remarks on the domain name.
    shared_ptr<string> remark_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<QueryDomainByDomainNameResponseBody::Tag> tag_ {};
    // The transfer status of the domain name. Valid values:
    // 
    // *   **NORMAL**: The domain name is normal.
    // *   **PENDING**: The domain name is being transferred out from Alibaba Cloud.
    shared_ptr<string> transferOutStatus_ {};
    // The status of the transfer lock for the domain name. Valid values:
    // 
    // *   **NONE_SETTING**: No transfer lock is configured.
    // *   **OPEN**: The transfer lock is enabled.
    // *   **CLOSE**: The transfer lock is disabled.
    shared_ptr<string> transferProhibitionLock_ {};
    // The status of the security lock for the domain name. Valid values:
    // 
    // *   **NONE_SETTING**: No security lock is configured.
    // *   **OPEN**: The security lock is enabled.
    // *   **CLOSE**: The security lock is disabled.
    shared_ptr<string> updateProhibitionLock_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The Chinese name of the domain name contact.
    shared_ptr<string> zhRegistrantName_ {};
    // The Chinese name of the domain name registrant.
    shared_ptr<string> zhRegistrantOrganization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
