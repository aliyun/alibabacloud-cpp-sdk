// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODY_HPP_
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
  class ListCertWarehouseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertWarehouseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertWarehouseList, certWarehouseList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertWarehouseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertWarehouseList, certWarehouseList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertWarehouseResponseBody() = default ;
    ListCertWarehouseResponseBody(const ListCertWarehouseResponseBody &) = default ;
    ListCertWarehouseResponseBody(ListCertWarehouseResponseBody &&) = default ;
    ListCertWarehouseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertWarehouseResponseBody() = default ;
    ListCertWarehouseResponseBody& operator=(const ListCertWarehouseResponseBody &) = default ;
    ListCertWarehouseResponseBody& operator=(ListCertWarehouseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertWarehouseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertWarehouseList& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PcaInstanceId, pcaInstanceId_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WhId, whId_);
      };
      friend void from_json(const Darabonba::Json& j, CertWarehouseList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PcaInstanceId, pcaInstanceId_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WhId, whId_);
      };
      CertWarehouseList() = default ;
      CertWarehouseList(const CertWarehouseList &) = default ;
      CertWarehouseList(CertWarehouseList &&) = default ;
      CertWarehouseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertWarehouseList() = default ;
      CertWarehouseList& operator=(const CertWarehouseList &) = default ;
      CertWarehouseList& operator=(CertWarehouseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->isExpired_ == nullptr && this->name_ == nullptr && this->pcaInstanceId_ == nullptr && this->qps_ == nullptr
        && this->type_ == nullptr && this->whId_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline CertWarehouseList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CertWarehouseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isExpired Field Functions 
      bool hasIsExpired() const { return this->isExpired_ != nullptr;};
      void deleteIsExpired() { this->isExpired_ = nullptr;};
      inline bool getIsExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
      inline CertWarehouseList& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CertWarehouseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pcaInstanceId Field Functions 
      bool hasPcaInstanceId() const { return this->pcaInstanceId_ != nullptr;};
      void deletePcaInstanceId() { this->pcaInstanceId_ = nullptr;};
      inline string getPcaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pcaInstanceId_, "") };
      inline CertWarehouseList& setPcaInstanceId(string pcaInstanceId) { DARABONBA_PTR_SET_VALUE(pcaInstanceId_, pcaInstanceId) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline CertWarehouseList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CertWarehouseList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whId Field Functions 
      bool hasWhId() const { return this->whId_ != nullptr;};
      void deleteWhId() { this->whId_ = nullptr;};
      inline int64_t getWhId() const { DARABONBA_PTR_GET_DEFAULT(whId_, 0L) };
      inline CertWarehouseList& setWhId(int64_t whId) { DARABONBA_PTR_SET_VALUE(whId_, whId) };


    protected:
      // The timestamp when the certificate application repository expires. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The instance ID of the certificate application repository.
      shared_ptr<string> instanceId_ {};
      // Indicates whether the certificate application repository has expired. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isExpired_ {};
      // The name of the certificate application repository.
      shared_ptr<string> name_ {};
      // The instance ID of the private CA.
      shared_ptr<string> pcaInstanceId_ {};
      // The queries per second (QPS).
      shared_ptr<int64_t> qps_ {};
      // The type of the certificate application repository. Valid values:
      // 
      // *   **ssl**: certificate application repository of SSL certificates
      // *   **uploadPCA**: certificate application repository of uploaded private certificates
      // *   **free**: certificate application repository of free certificates, available only on the China site (aliyun.com)
      // *   **aliyunPCA**: certificate application repository of private certificates purchased from Alibaba Cloud Private Certificate Authority (PCA), available only on the China site (aliyun.com)
      // *   **disable**: disabled certificate application repository
      shared_ptr<string> type_ {};
      // The ID of the certificate application repository.
      shared_ptr<int64_t> whId_ {};
    };

    virtual bool empty() const override { return this->certWarehouseList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // certWarehouseList Field Functions 
    bool hasCertWarehouseList() const { return this->certWarehouseList_ != nullptr;};
    void deleteCertWarehouseList() { this->certWarehouseList_ = nullptr;};
    inline const vector<ListCertWarehouseResponseBody::CertWarehouseList> & getCertWarehouseList() const { DARABONBA_PTR_GET_CONST(certWarehouseList_, vector<ListCertWarehouseResponseBody::CertWarehouseList>) };
    inline vector<ListCertWarehouseResponseBody::CertWarehouseList> getCertWarehouseList() { DARABONBA_PTR_GET(certWarehouseList_, vector<ListCertWarehouseResponseBody::CertWarehouseList>) };
    inline ListCertWarehouseResponseBody& setCertWarehouseList(const vector<ListCertWarehouseResponseBody::CertWarehouseList> & certWarehouseList) { DARABONBA_PTR_SET_VALUE(certWarehouseList_, certWarehouseList) };
    inline ListCertWarehouseResponseBody& setCertWarehouseList(vector<ListCertWarehouseResponseBody::CertWarehouseList> && certWarehouseList) { DARABONBA_PTR_SET_RVALUE(certWarehouseList_, certWarehouseList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCertWarehouseResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertWarehouseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCertWarehouseResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertWarehouseResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificate application repositories.
    shared_ptr<vector<ListCertWarehouseResponseBody::CertWarehouseList>> certWarehouseList_ {};
    // The page number of the returned page. Default value: 1.
    shared_ptr<int64_t> currentPage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned per page. Default value: 50.
    shared_ptr<int64_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
