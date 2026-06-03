// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYDOMAINNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class QueryDomainByDomainNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByDomainNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameProxyService, domainNameProxyService_);
      DARABONBA_PTR_TO_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_TO_JSON(RegistrantUpdatingStatus, registrantUpdatingStatus_);
      DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_TO_JSON(TransferProhibitionLock, transferProhibitionLock_);
      DARABONBA_PTR_TO_JSON(UpdateProhibitionLock, updateProhibitionLock_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByDomainNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameProxyService, domainNameProxyService_);
      DARABONBA_PTR_FROM_JSON(DomainNameVerificationStatus, domainNameVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(RealNameStatus, realNameStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
      DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
      DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
      DARABONBA_PTR_FROM_JSON(RegistrantUpdatingStatus, registrantUpdatingStatus_);
      DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
      DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_FROM_JSON(TransferProhibitionLock, transferProhibitionLock_);
      DARABONBA_PTR_FROM_JSON(UpdateProhibitionLock, updateProhibitionLock_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        && this->domainName_ == nullptr && this->domainNameProxyService_ == nullptr && this->domainNameVerificationStatus_ == nullptr && this->email_ == nullptr && this->emailVerificationClientHold_ == nullptr
        && this->emailVerificationStatus_ == nullptr && this->expirationDate_ == nullptr && this->expirationDateLong_ == nullptr && this->instanceId_ == nullptr && this->premium_ == nullptr
        && this->realNameStatus_ == nullptr && this->registrantName_ == nullptr && this->registrantOrganization_ == nullptr && this->registrantType_ == nullptr && this->registrantUpdatingStatus_ == nullptr
        && this->registrationDate_ == nullptr && this->registrationDateLong_ == nullptr && this->requestId_ == nullptr && this->transferOutStatus_ == nullptr && this->transferProhibitionLock_ == nullptr
        && this->updateProhibitionLock_ == nullptr && this->userId_ == nullptr; };
    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const QueryDomainByDomainNameResponseBody::DnsList & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, QueryDomainByDomainNameResponseBody::DnsList) };
    inline QueryDomainByDomainNameResponseBody::DnsList getDnsList() { DARABONBA_PTR_GET(dnsList_, QueryDomainByDomainNameResponseBody::DnsList) };
    inline QueryDomainByDomainNameResponseBody& setDnsList(const QueryDomainByDomainNameResponseBody::DnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline QueryDomainByDomainNameResponseBody& setDnsList(QueryDomainByDomainNameResponseBody::DnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


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


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainByDomainNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


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


  protected:
    shared_ptr<QueryDomainByDomainNameResponseBody::DnsList> dnsList_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> domainNameProxyService_ {};
    shared_ptr<string> domainNameVerificationStatus_ {};
    shared_ptr<string> email_ {};
    shared_ptr<bool> emailVerificationClientHold_ {};
    shared_ptr<int32_t> emailVerificationStatus_ {};
    shared_ptr<string> expirationDate_ {};
    shared_ptr<int64_t> expirationDateLong_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> premium_ {};
    shared_ptr<string> realNameStatus_ {};
    shared_ptr<string> registrantName_ {};
    shared_ptr<string> registrantOrganization_ {};
    shared_ptr<string> registrantType_ {};
    shared_ptr<string> registrantUpdatingStatus_ {};
    shared_ptr<string> registrationDate_ {};
    shared_ptr<int64_t> registrationDateLong_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> transferOutStatus_ {};
    shared_ptr<string> transferProhibitionLock_ {};
    shared_ptr<string> updateProhibitionLock_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
