// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACESPREPAIDQUOTA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACESPREPAIDQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspacesResponseBodyWorkspacesPrePaidQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyWorkspacesPrePaidQuota& obj) { 
      DARABONBA_PTR_TO_JSON(allocatedResource, allocatedResource_);
      DARABONBA_PTR_TO_JSON(autoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(maxResource, maxResource_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(paymentStatus, paymentStatus_);
      DARABONBA_PTR_TO_JSON(usedResource, usedResource_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyWorkspacesPrePaidQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(allocatedResource, allocatedResource_);
      DARABONBA_PTR_FROM_JSON(autoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(maxResource, maxResource_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(paymentStatus, paymentStatus_);
      DARABONBA_PTR_FROM_JSON(usedResource, usedResource_);
    };
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota() = default ;
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota(const ListWorkspacesResponseBodyWorkspacesPrePaidQuota &) = default ;
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota(ListWorkspacesResponseBodyWorkspacesPrePaidQuota &&) = default ;
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyWorkspacesPrePaidQuota() = default ;
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota& operator=(const ListWorkspacesResponseBodyWorkspacesPrePaidQuota &) = default ;
    ListWorkspacesResponseBodyWorkspacesPrePaidQuota& operator=(ListWorkspacesResponseBodyWorkspacesPrePaidQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocatedResource_ != nullptr
        && this->autoRenewal_ != nullptr && this->createTime_ != nullptr && this->expireTime_ != nullptr && this->instanceId_ != nullptr && this->maxResource_ != nullptr
        && this->orderId_ != nullptr && this->paymentStatus_ != nullptr && this->usedResource_ != nullptr; };
    // allocatedResource Field Functions 
    bool hasAllocatedResource() const { return this->allocatedResource_ != nullptr;};
    void deleteAllocatedResource() { this->allocatedResource_ = nullptr;};
    inline string allocatedResource() const { DARABONBA_PTR_GET_DEFAULT(allocatedResource_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setAllocatedResource(string allocatedResource) { DARABONBA_PTR_SET_VALUE(allocatedResource_, allocatedResource) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResource Field Functions 
    bool hasMaxResource() const { return this->maxResource_ != nullptr;};
    void deleteMaxResource() { this->maxResource_ = nullptr;};
    inline string maxResource() const { DARABONBA_PTR_GET_DEFAULT(maxResource_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setMaxResource(string maxResource) { DARABONBA_PTR_SET_VALUE(maxResource_, maxResource) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // paymentStatus Field Functions 
    bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
    void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
    inline string paymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


    // usedResource Field Functions 
    bool hasUsedResource() const { return this->usedResource_ != nullptr;};
    void deleteUsedResource() { this->usedResource_ = nullptr;};
    inline string usedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, "") };
    inline ListWorkspacesResponseBodyWorkspacesPrePaidQuota& setUsedResource(string usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


  protected:
    // The amount of resources that are allocated by a subscription quota.
    std::shared_ptr<string> allocatedResource_ = nullptr;
    // Indicates whether auto-renewal is enabled for the subscription quota.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // The creation time of the subscription quota.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The expiration time of the subscription quota.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The ID of the instance that is generated when you purchase the subscription quota.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum amount of resources that can be used in a subscription quota.
    std::shared_ptr<string> maxResource_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    // The status of the subscription quota. Valid values:
    // 
    // *   NORMAL
    // *   WAIT_FOR_EXPIRE
    // *   EXPIRED
    std::shared_ptr<string> paymentStatus_ = nullptr;
    // The amount of resources that are used.
    std::shared_ptr<string> usedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
