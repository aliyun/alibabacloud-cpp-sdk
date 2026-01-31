// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetInstanceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReissue, autoReissue_);
      DARABONBA_PTR_TO_JSON(AverageWaitingTime, averageWaitingTime_);
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateNotAfter, certificateNotAfter_);
      DARABONBA_PTR_TO_JSON(CertificateRevokeTime, certificateRevokeTime_);
      DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
      DARABONBA_PTR_TO_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(DingGroupList, dingGroupList_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainValidationList, domainValidationList_);
      DARABONBA_PTR_TO_JSON(FullDomainCount, fullDomainCount_);
      DARABONBA_PTR_TO_JSON(GenerateCsrMethod, generateCsrMethod_);
      DARABONBA_PTR_TO_JSON(InstanceEndTime, instanceEndTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStartTime, instanceStartTime_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_TO_JSON(OrderEndTime, orderEndTime_);
      DARABONBA_PTR_TO_JSON(OrderStartTime, orderStartTime_);
      DARABONBA_PTR_TO_JSON(PendingResult, pendingResult_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ValidationMethod, validationMethod_);
      DARABONBA_PTR_TO_JSON(WildcardDomainCount, wildcardDomainCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReissue, autoReissue_);
      DARABONBA_PTR_FROM_JSON(AverageWaitingTime, averageWaitingTime_);
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateNotAfter, certificateNotAfter_);
      DARABONBA_PTR_FROM_JSON(CertificateRevokeTime, certificateRevokeTime_);
      DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
      DARABONBA_PTR_FROM_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(DingGroupList, dingGroupList_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainValidationList, domainValidationList_);
      DARABONBA_PTR_FROM_JSON(FullDomainCount, fullDomainCount_);
      DARABONBA_PTR_FROM_JSON(GenerateCsrMethod, generateCsrMethod_);
      DARABONBA_PTR_FROM_JSON(InstanceEndTime, instanceEndTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStartTime, instanceStartTime_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
      DARABONBA_PTR_FROM_JSON(OrderEndTime, orderEndTime_);
      DARABONBA_PTR_FROM_JSON(OrderStartTime, orderStartTime_);
      DARABONBA_PTR_FROM_JSON(PendingResult, pendingResult_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ValidationMethod, validationMethod_);
      DARABONBA_PTR_FROM_JSON(WildcardDomainCount, wildcardDomainCount_);
    };
    GetInstanceDetailResponseBody() = default ;
    GetInstanceDetailResponseBody(const GetInstanceDetailResponseBody &) = default ;
    GetInstanceDetailResponseBody(GetInstanceDetailResponseBody &&) = default ;
    GetInstanceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBody() = default ;
    GetInstanceDetailResponseBody& operator=(const GetInstanceDetailResponseBody &) = default ;
    GetInstanceDetailResponseBody& operator=(GetInstanceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class DomainValidationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainValidationList& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
        DARABONBA_PTR_TO_JSON(ValidationKey, validationKey_);
        DARABONBA_PTR_TO_JSON(ValidationType, validationType_);
        DARABONBA_PTR_TO_JSON(ValidationValue, validationValue_);
      };
      friend void from_json(const Darabonba::Json& j, DomainValidationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
        DARABONBA_PTR_FROM_JSON(ValidationKey, validationKey_);
        DARABONBA_PTR_FROM_JSON(ValidationType, validationType_);
        DARABONBA_PTR_FROM_JSON(ValidationValue, validationValue_);
      };
      DomainValidationList() = default ;
      DomainValidationList(const DomainValidationList &) = default ;
      DomainValidationList(DomainValidationList &&) = default ;
      DomainValidationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainValidationList() = default ;
      DomainValidationList& operator=(const DomainValidationList &) = default ;
      DomainValidationList& operator=(DomainValidationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cname_ == nullptr
        && this->domain_ == nullptr && this->rootDomain_ == nullptr && this->validationKey_ == nullptr && this->validationType_ == nullptr && this->validationValue_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline DomainValidationList& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainValidationList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // rootDomain Field Functions 
      bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
      void deleteRootDomain() { this->rootDomain_ = nullptr;};
      inline string getRootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
      inline DomainValidationList& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


      // validationKey Field Functions 
      bool hasValidationKey() const { return this->validationKey_ != nullptr;};
      void deleteValidationKey() { this->validationKey_ = nullptr;};
      inline string getValidationKey() const { DARABONBA_PTR_GET_DEFAULT(validationKey_, "") };
      inline DomainValidationList& setValidationKey(string validationKey) { DARABONBA_PTR_SET_VALUE(validationKey_, validationKey) };


      // validationType Field Functions 
      bool hasValidationType() const { return this->validationType_ != nullptr;};
      void deleteValidationType() { this->validationType_ = nullptr;};
      inline string getValidationType() const { DARABONBA_PTR_GET_DEFAULT(validationType_, "") };
      inline DomainValidationList& setValidationType(string validationType) { DARABONBA_PTR_SET_VALUE(validationType_, validationType) };


      // validationValue Field Functions 
      bool hasValidationValue() const { return this->validationValue_ != nullptr;};
      void deleteValidationValue() { this->validationValue_ = nullptr;};
      inline string getValidationValue() const { DARABONBA_PTR_GET_DEFAULT(validationValue_, "") };
      inline DomainValidationList& setValidationValue(string validationValue) { DARABONBA_PTR_SET_VALUE(validationValue_, validationValue) };


    protected:
      shared_ptr<string> cname_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> rootDomain_ {};
      shared_ptr<string> validationKey_ {};
      shared_ptr<string> validationType_ {};
      shared_ptr<string> validationValue_ {};
    };

    class DingGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DingGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(DingGroupInstanceId, dingGroupInstanceId_);
        DARABONBA_PTR_TO_JSON(DingGroupName, dingGroupName_);
        DARABONBA_PTR_TO_JSON(DingGroupType, dingGroupType_);
        DARABONBA_PTR_TO_JSON(DingGroupUrl, dingGroupUrl_);
      };
      friend void from_json(const Darabonba::Json& j, DingGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(DingGroupInstanceId, dingGroupInstanceId_);
        DARABONBA_PTR_FROM_JSON(DingGroupName, dingGroupName_);
        DARABONBA_PTR_FROM_JSON(DingGroupType, dingGroupType_);
        DARABONBA_PTR_FROM_JSON(DingGroupUrl, dingGroupUrl_);
      };
      DingGroupList() = default ;
      DingGroupList(const DingGroupList &) = default ;
      DingGroupList(DingGroupList &&) = default ;
      DingGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DingGroupList() = default ;
      DingGroupList& operator=(const DingGroupList &) = default ;
      DingGroupList& operator=(DingGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingGroupInstanceId_ == nullptr
        && this->dingGroupName_ == nullptr && this->dingGroupType_ == nullptr && this->dingGroupUrl_ == nullptr; };
      // dingGroupInstanceId Field Functions 
      bool hasDingGroupInstanceId() const { return this->dingGroupInstanceId_ != nullptr;};
      void deleteDingGroupInstanceId() { this->dingGroupInstanceId_ = nullptr;};
      inline string getDingGroupInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dingGroupInstanceId_, "") };
      inline DingGroupList& setDingGroupInstanceId(string dingGroupInstanceId) { DARABONBA_PTR_SET_VALUE(dingGroupInstanceId_, dingGroupInstanceId) };


      // dingGroupName Field Functions 
      bool hasDingGroupName() const { return this->dingGroupName_ != nullptr;};
      void deleteDingGroupName() { this->dingGroupName_ = nullptr;};
      inline string getDingGroupName() const { DARABONBA_PTR_GET_DEFAULT(dingGroupName_, "") };
      inline DingGroupList& setDingGroupName(string dingGroupName) { DARABONBA_PTR_SET_VALUE(dingGroupName_, dingGroupName) };


      // dingGroupType Field Functions 
      bool hasDingGroupType() const { return this->dingGroupType_ != nullptr;};
      void deleteDingGroupType() { this->dingGroupType_ = nullptr;};
      inline string getDingGroupType() const { DARABONBA_PTR_GET_DEFAULT(dingGroupType_, "") };
      inline DingGroupList& setDingGroupType(string dingGroupType) { DARABONBA_PTR_SET_VALUE(dingGroupType_, dingGroupType) };


      // dingGroupUrl Field Functions 
      bool hasDingGroupUrl() const { return this->dingGroupUrl_ != nullptr;};
      void deleteDingGroupUrl() { this->dingGroupUrl_ = nullptr;};
      inline string getDingGroupUrl() const { DARABONBA_PTR_GET_DEFAULT(dingGroupUrl_, "") };
      inline DingGroupList& setDingGroupUrl(string dingGroupUrl) { DARABONBA_PTR_SET_VALUE(dingGroupUrl_, dingGroupUrl) };


    protected:
      shared_ptr<string> dingGroupInstanceId_ {};
      shared_ptr<string> dingGroupName_ {};
      shared_ptr<string> dingGroupType_ {};
      shared_ptr<string> dingGroupUrl_ {};
    };

    virtual bool empty() const override { return this->autoReissue_ == nullptr
        && this->averageWaitingTime_ == nullptr && this->brand_ == nullptr && this->certIdentifier_ == nullptr && this->certificateId_ == nullptr && this->certificateName_ == nullptr
        && this->certificateNotAfter_ == nullptr && this->certificateRevokeTime_ == nullptr && this->certificateStatus_ == nullptr && this->certificateType_ == nullptr && this->city_ == nullptr
        && this->companyId_ == nullptr && this->contactIdList_ == nullptr && this->countryCode_ == nullptr && this->csr_ == nullptr && this->dingGroupList_ == nullptr
        && this->domain_ == nullptr && this->domainValidationList_ == nullptr && this->fullDomainCount_ == nullptr && this->generateCsrMethod_ == nullptr && this->instanceEndTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceStartTime_ == nullptr && this->instanceType_ == nullptr && this->keyAlgorithm_ == nullptr && this->orderEndTime_ == nullptr
        && this->orderStartTime_ == nullptr && this->pendingResult_ == nullptr && this->province_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->validationMethod_ == nullptr && this->wildcardDomainCount_ == nullptr; };
    // autoReissue Field Functions 
    bool hasAutoReissue() const { return this->autoReissue_ != nullptr;};
    void deleteAutoReissue() { this->autoReissue_ = nullptr;};
    inline string getAutoReissue() const { DARABONBA_PTR_GET_DEFAULT(autoReissue_, "") };
    inline GetInstanceDetailResponseBody& setAutoReissue(string autoReissue) { DARABONBA_PTR_SET_VALUE(autoReissue_, autoReissue) };


    // averageWaitingTime Field Functions 
    bool hasAverageWaitingTime() const { return this->averageWaitingTime_ != nullptr;};
    void deleteAverageWaitingTime() { this->averageWaitingTime_ = nullptr;};
    inline string getAverageWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(averageWaitingTime_, "") };
    inline GetInstanceDetailResponseBody& setAverageWaitingTime(string averageWaitingTime) { DARABONBA_PTR_SET_VALUE(averageWaitingTime_, averageWaitingTime) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline GetInstanceDetailResponseBody& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline GetInstanceDetailResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline int32_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0) };
    inline GetInstanceDetailResponseBody& setCertificateId(int32_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline GetInstanceDetailResponseBody& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateNotAfter Field Functions 
    bool hasCertificateNotAfter() const { return this->certificateNotAfter_ != nullptr;};
    void deleteCertificateNotAfter() { this->certificateNotAfter_ = nullptr;};
    inline int64_t getCertificateNotAfter() const { DARABONBA_PTR_GET_DEFAULT(certificateNotAfter_, 0L) };
    inline GetInstanceDetailResponseBody& setCertificateNotAfter(int64_t certificateNotAfter) { DARABONBA_PTR_SET_VALUE(certificateNotAfter_, certificateNotAfter) };


    // certificateRevokeTime Field Functions 
    bool hasCertificateRevokeTime() const { return this->certificateRevokeTime_ != nullptr;};
    void deleteCertificateRevokeTime() { this->certificateRevokeTime_ = nullptr;};
    inline int64_t getCertificateRevokeTime() const { DARABONBA_PTR_GET_DEFAULT(certificateRevokeTime_, 0L) };
    inline GetInstanceDetailResponseBody& setCertificateRevokeTime(int64_t certificateRevokeTime) { DARABONBA_PTR_SET_VALUE(certificateRevokeTime_, certificateRevokeTime) };


    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
    inline GetInstanceDetailResponseBody& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline GetInstanceDetailResponseBody& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetInstanceDetailResponseBody& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline GetInstanceDetailResponseBody& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // contactIdList Field Functions 
    bool hasContactIdList() const { return this->contactIdList_ != nullptr;};
    void deleteContactIdList() { this->contactIdList_ = nullptr;};
    inline const vector<int64_t> & getContactIdList() const { DARABONBA_PTR_GET_CONST(contactIdList_, vector<int64_t>) };
    inline vector<int64_t> getContactIdList() { DARABONBA_PTR_GET(contactIdList_, vector<int64_t>) };
    inline GetInstanceDetailResponseBody& setContactIdList(const vector<int64_t> & contactIdList) { DARABONBA_PTR_SET_VALUE(contactIdList_, contactIdList) };
    inline GetInstanceDetailResponseBody& setContactIdList(vector<int64_t> && contactIdList) { DARABONBA_PTR_SET_RVALUE(contactIdList_, contactIdList) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline GetInstanceDetailResponseBody& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline GetInstanceDetailResponseBody& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // dingGroupList Field Functions 
    bool hasDingGroupList() const { return this->dingGroupList_ != nullptr;};
    void deleteDingGroupList() { this->dingGroupList_ = nullptr;};
    inline const vector<GetInstanceDetailResponseBody::DingGroupList> & getDingGroupList() const { DARABONBA_PTR_GET_CONST(dingGroupList_, vector<GetInstanceDetailResponseBody::DingGroupList>) };
    inline vector<GetInstanceDetailResponseBody::DingGroupList> getDingGroupList() { DARABONBA_PTR_GET(dingGroupList_, vector<GetInstanceDetailResponseBody::DingGroupList>) };
    inline GetInstanceDetailResponseBody& setDingGroupList(const vector<GetInstanceDetailResponseBody::DingGroupList> & dingGroupList) { DARABONBA_PTR_SET_VALUE(dingGroupList_, dingGroupList) };
    inline GetInstanceDetailResponseBody& setDingGroupList(vector<GetInstanceDetailResponseBody::DingGroupList> && dingGroupList) { DARABONBA_PTR_SET_RVALUE(dingGroupList_, dingGroupList) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetInstanceDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainValidationList Field Functions 
    bool hasDomainValidationList() const { return this->domainValidationList_ != nullptr;};
    void deleteDomainValidationList() { this->domainValidationList_ = nullptr;};
    inline const vector<GetInstanceDetailResponseBody::DomainValidationList> & getDomainValidationList() const { DARABONBA_PTR_GET_CONST(domainValidationList_, vector<GetInstanceDetailResponseBody::DomainValidationList>) };
    inline vector<GetInstanceDetailResponseBody::DomainValidationList> getDomainValidationList() { DARABONBA_PTR_GET(domainValidationList_, vector<GetInstanceDetailResponseBody::DomainValidationList>) };
    inline GetInstanceDetailResponseBody& setDomainValidationList(const vector<GetInstanceDetailResponseBody::DomainValidationList> & domainValidationList) { DARABONBA_PTR_SET_VALUE(domainValidationList_, domainValidationList) };
    inline GetInstanceDetailResponseBody& setDomainValidationList(vector<GetInstanceDetailResponseBody::DomainValidationList> && domainValidationList) { DARABONBA_PTR_SET_RVALUE(domainValidationList_, domainValidationList) };


    // fullDomainCount Field Functions 
    bool hasFullDomainCount() const { return this->fullDomainCount_ != nullptr;};
    void deleteFullDomainCount() { this->fullDomainCount_ = nullptr;};
    inline int32_t getFullDomainCount() const { DARABONBA_PTR_GET_DEFAULT(fullDomainCount_, 0) };
    inline GetInstanceDetailResponseBody& setFullDomainCount(int32_t fullDomainCount) { DARABONBA_PTR_SET_VALUE(fullDomainCount_, fullDomainCount) };


    // generateCsrMethod Field Functions 
    bool hasGenerateCsrMethod() const { return this->generateCsrMethod_ != nullptr;};
    void deleteGenerateCsrMethod() { this->generateCsrMethod_ = nullptr;};
    inline string getGenerateCsrMethod() const { DARABONBA_PTR_GET_DEFAULT(generateCsrMethod_, "") };
    inline GetInstanceDetailResponseBody& setGenerateCsrMethod(string generateCsrMethod) { DARABONBA_PTR_SET_VALUE(generateCsrMethod_, generateCsrMethod) };


    // instanceEndTime Field Functions 
    bool hasInstanceEndTime() const { return this->instanceEndTime_ != nullptr;};
    void deleteInstanceEndTime() { this->instanceEndTime_ = nullptr;};
    inline int64_t getInstanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(instanceEndTime_, 0L) };
    inline GetInstanceDetailResponseBody& setInstanceEndTime(int64_t instanceEndTime) { DARABONBA_PTR_SET_VALUE(instanceEndTime_, instanceEndTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceDetailResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStartTime Field Functions 
    bool hasInstanceStartTime() const { return this->instanceStartTime_ != nullptr;};
    void deleteInstanceStartTime() { this->instanceStartTime_ = nullptr;};
    inline int64_t getInstanceStartTime() const { DARABONBA_PTR_GET_DEFAULT(instanceStartTime_, 0L) };
    inline GetInstanceDetailResponseBody& setInstanceStartTime(int64_t instanceStartTime) { DARABONBA_PTR_SET_VALUE(instanceStartTime_, instanceStartTime) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetInstanceDetailResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // keyAlgorithm Field Functions 
    bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
    void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
    inline string getKeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
    inline GetInstanceDetailResponseBody& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


    // orderEndTime Field Functions 
    bool hasOrderEndTime() const { return this->orderEndTime_ != nullptr;};
    void deleteOrderEndTime() { this->orderEndTime_ = nullptr;};
    inline int64_t getOrderEndTime() const { DARABONBA_PTR_GET_DEFAULT(orderEndTime_, 0L) };
    inline GetInstanceDetailResponseBody& setOrderEndTime(int64_t orderEndTime) { DARABONBA_PTR_SET_VALUE(orderEndTime_, orderEndTime) };


    // orderStartTime Field Functions 
    bool hasOrderStartTime() const { return this->orderStartTime_ != nullptr;};
    void deleteOrderStartTime() { this->orderStartTime_ = nullptr;};
    inline int64_t getOrderStartTime() const { DARABONBA_PTR_GET_DEFAULT(orderStartTime_, 0L) };
    inline GetInstanceDetailResponseBody& setOrderStartTime(int64_t orderStartTime) { DARABONBA_PTR_SET_VALUE(orderStartTime_, orderStartTime) };


    // pendingResult Field Functions 
    bool hasPendingResult() const { return this->pendingResult_ != nullptr;};
    void deletePendingResult() { this->pendingResult_ = nullptr;};
    inline string getPendingResult() const { DARABONBA_PTR_GET_DEFAULT(pendingResult_, "") };
    inline GetInstanceDetailResponseBody& setPendingResult(string pendingResult) { DARABONBA_PTR_SET_VALUE(pendingResult_, pendingResult) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetInstanceDetailResponseBody& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceDetailResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetInstanceDetailResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetInstanceDetailResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetInstanceDetailResponseBody::Tags>) };
    inline vector<GetInstanceDetailResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetInstanceDetailResponseBody::Tags>) };
    inline GetInstanceDetailResponseBody& setTags(const vector<GetInstanceDetailResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceDetailResponseBody& setTags(vector<GetInstanceDetailResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validationMethod Field Functions 
    bool hasValidationMethod() const { return this->validationMethod_ != nullptr;};
    void deleteValidationMethod() { this->validationMethod_ = nullptr;};
    inline string getValidationMethod() const { DARABONBA_PTR_GET_DEFAULT(validationMethod_, "") };
    inline GetInstanceDetailResponseBody& setValidationMethod(string validationMethod) { DARABONBA_PTR_SET_VALUE(validationMethod_, validationMethod) };


    // wildcardDomainCount Field Functions 
    bool hasWildcardDomainCount() const { return this->wildcardDomainCount_ != nullptr;};
    void deleteWildcardDomainCount() { this->wildcardDomainCount_ = nullptr;};
    inline int32_t getWildcardDomainCount() const { DARABONBA_PTR_GET_DEFAULT(wildcardDomainCount_, 0) };
    inline GetInstanceDetailResponseBody& setWildcardDomainCount(int32_t wildcardDomainCount) { DARABONBA_PTR_SET_VALUE(wildcardDomainCount_, wildcardDomainCount) };


  protected:
    shared_ptr<string> autoReissue_ {};
    shared_ptr<string> averageWaitingTime_ {};
    shared_ptr<string> brand_ {};
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<int32_t> certificateId_ {};
    shared_ptr<string> certificateName_ {};
    shared_ptr<int64_t> certificateNotAfter_ {};
    shared_ptr<int64_t> certificateRevokeTime_ {};
    shared_ptr<string> certificateStatus_ {};
    shared_ptr<string> certificateType_ {};
    shared_ptr<string> city_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<vector<int64_t>> contactIdList_ {};
    shared_ptr<string> countryCode_ {};
    shared_ptr<string> csr_ {};
    shared_ptr<vector<GetInstanceDetailResponseBody::DingGroupList>> dingGroupList_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<vector<GetInstanceDetailResponseBody::DomainValidationList>> domainValidationList_ {};
    shared_ptr<int32_t> fullDomainCount_ {};
    shared_ptr<string> generateCsrMethod_ {};
    shared_ptr<int64_t> instanceEndTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> instanceStartTime_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<string> keyAlgorithm_ {};
    shared_ptr<int64_t> orderEndTime_ {};
    shared_ptr<int64_t> orderStartTime_ {};
    shared_ptr<string> pendingResult_ {};
    shared_ptr<string> province_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> spec_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<GetInstanceDetailResponseBody::Tags>> tags_ {};
    shared_ptr<string> validationMethod_ {};
    shared_ptr<int32_t> wildcardDomainCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
