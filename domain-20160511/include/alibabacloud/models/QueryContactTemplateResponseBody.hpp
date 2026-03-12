// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTACTTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTACTTEMPLATERESPONSEBODY_HPP_
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
  class QueryContactTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContactTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplates, contactTemplates_);
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContactTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplates, contactTemplates_);
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryContactTemplateResponseBody() = default ;
    QueryContactTemplateResponseBody(const QueryContactTemplateResponseBody &) = default ;
    QueryContactTemplateResponseBody(QueryContactTemplateResponseBody &&) = default ;
    QueryContactTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContactTemplateResponseBody() = default ;
    QueryContactTemplateResponseBody& operator=(const QueryContactTemplateResponseBody &) = default ;
    QueryContactTemplateResponseBody& operator=(QueryContactTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContactTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ContactTemplate, contactTemplate_);
      };
      friend void from_json(const Darabonba::Json& j, ContactTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactTemplate, contactTemplate_);
      };
      ContactTemplates() = default ;
      ContactTemplates(const ContactTemplates &) = default ;
      ContactTemplates(ContactTemplates &&) = default ;
      ContactTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactTemplates() = default ;
      ContactTemplates& operator=(const ContactTemplates &) = default ;
      ContactTemplates& operator=(ContactTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContactTemplate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactTemplate& obj) { 
          DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_TO_JSON(CCity, CCity_);
          DARABONBA_PTR_TO_JSON(CCompany, CCompany_);
          DARABONBA_PTR_TO_JSON(CCountry, CCountry_);
          DARABONBA_PTR_TO_JSON(CName, CName_);
          DARABONBA_PTR_TO_JSON(CProvince, CProvince_);
          DARABONBA_PTR_TO_JSON(CVenu, CVenu_);
          DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DefaultTemplate, defaultTemplate_);
          DARABONBA_PTR_TO_JSON(ECity, ECity_);
          DARABONBA_PTR_TO_JSON(ECompany, ECompany_);
          DARABONBA_PTR_TO_JSON(EName, EName_);
          DARABONBA_PTR_TO_JSON(EProvince, EProvince_);
          DARABONBA_PTR_TO_JSON(EVenu, EVenu_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
          DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
          DARABONBA_PTR_TO_JSON(RegType, regType_);
          DARABONBA_PTR_TO_JSON(TelArea, telArea_);
          DARABONBA_PTR_TO_JSON(TelExt, telExt_);
          DARABONBA_PTR_TO_JSON(TelMain, telMain_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ContactTemplate& obj) { 
          DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
          DARABONBA_PTR_FROM_JSON(CCity, CCity_);
          DARABONBA_PTR_FROM_JSON(CCompany, CCompany_);
          DARABONBA_PTR_FROM_JSON(CCountry, CCountry_);
          DARABONBA_PTR_FROM_JSON(CName, CName_);
          DARABONBA_PTR_FROM_JSON(CProvince, CProvince_);
          DARABONBA_PTR_FROM_JSON(CVenu, CVenu_);
          DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DefaultTemplate, defaultTemplate_);
          DARABONBA_PTR_FROM_JSON(ECity, ECity_);
          DARABONBA_PTR_FROM_JSON(ECompany, ECompany_);
          DARABONBA_PTR_FROM_JSON(EName, EName_);
          DARABONBA_PTR_FROM_JSON(EProvince, EProvince_);
          DARABONBA_PTR_FROM_JSON(EVenu, EVenu_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
          DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
          DARABONBA_PTR_FROM_JSON(RegType, regType_);
          DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
          DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
          DARABONBA_PTR_FROM_JSON(TelMain, telMain_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ContactTemplate() = default ;
        ContactTemplate(const ContactTemplate &) = default ;
        ContactTemplate(ContactTemplate &&) = default ;
        ContactTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactTemplate() = default ;
        ContactTemplate& operator=(const ContactTemplate &) = default ;
        ContactTemplate& operator=(ContactTemplate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->CCity_ == nullptr && this->CCompany_ == nullptr && this->CCountry_ == nullptr && this->CName_ == nullptr && this->CProvince_ == nullptr
        && this->CVenu_ == nullptr && this->contactTemplateId_ == nullptr && this->createTime_ == nullptr && this->defaultTemplate_ == nullptr && this->ECity_ == nullptr
        && this->ECompany_ == nullptr && this->EName_ == nullptr && this->EProvince_ == nullptr && this->EVenu_ == nullptr && this->email_ == nullptr
        && this->emailVerificationStatus_ == nullptr && this->postalCode_ == nullptr && this->regType_ == nullptr && this->telArea_ == nullptr && this->telExt_ == nullptr
        && this->telMain_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
        // auditStatus Field Functions 
        bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
        void deleteAuditStatus() { this->auditStatus_ = nullptr;};
        inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
        inline ContactTemplate& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


        // CCity Field Functions 
        bool hasCCity() const { return this->CCity_ != nullptr;};
        void deleteCCity() { this->CCity_ = nullptr;};
        inline string getCCity() const { DARABONBA_PTR_GET_DEFAULT(CCity_, "") };
        inline ContactTemplate& setCCity(string CCity) { DARABONBA_PTR_SET_VALUE(CCity_, CCity) };


        // CCompany Field Functions 
        bool hasCCompany() const { return this->CCompany_ != nullptr;};
        void deleteCCompany() { this->CCompany_ = nullptr;};
        inline string getCCompany() const { DARABONBA_PTR_GET_DEFAULT(CCompany_, "") };
        inline ContactTemplate& setCCompany(string CCompany) { DARABONBA_PTR_SET_VALUE(CCompany_, CCompany) };


        // CCountry Field Functions 
        bool hasCCountry() const { return this->CCountry_ != nullptr;};
        void deleteCCountry() { this->CCountry_ = nullptr;};
        inline string getCCountry() const { DARABONBA_PTR_GET_DEFAULT(CCountry_, "") };
        inline ContactTemplate& setCCountry(string CCountry) { DARABONBA_PTR_SET_VALUE(CCountry_, CCountry) };


        // CName Field Functions 
        bool hasCName() const { return this->CName_ != nullptr;};
        void deleteCName() { this->CName_ = nullptr;};
        inline string getCName() const { DARABONBA_PTR_GET_DEFAULT(CName_, "") };
        inline ContactTemplate& setCName(string CName) { DARABONBA_PTR_SET_VALUE(CName_, CName) };


        // CProvince Field Functions 
        bool hasCProvince() const { return this->CProvince_ != nullptr;};
        void deleteCProvince() { this->CProvince_ = nullptr;};
        inline string getCProvince() const { DARABONBA_PTR_GET_DEFAULT(CProvince_, "") };
        inline ContactTemplate& setCProvince(string CProvince) { DARABONBA_PTR_SET_VALUE(CProvince_, CProvince) };


        // CVenu Field Functions 
        bool hasCVenu() const { return this->CVenu_ != nullptr;};
        void deleteCVenu() { this->CVenu_ = nullptr;};
        inline string getCVenu() const { DARABONBA_PTR_GET_DEFAULT(CVenu_, "") };
        inline ContactTemplate& setCVenu(string CVenu) { DARABONBA_PTR_SET_VALUE(CVenu_, CVenu) };


        // contactTemplateId Field Functions 
        bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
        void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
        inline int64_t getContactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, 0L) };
        inline ContactTemplate& setContactTemplateId(int64_t contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ContactTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // defaultTemplate Field Functions 
        bool hasDefaultTemplate() const { return this->defaultTemplate_ != nullptr;};
        void deleteDefaultTemplate() { this->defaultTemplate_ = nullptr;};
        inline bool getDefaultTemplate() const { DARABONBA_PTR_GET_DEFAULT(defaultTemplate_, false) };
        inline ContactTemplate& setDefaultTemplate(bool defaultTemplate) { DARABONBA_PTR_SET_VALUE(defaultTemplate_, defaultTemplate) };


        // ECity Field Functions 
        bool hasECity() const { return this->ECity_ != nullptr;};
        void deleteECity() { this->ECity_ = nullptr;};
        inline string getECity() const { DARABONBA_PTR_GET_DEFAULT(ECity_, "") };
        inline ContactTemplate& setECity(string ECity) { DARABONBA_PTR_SET_VALUE(ECity_, ECity) };


        // ECompany Field Functions 
        bool hasECompany() const { return this->ECompany_ != nullptr;};
        void deleteECompany() { this->ECompany_ = nullptr;};
        inline string getECompany() const { DARABONBA_PTR_GET_DEFAULT(ECompany_, "") };
        inline ContactTemplate& setECompany(string ECompany) { DARABONBA_PTR_SET_VALUE(ECompany_, ECompany) };


        // EName Field Functions 
        bool hasEName() const { return this->EName_ != nullptr;};
        void deleteEName() { this->EName_ = nullptr;};
        inline string getEName() const { DARABONBA_PTR_GET_DEFAULT(EName_, "") };
        inline ContactTemplate& setEName(string EName) { DARABONBA_PTR_SET_VALUE(EName_, EName) };


        // EProvince Field Functions 
        bool hasEProvince() const { return this->EProvince_ != nullptr;};
        void deleteEProvince() { this->EProvince_ = nullptr;};
        inline string getEProvince() const { DARABONBA_PTR_GET_DEFAULT(EProvince_, "") };
        inline ContactTemplate& setEProvince(string EProvince) { DARABONBA_PTR_SET_VALUE(EProvince_, EProvince) };


        // EVenu Field Functions 
        bool hasEVenu() const { return this->EVenu_ != nullptr;};
        void deleteEVenu() { this->EVenu_ = nullptr;};
        inline string getEVenu() const { DARABONBA_PTR_GET_DEFAULT(EVenu_, "") };
        inline ContactTemplate& setEVenu(string EVenu) { DARABONBA_PTR_SET_VALUE(EVenu_, EVenu) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline ContactTemplate& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // emailVerificationStatus Field Functions 
        bool hasEmailVerificationStatus() const { return this->emailVerificationStatus_ != nullptr;};
        void deleteEmailVerificationStatus() { this->emailVerificationStatus_ = nullptr;};
        inline int32_t getEmailVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationStatus_, 0) };
        inline ContactTemplate& setEmailVerificationStatus(int32_t emailVerificationStatus) { DARABONBA_PTR_SET_VALUE(emailVerificationStatus_, emailVerificationStatus) };


        // postalCode Field Functions 
        bool hasPostalCode() const { return this->postalCode_ != nullptr;};
        void deletePostalCode() { this->postalCode_ = nullptr;};
        inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
        inline ContactTemplate& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


        // regType Field Functions 
        bool hasRegType() const { return this->regType_ != nullptr;};
        void deleteRegType() { this->regType_ = nullptr;};
        inline string getRegType() const { DARABONBA_PTR_GET_DEFAULT(regType_, "") };
        inline ContactTemplate& setRegType(string regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


        // telArea Field Functions 
        bool hasTelArea() const { return this->telArea_ != nullptr;};
        void deleteTelArea() { this->telArea_ = nullptr;};
        inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
        inline ContactTemplate& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


        // telExt Field Functions 
        bool hasTelExt() const { return this->telExt_ != nullptr;};
        void deleteTelExt() { this->telExt_ = nullptr;};
        inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
        inline ContactTemplate& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


        // telMain Field Functions 
        bool hasTelMain() const { return this->telMain_ != nullptr;};
        void deleteTelMain() { this->telMain_ = nullptr;};
        inline string getTelMain() const { DARABONBA_PTR_GET_DEFAULT(telMain_, "") };
        inline ContactTemplate& setTelMain(string telMain) { DARABONBA_PTR_SET_VALUE(telMain_, telMain) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline ContactTemplate& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ContactTemplate& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> auditStatus_ {};
        shared_ptr<string> CCity_ {};
        shared_ptr<string> CCompany_ {};
        shared_ptr<string> CCountry_ {};
        shared_ptr<string> CName_ {};
        shared_ptr<string> CProvince_ {};
        shared_ptr<string> CVenu_ {};
        shared_ptr<int64_t> contactTemplateId_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<bool> defaultTemplate_ {};
        shared_ptr<string> ECity_ {};
        shared_ptr<string> ECompany_ {};
        shared_ptr<string> EName_ {};
        shared_ptr<string> EProvince_ {};
        shared_ptr<string> EVenu_ {};
        shared_ptr<string> email_ {};
        shared_ptr<int32_t> emailVerificationStatus_ {};
        shared_ptr<string> postalCode_ {};
        shared_ptr<string> regType_ {};
        shared_ptr<string> telArea_ {};
        shared_ptr<string> telExt_ {};
        shared_ptr<string> telMain_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->contactTemplate_ == nullptr; };
      // contactTemplate Field Functions 
      bool hasContactTemplate() const { return this->contactTemplate_ != nullptr;};
      void deleteContactTemplate() { this->contactTemplate_ = nullptr;};
      inline const vector<ContactTemplates::ContactTemplate> & getContactTemplate() const { DARABONBA_PTR_GET_CONST(contactTemplate_, vector<ContactTemplates::ContactTemplate>) };
      inline vector<ContactTemplates::ContactTemplate> getContactTemplate() { DARABONBA_PTR_GET(contactTemplate_, vector<ContactTemplates::ContactTemplate>) };
      inline ContactTemplates& setContactTemplate(const vector<ContactTemplates::ContactTemplate> & contactTemplate) { DARABONBA_PTR_SET_VALUE(contactTemplate_, contactTemplate) };
      inline ContactTemplates& setContactTemplate(vector<ContactTemplates::ContactTemplate> && contactTemplate) { DARABONBA_PTR_SET_RVALUE(contactTemplate_, contactTemplate) };


    protected:
      shared_ptr<vector<ContactTemplates::ContactTemplate>> contactTemplate_ {};
    };

    virtual bool empty() const override { return this->contactTemplates_ == nullptr
        && this->currentPageNum_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // contactTemplates Field Functions 
    bool hasContactTemplates() const { return this->contactTemplates_ != nullptr;};
    void deleteContactTemplates() { this->contactTemplates_ = nullptr;};
    inline const QueryContactTemplateResponseBody::ContactTemplates & getContactTemplates() const { DARABONBA_PTR_GET_CONST(contactTemplates_, QueryContactTemplateResponseBody::ContactTemplates) };
    inline QueryContactTemplateResponseBody::ContactTemplates getContactTemplates() { DARABONBA_PTR_GET(contactTemplates_, QueryContactTemplateResponseBody::ContactTemplates) };
    inline QueryContactTemplateResponseBody& setContactTemplates(const QueryContactTemplateResponseBody::ContactTemplates & contactTemplates) { DARABONBA_PTR_SET_VALUE(contactTemplates_, contactTemplates) };
    inline QueryContactTemplateResponseBody& setContactTemplates(QueryContactTemplateResponseBody::ContactTemplates && contactTemplates) { DARABONBA_PTR_SET_RVALUE(contactTemplates_, contactTemplates) };


    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryContactTemplateResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryContactTemplateResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryContactTemplateResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryContactTemplateResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryContactTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryContactTemplateResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryContactTemplateResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<QueryContactTemplateResponseBody::ContactTemplates> contactTemplates_ {};
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
