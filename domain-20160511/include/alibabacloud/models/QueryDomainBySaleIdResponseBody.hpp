// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYSALEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYSALEIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryDomainBySaleIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainBySaleIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChineseContactPerson, chineseContactPerson_);
      DARABONBA_PTR_TO_JSON(ChineseHolder, chineseHolder_);
      DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_TO_JSON(DnsList, dnsList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainRegType, domainRegType_);
      DARABONBA_PTR_TO_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_TO_JSON(EnglishContactPerson, englishContactPerson_);
      DARABONBA_PTR_TO_JSON(EnglishHolder, englishHolder_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(HolderEmail, holderEmail_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SafetyLock, safetyLock_);
      DARABONBA_PTR_TO_JSON(SaleId, saleId_);
      DARABONBA_PTR_TO_JSON(TransferLock, transferLock_);
      DARABONBA_PTR_TO_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WhoisProtected, whoisProtected_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainBySaleIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChineseContactPerson, chineseContactPerson_);
      DARABONBA_PTR_FROM_JSON(ChineseHolder, chineseHolder_);
      DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_FROM_JSON(DnsList, dnsList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainRegType, domainRegType_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationClientHold, emailVerificationClientHold_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
      DARABONBA_PTR_FROM_JSON(EnglishContactPerson, englishContactPerson_);
      DARABONBA_PTR_FROM_JSON(EnglishHolder, englishHolder_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(HolderEmail, holderEmail_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SafetyLock, safetyLock_);
      DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
      DARABONBA_PTR_FROM_JSON(TransferLock, transferLock_);
      DARABONBA_PTR_FROM_JSON(TransferOutStatus, transferOutStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WhoisProtected, whoisProtected_);
    };
    QueryDomainBySaleIdResponseBody() = default ;
    QueryDomainBySaleIdResponseBody(const QueryDomainBySaleIdResponseBody &) = default ;
    QueryDomainBySaleIdResponseBody(QueryDomainBySaleIdResponseBody &&) = default ;
    QueryDomainBySaleIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainBySaleIdResponseBody() = default ;
    QueryDomainBySaleIdResponseBody& operator=(const QueryDomainBySaleIdResponseBody &) = default ;
    QueryDomainBySaleIdResponseBody& operator=(QueryDomainBySaleIdResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->chineseContactPerson_ == nullptr
        && this->chineseHolder_ == nullptr && this->creationDate_ == nullptr && this->dnsList_ == nullptr && this->domainName_ == nullptr && this->domainRegType_ == nullptr
        && this->emailVerificationClientHold_ == nullptr && this->emailVerificationStatus_ == nullptr && this->englishContactPerson_ == nullptr && this->englishHolder_ == nullptr && this->expirationDate_ == nullptr
        && this->holderEmail_ == nullptr && this->premium_ == nullptr && this->remark_ == nullptr && this->safetyLock_ == nullptr && this->saleId_ == nullptr
        && this->transferLock_ == nullptr && this->transferOutStatus_ == nullptr && this->userId_ == nullptr && this->whoisProtected_ == nullptr; };
    // chineseContactPerson Field Functions 
    bool hasChineseContactPerson() const { return this->chineseContactPerson_ != nullptr;};
    void deleteChineseContactPerson() { this->chineseContactPerson_ = nullptr;};
    inline string getChineseContactPerson() const { DARABONBA_PTR_GET_DEFAULT(chineseContactPerson_, "") };
    inline QueryDomainBySaleIdResponseBody& setChineseContactPerson(string chineseContactPerson) { DARABONBA_PTR_SET_VALUE(chineseContactPerson_, chineseContactPerson) };


    // chineseHolder Field Functions 
    bool hasChineseHolder() const { return this->chineseHolder_ != nullptr;};
    void deleteChineseHolder() { this->chineseHolder_ = nullptr;};
    inline string getChineseHolder() const { DARABONBA_PTR_GET_DEFAULT(chineseHolder_, "") };
    inline QueryDomainBySaleIdResponseBody& setChineseHolder(string chineseHolder) { DARABONBA_PTR_SET_VALUE(chineseHolder_, chineseHolder) };


    // creationDate Field Functions 
    bool hasCreationDate() const { return this->creationDate_ != nullptr;};
    void deleteCreationDate() { this->creationDate_ = nullptr;};
    inline string getCreationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
    inline QueryDomainBySaleIdResponseBody& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


    // dnsList Field Functions 
    bool hasDnsList() const { return this->dnsList_ != nullptr;};
    void deleteDnsList() { this->dnsList_ = nullptr;};
    inline const QueryDomainBySaleIdResponseBody::DnsList & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, QueryDomainBySaleIdResponseBody::DnsList) };
    inline QueryDomainBySaleIdResponseBody::DnsList getDnsList() { DARABONBA_PTR_GET(dnsList_, QueryDomainBySaleIdResponseBody::DnsList) };
    inline QueryDomainBySaleIdResponseBody& setDnsList(const QueryDomainBySaleIdResponseBody::DnsList & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
    inline QueryDomainBySaleIdResponseBody& setDnsList(QueryDomainBySaleIdResponseBody::DnsList && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainBySaleIdResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainRegType Field Functions 
    bool hasDomainRegType() const { return this->domainRegType_ != nullptr;};
    void deleteDomainRegType() { this->domainRegType_ = nullptr;};
    inline string getDomainRegType() const { DARABONBA_PTR_GET_DEFAULT(domainRegType_, "") };
    inline QueryDomainBySaleIdResponseBody& setDomainRegType(string domainRegType) { DARABONBA_PTR_SET_VALUE(domainRegType_, domainRegType) };


    // emailVerificationClientHold Field Functions 
    bool hasEmailVerificationClientHold() const { return this->emailVerificationClientHold_ != nullptr;};
    void deleteEmailVerificationClientHold() { this->emailVerificationClientHold_ = nullptr;};
    inline bool getEmailVerificationClientHold() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationClientHold_, false) };
    inline QueryDomainBySaleIdResponseBody& setEmailVerificationClientHold(bool emailVerificationClientHold) { DARABONBA_PTR_SET_VALUE(emailVerificationClientHold_, emailVerificationClientHold) };


    // emailVerificationStatus Field Functions 
    bool hasEmailVerificationStatus() const { return this->emailVerificationStatus_ != nullptr;};
    void deleteEmailVerificationStatus() { this->emailVerificationStatus_ = nullptr;};
    inline int32_t getEmailVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationStatus_, 0) };
    inline QueryDomainBySaleIdResponseBody& setEmailVerificationStatus(int32_t emailVerificationStatus) { DARABONBA_PTR_SET_VALUE(emailVerificationStatus_, emailVerificationStatus) };


    // englishContactPerson Field Functions 
    bool hasEnglishContactPerson() const { return this->englishContactPerson_ != nullptr;};
    void deleteEnglishContactPerson() { this->englishContactPerson_ = nullptr;};
    inline string getEnglishContactPerson() const { DARABONBA_PTR_GET_DEFAULT(englishContactPerson_, "") };
    inline QueryDomainBySaleIdResponseBody& setEnglishContactPerson(string englishContactPerson) { DARABONBA_PTR_SET_VALUE(englishContactPerson_, englishContactPerson) };


    // englishHolder Field Functions 
    bool hasEnglishHolder() const { return this->englishHolder_ != nullptr;};
    void deleteEnglishHolder() { this->englishHolder_ = nullptr;};
    inline string getEnglishHolder() const { DARABONBA_PTR_GET_DEFAULT(englishHolder_, "") };
    inline QueryDomainBySaleIdResponseBody& setEnglishHolder(string englishHolder) { DARABONBA_PTR_SET_VALUE(englishHolder_, englishHolder) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline QueryDomainBySaleIdResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // holderEmail Field Functions 
    bool hasHolderEmail() const { return this->holderEmail_ != nullptr;};
    void deleteHolderEmail() { this->holderEmail_ = nullptr;};
    inline string getHolderEmail() const { DARABONBA_PTR_GET_DEFAULT(holderEmail_, "") };
    inline QueryDomainBySaleIdResponseBody& setHolderEmail(string holderEmail) { DARABONBA_PTR_SET_VALUE(holderEmail_, holderEmail) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline QueryDomainBySaleIdResponseBody& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryDomainBySaleIdResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // safetyLock Field Functions 
    bool hasSafetyLock() const { return this->safetyLock_ != nullptr;};
    void deleteSafetyLock() { this->safetyLock_ = nullptr;};
    inline string getSafetyLock() const { DARABONBA_PTR_GET_DEFAULT(safetyLock_, "") };
    inline QueryDomainBySaleIdResponseBody& setSafetyLock(string safetyLock) { DARABONBA_PTR_SET_VALUE(safetyLock_, safetyLock) };


    // saleId Field Functions 
    bool hasSaleId() const { return this->saleId_ != nullptr;};
    void deleteSaleId() { this->saleId_ = nullptr;};
    inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
    inline QueryDomainBySaleIdResponseBody& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


    // transferLock Field Functions 
    bool hasTransferLock() const { return this->transferLock_ != nullptr;};
    void deleteTransferLock() { this->transferLock_ = nullptr;};
    inline string getTransferLock() const { DARABONBA_PTR_GET_DEFAULT(transferLock_, "") };
    inline QueryDomainBySaleIdResponseBody& setTransferLock(string transferLock) { DARABONBA_PTR_SET_VALUE(transferLock_, transferLock) };


    // transferOutStatus Field Functions 
    bool hasTransferOutStatus() const { return this->transferOutStatus_ != nullptr;};
    void deleteTransferOutStatus() { this->transferOutStatus_ = nullptr;};
    inline string getTransferOutStatus() const { DARABONBA_PTR_GET_DEFAULT(transferOutStatus_, "") };
    inline QueryDomainBySaleIdResponseBody& setTransferOutStatus(string transferOutStatus) { DARABONBA_PTR_SET_VALUE(transferOutStatus_, transferOutStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDomainBySaleIdResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // whoisProtected Field Functions 
    bool hasWhoisProtected() const { return this->whoisProtected_ != nullptr;};
    void deleteWhoisProtected() { this->whoisProtected_ = nullptr;};
    inline bool getWhoisProtected() const { DARABONBA_PTR_GET_DEFAULT(whoisProtected_, false) };
    inline QueryDomainBySaleIdResponseBody& setWhoisProtected(bool whoisProtected) { DARABONBA_PTR_SET_VALUE(whoisProtected_, whoisProtected) };


  protected:
    shared_ptr<string> chineseContactPerson_ {};
    shared_ptr<string> chineseHolder_ {};
    shared_ptr<string> creationDate_ {};
    shared_ptr<QueryDomainBySaleIdResponseBody::DnsList> dnsList_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> domainRegType_ {};
    shared_ptr<bool> emailVerificationClientHold_ {};
    shared_ptr<int32_t> emailVerificationStatus_ {};
    shared_ptr<string> englishContactPerson_ {};
    shared_ptr<string> englishHolder_ {};
    shared_ptr<string> expirationDate_ {};
    shared_ptr<string> holderEmail_ {};
    shared_ptr<bool> premium_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> safetyLock_ {};
    shared_ptr<string> saleId_ {};
    shared_ptr<string> transferLock_ {};
    shared_ptr<string> transferOutStatus_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<bool> whoisProtected_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
