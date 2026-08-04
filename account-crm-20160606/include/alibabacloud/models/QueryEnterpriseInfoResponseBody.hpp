// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENTERPRISEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYENTERPRISEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryEnterpriseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEnterpriseInfoResponseBody() = default ;
    QueryEnterpriseInfoResponseBody(const QueryEnterpriseInfoResponseBody &) = default ;
    QueryEnterpriseInfoResponseBody(QueryEnterpriseInfoResponseBody &&) = default ;
    QueryEnterpriseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEnterpriseInfoResponseBody() = default ;
    QueryEnterpriseInfoResponseBody& operator=(const QueryEnterpriseInfoResponseBody &) = default ;
    QueryEnterpriseInfoResponseBody& operator=(QueryEnterpriseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AliyunPK, aliyunPK_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseImgSrc, businessLicenseImgSrc_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseNumber, businessLicenseNumber_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseType, businessLicenseType_);
        DARABONBA_PTR_TO_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_TO_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DetailAddress, detailAddress_);
        DARABONBA_PTR_TO_JSON(EInterpriseSize, EInterpriseSize_);
        DARABONBA_PTR_TO_JSON(EnterpriseEntity, enterpriseEntity_);
        DARABONBA_PTR_TO_JSON(EntityIDNumber, entityIDNumber_);
        DARABONBA_PTR_TO_JSON(Extend, extend_);
        DARABONBA_PTR_TO_JSON(Fax, fax_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
        DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Years, years_);
      };
      friend void from_json(const Darabonba::Json& j, ProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AliyunPK, aliyunPK_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseImgSrc, businessLicenseImgSrc_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseNumber, businessLicenseNumber_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseType, businessLicenseType_);
        DARABONBA_PTR_FROM_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_FROM_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DetailAddress, detailAddress_);
        DARABONBA_PTR_FROM_JSON(EInterpriseSize, EInterpriseSize_);
        DARABONBA_PTR_FROM_JSON(EnterpriseEntity, enterpriseEntity_);
        DARABONBA_PTR_FROM_JSON(EntityIDNumber, entityIDNumber_);
        DARABONBA_PTR_FROM_JSON(Extend, extend_);
        DARABONBA_PTR_FROM_JSON(Fax, fax_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
        DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Years, years_);
      };
      ProfileInfo() = default ;
      ProfileInfo(const ProfileInfo &) = default ;
      ProfileInfo(ProfileInfo &&) = default ;
      ProfileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProfileInfo() = default ;
      ProfileInfo& operator=(const ProfileInfo &) = default ;
      ProfileInfo& operator=(ProfileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Province : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Province& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Province& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Province() = default ;
        Province(const Province &) = default ;
        Province(Province &&) = default ;
        Province(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Province() = default ;
        Province& operator=(const Province &) = default ;
        Province& operator=(Province &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Province& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Province& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      class City : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const City& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, City& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        City() = default ;
        City(const City &) = default ;
        City(City &&) = default ;
        City(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~City() = default ;
        City& operator=(const City &) = default ;
        City& operator=(City &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline City& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline City& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->aliyunPK_ == nullptr && this->auditStatus_ == nullptr && this->businessLicenseImgSrc_ == nullptr && this->businessLicenseNumber_ == nullptr && this->businessLicenseType_ == nullptr
        && this->certifiedFrom_ == nullptr && this->certifiedTime_ == nullptr && this->city_ == nullptr && this->createTime_ == nullptr && this->detailAddress_ == nullptr
        && this->EInterpriseSize_ == nullptr && this->enterpriseEntity_ == nullptr && this->entityIDNumber_ == nullptr && this->extend_ == nullptr && this->fax_ == nullptr
        && this->name_ == nullptr && this->phone_ == nullptr && this->postalCode_ == nullptr && this->profile_ == nullptr && this->province_ == nullptr
        && this->updateTime_ == nullptr && this->years_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline ProfileInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // aliyunPK Field Functions 
      bool hasAliyunPK() const { return this->aliyunPK_ != nullptr;};
      void deleteAliyunPK() { this->aliyunPK_ = nullptr;};
      inline string getAliyunPK() const { DARABONBA_PTR_GET_DEFAULT(aliyunPK_, "") };
      inline ProfileInfo& setAliyunPK(string aliyunPK) { DARABONBA_PTR_SET_VALUE(aliyunPK_, aliyunPK) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline ProfileInfo& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // businessLicenseImgSrc Field Functions 
      bool hasBusinessLicenseImgSrc() const { return this->businessLicenseImgSrc_ != nullptr;};
      void deleteBusinessLicenseImgSrc() { this->businessLicenseImgSrc_ = nullptr;};
      inline string getBusinessLicenseImgSrc() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseImgSrc_, "") };
      inline ProfileInfo& setBusinessLicenseImgSrc(string businessLicenseImgSrc) { DARABONBA_PTR_SET_VALUE(businessLicenseImgSrc_, businessLicenseImgSrc) };


      // businessLicenseNumber Field Functions 
      bool hasBusinessLicenseNumber() const { return this->businessLicenseNumber_ != nullptr;};
      void deleteBusinessLicenseNumber() { this->businessLicenseNumber_ = nullptr;};
      inline string getBusinessLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseNumber_, "") };
      inline ProfileInfo& setBusinessLicenseNumber(string businessLicenseNumber) { DARABONBA_PTR_SET_VALUE(businessLicenseNumber_, businessLicenseNumber) };


      // businessLicenseType Field Functions 
      bool hasBusinessLicenseType() const { return this->businessLicenseType_ != nullptr;};
      void deleteBusinessLicenseType() { this->businessLicenseType_ = nullptr;};
      inline string getBusinessLicenseType() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseType_, "") };
      inline ProfileInfo& setBusinessLicenseType(string businessLicenseType) { DARABONBA_PTR_SET_VALUE(businessLicenseType_, businessLicenseType) };


      // certifiedFrom Field Functions 
      bool hasCertifiedFrom() const { return this->certifiedFrom_ != nullptr;};
      void deleteCertifiedFrom() { this->certifiedFrom_ = nullptr;};
      inline string getCertifiedFrom() const { DARABONBA_PTR_GET_DEFAULT(certifiedFrom_, "") };
      inline ProfileInfo& setCertifiedFrom(string certifiedFrom) { DARABONBA_PTR_SET_VALUE(certifiedFrom_, certifiedFrom) };


      // certifiedTime Field Functions 
      bool hasCertifiedTime() const { return this->certifiedTime_ != nullptr;};
      void deleteCertifiedTime() { this->certifiedTime_ = nullptr;};
      inline string getCertifiedTime() const { DARABONBA_PTR_GET_DEFAULT(certifiedTime_, "") };
      inline ProfileInfo& setCertifiedTime(string certifiedTime) { DARABONBA_PTR_SET_VALUE(certifiedTime_, certifiedTime) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline const ProfileInfo::City & getCity() const { DARABONBA_PTR_GET_CONST(city_, ProfileInfo::City) };
      inline ProfileInfo::City getCity() { DARABONBA_PTR_GET(city_, ProfileInfo::City) };
      inline ProfileInfo& setCity(const ProfileInfo::City & city) { DARABONBA_PTR_SET_VALUE(city_, city) };
      inline ProfileInfo& setCity(ProfileInfo::City && city) { DARABONBA_PTR_SET_RVALUE(city_, city) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProfileInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // detailAddress Field Functions 
      bool hasDetailAddress() const { return this->detailAddress_ != nullptr;};
      void deleteDetailAddress() { this->detailAddress_ = nullptr;};
      inline string getDetailAddress() const { DARABONBA_PTR_GET_DEFAULT(detailAddress_, "") };
      inline ProfileInfo& setDetailAddress(string detailAddress) { DARABONBA_PTR_SET_VALUE(detailAddress_, detailAddress) };


      // EInterpriseSize Field Functions 
      bool hasEInterpriseSize() const { return this->EInterpriseSize_ != nullptr;};
      void deleteEInterpriseSize() { this->EInterpriseSize_ = nullptr;};
      inline string getEInterpriseSize() const { DARABONBA_PTR_GET_DEFAULT(EInterpriseSize_, "") };
      inline ProfileInfo& setEInterpriseSize(string EInterpriseSize) { DARABONBA_PTR_SET_VALUE(EInterpriseSize_, EInterpriseSize) };


      // enterpriseEntity Field Functions 
      bool hasEnterpriseEntity() const { return this->enterpriseEntity_ != nullptr;};
      void deleteEnterpriseEntity() { this->enterpriseEntity_ = nullptr;};
      inline string getEnterpriseEntity() const { DARABONBA_PTR_GET_DEFAULT(enterpriseEntity_, "") };
      inline ProfileInfo& setEnterpriseEntity(string enterpriseEntity) { DARABONBA_PTR_SET_VALUE(enterpriseEntity_, enterpriseEntity) };


      // entityIDNumber Field Functions 
      bool hasEntityIDNumber() const { return this->entityIDNumber_ != nullptr;};
      void deleteEntityIDNumber() { this->entityIDNumber_ = nullptr;};
      inline string getEntityIDNumber() const { DARABONBA_PTR_GET_DEFAULT(entityIDNumber_, "") };
      inline ProfileInfo& setEntityIDNumber(string entityIDNumber) { DARABONBA_PTR_SET_VALUE(entityIDNumber_, entityIDNumber) };


      // extend Field Functions 
      bool hasExtend() const { return this->extend_ != nullptr;};
      void deleteExtend() { this->extend_ = nullptr;};
      inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
      inline ProfileInfo& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


      // fax Field Functions 
      bool hasFax() const { return this->fax_ != nullptr;};
      void deleteFax() { this->fax_ = nullptr;};
      inline string getFax() const { DARABONBA_PTR_GET_DEFAULT(fax_, "") };
      inline ProfileInfo& setFax(string fax) { DARABONBA_PTR_SET_VALUE(fax_, fax) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProfileInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline ProfileInfo& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // postalCode Field Functions 
      bool hasPostalCode() const { return this->postalCode_ != nullptr;};
      void deletePostalCode() { this->postalCode_ = nullptr;};
      inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
      inline ProfileInfo& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline ProfileInfo& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline const ProfileInfo::Province & getProvince() const { DARABONBA_PTR_GET_CONST(province_, ProfileInfo::Province) };
      inline ProfileInfo::Province getProvince() { DARABONBA_PTR_GET(province_, ProfileInfo::Province) };
      inline ProfileInfo& setProvince(const ProfileInfo::Province & province) { DARABONBA_PTR_SET_VALUE(province_, province) };
      inline ProfileInfo& setProvince(ProfileInfo::Province && province) { DARABONBA_PTR_SET_RVALUE(province_, province) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ProfileInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // years Field Functions 
      bool hasYears() const { return this->years_ != nullptr;};
      void deleteYears() { this->years_ = nullptr;};
      inline string getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, "") };
      inline ProfileInfo& setYears(string years) { DARABONBA_PTR_SET_VALUE(years_, years) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> aliyunPK_ {};
      shared_ptr<string> auditStatus_ {};
      shared_ptr<string> businessLicenseImgSrc_ {};
      shared_ptr<string> businessLicenseNumber_ {};
      shared_ptr<string> businessLicenseType_ {};
      shared_ptr<string> certifiedFrom_ {};
      shared_ptr<string> certifiedTime_ {};
      shared_ptr<ProfileInfo::City> city_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> detailAddress_ {};
      shared_ptr<string> EInterpriseSize_ {};
      shared_ptr<string> enterpriseEntity_ {};
      shared_ptr<string> entityIDNumber_ {};
      shared_ptr<string> extend_ {};
      shared_ptr<string> fax_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> postalCode_ {};
      shared_ptr<string> profile_ {};
      shared_ptr<ProfileInfo::Province> province_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> years_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->profileInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEnterpriseInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEnterpriseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // profileInfo Field Functions 
    bool hasProfileInfo() const { return this->profileInfo_ != nullptr;};
    void deleteProfileInfo() { this->profileInfo_ = nullptr;};
    inline const QueryEnterpriseInfoResponseBody::ProfileInfo & getProfileInfo() const { DARABONBA_PTR_GET_CONST(profileInfo_, QueryEnterpriseInfoResponseBody::ProfileInfo) };
    inline QueryEnterpriseInfoResponseBody::ProfileInfo getProfileInfo() { DARABONBA_PTR_GET(profileInfo_, QueryEnterpriseInfoResponseBody::ProfileInfo) };
    inline QueryEnterpriseInfoResponseBody& setProfileInfo(const QueryEnterpriseInfoResponseBody::ProfileInfo & profileInfo) { DARABONBA_PTR_SET_VALUE(profileInfo_, profileInfo) };
    inline QueryEnterpriseInfoResponseBody& setProfileInfo(QueryEnterpriseInfoResponseBody::ProfileInfo && profileInfo) { DARABONBA_PTR_SET_RVALUE(profileInfo_, profileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEnterpriseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEnterpriseInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryEnterpriseInfoResponseBody::ProfileInfo> profileInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
