// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECASTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECASTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->casterName_ == nullptr
        && this->casterTemplate_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->expireTime_ == nullptr && this->normType_ == nullptr
        && this->ownerId_ == nullptr && this->purchaseTime_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string getCasterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline CreateCasterRequest& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // casterTemplate Field Functions 
    bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
    void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
    inline string getCasterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
    inline CreateCasterRequest& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateCasterRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCasterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateCasterRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // normType Field Functions 
    bool hasNormType() const { return this->normType_ != nullptr;};
    void deleteNormType() { this->normType_ = nullptr;};
    inline int32_t getNormType() const { DARABONBA_PTR_GET_DEFAULT(normType_, 0) };
    inline CreateCasterRequest& setNormType(int32_t normType) { DARABONBA_PTR_SET_VALUE(normType_, normType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCasterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // purchaseTime Field Functions 
    bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
    void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
    inline string getPurchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
    inline CreateCasterRequest& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCasterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCasterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCasterRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCasterRequest::Tag>) };
    inline vector<CreateCasterRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateCasterRequest::Tag>) };
    inline CreateCasterRequest& setTag(const vector<CreateCasterRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCasterRequest& setTag(vector<CreateCasterRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the production studio.
    shared_ptr<string> casterName_ {};
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
    shared_ptr<string> casterTemplate_ {};
    // The billing method. Only the pay-as-you-go billing method is supported.**** Valid values:
    // 
    // *   **PrePaid**: subscription. This billing method is not yet supported.
    // *   **PostPaid**: pay-as-you-go
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can specify a custom value for this parameter, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The expiration time of the production studio. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  This parameter is valid only if you set the **ChargeType** parameter to **PrePaid**.
    shared_ptr<string> expireTime_ {};
    // The type of the production studio. Valid values:
    // 
    // *   **1**: general mode
    // *   **6**: playlist mode (for carousel playback)
    // 
    // This parameter is required.
    shared_ptr<int32_t> normType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The time when the production studio was purchased. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  This parameter is valid only if you set the **ChargeType** parameter to **PrePaid**.
    shared_ptr<string> purchaseTime_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the resource group. For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/2381067.html).
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateCasterRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
