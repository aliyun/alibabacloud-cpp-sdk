// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELICENSEORDERDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLicenseOrderDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLicenseOrderDetailsResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualOrderId, virtualOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLicenseOrderDetailsResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualOrderId, virtualOrderId_);
    };
    DescribeLicenseOrderDetailsResponseBody() = default ;
    DescribeLicenseOrderDetailsResponseBody(const DescribeLicenseOrderDetailsResponseBody &) = default ;
    DescribeLicenseOrderDetailsResponseBody(DescribeLicenseOrderDetailsResponseBody &&) = default ;
    DescribeLicenseOrderDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLicenseOrderDetailsResponseBody() = default ;
    DescribeLicenseOrderDetailsResponseBody& operator=(const DescribeLicenseOrderDetailsResponseBody &) = default ;
    DescribeLicenseOrderDetailsResponseBody& operator=(DescribeLicenseOrderDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activatedCodeCount_ == nullptr
        && this->activationCodeQuota_ == nullptr && this->aliyunOrderId_ == nullptr && this->allowEmptySystemIdentifier_ == nullptr && this->engine_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->isVirtualOrder_ == nullptr && this->isVirtualOrderFrozen_ == nullptr && this->packageType_ == nullptr && this->packageValidity_ == nullptr
        && this->purchaseChannel_ == nullptr && this->requestId_ == nullptr && this->virtualOrderId_ == nullptr; };
    // activatedCodeCount Field Functions 
    bool hasActivatedCodeCount() const { return this->activatedCodeCount_ != nullptr;};
    void deleteActivatedCodeCount() { this->activatedCodeCount_ = nullptr;};
    inline int32_t getActivatedCodeCount() const { DARABONBA_PTR_GET_DEFAULT(activatedCodeCount_, 0) };
    inline DescribeLicenseOrderDetailsResponseBody& setActivatedCodeCount(int32_t activatedCodeCount) { DARABONBA_PTR_SET_VALUE(activatedCodeCount_, activatedCodeCount) };


    // activationCodeQuota Field Functions 
    bool hasActivationCodeQuota() const { return this->activationCodeQuota_ != nullptr;};
    void deleteActivationCodeQuota() { this->activationCodeQuota_ = nullptr;};
    inline int32_t getActivationCodeQuota() const { DARABONBA_PTR_GET_DEFAULT(activationCodeQuota_, 0) };
    inline DescribeLicenseOrderDetailsResponseBody& setActivationCodeQuota(int32_t activationCodeQuota) { DARABONBA_PTR_SET_VALUE(activationCodeQuota_, activationCodeQuota) };


    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string getAliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // allowEmptySystemIdentifier Field Functions 
    bool hasAllowEmptySystemIdentifier() const { return this->allowEmptySystemIdentifier_ != nullptr;};
    void deleteAllowEmptySystemIdentifier() { this->allowEmptySystemIdentifier_ = nullptr;};
    inline bool getAllowEmptySystemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(allowEmptySystemIdentifier_, false) };
    inline DescribeLicenseOrderDetailsResponseBody& setAllowEmptySystemIdentifier(bool allowEmptySystemIdentifier) { DARABONBA_PTR_SET_VALUE(allowEmptySystemIdentifier_, allowEmptySystemIdentifier) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isVirtualOrder Field Functions 
    bool hasIsVirtualOrder() const { return this->isVirtualOrder_ != nullptr;};
    void deleteIsVirtualOrder() { this->isVirtualOrder_ = nullptr;};
    inline bool getIsVirtualOrder() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrder_, false) };
    inline DescribeLicenseOrderDetailsResponseBody& setIsVirtualOrder(bool isVirtualOrder) { DARABONBA_PTR_SET_VALUE(isVirtualOrder_, isVirtualOrder) };


    // isVirtualOrderFrozen Field Functions 
    bool hasIsVirtualOrderFrozen() const { return this->isVirtualOrderFrozen_ != nullptr;};
    void deleteIsVirtualOrderFrozen() { this->isVirtualOrderFrozen_ = nullptr;};
    inline bool getIsVirtualOrderFrozen() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrderFrozen_, false) };
    inline DescribeLicenseOrderDetailsResponseBody& setIsVirtualOrderFrozen(bool isVirtualOrderFrozen) { DARABONBA_PTR_SET_VALUE(isVirtualOrderFrozen_, isVirtualOrderFrozen) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageValidity Field Functions 
    bool hasPackageValidity() const { return this->packageValidity_ != nullptr;};
    void deletePackageValidity() { this->packageValidity_ = nullptr;};
    inline string getPackageValidity() const { DARABONBA_PTR_GET_DEFAULT(packageValidity_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setPackageValidity(string packageValidity) { DARABONBA_PTR_SET_VALUE(packageValidity_, packageValidity) };


    // purchaseChannel Field Functions 
    bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
    void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
    inline string getPurchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualOrderId Field Functions 
    bool hasVirtualOrderId() const { return this->virtualOrderId_ != nullptr;};
    void deleteVirtualOrderId() { this->virtualOrderId_ = nullptr;};
    inline string getVirtualOrderId() const { DARABONBA_PTR_GET_DEFAULT(virtualOrderId_, "") };
    inline DescribeLicenseOrderDetailsResponseBody& setVirtualOrderId(string virtualOrderId) { DARABONBA_PTR_SET_VALUE(virtualOrderId_, virtualOrderId) };


  protected:
    // The number of generated activation codes.
    shared_ptr<int32_t> activatedCodeCount_ {};
    // The maximum number of activation codes that you can apply for.
    shared_ptr<int32_t> activationCodeQuota_ {};
    // The Alibaba Cloud order ID (including the virtual order ID).
    shared_ptr<string> aliyunOrderId_ {};
    // Indicates whether activation codes can be generated without the system identifier.
    shared_ptr<bool> allowEmptySystemIdentifier_ {};
    // The type of the engine. Valid values: PG, Oracle, and MySQL.
    shared_ptr<string> engine_ {};
    // The time when the order was created.
    shared_ptr<string> gmtCreated_ {};
    // The time when the order was last updated.
    shared_ptr<string> gmtModified_ {};
    // Indicates whether the order is a virtual order (virtual orders allow pre-generation of activation codes).
    shared_ptr<bool> isVirtualOrder_ {};
    // Indicates whether the virtual order is frozen (activation codes cannot be generated for a frozen virtual order).
    shared_ptr<bool> isVirtualOrderFrozen_ {};
    // The plan type. Valid values:
    // 
    // *   single_node_subscribe
    // *   single_node_long_term
    // *   primary_backup_subscribe
    // *   primary_backup_long_term
    // *   pre_generation_long_term
    shared_ptr<string> packageType_ {};
    // The validity period of the plan, which is one year (common) or thirty years (long-term).
    shared_ptr<string> packageValidity_ {};
    // The plan validity period, one year (common) or thirty years (long-term).
    shared_ptr<string> purchaseChannel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The virtual order ID.
    shared_ptr<string> virtualOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
