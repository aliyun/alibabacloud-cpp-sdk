// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECASTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECASTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCasterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateCasterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCasterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(NormType, normType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCasterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(NormType, normType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCasterRequest() = default ;
    CreateCasterRequest(const CreateCasterRequest &) = default ;
    CreateCasterRequest(CreateCasterRequest &&) = default ;
    CreateCasterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCasterRequest() = default ;
    CreateCasterRequest& operator=(const CreateCasterRequest &) = default ;
    CreateCasterRequest& operator=(CreateCasterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterName_ == nullptr
        && return this->casterTemplate_ == nullptr && return this->chargeType_ == nullptr && return this->clientToken_ == nullptr && return this->expireTime_ == nullptr && return this->normType_ == nullptr
        && return this->ownerId_ == nullptr && return this->purchaseTime_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr; };
    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string casterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline CreateCasterRequest& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // casterTemplate Field Functions 
    bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
    void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
    inline string casterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
    inline CreateCasterRequest& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateCasterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCasterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateCasterRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // normType Field Functions 
    bool hasNormType() const { return this->normType_ != nullptr;};
    void deleteNormType() { this->normType_ = nullptr;};
    inline int32_t normType() const { DARABONBA_PTR_GET_DEFAULT(normType_, 0) };
    inline CreateCasterRequest& setNormType(int32_t normType) { DARABONBA_PTR_SET_VALUE(normType_, normType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCasterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // purchaseTime Field Functions 
    bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
    void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
    inline string purchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
    inline CreateCasterRequest& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCasterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCasterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCasterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCasterRequestTag>) };
    inline vector<CreateCasterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCasterRequestTag>) };
    inline CreateCasterRequest& setTag(const vector<CreateCasterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCasterRequest& setTag(vector<CreateCasterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the production studio.
    std::shared_ptr<string> casterName_ = nullptr;
    // The preset resolution of the production studio. If the subscription billing method is used, this parameter supports the following valid values:
    // 
    // *   **lp_ld**: low definition
    // *   **lp_sd**: standard definition
    // *   **lp_hd**: high definition
    // *   **lp_ud**: ultra high definition
    // *   **lp_ld_v**: low definition (portrait mode)
    // *   **lp_sd_v**: standard definition (portrait mode)
    // *   **lp_hd_v**: high definition (portrait mode)
    // *   **lp_ud_v**: ultra high definition (portrait mode)
    // 
    // >  If the pay-as-you-go billing method is used, you must call the [SetCasterConfig](https://help.aliyun.com/document_detail/60271.html) operation to specify the resolution.
    std::shared_ptr<string> casterTemplate_ = nullptr;
    // The billing method. Only the pay-as-you-go billing method is supported.**** Valid values:
    // 
    // *   **PrePaid**: subscription. This billing method is not yet supported.
    // *   **PostPaid**: pay-as-you-go
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can specify a custom value for this parameter, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The expiration time of the production studio. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  This parameter is valid only if you set the **ChargeType** parameter to **PrePaid**.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The type of the production studio. Valid values:
    // 
    // *   **1**: general mode
    // *   **6**: playlist mode (for carousel playback)
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> normType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The time when the production studio was purchased. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  This parameter is valid only if you set the **ChargeType** parameter to **PrePaid**.
    std::shared_ptr<string> purchaseTime_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/2381067.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateCasterRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
