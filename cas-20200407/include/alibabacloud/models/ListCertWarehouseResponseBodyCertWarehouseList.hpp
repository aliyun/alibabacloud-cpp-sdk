// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODYCERTWAREHOUSELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTWAREHOUSERESPONSEBODYCERTWAREHOUSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertWarehouseResponseBodyCertWarehouseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertWarehouseResponseBodyCertWarehouseList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PcaInstanceId, pcaInstanceId_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WhId, whId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertWarehouseResponseBodyCertWarehouseList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsExpired, isExpired_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PcaInstanceId, pcaInstanceId_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WhId, whId_);
    };
    ListCertWarehouseResponseBodyCertWarehouseList() = default ;
    ListCertWarehouseResponseBodyCertWarehouseList(const ListCertWarehouseResponseBodyCertWarehouseList &) = default ;
    ListCertWarehouseResponseBodyCertWarehouseList(ListCertWarehouseResponseBodyCertWarehouseList &&) = default ;
    ListCertWarehouseResponseBodyCertWarehouseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertWarehouseResponseBodyCertWarehouseList() = default ;
    ListCertWarehouseResponseBodyCertWarehouseList& operator=(const ListCertWarehouseResponseBodyCertWarehouseList &) = default ;
    ListCertWarehouseResponseBodyCertWarehouseList& operator=(ListCertWarehouseResponseBodyCertWarehouseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->instanceId_ != nullptr && this->isExpired_ != nullptr && this->name_ != nullptr && this->pcaInstanceId_ != nullptr && this->qps_ != nullptr
        && this->type_ != nullptr && this->whId_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isExpired Field Functions 
    bool hasIsExpired() const { return this->isExpired_ != nullptr;};
    void deleteIsExpired() { this->isExpired_ = nullptr;};
    inline bool isExpired() const { DARABONBA_PTR_GET_DEFAULT(isExpired_, false) };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setIsExpired(bool isExpired) { DARABONBA_PTR_SET_VALUE(isExpired_, isExpired) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pcaInstanceId Field Functions 
    bool hasPcaInstanceId() const { return this->pcaInstanceId_ != nullptr;};
    void deletePcaInstanceId() { this->pcaInstanceId_ = nullptr;};
    inline string pcaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pcaInstanceId_, "") };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setPcaInstanceId(string pcaInstanceId) { DARABONBA_PTR_SET_VALUE(pcaInstanceId_, pcaInstanceId) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whId Field Functions 
    bool hasWhId() const { return this->whId_ != nullptr;};
    void deleteWhId() { this->whId_ = nullptr;};
    inline int64_t whId() const { DARABONBA_PTR_GET_DEFAULT(whId_, 0L) };
    inline ListCertWarehouseResponseBodyCertWarehouseList& setWhId(int64_t whId) { DARABONBA_PTR_SET_VALUE(whId_, whId) };


  protected:
    // The timestamp when the certificate application repository expires. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The instance ID of the certificate application repository.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the certificate application repository has expired. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isExpired_ = nullptr;
    // The name of the certificate application repository.
    std::shared_ptr<string> name_ = nullptr;
    // The instance ID of the private CA.
    std::shared_ptr<string> pcaInstanceId_ = nullptr;
    // The queries per second (QPS).
    std::shared_ptr<int64_t> qps_ = nullptr;
    // The type of the certificate application repository. Valid values:
    // 
    // *   **ssl**: certificate application repository of SSL certificates
    // *   **uploadPCA**: certificate application repository of uploaded private certificates
    // *   **free**: certificate application repository of free certificates, available only on the China site (aliyun.com)
    // *   **aliyunPCA**: certificate application repository of private certificates purchased from Alibaba Cloud Private Certificate Authority (PCA), available only on the China site (aliyun.com)
    // *   **disable**: disabled certificate application repository
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the certificate application repository.
    std::shared_ptr<int64_t> whId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
