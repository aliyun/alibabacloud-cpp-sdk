// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
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
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoReissue, autoReissue_);
        DARABONBA_PTR_TO_JSON(Brand, brand_);
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
        DARABONBA_PTR_TO_JSON(CertificateNotAfter, certificateNotAfter_);
        DARABONBA_PTR_TO_JSON(CertificateRevokeTime, certificateRevokeTime_);
        DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(FullDomainCount, fullDomainCount_);
        DARABONBA_PTR_TO_JSON(InstanceEndTime, instanceEndTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStartTime, instanceStartTime_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(KeyAlgorithm, keyAlgorithm_);
        DARABONBA_PTR_TO_JSON(OrderEndTime, orderEndTime_);
        DARABONBA_PTR_TO_JSON(OrderStartTime, orderStartTime_);
        DARABONBA_PTR_TO_JSON(PendingResult, pendingResult_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WildcardDomainCount, wildcardDomainCount_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoReissue, autoReissue_);
        DARABONBA_PTR_FROM_JSON(Brand, brand_);
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
        DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
        DARABONBA_PTR_FROM_JSON(CertificateNotAfter, certificateNotAfter_);
        DARABONBA_PTR_FROM_JSON(CertificateRevokeTime, certificateRevokeTime_);
        DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(FullDomainCount, fullDomainCount_);
        DARABONBA_PTR_FROM_JSON(InstanceEndTime, instanceEndTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStartTime, instanceStartTime_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(KeyAlgorithm, keyAlgorithm_);
        DARABONBA_PTR_FROM_JSON(OrderEndTime, orderEndTime_);
        DARABONBA_PTR_FROM_JSON(OrderStartTime, orderStartTime_);
        DARABONBA_PTR_FROM_JSON(PendingResult, pendingResult_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WildcardDomainCount, wildcardDomainCount_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoReissue_ == nullptr
        && this->brand_ == nullptr && this->certIdentifier_ == nullptr && this->certificateId_ == nullptr && this->certificateName_ == nullptr && this->certificateNotAfter_ == nullptr
        && this->certificateRevokeTime_ == nullptr && this->certificateStatus_ == nullptr && this->certificateType_ == nullptr && this->domain_ == nullptr && this->fullDomainCount_ == nullptr
        && this->instanceEndTime_ == nullptr && this->instanceId_ == nullptr && this->instanceStartTime_ == nullptr && this->instanceType_ == nullptr && this->keyAlgorithm_ == nullptr
        && this->orderEndTime_ == nullptr && this->orderStartTime_ == nullptr && this->pendingResult_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->wildcardDomainCount_ == nullptr; };
      // autoReissue Field Functions 
      bool hasAutoReissue() const { return this->autoReissue_ != nullptr;};
      void deleteAutoReissue() { this->autoReissue_ = nullptr;};
      inline string getAutoReissue() const { DARABONBA_PTR_GET_DEFAULT(autoReissue_, "") };
      inline InstanceList& setAutoReissue(string autoReissue) { DARABONBA_PTR_SET_VALUE(autoReissue_, autoReissue) };


      // brand Field Functions 
      bool hasBrand() const { return this->brand_ != nullptr;};
      void deleteBrand() { this->brand_ = nullptr;};
      inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
      inline InstanceList& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline InstanceList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // certificateId Field Functions 
      bool hasCertificateId() const { return this->certificateId_ != nullptr;};
      void deleteCertificateId() { this->certificateId_ = nullptr;};
      inline int64_t getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, 0L) };
      inline InstanceList& setCertificateId(int64_t certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


      // certificateName Field Functions 
      bool hasCertificateName() const { return this->certificateName_ != nullptr;};
      void deleteCertificateName() { this->certificateName_ = nullptr;};
      inline string getCertificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
      inline InstanceList& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


      // certificateNotAfter Field Functions 
      bool hasCertificateNotAfter() const { return this->certificateNotAfter_ != nullptr;};
      void deleteCertificateNotAfter() { this->certificateNotAfter_ = nullptr;};
      inline int64_t getCertificateNotAfter() const { DARABONBA_PTR_GET_DEFAULT(certificateNotAfter_, 0L) };
      inline InstanceList& setCertificateNotAfter(int64_t certificateNotAfter) { DARABONBA_PTR_SET_VALUE(certificateNotAfter_, certificateNotAfter) };


      // certificateRevokeTime Field Functions 
      bool hasCertificateRevokeTime() const { return this->certificateRevokeTime_ != nullptr;};
      void deleteCertificateRevokeTime() { this->certificateRevokeTime_ = nullptr;};
      inline int64_t getCertificateRevokeTime() const { DARABONBA_PTR_GET_DEFAULT(certificateRevokeTime_, 0L) };
      inline InstanceList& setCertificateRevokeTime(int64_t certificateRevokeTime) { DARABONBA_PTR_SET_VALUE(certificateRevokeTime_, certificateRevokeTime) };


      // certificateStatus Field Functions 
      bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
      void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
      inline string getCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
      inline InstanceList& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline InstanceList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline InstanceList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // fullDomainCount Field Functions 
      bool hasFullDomainCount() const { return this->fullDomainCount_ != nullptr;};
      void deleteFullDomainCount() { this->fullDomainCount_ = nullptr;};
      inline int32_t getFullDomainCount() const { DARABONBA_PTR_GET_DEFAULT(fullDomainCount_, 0) };
      inline InstanceList& setFullDomainCount(int32_t fullDomainCount) { DARABONBA_PTR_SET_VALUE(fullDomainCount_, fullDomainCount) };


      // instanceEndTime Field Functions 
      bool hasInstanceEndTime() const { return this->instanceEndTime_ != nullptr;};
      void deleteInstanceEndTime() { this->instanceEndTime_ = nullptr;};
      inline int64_t getInstanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(instanceEndTime_, 0L) };
      inline InstanceList& setInstanceEndTime(int64_t instanceEndTime) { DARABONBA_PTR_SET_VALUE(instanceEndTime_, instanceEndTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStartTime Field Functions 
      bool hasInstanceStartTime() const { return this->instanceStartTime_ != nullptr;};
      void deleteInstanceStartTime() { this->instanceStartTime_ = nullptr;};
      inline int64_t getInstanceStartTime() const { DARABONBA_PTR_GET_DEFAULT(instanceStartTime_, 0L) };
      inline InstanceList& setInstanceStartTime(int64_t instanceStartTime) { DARABONBA_PTR_SET_VALUE(instanceStartTime_, instanceStartTime) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // keyAlgorithm Field Functions 
      bool hasKeyAlgorithm() const { return this->keyAlgorithm_ != nullptr;};
      void deleteKeyAlgorithm() { this->keyAlgorithm_ = nullptr;};
      inline string getKeyAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(keyAlgorithm_, "") };
      inline InstanceList& setKeyAlgorithm(string keyAlgorithm) { DARABONBA_PTR_SET_VALUE(keyAlgorithm_, keyAlgorithm) };


      // orderEndTime Field Functions 
      bool hasOrderEndTime() const { return this->orderEndTime_ != nullptr;};
      void deleteOrderEndTime() { this->orderEndTime_ = nullptr;};
      inline int64_t getOrderEndTime() const { DARABONBA_PTR_GET_DEFAULT(orderEndTime_, 0L) };
      inline InstanceList& setOrderEndTime(int64_t orderEndTime) { DARABONBA_PTR_SET_VALUE(orderEndTime_, orderEndTime) };


      // orderStartTime Field Functions 
      bool hasOrderStartTime() const { return this->orderStartTime_ != nullptr;};
      void deleteOrderStartTime() { this->orderStartTime_ = nullptr;};
      inline int64_t getOrderStartTime() const { DARABONBA_PTR_GET_DEFAULT(orderStartTime_, 0L) };
      inline InstanceList& setOrderStartTime(int64_t orderStartTime) { DARABONBA_PTR_SET_VALUE(orderStartTime_, orderStartTime) };


      // pendingResult Field Functions 
      bool hasPendingResult() const { return this->pendingResult_ != nullptr;};
      void deletePendingResult() { this->pendingResult_ = nullptr;};
      inline string getPendingResult() const { DARABONBA_PTR_GET_DEFAULT(pendingResult_, "") };
      inline InstanceList& setPendingResult(string pendingResult) { DARABONBA_PTR_SET_VALUE(pendingResult_, pendingResult) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline InstanceList& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // wildcardDomainCount Field Functions 
      bool hasWildcardDomainCount() const { return this->wildcardDomainCount_ != nullptr;};
      void deleteWildcardDomainCount() { this->wildcardDomainCount_ = nullptr;};
      inline int32_t getWildcardDomainCount() const { DARABONBA_PTR_GET_DEFAULT(wildcardDomainCount_, 0) };
      inline InstanceList& setWildcardDomainCount(int32_t wildcardDomainCount) { DARABONBA_PTR_SET_VALUE(wildcardDomainCount_, wildcardDomainCount) };


    protected:
      shared_ptr<string> autoReissue_ {};
      shared_ptr<string> brand_ {};
      shared_ptr<string> certIdentifier_ {};
      shared_ptr<int64_t> certificateId_ {};
      shared_ptr<string> certificateName_ {};
      shared_ptr<int64_t> certificateNotAfter_ {};
      shared_ptr<int64_t> certificateRevokeTime_ {};
      shared_ptr<string> certificateStatus_ {};
      shared_ptr<string> certificateType_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int32_t> fullDomainCount_ {};
      shared_ptr<int64_t> instanceEndTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> instanceStartTime_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> keyAlgorithm_ {};
      shared_ptr<int64_t> orderEndTime_ {};
      shared_ptr<int64_t> orderStartTime_ {};
      shared_ptr<string> pendingResult_ {};
      shared_ptr<string> spec_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> wildcardDomainCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->instanceList_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListInstancesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<ListInstancesResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<ListInstancesResponseBody::InstanceList>) };
    inline vector<ListInstancesResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<ListInstancesResponseBody::InstanceList>) };
    inline ListInstancesResponseBody& setInstanceList(const vector<ListInstancesResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstancesResponseBody& setInstanceList(vector<ListInstancesResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListInstancesResponseBody& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<ListInstancesResponseBody::InstanceList>> instanceList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> showSize_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
