// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUDITREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUDITREQUESTREQUEST_HPP_
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
  class UpdateAuditRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuditRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecord, auditRecord_);
      DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_TO_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestNo, requestNo_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuditRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecord, auditRecord_);
      DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
      DARABONBA_PTR_FROM_JSON(CustSpaceId, custSpaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestNo, requestNo_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateAuditRequestRequest() = default ;
    UpdateAuditRequestRequest(const UpdateAuditRequestRequest &) = default ;
    UpdateAuditRequestRequest(UpdateAuditRequestRequest &&) = default ;
    UpdateAuditRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuditRequestRequest() = default ;
    UpdateAuditRequestRequest& operator=(const UpdateAuditRequestRequest &) = default ;
    UpdateAuditRequestRequest& operator=(UpdateAuditRequestRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(BusinessLicenseRegistrationNumber, businessLicenseRegistrationNumber_);
        DARABONBA_PTR_TO_JSON(CompanyAddress, companyAddress_);
        DARABONBA_PTR_TO_JSON(CompanyEnglishName, companyEnglishName_);
        DARABONBA_PTR_TO_JSON(CompanyLegalName, companyLegalName_);
        DARABONBA_PTR_TO_JSON(CompanyLegalPerson, companyLegalPerson_);
        DARABONBA_PTR_TO_JSON(CompanyProfile, companyProfile_);
        DARABONBA_PTR_TO_JSON(CompanyRegisteredCountry, companyRegisteredCountry_);
        DARABONBA_PTR_TO_JSON(CompanyTel, companyTel_);
        DARABONBA_PTR_TO_JSON(CompleteAddressOfHeadquarters, completeAddressOfHeadquarters_);
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
        DARABONBA_PTR_TO_JSON(OtherLetterGuarantee, otherLetterGuarantee_);
        DARABONBA_PTR_TO_JSON(RecoveryDate, recoveryDate_);
        DARABONBA_PTR_TO_JSON(ReplyContent, replyContent_);
        DARABONBA_PTR_TO_JSON(SuspensionDate, suspensionDate_);
        DARABONBA_PTR_TO_JSON(WebAddress, webAddress_);
      };
      friend void from_json(const Darabonba::Json& j, AuditRecord& obj) { 
        DARABONBA_PTR_FROM_JSON(AgeLimit, ageLimit_);
        DARABONBA_PTR_FROM_JSON(ApplyReason, applyReason_);
        DARABONBA_PTR_FROM_JSON(BusinessAccountName, businessAccountName_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseRegistrationNumber, businessLicenseRegistrationNumber_);
        DARABONBA_PTR_FROM_JSON(CompanyAddress, companyAddress_);
        DARABONBA_PTR_FROM_JSON(CompanyEnglishName, companyEnglishName_);
        DARABONBA_PTR_FROM_JSON(CompanyLegalName, companyLegalName_);
        DARABONBA_PTR_FROM_JSON(CompanyLegalPerson, companyLegalPerson_);
        DARABONBA_PTR_FROM_JSON(CompanyProfile, companyProfile_);
        DARABONBA_PTR_FROM_JSON(CompanyRegisteredCountry, companyRegisteredCountry_);
        DARABONBA_PTR_FROM_JSON(CompanyTel, companyTel_);
        DARABONBA_PTR_FROM_JSON(CompleteAddressOfHeadquarters, completeAddressOfHeadquarters_);
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
        DARABONBA_PTR_FROM_JSON(OtherLetterGuarantee, otherLetterGuarantee_);
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
        && this->applyReason_ == nullptr && this->businessAccountName_ == nullptr && this->businessLicenseRegistrationNumber_ == nullptr && this->companyAddress_ == nullptr && this->companyEnglishName_ == nullptr
        && this->companyLegalName_ == nullptr && this->companyLegalPerson_ == nullptr && this->companyProfile_ == nullptr && this->companyRegisteredCountry_ == nullptr && this->companyTel_ == nullptr
        && this->completeAddressOfHeadquarters_ == nullptr && this->contactMail_ == nullptr && this->enableAutoReply_ == nullptr && this->industryDescription_ == nullptr && this->industryInvolved_ == nullptr
        && this->letterGuarantee_ == nullptr && this->logo_ == nullptr && this->messageDestinationCountry_ == nullptr && this->messageDestinationInternationalCountry_ == nullptr && this->messageDialogueIntroduction_ == nullptr
        && this->messageEnableDate_ == nullptr && this->messageSessionName_ == nullptr && this->otherLetterGuarantee_ == nullptr && this->recoveryDate_ == nullptr && this->replyContent_ == nullptr
        && this->suspensionDate_ == nullptr && this->webAddress_ == nullptr; };
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


      // businessLicenseRegistrationNumber Field Functions 
      bool hasBusinessLicenseRegistrationNumber() const { return this->businessLicenseRegistrationNumber_ != nullptr;};
      void deleteBusinessLicenseRegistrationNumber() { this->businessLicenseRegistrationNumber_ = nullptr;};
      inline string getBusinessLicenseRegistrationNumber() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseRegistrationNumber_, "") };
      inline AuditRecord& setBusinessLicenseRegistrationNumber(string businessLicenseRegistrationNumber) { DARABONBA_PTR_SET_VALUE(businessLicenseRegistrationNumber_, businessLicenseRegistrationNumber) };


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
      inline string getCompanyRegisteredCountry() const { DARABONBA_PTR_GET_DEFAULT(companyRegisteredCountry_, "") };
      inline AuditRecord& setCompanyRegisteredCountry(string companyRegisteredCountry) { DARABONBA_PTR_SET_VALUE(companyRegisteredCountry_, companyRegisteredCountry) };


      // companyTel Field Functions 
      bool hasCompanyTel() const { return this->companyTel_ != nullptr;};
      void deleteCompanyTel() { this->companyTel_ = nullptr;};
      inline const vector<AuditRecord::CompanyTel> & getCompanyTel() const { DARABONBA_PTR_GET_CONST(companyTel_, vector<AuditRecord::CompanyTel>) };
      inline vector<AuditRecord::CompanyTel> getCompanyTel() { DARABONBA_PTR_GET(companyTel_, vector<AuditRecord::CompanyTel>) };
      inline AuditRecord& setCompanyTel(const vector<AuditRecord::CompanyTel> & companyTel) { DARABONBA_PTR_SET_VALUE(companyTel_, companyTel) };
      inline AuditRecord& setCompanyTel(vector<AuditRecord::CompanyTel> && companyTel) { DARABONBA_PTR_SET_RVALUE(companyTel_, companyTel) };


      // completeAddressOfHeadquarters Field Functions 
      bool hasCompleteAddressOfHeadquarters() const { return this->completeAddressOfHeadquarters_ != nullptr;};
      void deleteCompleteAddressOfHeadquarters() { this->completeAddressOfHeadquarters_ = nullptr;};
      inline string getCompleteAddressOfHeadquarters() const { DARABONBA_PTR_GET_DEFAULT(completeAddressOfHeadquarters_, "") };
      inline AuditRecord& setCompleteAddressOfHeadquarters(string completeAddressOfHeadquarters) { DARABONBA_PTR_SET_VALUE(completeAddressOfHeadquarters_, completeAddressOfHeadquarters) };


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


      // otherLetterGuarantee Field Functions 
      bool hasOtherLetterGuarantee() const { return this->otherLetterGuarantee_ != nullptr;};
      void deleteOtherLetterGuarantee() { this->otherLetterGuarantee_ = nullptr;};
      inline string getOtherLetterGuarantee() const { DARABONBA_PTR_GET_DEFAULT(otherLetterGuarantee_, "") };
      inline AuditRecord& setOtherLetterGuarantee(string otherLetterGuarantee) { DARABONBA_PTR_SET_VALUE(otherLetterGuarantee_, otherLetterGuarantee) };


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
      shared_ptr<string> businessLicenseRegistrationNumber_ {};
      shared_ptr<vector<AuditRecord::CompanyAddress>> companyAddress_ {};
      shared_ptr<string> companyEnglishName_ {};
      shared_ptr<string> companyLegalName_ {};
      shared_ptr<string> companyLegalPerson_ {};
      shared_ptr<string> companyProfile_ {};
      shared_ptr<string> companyRegisteredCountry_ {};
      shared_ptr<vector<AuditRecord::CompanyTel>> companyTel_ {};
      shared_ptr<string> completeAddressOfHeadquarters_ {};
      shared_ptr<string> contactMail_ {};
      shared_ptr<string> enableAutoReply_ {};
      shared_ptr<string> industryDescription_ {};
      shared_ptr<string> industryInvolved_ {};
      shared_ptr<string> letterGuarantee_ {};
      // logo
      shared_ptr<vector<string>> logo_ {};
      shared_ptr<vector<string>> messageDestinationCountry_ {};
      shared_ptr<vector<string>> messageDestinationInternationalCountry_ {};
      shared_ptr<string> messageDialogueIntroduction_ {};
      shared_ptr<string> messageEnableDate_ {};
      shared_ptr<string> messageSessionName_ {};
      shared_ptr<string> otherLetterGuarantee_ {};
      shared_ptr<string> recoveryDate_ {};
      shared_ptr<string> replyContent_ {};
      shared_ptr<string> suspensionDate_ {};
      shared_ptr<string> webAddress_ {};
    };

    virtual bool empty() const override { return this->auditRecord_ == nullptr
        && this->auditResult_ == nullptr && this->custSpaceId_ == nullptr && this->ownerId_ == nullptr && this->requestNo_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // auditRecord Field Functions 
    bool hasAuditRecord() const { return this->auditRecord_ != nullptr;};
    void deleteAuditRecord() { this->auditRecord_ = nullptr;};
    inline const UpdateAuditRequestRequest::AuditRecord & getAuditRecord() const { DARABONBA_PTR_GET_CONST(auditRecord_, UpdateAuditRequestRequest::AuditRecord) };
    inline UpdateAuditRequestRequest::AuditRecord getAuditRecord() { DARABONBA_PTR_GET(auditRecord_, UpdateAuditRequestRequest::AuditRecord) };
    inline UpdateAuditRequestRequest& setAuditRecord(const UpdateAuditRequestRequest::AuditRecord & auditRecord) { DARABONBA_PTR_SET_VALUE(auditRecord_, auditRecord) };
    inline UpdateAuditRequestRequest& setAuditRecord(UpdateAuditRequestRequest::AuditRecord && auditRecord) { DARABONBA_PTR_SET_RVALUE(auditRecord_, auditRecord) };


    // auditResult Field Functions 
    bool hasAuditResult() const { return this->auditResult_ != nullptr;};
    void deleteAuditResult() { this->auditResult_ = nullptr;};
    inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
    inline UpdateAuditRequestRequest& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


    // custSpaceId Field Functions 
    bool hasCustSpaceId() const { return this->custSpaceId_ != nullptr;};
    void deleteCustSpaceId() { this->custSpaceId_ = nullptr;};
    inline string getCustSpaceId() const { DARABONBA_PTR_GET_DEFAULT(custSpaceId_, "") };
    inline UpdateAuditRequestRequest& setCustSpaceId(string custSpaceId) { DARABONBA_PTR_SET_VALUE(custSpaceId_, custSpaceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAuditRequestRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestNo Field Functions 
    bool hasRequestNo() const { return this->requestNo_ != nullptr;};
    void deleteRequestNo() { this->requestNo_ = nullptr;};
    inline string getRequestNo() const { DARABONBA_PTR_GET_DEFAULT(requestNo_, "") };
    inline UpdateAuditRequestRequest& setRequestNo(string requestNo) { DARABONBA_PTR_SET_VALUE(requestNo_, requestNo) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAuditRequestRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateAuditRequestRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<UpdateAuditRequestRequest::AuditRecord> auditRecord_ {};
    shared_ptr<string> auditResult_ {};
    // This parameter is required.
    shared_ptr<string> custSpaceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> requestNo_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
