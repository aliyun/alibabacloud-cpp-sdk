// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDeliveryChannelRequestDeliveryChannelFilter.hpp>
#include <alibabacloud/models/CreateDeliveryChannelRequestResourceChangeDelivery.hpp>
#include <alibabacloud/models/CreateDeliveryChannelRequestResourceSnapshotDelivery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    CreateDeliveryChannelRequest() = default ;
    CreateDeliveryChannelRequest(const CreateDeliveryChannelRequest &) = default ;
    CreateDeliveryChannelRequest(CreateDeliveryChannelRequest &&) = default ;
    CreateDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryChannelRequest() = default ;
    CreateDeliveryChannelRequest& operator=(const CreateDeliveryChannelRequest &) = default ;
    CreateDeliveryChannelRequest& operator=(CreateDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliveryChannelDescription_ != nullptr
        && this->deliveryChannelFilter_ != nullptr && this->deliveryChannelName_ != nullptr && this->resourceChangeDelivery_ != nullptr && this->resourceSnapshotDelivery_ != nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string deliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline CreateDeliveryChannelRequest& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const CreateDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, CreateDeliveryChannelRequestDeliveryChannelFilter) };
    inline CreateDeliveryChannelRequestDeliveryChannelFilter deliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, CreateDeliveryChannelRequestDeliveryChannelFilter) };
    inline CreateDeliveryChannelRequest& setDeliveryChannelFilter(const CreateDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline CreateDeliveryChannelRequest& setDeliveryChannelFilter(CreateDeliveryChannelRequestDeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string deliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const CreateDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, CreateDeliveryChannelRequestResourceChangeDelivery) };
    inline CreateDeliveryChannelRequestResourceChangeDelivery resourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, CreateDeliveryChannelRequestResourceChangeDelivery) };
    inline CreateDeliveryChannelRequest& setResourceChangeDelivery(const CreateDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline CreateDeliveryChannelRequest& setResourceChangeDelivery(CreateDeliveryChannelRequestResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const CreateDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, CreateDeliveryChannelRequestResourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequestResourceSnapshotDelivery resourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, CreateDeliveryChannelRequestResourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequest& setResourceSnapshotDelivery(const CreateDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline CreateDeliveryChannelRequest& setResourceSnapshotDelivery(CreateDeliveryChannelRequestResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    std::shared_ptr<string> deliveryChannelDescription_ = nullptr;
    // The effective scope of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter_ = nullptr;
    // The name of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryChannelName_ = nullptr;
    // The configurations for delivery of resource configuration change events.
    std::shared_ptr<CreateDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery_ = nullptr;
    // The configurations for delivery of scheduled resource snapshots.
    std::shared_ptr<CreateDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
