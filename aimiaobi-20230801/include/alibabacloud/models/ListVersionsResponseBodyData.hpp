// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UseQuota, useQuota_);
      DARABONBA_PTR_TO_JSON(VersionDetail, versionDetail_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      DARABONBA_PTR_TO_JSON(VersionStatus, versionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UseQuota, useQuota_);
      DARABONBA_PTR_FROM_JSON(VersionDetail, versionDetail_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      DARABONBA_PTR_FROM_JSON(VersionStatus, versionStatus_);
    };
    ListVersionsResponseBodyData() = default ;
    ListVersionsResponseBodyData(const ListVersionsResponseBodyData &) = default ;
    ListVersionsResponseBodyData(ListVersionsResponseBodyData &&) = default ;
    ListVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionsResponseBodyData() = default ;
    ListVersionsResponseBodyData& operator=(const ListVersionsResponseBodyData &) = default ;
    ListVersionsResponseBodyData& operator=(ListVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->concurrentCount_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceId_ == nullptr && return this->orderId_ == nullptr && return this->productType_ == nullptr
        && return this->quota_ == nullptr && return this->startTime_ == nullptr && return this->useQuota_ == nullptr && return this->versionDetail_ == nullptr && return this->versionName_ == nullptr
        && return this->versionStatus_ == nullptr; };
    // concurrentCount Field Functions 
    bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
    void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
    inline int32_t concurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0) };
    inline ListVersionsResponseBodyData& setConcurrentCount(int32_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListVersionsResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline ListVersionsResponseBodyData& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVersionsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListVersionsResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListVersionsResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline ListVersionsResponseBodyData& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListVersionsResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // useQuota Field Functions 
    bool hasUseQuota() const { return this->useQuota_ != nullptr;};
    void deleteUseQuota() { this->useQuota_ = nullptr;};
    inline int32_t useQuota() const { DARABONBA_PTR_GET_DEFAULT(useQuota_, 0) };
    inline ListVersionsResponseBodyData& setUseQuota(int32_t useQuota) { DARABONBA_PTR_SET_VALUE(useQuota_, useQuota) };


    // versionDetail Field Functions 
    bool hasVersionDetail() const { return this->versionDetail_ != nullptr;};
    void deleteVersionDetail() { this->versionDetail_ = nullptr;};
    inline string versionDetail() const { DARABONBA_PTR_GET_DEFAULT(versionDetail_, "") };
    inline ListVersionsResponseBodyData& setVersionDetail(string versionDetail) { DARABONBA_PTR_SET_VALUE(versionDetail_, versionDetail) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListVersionsResponseBodyData& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    // versionStatus Field Functions 
    bool hasVersionStatus() const { return this->versionStatus_ != nullptr;};
    void deleteVersionStatus() { this->versionStatus_ = nullptr;};
    inline int32_t versionStatus() const { DARABONBA_PTR_GET_DEFAULT(versionStatus_, 0) };
    inline ListVersionsResponseBodyData& setVersionStatus(int32_t versionStatus) { DARABONBA_PTR_SET_VALUE(versionStatus_, versionStatus) };


  protected:
    std::shared_ptr<int32_t> concurrentCount_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<int32_t> quota_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> useQuota_ = nullptr;
    std::shared_ptr<string> versionDetail_ = nullptr;
    std::shared_ptr<string> versionName_ = nullptr;
    std::shared_ptr<int32_t> versionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
