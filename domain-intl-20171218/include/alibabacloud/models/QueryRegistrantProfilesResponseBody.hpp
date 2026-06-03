// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGISTRANTPROFILESRESPONSEBODY_HPP_
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
  class QueryRegistrantProfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegistrantProfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RegistrantProfiles, registrantProfiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegistrantProfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfiles, registrantProfiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryRegistrantProfilesResponseBody() = default ;
    QueryRegistrantProfilesResponseBody(const QueryRegistrantProfilesResponseBody &) = default ;
    QueryRegistrantProfilesResponseBody(QueryRegistrantProfilesResponseBody &&) = default ;
    QueryRegistrantProfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegistrantProfilesResponseBody() = default ;
    QueryRegistrantProfilesResponseBody& operator=(const QueryRegistrantProfilesResponseBody &) = default ;
    QueryRegistrantProfilesResponseBody& operator=(QueryRegistrantProfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegistrantProfiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegistrantProfiles& obj) { 
        DARABONBA_PTR_TO_JSON(RegistrantProfile, registrantProfile_);
      };
      friend void from_json(const Darabonba::Json& j, RegistrantProfiles& obj) { 
        DARABONBA_PTR_FROM_JSON(RegistrantProfile, registrantProfile_);
      };
      RegistrantProfiles() = default ;
      RegistrantProfiles(const RegistrantProfiles &) = default ;
      RegistrantProfiles(RegistrantProfiles &&) = default ;
      RegistrantProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegistrantProfiles() = default ;
      RegistrantProfiles& operator=(const RegistrantProfiles &) = default ;
      RegistrantProfiles& operator=(RegistrantProfiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegistrantProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegistrantProfile& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EmailVerificationStatus, emailVerificationStatus_);
          DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(RealNameStatus, realNameStatus_);
          DARABONBA_PTR_TO_JSON(RegistrantName, registrantName_);
          DARABONBA_PTR_TO_JSON(RegistrantOrganization, registrantOrganization_);
          DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
          DARABONBA_PTR_TO_JSON(RegistrantProfileType, registrantProfileType_);
          DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_TO_JSON(TelArea, telArea_);
          DARABONBA_PTR_TO_JSON(TelExt, telExt_);
          DARABONBA_PTR_TO_JSON(Telephone, telephone_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, RegistrantProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DefaultRegistrantProfile, defaultRegistrantProfile_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EmailVerificationStatus, emailVerificationStatus_);
          DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(RealNameStatus, realNameStatus_);
          DARABONBA_PTR_FROM_JSON(RegistrantName, registrantName_);
          DARABONBA_PTR_FROM_JSON(RegistrantOrganization, registrantOrganization_);
          DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
          DARABONBA_PTR_FROM_JSON(RegistrantProfileType, registrantProfileType_);
          DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
          DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
          DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        RegistrantProfile() = default ;
        RegistrantProfile(const RegistrantProfile &) = default ;
        RegistrantProfile(RegistrantProfile &&) = default ;
        RegistrantProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegistrantProfile() = default ;
        RegistrantProfile& operator=(const RegistrantProfile &) = default ;
        RegistrantProfile& operator=(RegistrantProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->city_ == nullptr && this->country_ == nullptr && this->createTime_ == nullptr && this->defaultRegistrantProfile_ == nullptr && this->email_ == nullptr
        && this->emailVerificationStatus_ == nullptr && this->postalCode_ == nullptr && this->province_ == nullptr && this->realNameStatus_ == nullptr && this->registrantName_ == nullptr
        && this->registrantOrganization_ == nullptr && this->registrantProfileId_ == nullptr && this->registrantProfileType_ == nullptr && this->registrantType_ == nullptr && this->telArea_ == nullptr
        && this->telExt_ == nullptr && this->telephone_ == nullptr && this->updateTime_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline RegistrantProfile& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline RegistrantProfile& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline RegistrantProfile& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline RegistrantProfile& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // defaultRegistrantProfile Field Functions 
        bool hasDefaultRegistrantProfile() const { return this->defaultRegistrantProfile_ != nullptr;};
        void deleteDefaultRegistrantProfile() { this->defaultRegistrantProfile_ = nullptr;};
        inline bool getDefaultRegistrantProfile() const { DARABONBA_PTR_GET_DEFAULT(defaultRegistrantProfile_, false) };
        inline RegistrantProfile& setDefaultRegistrantProfile(bool defaultRegistrantProfile) { DARABONBA_PTR_SET_VALUE(defaultRegistrantProfile_, defaultRegistrantProfile) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline RegistrantProfile& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // emailVerificationStatus Field Functions 
        bool hasEmailVerificationStatus() const { return this->emailVerificationStatus_ != nullptr;};
        void deleteEmailVerificationStatus() { this->emailVerificationStatus_ = nullptr;};
        inline int32_t getEmailVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationStatus_, 0) };
        inline RegistrantProfile& setEmailVerificationStatus(int32_t emailVerificationStatus) { DARABONBA_PTR_SET_VALUE(emailVerificationStatus_, emailVerificationStatus) };


        // postalCode Field Functions 
        bool hasPostalCode() const { return this->postalCode_ != nullptr;};
        void deletePostalCode() { this->postalCode_ = nullptr;};
        inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
        inline RegistrantProfile& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline RegistrantProfile& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // realNameStatus Field Functions 
        bool hasRealNameStatus() const { return this->realNameStatus_ != nullptr;};
        void deleteRealNameStatus() { this->realNameStatus_ = nullptr;};
        inline string getRealNameStatus() const { DARABONBA_PTR_GET_DEFAULT(realNameStatus_, "") };
        inline RegistrantProfile& setRealNameStatus(string realNameStatus) { DARABONBA_PTR_SET_VALUE(realNameStatus_, realNameStatus) };


        // registrantName Field Functions 
        bool hasRegistrantName() const { return this->registrantName_ != nullptr;};
        void deleteRegistrantName() { this->registrantName_ = nullptr;};
        inline string getRegistrantName() const { DARABONBA_PTR_GET_DEFAULT(registrantName_, "") };
        inline RegistrantProfile& setRegistrantName(string registrantName) { DARABONBA_PTR_SET_VALUE(registrantName_, registrantName) };


        // registrantOrganization Field Functions 
        bool hasRegistrantOrganization() const { return this->registrantOrganization_ != nullptr;};
        void deleteRegistrantOrganization() { this->registrantOrganization_ = nullptr;};
        inline string getRegistrantOrganization() const { DARABONBA_PTR_GET_DEFAULT(registrantOrganization_, "") };
        inline RegistrantProfile& setRegistrantOrganization(string registrantOrganization) { DARABONBA_PTR_SET_VALUE(registrantOrganization_, registrantOrganization) };


        // registrantProfileId Field Functions 
        bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
        void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
        inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
        inline RegistrantProfile& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


        // registrantProfileType Field Functions 
        bool hasRegistrantProfileType() const { return this->registrantProfileType_ != nullptr;};
        void deleteRegistrantProfileType() { this->registrantProfileType_ = nullptr;};
        inline string getRegistrantProfileType() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileType_, "") };
        inline RegistrantProfile& setRegistrantProfileType(string registrantProfileType) { DARABONBA_PTR_SET_VALUE(registrantProfileType_, registrantProfileType) };


        // registrantType Field Functions 
        bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
        void deleteRegistrantType() { this->registrantType_ = nullptr;};
        inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
        inline RegistrantProfile& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


        // telArea Field Functions 
        bool hasTelArea() const { return this->telArea_ != nullptr;};
        void deleteTelArea() { this->telArea_ = nullptr;};
        inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
        inline RegistrantProfile& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


        // telExt Field Functions 
        bool hasTelExt() const { return this->telExt_ != nullptr;};
        void deleteTelExt() { this->telExt_ = nullptr;};
        inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
        inline RegistrantProfile& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


        // telephone Field Functions 
        bool hasTelephone() const { return this->telephone_ != nullptr;};
        void deleteTelephone() { this->telephone_ = nullptr;};
        inline string getTelephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
        inline RegistrantProfile& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline RegistrantProfile& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<bool> defaultRegistrantProfile_ {};
        shared_ptr<string> email_ {};
        shared_ptr<int32_t> emailVerificationStatus_ {};
        shared_ptr<string> postalCode_ {};
        shared_ptr<string> province_ {};
        shared_ptr<string> realNameStatus_ {};
        shared_ptr<string> registrantName_ {};
        shared_ptr<string> registrantOrganization_ {};
        shared_ptr<int64_t> registrantProfileId_ {};
        shared_ptr<string> registrantProfileType_ {};
        shared_ptr<string> registrantType_ {};
        shared_ptr<string> telArea_ {};
        shared_ptr<string> telExt_ {};
        shared_ptr<string> telephone_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->registrantProfile_ == nullptr; };
      // registrantProfile Field Functions 
      bool hasRegistrantProfile() const { return this->registrantProfile_ != nullptr;};
      void deleteRegistrantProfile() { this->registrantProfile_ = nullptr;};
      inline const vector<RegistrantProfiles::RegistrantProfile> & getRegistrantProfile() const { DARABONBA_PTR_GET_CONST(registrantProfile_, vector<RegistrantProfiles::RegistrantProfile>) };
      inline vector<RegistrantProfiles::RegistrantProfile> getRegistrantProfile() { DARABONBA_PTR_GET(registrantProfile_, vector<RegistrantProfiles::RegistrantProfile>) };
      inline RegistrantProfiles& setRegistrantProfile(const vector<RegistrantProfiles::RegistrantProfile> & registrantProfile) { DARABONBA_PTR_SET_VALUE(registrantProfile_, registrantProfile) };
      inline RegistrantProfiles& setRegistrantProfile(vector<RegistrantProfiles::RegistrantProfile> && registrantProfile) { DARABONBA_PTR_SET_RVALUE(registrantProfile_, registrantProfile) };


    protected:
      shared_ptr<vector<RegistrantProfiles::RegistrantProfile>> registrantProfile_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->registrantProfiles_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryRegistrantProfilesResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRegistrantProfilesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryRegistrantProfilesResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // registrantProfiles Field Functions 
    bool hasRegistrantProfiles() const { return this->registrantProfiles_ != nullptr;};
    void deleteRegistrantProfiles() { this->registrantProfiles_ = nullptr;};
    inline const QueryRegistrantProfilesResponseBody::RegistrantProfiles & getRegistrantProfiles() const { DARABONBA_PTR_GET_CONST(registrantProfiles_, QueryRegistrantProfilesResponseBody::RegistrantProfiles) };
    inline QueryRegistrantProfilesResponseBody::RegistrantProfiles getRegistrantProfiles() { DARABONBA_PTR_GET(registrantProfiles_, QueryRegistrantProfilesResponseBody::RegistrantProfiles) };
    inline QueryRegistrantProfilesResponseBody& setRegistrantProfiles(const QueryRegistrantProfilesResponseBody::RegistrantProfiles & registrantProfiles) { DARABONBA_PTR_SET_VALUE(registrantProfiles_, registrantProfiles) };
    inline QueryRegistrantProfilesResponseBody& setRegistrantProfiles(QueryRegistrantProfilesResponseBody::RegistrantProfiles && registrantProfiles) { DARABONBA_PTR_SET_RVALUE(registrantProfiles_, registrantProfiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRegistrantProfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryRegistrantProfilesResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<QueryRegistrantProfilesResponseBody::RegistrantProfiles> registrantProfiles_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
