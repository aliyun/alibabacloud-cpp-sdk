// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLicenseOrdersResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseOrdersResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(ActivatedCodeCount, activatedCodeCount_);
      DARABONBA_PTR_TO_JSON(ActivationCodeQuota, activationCodeQuota_);
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsVirtualOrder, isVirtualOrder_);
      DARABONBA_PTR_TO_JSON(IsVirtualOrderFrozen, isVirtualOrderFrozen_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PackageValidity, packageValidity_);
      DARABONBA_PTR_TO_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_TO_JSON(VirtualAliyunOrderId, virtualAliyunOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseOrdersResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivatedCodeCount, activatedCodeCount_);
      DARABONBA_PTR_FROM_JSON(ActivationCodeQuota, activationCodeQuota_);
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsVirtualOrder, isVirtualOrder_);
      DARABONBA_PTR_FROM_JSON(IsVirtualOrderFrozen, isVirtualOrderFrozen_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PackageValidity, packageValidity_);
      DARABONBA_PTR_FROM_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_FROM_JSON(VirtualAliyunOrderId, virtualAliyunOrderId_);
    };
    DescribeLicenseOrdersResponseBodyItems() = default ;
    DescribeLicenseOrdersResponseBodyItems(const DescribeLicenseOrdersResponseBodyItems &) = default ;
    DescribeLicenseOrdersResponseBodyItems(DescribeLicenseOrdersResponseBodyItems &&) = default ;
    DescribeLicenseOrdersResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseOrdersResponseBodyItems() = default ;
    DescribeLicenseOrdersResponseBodyItems& operator=(const DescribeLicenseOrdersResponseBodyItems &) = default ;
    DescribeLicenseOrdersResponseBodyItems& operator=(DescribeLicenseOrdersResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activatedCodeCount_ != nullptr
        && this->activationCodeQuota_ != nullptr && this->aliyunOrderId_ != nullptr && this->allowEmptySystemIdentifier_ != nullptr && this->engine_ != nullptr && this->gmtCreated_ != nullptr
        && this->gmtModified_ != nullptr && this->isVirtualOrder_ != nullptr && this->isVirtualOrderFrozen_ != nullptr && this->packageType_ != nullptr && this->packageValidity_ != nullptr
        && this->purchaseChannel_ != nullptr && this->virtualAliyunOrderId_ != nullptr; };
    // activatedCodeCount Field Functions 
    bool hasActivatedCodeCount() const { return this->activatedCodeCount_ != nullptr;};
    void deleteActivatedCodeCount() { this->activatedCodeCount_ = nullptr;};
    inline int32_t activatedCodeCount() const { DARABONBA_PTR_GET_DEFAULT(activatedCodeCount_, 0) };
    inline DescribeLicenseOrdersResponseBodyItems& setActivatedCodeCount(int32_t activatedCodeCount) { DARABONBA_PTR_SET_VALUE(activatedCodeCount_, activatedCodeCount) };


    // activationCodeQuota Field Functions 
    bool hasActivationCodeQuota() const { return this->activationCodeQuota_ != nullptr;};
    void deleteActivationCodeQuota() { this->activationCodeQuota_ = nullptr;};
    inline int32_t activationCodeQuota() const { DARABONBA_PTR_GET_DEFAULT(activationCodeQuota_, 0) };
    inline DescribeLicenseOrdersResponseBodyItems& setActivationCodeQuota(int32_t activationCodeQuota) { DARABONBA_PTR_SET_VALUE(activationCodeQuota_, activationCodeQuota) };


    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // allowEmptySystemIdentifier Field Functions 
    bool hasAllowEmptySystemIdentifier() const { return this->allowEmptySystemIdentifier_ != nullptr;};
    void deleteAllowEmptySystemIdentifier() { this->allowEmptySystemIdentifier_ = nullptr;};
    inline bool allowEmptySystemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(allowEmptySystemIdentifier_, false) };
    inline DescribeLicenseOrdersResponseBodyItems& setAllowEmptySystemIdentifier(bool allowEmptySystemIdentifier) { DARABONBA_PTR_SET_VALUE(allowEmptySystemIdentifier_, allowEmptySystemIdentifier) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isVirtualOrder Field Functions 
    bool hasIsVirtualOrder() const { return this->isVirtualOrder_ != nullptr;};
    void deleteIsVirtualOrder() { this->isVirtualOrder_ = nullptr;};
    inline bool isVirtualOrder() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrder_, false) };
    inline DescribeLicenseOrdersResponseBodyItems& setIsVirtualOrder(bool isVirtualOrder) { DARABONBA_PTR_SET_VALUE(isVirtualOrder_, isVirtualOrder) };


    // isVirtualOrderFrozen Field Functions 
    bool hasIsVirtualOrderFrozen() const { return this->isVirtualOrderFrozen_ != nullptr;};
    void deleteIsVirtualOrderFrozen() { this->isVirtualOrderFrozen_ = nullptr;};
    inline bool isVirtualOrderFrozen() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrderFrozen_, false) };
    inline DescribeLicenseOrdersResponseBodyItems& setIsVirtualOrderFrozen(bool isVirtualOrderFrozen) { DARABONBA_PTR_SET_VALUE(isVirtualOrderFrozen_, isVirtualOrderFrozen) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageValidity Field Functions 
    bool hasPackageValidity() const { return this->packageValidity_ != nullptr;};
    void deletePackageValidity() { this->packageValidity_ = nullptr;};
    inline string packageValidity() const { DARABONBA_PTR_GET_DEFAULT(packageValidity_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setPackageValidity(string packageValidity) { DARABONBA_PTR_SET_VALUE(packageValidity_, packageValidity) };


    // purchaseChannel Field Functions 
    bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
    void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
    inline string purchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


    // virtualAliyunOrderId Field Functions 
    bool hasVirtualAliyunOrderId() const { return this->virtualAliyunOrderId_ != nullptr;};
    void deleteVirtualAliyunOrderId() { this->virtualAliyunOrderId_ = nullptr;};
    inline string virtualAliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(virtualAliyunOrderId_, "") };
    inline DescribeLicenseOrdersResponseBodyItems& setVirtualAliyunOrderId(string virtualAliyunOrderId) { DARABONBA_PTR_SET_VALUE(virtualAliyunOrderId_, virtualAliyunOrderId) };


  protected:
    // The number of generated activation codes.
    std::shared_ptr<int32_t> activatedCodeCount_ = nullptr;
    // The maximum number of activation codes that you can apply for.
    std::shared_ptr<int32_t> activationCodeQuota_ = nullptr;
    // The ID of the Alibaba Cloud order. The ID of a virtual order may be returned.
    std::shared_ptr<string> aliyunOrderId_ = nullptr;
    // Indicates whether the SystemIdentifier parameter can be left empty when the system generates an activation code.
    std::shared_ptr<bool> allowEmptySystemIdentifier_ = nullptr;
    // The engine of the PolarDB cluster. Valid values: PG, Oracle, and MySQL.
    std::shared_ptr<string> engine_ = nullptr;
    // The time when the order was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the order was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the order is a virtual order. Pre-generation of activation codes is allowed for virtual orders.
    std::shared_ptr<bool> isVirtualOrder_ = nullptr;
    // Indicates whether the virtual order is frozen. Generation of activation codes is not allowed for frozen virtual orders.
    std::shared_ptr<bool> isVirtualOrderFrozen_ = nullptr;
    // The type of the package. Valid values:
    // 
    // *   single_node_subscribe: Single-node Edition (Subscription).
    // *   single_node_long_term: Single-node Edition (Long-term).
    // *   primary_backup_subscribe: HA Edition (Subscription).
    // *   primary_backup_long_term: HA Edition (Long-term).
    // *   pre_generation_long_term: Pre-generated (Long-term).
    std::shared_ptr<string> packageType_ = nullptr;
    // The validity period of the package. Valid values: 1 year and 30 years.
    std::shared_ptr<string> packageValidity_ = nullptr;
    // The purchase channel. Valid values: aliyun_market and aliyun_public. aliyun_market indicates Alibaba Cloud Marketplace. aliyun_public indicates the PolarDB buy page.
    std::shared_ptr<string> purchaseChannel_ = nullptr;
    // The ID of the virtual order.
    std::shared_ptr<string> virtualAliyunOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
