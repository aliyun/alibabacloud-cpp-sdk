// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORGETVIRTUALLICENSEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORGETVIRTUALLICENSEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateOrGetVirtualLicenseOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrGetVirtualLicenseOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActivatedCodeCount, activatedCodeCount_);
      DARABONBA_PTR_TO_JSON(ActivationCodeQuota, activationCodeQuota_);
      DARABONBA_PTR_TO_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_TO_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
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
    friend void from_json(const Darabonba::Json& j, CreateOrGetVirtualLicenseOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivatedCodeCount, activatedCodeCount_);
      DARABONBA_PTR_FROM_JSON(ActivationCodeQuota, activationCodeQuota_);
      DARABONBA_PTR_FROM_JSON(AliyunOrderId, aliyunOrderId_);
      DARABONBA_PTR_FROM_JSON(AllowEmptySystemIdentifier, allowEmptySystemIdentifier_);
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
    CreateOrGetVirtualLicenseOrderResponseBody() = default ;
    CreateOrGetVirtualLicenseOrderResponseBody(const CreateOrGetVirtualLicenseOrderResponseBody &) = default ;
    CreateOrGetVirtualLicenseOrderResponseBody(CreateOrGetVirtualLicenseOrderResponseBody &&) = default ;
    CreateOrGetVirtualLicenseOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrGetVirtualLicenseOrderResponseBody() = default ;
    CreateOrGetVirtualLicenseOrderResponseBody& operator=(const CreateOrGetVirtualLicenseOrderResponseBody &) = default ;
    CreateOrGetVirtualLicenseOrderResponseBody& operator=(CreateOrGetVirtualLicenseOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activatedCodeCount_ == nullptr
        && return this->activationCodeQuota_ == nullptr && return this->aliyunOrderId_ == nullptr && return this->allowEmptySystemIdentifier_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr
        && return this->isVirtualOrder_ == nullptr && return this->isVirtualOrderFrozen_ == nullptr && return this->packageType_ == nullptr && return this->packageValidity_ == nullptr && return this->purchaseChannel_ == nullptr
        && return this->requestId_ == nullptr && return this->virtualOrderId_ == nullptr; };
    // activatedCodeCount Field Functions 
    bool hasActivatedCodeCount() const { return this->activatedCodeCount_ != nullptr;};
    void deleteActivatedCodeCount() { this->activatedCodeCount_ = nullptr;};
    inline int32_t activatedCodeCount() const { DARABONBA_PTR_GET_DEFAULT(activatedCodeCount_, 0) };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setActivatedCodeCount(int32_t activatedCodeCount) { DARABONBA_PTR_SET_VALUE(activatedCodeCount_, activatedCodeCount) };


    // activationCodeQuota Field Functions 
    bool hasActivationCodeQuota() const { return this->activationCodeQuota_ != nullptr;};
    void deleteActivationCodeQuota() { this->activationCodeQuota_ = nullptr;};
    inline int32_t activationCodeQuota() const { DARABONBA_PTR_GET_DEFAULT(activationCodeQuota_, 0) };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setActivationCodeQuota(int32_t activationCodeQuota) { DARABONBA_PTR_SET_VALUE(activationCodeQuota_, activationCodeQuota) };


    // aliyunOrderId Field Functions 
    bool hasAliyunOrderId() const { return this->aliyunOrderId_ != nullptr;};
    void deleteAliyunOrderId() { this->aliyunOrderId_ = nullptr;};
    inline string aliyunOrderId() const { DARABONBA_PTR_GET_DEFAULT(aliyunOrderId_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setAliyunOrderId(string aliyunOrderId) { DARABONBA_PTR_SET_VALUE(aliyunOrderId_, aliyunOrderId) };


    // allowEmptySystemIdentifier Field Functions 
    bool hasAllowEmptySystemIdentifier() const { return this->allowEmptySystemIdentifier_ != nullptr;};
    void deleteAllowEmptySystemIdentifier() { this->allowEmptySystemIdentifier_ = nullptr;};
    inline bool allowEmptySystemIdentifier() const { DARABONBA_PTR_GET_DEFAULT(allowEmptySystemIdentifier_, false) };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setAllowEmptySystemIdentifier(bool allowEmptySystemIdentifier) { DARABONBA_PTR_SET_VALUE(allowEmptySystemIdentifier_, allowEmptySystemIdentifier) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isVirtualOrder Field Functions 
    bool hasIsVirtualOrder() const { return this->isVirtualOrder_ != nullptr;};
    void deleteIsVirtualOrder() { this->isVirtualOrder_ = nullptr;};
    inline bool isVirtualOrder() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrder_, false) };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setIsVirtualOrder(bool isVirtualOrder) { DARABONBA_PTR_SET_VALUE(isVirtualOrder_, isVirtualOrder) };


    // isVirtualOrderFrozen Field Functions 
    bool hasIsVirtualOrderFrozen() const { return this->isVirtualOrderFrozen_ != nullptr;};
    void deleteIsVirtualOrderFrozen() { this->isVirtualOrderFrozen_ = nullptr;};
    inline bool isVirtualOrderFrozen() const { DARABONBA_PTR_GET_DEFAULT(isVirtualOrderFrozen_, false) };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setIsVirtualOrderFrozen(bool isVirtualOrderFrozen) { DARABONBA_PTR_SET_VALUE(isVirtualOrderFrozen_, isVirtualOrderFrozen) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // packageValidity Field Functions 
    bool hasPackageValidity() const { return this->packageValidity_ != nullptr;};
    void deletePackageValidity() { this->packageValidity_ = nullptr;};
    inline string packageValidity() const { DARABONBA_PTR_GET_DEFAULT(packageValidity_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setPackageValidity(string packageValidity) { DARABONBA_PTR_SET_VALUE(packageValidity_, packageValidity) };


    // purchaseChannel Field Functions 
    bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
    void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
    inline string purchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualOrderId Field Functions 
    bool hasVirtualOrderId() const { return this->virtualOrderId_ != nullptr;};
    void deleteVirtualOrderId() { this->virtualOrderId_ = nullptr;};
    inline string virtualOrderId() const { DARABONBA_PTR_GET_DEFAULT(virtualOrderId_, "") };
    inline CreateOrGetVirtualLicenseOrderResponseBody& setVirtualOrderId(string virtualOrderId) { DARABONBA_PTR_SET_VALUE(virtualOrderId_, virtualOrderId) };


  protected:
    // The number of generated activation codes.
    std::shared_ptr<int32_t> activatedCodeCount_ = nullptr;
    // The maximum number of activation codes that you can apply for.
    std::shared_ptr<int32_t> activationCodeQuota_ = nullptr;
    // The Alibaba Cloud order ID (including the virtual order ID).
    std::shared_ptr<string> aliyunOrderId_ = nullptr;
    // Indicates whether activation codes can be generated without the system identifier.
    std::shared_ptr<bool> allowEmptySystemIdentifier_ = nullptr;
    // The time when the order was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the order was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Indicates whether the order is a virtual order (virtual orders allow pre-generation of activation codes).
    std::shared_ptr<bool> isVirtualOrder_ = nullptr;
    // Indicates whether the virtual order is frozen (activation codes cannot be generated for a frozen virtual order).
    std::shared_ptr<bool> isVirtualOrderFrozen_ = nullptr;
    // The plan type.
    std::shared_ptr<string> packageType_ = nullptr;
    // The validity period of the plan, which is one year (common) or thirty years (long-term).
    std::shared_ptr<string> packageValidity_ = nullptr;
    // The purchase channel.
    std::shared_ptr<string> purchaseChannel_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the virtual order.
    std::shared_ptr<string> virtualOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
