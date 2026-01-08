// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITREQUESTBYTYPEUNAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITREQUESTBYTYPEUNAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetAuditRequestByTypeUnAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditRequestByTypeUnAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditRequestByTypeUnAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAuditRequestByTypeUnAuditResponseBody() = default ;
    GetAuditRequestByTypeUnAuditResponseBody(const GetAuditRequestByTypeUnAuditResponseBody &) = default ;
    GetAuditRequestByTypeUnAuditResponseBody(GetAuditRequestByTypeUnAuditResponseBody &&) = default ;
    GetAuditRequestByTypeUnAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditRequestByTypeUnAuditResponseBody() = default ;
    GetAuditRequestByTypeUnAuditResponseBody& operator=(const GetAuditRequestByTypeUnAuditResponseBody &) = default ;
    GetAuditRequestByTypeUnAuditResponseBody& operator=(GetAuditRequestByTypeUnAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AuditRecord, auditRecord_);
        DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModifier, gmtModifier_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaapServiceNo, maapServiceNo_);
        DARABONBA_PTR_TO_JSON(Modifier, modifier_);
        DARABONBA_PTR_TO_JSON(RequestNo, requestNo_);
        DARABONBA_PTR_TO_JSON(RequestType, requestType_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(SubscriberCode, subscriberCode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AuditRecord, auditRecord_);
        DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModifier, gmtModifier_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaapServiceNo, maapServiceNo_);
        DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
        DARABONBA_PTR_FROM_JSON(RequestNo, requestNo_);
        DARABONBA_PTR_FROM_JSON(RequestType, requestType_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(SubscriberCode, subscriberCode_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuditRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuditRecord& obj) { 
          DARABONBA_PTR_TO_JSON(AgeLimit, ageLimit_);
          DARABONBA_PTR_TO_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_TO_JSON(BusinessAccountName, businessAccountName_);
          DARABONBA_PTR_TO_JSON(CompanyAddress, companyAddress_);
          DARABONBA_PTR_TO_JSON(CompanyEnglishName, companyEnglishName_);
          DARABONBA_PTR_TO_JSON(CompanyLegalName, companyLegalName_);
          DARABONBA_PTR_TO_JSON(CompanyLegalPerson, companyLegalPerson_);
          DARABONBA_PTR_TO_JSON(CompanyProfile, companyProfile_);
          DARABONBA_PTR_TO_JSON(CompanyRegisteredCountry, companyRegisteredCountry_);
          DARABONBA_PTR_TO_JSON(CompanyTel, companyTel_);
          DARABONBA_PTR_TO_JSON(ContactMail, contactMail_);
          DARABONBA_PTR_TO_JSON(EnableAutoReply, enableAutoReply_);
          DARABONBA_PTR_TO_JSON(IndustryDescription, industryDescription_);
          DARABONBA_PTR_TO_JSON(IndustryInvolved, industryInvolved_);
          DARABONBA_PTR_TO_JSON(LetterGuarantee, letterGuarantee_);
          DARABONBA_PTR_TO_JSON(Logo, logo_);
          DARABONBA_PTR_TO_JSON(MessageDestinationCountry, messageDestinationCountry_);
          DARABONBA_PTR_TO_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
          DARABONBA_PTR_TO_JSON(MessageDialogueIntroduction, messageDialogueIntroduction_);
          DARABONBA_PTR_TO_JSON(MessageEnableDate, messageEnableDate_);
          DARABONBA_PTR_TO_JSON(MessageSessionName, messageSessionName_);
          DARABONBA_PTR_TO_JSON(NowRecovery, nowRecovery_);
          DARABONBA_PTR_TO_JSON(RecoveryDate, recoveryDate_);
          DARABONBA_PTR_TO_JSON(ReplyContent, replyContent_);
          DARABONBA_PTR_TO_JSON(SuspensionDate, suspensionDate_);
          DARABONBA_PTR_TO_JSON(WebAddress, webAddress_);
        };
        friend void from_json(const Darabonba::Json& j, AuditRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(AgeLimit, ageLimit_);
          DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
          DARABONBA_PTR_FROM_JSON(BusinessAccountName, businessAccountName_);
          DARABONBA_PTR_FROM_JSON(CompanyAddress, companyAddress_);
          DARABONBA_PTR_FROM_JSON(CompanyEnglishName, companyEnglishName_);
          DARABONBA_PTR_FROM_JSON(CompanyLegalName, companyLegalName_);
          DARABONBA_PTR_FROM_JSON(CompanyLegalPerson, companyLegalPerson_);
          DARABONBA_PTR_FROM_JSON(CompanyProfile, companyProfile_);
          DARABONBA_PTR_FROM_JSON(CompanyRegisteredCountry, companyRegisteredCountry_);
          DARABONBA_PTR_FROM_JSON(CompanyTel, companyTel_);
          DARABONBA_PTR_FROM_JSON(ContactMail, contactMail_);
          DARABONBA_PTR_FROM_JSON(EnableAutoReply, enableAutoReply_);
          DARABONBA_PTR_FROM_JSON(IndustryDescription, industryDescription_);
          DARABONBA_PTR_FROM_JSON(IndustryInvolved, industryInvolved_);
          DARABONBA_PTR_FROM_JSON(LetterGuarantee, letterGuarantee_);
          DARABONBA_PTR_FROM_JSON(Logo, logo_);
          DARABONBA_PTR_FROM_JSON(MessageDestinationCountry, messageDestinationCountry_);
          DARABONBA_PTR_FROM_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
          DARABONBA_PTR_FROM_JSON(MessageDialogueIntroduction, messageDialogueIntroduction_);
          DARABONBA_PTR_FROM_JSON(MessageEnableDate, messageEnableDate_);
          DARABONBA_PTR_FROM_JSON(MessageSessionName, messageSessionName_);
          DARABONBA_PTR_FROM_JSON(NowRecovery, nowRecovery_);
          DARABONBA_PTR_FROM_JSON(RecoveryDate, recoveryDate_);
          DARABONBA_PTR_FROM_JSON(ReplyContent, replyContent_);
          DARABONBA_PTR_FROM_JSON(SuspensionDate, suspensionDate_);
          DARABONBA_PTR_FROM_JSON(WebAddress, webAddress_);
        };
        AuditRecord() = default ;
        AuditRecord(const AuditRecord &) = default ;
        AuditRecord(AuditRecord &&) = default ;
        AuditRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuditRecord() = default ;
        AuditRecord& operator=(const AuditRecord &) = default ;
        AuditRecord& operator=(AuditRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CompanyTel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CompanyTel& obj) { 
            DARABONBA_PTR_TO_JSON(CompanyTelNumber, companyTelNumber_);
            DARABONBA_PTR_TO_JSON(CompanyTelTitle, companyTelTitle_);
          };
          friend void from_json(const Darabonba::Json& j, CompanyTel& obj) { 
            DARABONBA_PTR_FROM_JSON(CompanyTelNumber, companyTelNumber_);
            DARABONBA_PTR_FROM_JSON(CompanyTelTitle, companyTelTitle_);
          };
          CompanyTel() = default ;
          CompanyTel(const CompanyTel &) = default ;
          CompanyTel(CompanyTel &&) = default ;
          CompanyTel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CompanyTel() = default ;
          CompanyTel& operator=(const CompanyTel &) = default ;
          CompanyTel& operator=(CompanyTel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->companyTelNumber_ == nullptr
        && this->companyTelTitle_ == nullptr; };
          // companyTelNumber Field Functions 
          bool hasCompanyTelNumber() const { return this->companyTelNumber_ != nullptr;};
          void deleteCompanyTelNumber() { this->companyTelNumber_ = nullptr;};
          inline string getCompanyTelNumber() const { DARABONBA_PTR_GET_DEFAULT(companyTelNumber_, "") };
          inline CompanyTel& setCompanyTelNumber(string companyTelNumber) { DARABONBA_PTR_SET_VALUE(companyTelNumber_, companyTelNumber) };


          // companyTelTitle Field Functions 
          bool hasCompanyTelTitle() const { return this->companyTelTitle_ != nullptr;};
          void deleteCompanyTelTitle() { this->companyTelTitle_ = nullptr;};
          inline string getCompanyTelTitle() const { DARABONBA_PTR_GET_DEFAULT(companyTelTitle_, "") };
          inline CompanyTel& setCompanyTelTitle(string companyTelTitle) { DARABONBA_PTR_SET_VALUE(companyTelTitle_, companyTelTitle) };


        protected:
          shared_ptr<string> companyTelNumber_ {};
          shared_ptr<string> companyTelTitle_ {};
        };

        class CompanyAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CompanyAddress& obj) { 
            DARABONBA_PTR_TO_JSON(CompanyAddress, companyAddress_);
            DARABONBA_PTR_TO_JSON(CompanyAddressTitle, companyAddressTitle_);
          };
          friend void from_json(const Darabonba::Json& j, CompanyAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(CompanyAddress, companyAddress_);
            DARABONBA_PTR_FROM_JSON(CompanyAddressTitle, companyAddressTitle_);
          };
          CompanyAddress() = default ;
          CompanyAddress(const CompanyAddress &) = default ;
          CompanyAddress(CompanyAddress &&) = default ;
          CompanyAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CompanyAddress() = default ;
          CompanyAddress& operator=(const CompanyAddress &) = default ;
          CompanyAddress& operator=(CompanyAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->companyAddress_ == nullptr
        && this->companyAddressTitle_ == nullptr; };
          // companyAddress Field Functions 
          bool hasCompanyAddress() const { return this->companyAddress_ != nullptr;};
          void deleteCompanyAddress() { this->companyAddress_ = nullptr;};
          inline string getCompanyAddress() const { DARABONBA_PTR_GET_DEFAULT(companyAddress_, "") };
          inline CompanyAddress& setCompanyAddress(string companyAddress) { DARABONBA_PTR_SET_VALUE(companyAddress_, companyAddress) };


          // companyAddressTitle Field Functions 
          bool hasCompanyAddressTitle() const { return this->companyAddressTitle_ != nullptr;};
          void deleteCompanyAddressTitle() { this->companyAddressTitle_ = nullptr;};
          inline string getCompanyAddressTitle() const { DARABONBA_PTR_GET_DEFAULT(companyAddressTitle_, "") };
          inline CompanyAddress& setCompanyAddressTitle(string companyAddressTitle) { DARABONBA_PTR_SET_VALUE(companyAddressTitle_, companyAddressTitle) };


        protected:
          shared_ptr<string> companyAddress_ {};
          shared_ptr<string> companyAddressTitle_ {};
        };

        virtual bool empty() const override { return this->ageLimit_ == nullptr
        && this->applyReason_ == nullptr && this->businessAccountName_ == nullptr && this->companyAddress_ == nullptr && this->companyEnglishName_ == nullptr && this->companyLegalName_ == nullptr
        && this->companyLegalPerson_ == nullptr && this->companyProfile_ == nullptr && this->companyRegisteredCountry_ == nullptr && this->companyTel_ == nullptr && this->contactMail_ == nullptr
        && this->enableAutoReply_ == nullptr && this->industryDescription_ == nullptr && this->industryInvolved_ == nullptr && this->letterGuarantee_ == nullptr && this->logo_ == nullptr
        && this->messageDestinationCountry_ == nullptr && this->messageDestinationInternationalCountry_ == nullptr && this->messageDialogueIntroduction_ == nullptr && this->messageEnableDate_ == nullptr && this->messageSessionName_ == nullptr
        && this->nowRecovery_ == nullptr && this->recoveryDate_ == nullptr && this->replyContent_ == nullptr && this->suspensionDate_ == nullptr && this->webAddress_ == nullptr; };
        // ageLimit Field Functions 
        bool hasAgeLimit() const { return this->ageLimit_ != nullptr;};
        void deleteAgeLimit() { this->ageLimit_ = nullptr;};
        inline string getAgeLimit() const { DARABONBA_PTR_GET_DEFAULT(ageLimit_, "") };
        inline AuditRecord& setAgeLimit(string ageLimit) { DARABONBA_PTR_SET_VALUE(ageLimit_, ageLimit) };


        // applyReason Field Functions 
        bool hasApplyReason() const { return this->applyReason_ != nullptr;};
        void deleteApplyReason() { this->applyReason_ = nullptr;};
        inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
        inline AuditRecord& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


        // businessAccountName Field Functions 
        bool hasBusinessAccountName() const { return this->businessAccountName_ != nullptr;};
        void deleteBusinessAccountName() { this->businessAccountName_ = nullptr;};
        inline string getBusinessAccountName() const { DARABONBA_PTR_GET_DEFAULT(businessAccountName_, "") };
        inline AuditRecord& setBusinessAccountName(string businessAccountName) { DARABONBA_PTR_SET_VALUE(businessAccountName_, businessAccountName) };


        // companyAddress Field Functions 
        bool hasCompanyAddress() const { return this->companyAddress_ != nullptr;};
        void deleteCompanyAddress() { this->companyAddress_ = nullptr;};
        inline const vector<AuditRecord::CompanyAddress> & getCompanyAddress() const { DARABONBA_PTR_GET_CONST(companyAddress_, vector<AuditRecord::CompanyAddress>) };
        inline vector<AuditRecord::CompanyAddress> getCompanyAddress() { DARABONBA_PTR_GET(companyAddress_, vector<AuditRecord::CompanyAddress>) };
        inline AuditRecord& setCompanyAddress(const vector<AuditRecord::CompanyAddress> & companyAddress) { DARABONBA_PTR_SET_VALUE(companyAddress_, companyAddress) };
        inline AuditRecord& setCompanyAddress(vector<AuditRecord::CompanyAddress> && companyAddress) { DARABONBA_PTR_SET_RVALUE(companyAddress_, companyAddress) };


        // companyEnglishName Field Functions 
        bool hasCompanyEnglishName() const { return this->companyEnglishName_ != nullptr;};
        void deleteCompanyEnglishName() { this->companyEnglishName_ = nullptr;};
        inline string getCompanyEnglishName() const { DARABONBA_PTR_GET_DEFAULT(companyEnglishName_, "") };
        inline AuditRecord& setCompanyEnglishName(string companyEnglishName) { DARABONBA_PTR_SET_VALUE(companyEnglishName_, companyEnglishName) };


        // companyLegalName Field Functions 
        bool hasCompanyLegalName() const { return this->companyLegalName_ != nullptr;};
        void deleteCompanyLegalName() { this->companyLegalName_ = nullptr;};
        inline string getCompanyLegalName() const { DARABONBA_PTR_GET_DEFAULT(companyLegalName_, "") };
        inline AuditRecord& setCompanyLegalName(string companyLegalName) { DARABONBA_PTR_SET_VALUE(companyLegalName_, companyLegalName) };


        // companyLegalPerson Field Functions 
        bool hasCompanyLegalPerson() const { return this->companyLegalPerson_ != nullptr;};
        void deleteCompanyLegalPerson() { this->companyLegalPerson_ = nullptr;};
        inline string getCompanyLegalPerson() const { DARABONBA_PTR_GET_DEFAULT(companyLegalPerson_, "") };
        inline AuditRecord& setCompanyLegalPerson(string companyLegalPerson) { DARABONBA_PTR_SET_VALUE(companyLegalPerson_, companyLegalPerson) };


        // companyProfile Field Functions 
        bool hasCompanyProfile() const { return this->companyProfile_ != nullptr;};
        void deleteCompanyProfile() { this->companyProfile_ = nullptr;};
        inline string getCompanyProfile() const { DARABONBA_PTR_GET_DEFAULT(companyProfile_, "") };
        inline AuditRecord& setCompanyProfile(string companyProfile) { DARABONBA_PTR_SET_VALUE(companyProfile_, companyProfile) };


        // companyRegisteredCountry Field Functions 
        bool hasCompanyRegisteredCountry() const { return this->companyRegisteredCountry_ != nullptr;};
        void deleteCompanyRegisteredCountry() { this->companyRegisteredCountry_ = nullptr;};
        inline const vector<string> & getCompanyRegisteredCountry() const { DARABONBA_PTR_GET_CONST(companyRegisteredCountry_, vector<string>) };
        inline vector<string> getCompanyRegisteredCountry() { DARABONBA_PTR_GET(companyRegisteredCountry_, vector<string>) };
        inline AuditRecord& setCompanyRegisteredCountry(const vector<string> & companyRegisteredCountry) { DARABONBA_PTR_SET_VALUE(companyRegisteredCountry_, companyRegisteredCountry) };
        inline AuditRecord& setCompanyRegisteredCountry(vector<string> && companyRegisteredCountry) { DARABONBA_PTR_SET_RVALUE(companyRegisteredCountry_, companyRegisteredCountry) };


        // companyTel Field Functions 
        bool hasCompanyTel() const { return this->companyTel_ != nullptr;};
        void deleteCompanyTel() { this->companyTel_ = nullptr;};
        inline const vector<AuditRecord::CompanyTel> & getCompanyTel() const { DARABONBA_PTR_GET_CONST(companyTel_, vector<AuditRecord::CompanyTel>) };
        inline vector<AuditRecord::CompanyTel> getCompanyTel() { DARABONBA_PTR_GET(companyTel_, vector<AuditRecord::CompanyTel>) };
        inline AuditRecord& setCompanyTel(const vector<AuditRecord::CompanyTel> & companyTel) { DARABONBA_PTR_SET_VALUE(companyTel_, companyTel) };
        inline AuditRecord& setCompanyTel(vector<AuditRecord::CompanyTel> && companyTel) { DARABONBA_PTR_SET_RVALUE(companyTel_, companyTel) };


        // contactMail Field Functions 
        bool hasContactMail() const { return this->contactMail_ != nullptr;};
        void deleteContactMail() { this->contactMail_ = nullptr;};
        inline string getContactMail() const { DARABONBA_PTR_GET_DEFAULT(contactMail_, "") };
        inline AuditRecord& setContactMail(string contactMail) { DARABONBA_PTR_SET_VALUE(contactMail_, contactMail) };


        // enableAutoReply Field Functions 
        bool hasEnableAutoReply() const { return this->enableAutoReply_ != nullptr;};
        void deleteEnableAutoReply() { this->enableAutoReply_ = nullptr;};
        inline string getEnableAutoReply() const { DARABONBA_PTR_GET_DEFAULT(enableAutoReply_, "") };
        inline AuditRecord& setEnableAutoReply(string enableAutoReply) { DARABONBA_PTR_SET_VALUE(enableAutoReply_, enableAutoReply) };


        // industryDescription Field Functions 
        bool hasIndustryDescription() const { return this->industryDescription_ != nullptr;};
        void deleteIndustryDescription() { this->industryDescription_ = nullptr;};
        inline string getIndustryDescription() const { DARABONBA_PTR_GET_DEFAULT(industryDescription_, "") };
        inline AuditRecord& setIndustryDescription(string industryDescription) { DARABONBA_PTR_SET_VALUE(industryDescription_, industryDescription) };


        // industryInvolved Field Functions 
        bool hasIndustryInvolved() const { return this->industryInvolved_ != nullptr;};
        void deleteIndustryInvolved() { this->industryInvolved_ = nullptr;};
        inline string getIndustryInvolved() const { DARABONBA_PTR_GET_DEFAULT(industryInvolved_, "") };
        inline AuditRecord& setIndustryInvolved(string industryInvolved) { DARABONBA_PTR_SET_VALUE(industryInvolved_, industryInvolved) };


        // letterGuarantee Field Functions 
        bool hasLetterGuarantee() const { return this->letterGuarantee_ != nullptr;};
        void deleteLetterGuarantee() { this->letterGuarantee_ = nullptr;};
        inline string getLetterGuarantee() const { DARABONBA_PTR_GET_DEFAULT(letterGuarantee_, "") };
        inline AuditRecord& setLetterGuarantee(string letterGuarantee) { DARABONBA_PTR_SET_VALUE(letterGuarantee_, letterGuarantee) };


        // logo Field Functions 
        bool hasLogo() const { return this->logo_ != nullptr;};
        void deleteLogo() { this->logo_ = nullptr;};
        inline const vector<string> & getLogo() const { DARABONBA_PTR_GET_CONST(logo_, vector<string>) };
        inline vector<string> getLogo() { DARABONBA_PTR_GET(logo_, vector<string>) };
        inline AuditRecord& setLogo(const vector<string> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
        inline AuditRecord& setLogo(vector<string> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


        // messageDestinationCountry Field Functions 
        bool hasMessageDestinationCountry() const { return this->messageDestinationCountry_ != nullptr;};
        void deleteMessageDestinationCountry() { this->messageDestinationCountry_ = nullptr;};
        inline const vector<string> & getMessageDestinationCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationCountry_, vector<string>) };
        inline vector<string> getMessageDestinationCountry() { DARABONBA_PTR_GET(messageDestinationCountry_, vector<string>) };
        inline AuditRecord& setMessageDestinationCountry(const vector<string> & messageDestinationCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationCountry_, messageDestinationCountry) };
        inline AuditRecord& setMessageDestinationCountry(vector<string> && messageDestinationCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationCountry_, messageDestinationCountry) };


        // messageDestinationInternationalCountry Field Functions 
        bool hasMessageDestinationInternationalCountry() const { return this->messageDestinationInternationalCountry_ != nullptr;};
        void deleteMessageDestinationInternationalCountry() { this->messageDestinationInternationalCountry_ = nullptr;};
        inline const vector<string> & getMessageDestinationInternationalCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationInternationalCountry_, vector<string>) };
        inline vector<string> getMessageDestinationInternationalCountry() { DARABONBA_PTR_GET(messageDestinationInternationalCountry_, vector<string>) };
        inline AuditRecord& setMessageDestinationInternationalCountry(const vector<string> & messageDestinationInternationalCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };
        inline AuditRecord& setMessageDestinationInternationalCountry(vector<string> && messageDestinationInternationalCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };


        // messageDialogueIntroduction Field Functions 
        bool hasMessageDialogueIntroduction() const { return this->messageDialogueIntroduction_ != nullptr;};
        void deleteMessageDialogueIntroduction() { this->messageDialogueIntroduction_ = nullptr;};
        inline string getMessageDialogueIntroduction() const { DARABONBA_PTR_GET_DEFAULT(messageDialogueIntroduction_, "") };
        inline AuditRecord& setMessageDialogueIntroduction(string messageDialogueIntroduction) { DARABONBA_PTR_SET_VALUE(messageDialogueIntroduction_, messageDialogueIntroduction) };


        // messageEnableDate Field Functions 
        bool hasMessageEnableDate() const { return this->messageEnableDate_ != nullptr;};
        void deleteMessageEnableDate() { this->messageEnableDate_ = nullptr;};
        inline string getMessageEnableDate() const { DARABONBA_PTR_GET_DEFAULT(messageEnableDate_, "") };
        inline AuditRecord& setMessageEnableDate(string messageEnableDate) { DARABONBA_PTR_SET_VALUE(messageEnableDate_, messageEnableDate) };


        // messageSessionName Field Functions 
        bool hasMessageSessionName() const { return this->messageSessionName_ != nullptr;};
        void deleteMessageSessionName() { this->messageSessionName_ = nullptr;};
        inline string getMessageSessionName() const { DARABONBA_PTR_GET_DEFAULT(messageSessionName_, "") };
        inline AuditRecord& setMessageSessionName(string messageSessionName) { DARABONBA_PTR_SET_VALUE(messageSessionName_, messageSessionName) };


        // nowRecovery Field Functions 
        bool hasNowRecovery() const { return this->nowRecovery_ != nullptr;};
        void deleteNowRecovery() { this->nowRecovery_ = nullptr;};
        inline string getNowRecovery() const { DARABONBA_PTR_GET_DEFAULT(nowRecovery_, "") };
        inline AuditRecord& setNowRecovery(string nowRecovery) { DARABONBA_PTR_SET_VALUE(nowRecovery_, nowRecovery) };


        // recoveryDate Field Functions 
        bool hasRecoveryDate() const { return this->recoveryDate_ != nullptr;};
        void deleteRecoveryDate() { this->recoveryDate_ = nullptr;};
        inline string getRecoveryDate() const { DARABONBA_PTR_GET_DEFAULT(recoveryDate_, "") };
        inline AuditRecord& setRecoveryDate(string recoveryDate) { DARABONBA_PTR_SET_VALUE(recoveryDate_, recoveryDate) };


        // replyContent Field Functions 
        bool hasReplyContent() const { return this->replyContent_ != nullptr;};
        void deleteReplyContent() { this->replyContent_ = nullptr;};
        inline string getReplyContent() const { DARABONBA_PTR_GET_DEFAULT(replyContent_, "") };
        inline AuditRecord& setReplyContent(string replyContent) { DARABONBA_PTR_SET_VALUE(replyContent_, replyContent) };


        // suspensionDate Field Functions 
        bool hasSuspensionDate() const { return this->suspensionDate_ != nullptr;};
        void deleteSuspensionDate() { this->suspensionDate_ = nullptr;};
        inline string getSuspensionDate() const { DARABONBA_PTR_GET_DEFAULT(suspensionDate_, "") };
        inline AuditRecord& setSuspensionDate(string suspensionDate) { DARABONBA_PTR_SET_VALUE(suspensionDate_, suspensionDate) };


        // webAddress Field Functions 
        bool hasWebAddress() const { return this->webAddress_ != nullptr;};
        void deleteWebAddress() { this->webAddress_ = nullptr;};
        inline string getWebAddress() const { DARABONBA_PTR_GET_DEFAULT(webAddress_, "") };
        inline AuditRecord& setWebAddress(string webAddress) { DARABONBA_PTR_SET_VALUE(webAddress_, webAddress) };


      protected:
        shared_ptr<string> ageLimit_ {};
        shared_ptr<string> applyReason_ {};
        shared_ptr<string> businessAccountName_ {};
        shared_ptr<vector<AuditRecord::CompanyAddress>> companyAddress_ {};
        shared_ptr<string> companyEnglishName_ {};
        shared_ptr<string> companyLegalName_ {};
        shared_ptr<string> companyLegalPerson_ {};
        shared_ptr<string> companyProfile_ {};
        shared_ptr<vector<string>> companyRegisteredCountry_ {};
        shared_ptr<vector<AuditRecord::CompanyTel>> companyTel_ {};
        shared_ptr<string> contactMail_ {};
        shared_ptr<string> enableAutoReply_ {};
        shared_ptr<string> industryDescription_ {};
        shared_ptr<string> industryInvolved_ {};
        shared_ptr<string> letterGuarantee_ {};
        shared_ptr<vector<string>> logo_ {};
        shared_ptr<vector<string>> messageDestinationCountry_ {};
        shared_ptr<vector<string>> messageDestinationInternationalCountry_ {};
        shared_ptr<string> messageDialogueIntroduction_ {};
        shared_ptr<string> messageEnableDate_ {};
        shared_ptr<string> messageSessionName_ {};
        shared_ptr<string> nowRecovery_ {};
        shared_ptr<string> recoveryDate_ {};
        shared_ptr<string> replyContent_ {};
        // SuspensionDate
        shared_ptr<string> suspensionDate_ {};
        shared_ptr<string> webAddress_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->auditRecord_ == nullptr && this->auditResult_ == nullptr && this->auditTime_ == nullptr && this->creator_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModifier_ == nullptr && this->id_ == nullptr && this->maapServiceNo_ == nullptr && this->modifier_ == nullptr && this->requestNo_ == nullptr
        && this->requestType_ == nullptr && this->state_ == nullptr && this->subscriberCode_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline Data& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // auditRecord Field Functions 
      bool hasAuditRecord() const { return this->auditRecord_ != nullptr;};
      void deleteAuditRecord() { this->auditRecord_ = nullptr;};
      inline const Data::AuditRecord & getAuditRecord() const { DARABONBA_PTR_GET_CONST(auditRecord_, Data::AuditRecord) };
      inline Data::AuditRecord getAuditRecord() { DARABONBA_PTR_GET(auditRecord_, Data::AuditRecord) };
      inline Data& setAuditRecord(const Data::AuditRecord & auditRecord) { DARABONBA_PTR_SET_VALUE(auditRecord_, auditRecord) };
      inline Data& setAuditRecord(Data::AuditRecord && auditRecord) { DARABONBA_PTR_SET_RVALUE(auditRecord_, auditRecord) };


      // auditResult Field Functions 
      bool hasAuditResult() const { return this->auditResult_ != nullptr;};
      void deleteAuditResult() { this->auditResult_ = nullptr;};
      inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
      inline Data& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


      // auditTime Field Functions 
      bool hasAuditTime() const { return this->auditTime_ != nullptr;};
      void deleteAuditTime() { this->auditTime_ = nullptr;};
      inline string getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
      inline Data& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModifier Field Functions 
      bool hasGmtModifier() const { return this->gmtModifier_ != nullptr;};
      void deleteGmtModifier() { this->gmtModifier_ = nullptr;};
      inline string getGmtModifier() const { DARABONBA_PTR_GET_DEFAULT(gmtModifier_, "") };
      inline Data& setGmtModifier(string gmtModifier) { DARABONBA_PTR_SET_VALUE(gmtModifier_, gmtModifier) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maapServiceNo Field Functions 
      bool hasMaapServiceNo() const { return this->maapServiceNo_ != nullptr;};
      void deleteMaapServiceNo() { this->maapServiceNo_ = nullptr;};
      inline string getMaapServiceNo() const { DARABONBA_PTR_GET_DEFAULT(maapServiceNo_, "") };
      inline Data& setMaapServiceNo(string maapServiceNo) { DARABONBA_PTR_SET_VALUE(maapServiceNo_, maapServiceNo) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline Data& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // requestNo Field Functions 
      bool hasRequestNo() const { return this->requestNo_ != nullptr;};
      void deleteRequestNo() { this->requestNo_ = nullptr;};
      inline string getRequestNo() const { DARABONBA_PTR_GET_DEFAULT(requestNo_, "") };
      inline Data& setRequestNo(string requestNo) { DARABONBA_PTR_SET_VALUE(requestNo_, requestNo) };


      // requestType Field Functions 
      bool hasRequestType() const { return this->requestType_ != nullptr;};
      void deleteRequestType() { this->requestType_ = nullptr;};
      inline string getRequestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, "") };
      inline Data& setRequestType(string requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // subscriberCode Field Functions 
      bool hasSubscriberCode() const { return this->subscriberCode_ != nullptr;};
      void deleteSubscriberCode() { this->subscriberCode_ = nullptr;};
      inline string getSubscriberCode() const { DARABONBA_PTR_GET_DEFAULT(subscriberCode_, "") };
      inline Data& setSubscriberCode(string subscriberCode) { DARABONBA_PTR_SET_VALUE(subscriberCode_, subscriberCode) };


    protected:
      shared_ptr<string> aliUid_ {};
      shared_ptr<Data::AuditRecord> auditRecord_ {};
      shared_ptr<string> auditResult_ {};
      shared_ptr<string> auditTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModifier_ {};
      // ID
      shared_ptr<string> id_ {};
      shared_ptr<string> maapServiceNo_ {};
      shared_ptr<string> modifier_ {};
      shared_ptr<string> requestNo_ {};
      shared_ptr<string> requestType_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> subscriberCode_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAuditRequestByTypeUnAuditResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuditRequestByTypeUnAuditResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAuditRequestByTypeUnAuditResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAuditRequestByTypeUnAuditResponseBody::Data) };
    inline GetAuditRequestByTypeUnAuditResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAuditRequestByTypeUnAuditResponseBody::Data) };
    inline GetAuditRequestByTypeUnAuditResponseBody& setData(const GetAuditRequestByTypeUnAuditResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAuditRequestByTypeUnAuditResponseBody& setData(GetAuditRequestByTypeUnAuditResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAuditRequestByTypeUnAuditResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditRequestByTypeUnAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuditRequestByTypeUnAuditResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetAuditRequestByTypeUnAuditResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
