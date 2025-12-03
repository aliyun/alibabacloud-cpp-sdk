// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class CreateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationInstanceId, destinationInstanceId_);
      DARABONBA_PTR_TO_JSON(DestinationInstanceRegionId, destinationInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ExtraContext, extraContext_);
      DARABONBA_PTR_TO_JSON(Mapping, mapping_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SlbServer, slbServer_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(SubscriptionDescription, subscriptionDescription_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationInstanceId, destinationInstanceId_);
      DARABONBA_PTR_FROM_JSON(DestinationInstanceRegionId, destinationInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ExtraContext, extraContext_);
      DARABONBA_PTR_FROM_JSON(Mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SlbServer, slbServer_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDescription, subscriptionDescription_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest(CreateSubscriptionRequest &&) = default ;
    CreateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest& operator=(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest& operator=(CreateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationInstanceId_ == nullptr
        && return this->destinationInstanceRegionId_ == nullptr && return this->extraContext_ == nullptr && return this->mapping_ == nullptr && return this->ownerId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->slbServer_ == nullptr && return this->sourceInstanceId_ == nullptr && return this->sourceInstanceRegionId_ == nullptr && return this->subscriptionDescription_ == nullptr
        && return this->subscriptionType_ == nullptr && return this->zoneId_ == nullptr; };
    // destinationInstanceId Field Functions 
    bool hasDestinationInstanceId() const { return this->destinationInstanceId_ != nullptr;};
    void deleteDestinationInstanceId() { this->destinationInstanceId_ = nullptr;};
    inline string destinationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceId_, "") };
    inline CreateSubscriptionRequest& setDestinationInstanceId(string destinationInstanceId) { DARABONBA_PTR_SET_VALUE(destinationInstanceId_, destinationInstanceId) };


    // destinationInstanceRegionId Field Functions 
    bool hasDestinationInstanceRegionId() const { return this->destinationInstanceRegionId_ != nullptr;};
    void deleteDestinationInstanceRegionId() { this->destinationInstanceRegionId_ = nullptr;};
    inline string destinationInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationInstanceRegionId_, "") };
    inline CreateSubscriptionRequest& setDestinationInstanceRegionId(string destinationInstanceRegionId) { DARABONBA_PTR_SET_VALUE(destinationInstanceRegionId_, destinationInstanceRegionId) };


    // extraContext Field Functions 
    bool hasExtraContext() const { return this->extraContext_ != nullptr;};
    void deleteExtraContext() { this->extraContext_ = nullptr;};
    inline string extraContext() const { DARABONBA_PTR_GET_DEFAULT(extraContext_, "") };
    inline CreateSubscriptionRequest& setExtraContext(string extraContext) { DARABONBA_PTR_SET_VALUE(extraContext_, extraContext) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline string mapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
    inline CreateSubscriptionRequest& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSubscriptionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSubscriptionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSubscriptionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // slbServer Field Functions 
    bool hasSlbServer() const { return this->slbServer_ != nullptr;};
    void deleteSlbServer() { this->slbServer_ = nullptr;};
    inline string slbServer() const { DARABONBA_PTR_GET_DEFAULT(slbServer_, "") };
    inline CreateSubscriptionRequest& setSlbServer(string slbServer) { DARABONBA_PTR_SET_VALUE(slbServer_, slbServer) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline CreateSubscriptionRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceRegionId Field Functions 
    bool hasSourceInstanceRegionId() const { return this->sourceInstanceRegionId_ != nullptr;};
    void deleteSourceInstanceRegionId() { this->sourceInstanceRegionId_ = nullptr;};
    inline string sourceInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegionId_, "") };
    inline CreateSubscriptionRequest& setSourceInstanceRegionId(string sourceInstanceRegionId) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegionId_, sourceInstanceRegionId) };


    // subscriptionDescription Field Functions 
    bool hasSubscriptionDescription() const { return this->subscriptionDescription_ != nullptr;};
    void deleteSubscriptionDescription() { this->subscriptionDescription_ = nullptr;};
    inline string subscriptionDescription() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDescription_, "") };
    inline CreateSubscriptionRequest& setSubscriptionDescription(string subscriptionDescription) { DARABONBA_PTR_SET_VALUE(subscriptionDescription_, subscriptionDescription) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline CreateSubscriptionRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateSubscriptionRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> destinationInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> destinationInstanceRegionId_ = nullptr;
    std::shared_ptr<string> extraContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mapping_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> slbServer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceInstanceRegionId_ = nullptr;
    std::shared_ptr<string> subscriptionDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subscriptionType_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
