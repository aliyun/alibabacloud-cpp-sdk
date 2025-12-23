// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDeliveryChannelRequestDeliveryChannelFilter.hpp>
#include <alibabacloud/models/UpdateDeliveryChannelRequestResourceChangeDelivery.hpp>
#include <alibabacloud/models/UpdateDeliveryChannelRequestResourceSnapshotDelivery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class UpdateDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelId, deliveryChannelId_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    UpdateDeliveryChannelRequest() = default ;
    UpdateDeliveryChannelRequest(const UpdateDeliveryChannelRequest &) = default ;
    UpdateDeliveryChannelRequest(UpdateDeliveryChannelRequest &&) = default ;
    UpdateDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeliveryChannelRequest() = default ;
    UpdateDeliveryChannelRequest& operator=(const UpdateDeliveryChannelRequest &) = default ;
    UpdateDeliveryChannelRequest& operator=(UpdateDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelDescription_ == nullptr
        && return this->deliveryChannelFilter_ == nullptr && return this->deliveryChannelId_ == nullptr && return this->deliveryChannelName_ == nullptr && return this->resourceChangeDelivery_ == nullptr && return this->resourceSnapshotDelivery_ == nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string deliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline UpdateDeliveryChannelRequest& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const UpdateDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, UpdateDeliveryChannelRequestDeliveryChannelFilter) };
    inline UpdateDeliveryChannelRequestDeliveryChannelFilter deliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, UpdateDeliveryChannelRequestDeliveryChannelFilter) };
    inline UpdateDeliveryChannelRequest& setDeliveryChannelFilter(const UpdateDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline UpdateDeliveryChannelRequest& setDeliveryChannelFilter(UpdateDeliveryChannelRequestDeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelId Field Functions 
    bool hasDeliveryChannelId() const { return this->deliveryChannelId_ != nullptr;};
    void deleteDeliveryChannelId() { this->deliveryChannelId_ = nullptr;};
    inline string deliveryChannelId() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelId_, "") };
    inline UpdateDeliveryChannelRequest& setDeliveryChannelId(string deliveryChannelId) { DARABONBA_PTR_SET_VALUE(deliveryChannelId_, deliveryChannelId) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string deliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline UpdateDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const UpdateDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, UpdateDeliveryChannelRequestResourceChangeDelivery) };
    inline UpdateDeliveryChannelRequestResourceChangeDelivery resourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, UpdateDeliveryChannelRequestResourceChangeDelivery) };
    inline UpdateDeliveryChannelRequest& setResourceChangeDelivery(const UpdateDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline UpdateDeliveryChannelRequest& setResourceChangeDelivery(UpdateDeliveryChannelRequestResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const UpdateDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, UpdateDeliveryChannelRequestResourceSnapshotDelivery) };
    inline UpdateDeliveryChannelRequestResourceSnapshotDelivery resourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, UpdateDeliveryChannelRequestResourceSnapshotDelivery) };
    inline UpdateDeliveryChannelRequest& setResourceSnapshotDelivery(const UpdateDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline UpdateDeliveryChannelRequest& setResourceSnapshotDelivery(UpdateDeliveryChannelRequestResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    std::shared_ptr<string> deliveryChannelDescription_ = nullptr;
    // The effective scope of the delivery channel.
    std::shared_ptr<UpdateDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter_ = nullptr;
    // The ID of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryChannelId_ = nullptr;
    // The name of the delivery channel.
    std::shared_ptr<string> deliveryChannelName_ = nullptr;
    // The configurations for delivery of resource configuration change events.
    std::shared_ptr<UpdateDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery_ = nullptr;
    // The configurations for delivery of scheduled resource snapshots.
    std::shared_ptr<UpdateDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
