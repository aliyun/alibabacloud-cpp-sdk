// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLISTCASTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSRESPONSEBODYCASTERLISTCASTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCastersResponseBodyCasterListCasterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCastersResponseBodyCasterListCaster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCastersResponseBodyCasterListCaster& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_TO_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientTokenId, clientTokenId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(NormType, normType_);
      DARABONBA_PTR_TO_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCastersResponseBodyCasterListCaster& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(CasterTemplate, casterTemplate_);
      DARABONBA_PTR_FROM_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientTokenId, clientTokenId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(NormType, normType_);
      DARABONBA_PTR_FROM_JSON(PurchaseTime, purchaseTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeCastersResponseBodyCasterListCaster() = default ;
    DescribeCastersResponseBodyCasterListCaster(const DescribeCastersResponseBodyCasterListCaster &) = default ;
    DescribeCastersResponseBodyCasterListCaster(DescribeCastersResponseBodyCasterListCaster &&) = default ;
    DescribeCastersResponseBodyCasterListCaster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCastersResponseBodyCasterListCaster() = default ;
    DescribeCastersResponseBodyCasterListCaster& operator=(const DescribeCastersResponseBodyCasterListCaster &) = default ;
    DescribeCastersResponseBodyCasterListCaster& operator=(DescribeCastersResponseBodyCasterListCaster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->casterName_ != nullptr && this->casterTemplate_ != nullptr && this->channelEnable_ != nullptr && this->chargeType_ != nullptr && this->clientTokenId_ != nullptr
        && this->createTime_ != nullptr && this->duration_ != nullptr && this->expireTime_ != nullptr && this->lastModified_ != nullptr && this->normType_ != nullptr
        && this->purchaseTime_ != nullptr && this->resourceGroupId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string casterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // casterTemplate Field Functions 
    bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
    void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
    inline string casterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


    // channelEnable Field Functions 
    bool hasChannelEnable() const { return this->channelEnable_ != nullptr;};
    void deleteChannelEnable() { this->channelEnable_ = nullptr;};
    inline int32_t channelEnable() const { DARABONBA_PTR_GET_DEFAULT(channelEnable_, 0) };
    inline DescribeCastersResponseBodyCasterListCaster& setChannelEnable(int32_t channelEnable) { DARABONBA_PTR_SET_VALUE(channelEnable_, channelEnable) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientTokenId Field Functions 
    bool hasClientTokenId() const { return this->clientTokenId_ != nullptr;};
    void deleteClientTokenId() { this->clientTokenId_ = nullptr;};
    inline string clientTokenId() const { DARABONBA_PTR_GET_DEFAULT(clientTokenId_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setClientTokenId(string clientTokenId) { DARABONBA_PTR_SET_VALUE(clientTokenId_, clientTokenId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // normType Field Functions 
    bool hasNormType() const { return this->normType_ != nullptr;};
    void deleteNormType() { this->normType_ = nullptr;};
    inline int32_t normType() const { DARABONBA_PTR_GET_DEFAULT(normType_, 0) };
    inline DescribeCastersResponseBodyCasterListCaster& setNormType(int32_t normType) { DARABONBA_PTR_SET_VALUE(normType_, normType) };


    // purchaseTime Field Functions 
    bool hasPurchaseTime() const { return this->purchaseTime_ != nullptr;};
    void deletePurchaseTime() { this->purchaseTime_ = nullptr;};
    inline string purchaseTime() const { DARABONBA_PTR_GET_DEFAULT(purchaseTime_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setPurchaseTime(string purchaseTime) { DARABONBA_PTR_SET_VALUE(purchaseTime_, purchaseTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCastersResponseBodyCasterListCaster& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCastersResponseBodyCasterListCaster& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCastersResponseBodyCasterListCasterTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCastersResponseBodyCasterListCasterTags) };
    inline Models::DescribeCastersResponseBodyCasterListCasterTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCastersResponseBodyCasterListCasterTags) };
    inline DescribeCastersResponseBodyCasterListCaster& setTags(const Models::DescribeCastersResponseBodyCasterListCasterTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCastersResponseBodyCasterListCaster& setTags(Models::DescribeCastersResponseBodyCasterListCasterTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the production studio. You can specify the ID in a request to query the streaming URLs of the production studio, start the production studio, add a video resource, a layout, a component, or a playlist to the production studio, or query layouts of the production studio.
    std::shared_ptr<string> casterId_ = nullptr;
    // The name of the production studio.
    std::shared_ptr<string> casterName_ = nullptr;
    // The resolution in which the production studio plays videos. This parameter is returned if the subscription billing method is used. Valid values:
    // 
    // *   lp_ld: low definition
    // *   lp_sd: standard definition
    // *   lp_hd: high definition
    // *   lp_ud: ultra high definition.
    // *   lp_ld_v: low definition (portrait mode)
    // *   lp_sd_v: standard definition (portrait mode)
    // *   lp_hd_v: high definition (portrait mode)
    // *   lp_ud_v: ultra high definition (portrait mode)
    std::shared_ptr<string> casterTemplate_ = nullptr;
    // Indicates whether the channel is enabled for the production studio.
    // 
    // *   0: The channel is disabled.
    // *   1: The channel is enabled.
    std::shared_ptr<int32_t> channelEnable_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PrePaid: the subscription billing method
    // *   PostPaid: the pay-as-you-go billing method
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientTokenId_ = nullptr;
    // The time when the production studio was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The streaming duration. Format: hh:mm:ss.
    std::shared_ptr<string> duration_ = nullptr;
    // The time when the production studio expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the production studio was last modified. For example, the time when the production studio was last started, stopped, or modified is returned.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The type of the production studio. Valid values:
    // 
    // *   0: playlist mode
    // *   1: general mode
    std::shared_ptr<int32_t> normType_ = nullptr;
    // The time when the production studio was purchased.
    std::shared_ptr<string> purchaseTime_ = nullptr;
    // The resource group ID. For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/2381067.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The time when the production studio was started. This parameter is returned if the production studio is in the streaming status.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the production studio. Valid values:
    // 
    // *   0: idle
    // *   1: streaming
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeCastersResponseBodyCasterListCasterTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
