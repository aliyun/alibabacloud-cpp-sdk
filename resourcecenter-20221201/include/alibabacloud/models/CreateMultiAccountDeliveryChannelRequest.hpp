// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMULTIACCOUNTDELIVERYCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter.hpp>
#include <alibabacloud/models/CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery.hpp>
#include <alibabacloud/models/CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class CreateMultiAccountDeliveryChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_TO_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_TO_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_TO_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMultiAccountDeliveryChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryChannelDescription, deliveryChannelDescription_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelFilter, deliveryChannelFilter_);
      DARABONBA_PTR_FROM_JSON(DeliveryChannelName, deliveryChannelName_);
      DARABONBA_PTR_FROM_JSON(ResourceChangeDelivery, resourceChangeDelivery_);
      DARABONBA_PTR_FROM_JSON(ResourceSnapshotDelivery, resourceSnapshotDelivery_);
    };
    CreateMultiAccountDeliveryChannelRequest() = default ;
    CreateMultiAccountDeliveryChannelRequest(const CreateMultiAccountDeliveryChannelRequest &) = default ;
    CreateMultiAccountDeliveryChannelRequest(CreateMultiAccountDeliveryChannelRequest &&) = default ;
    CreateMultiAccountDeliveryChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMultiAccountDeliveryChannelRequest() = default ;
    CreateMultiAccountDeliveryChannelRequest& operator=(const CreateMultiAccountDeliveryChannelRequest &) = default ;
    CreateMultiAccountDeliveryChannelRequest& operator=(CreateMultiAccountDeliveryChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryChannelDescription_ == nullptr
        && return this->deliveryChannelFilter_ == nullptr && return this->deliveryChannelName_ == nullptr && return this->resourceChangeDelivery_ == nullptr && return this->resourceSnapshotDelivery_ == nullptr; };
    // deliveryChannelDescription Field Functions 
    bool hasDeliveryChannelDescription() const { return this->deliveryChannelDescription_ != nullptr;};
    void deleteDeliveryChannelDescription() { this->deliveryChannelDescription_ = nullptr;};
    inline string deliveryChannelDescription() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelDescription_, "") };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelDescription(string deliveryChannelDescription) { DARABONBA_PTR_SET_VALUE(deliveryChannelDescription_, deliveryChannelDescription) };


    // deliveryChannelFilter Field Functions 
    bool hasDeliveryChannelFilter() const { return this->deliveryChannelFilter_ != nullptr;};
    void deleteDeliveryChannelFilter() { this->deliveryChannelFilter_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter() const { DARABONBA_PTR_GET_CONST(deliveryChannelFilter_, CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter deliveryChannelFilter() { DARABONBA_PTR_GET(deliveryChannelFilter_, CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelFilter(const CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter & deliveryChannelFilter) { DARABONBA_PTR_SET_VALUE(deliveryChannelFilter_, deliveryChannelFilter) };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelFilter(CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter && deliveryChannelFilter) { DARABONBA_PTR_SET_RVALUE(deliveryChannelFilter_, deliveryChannelFilter) };


    // deliveryChannelName Field Functions 
    bool hasDeliveryChannelName() const { return this->deliveryChannelName_ != nullptr;};
    void deleteDeliveryChannelName() { this->deliveryChannelName_ = nullptr;};
    inline string deliveryChannelName() const { DARABONBA_PTR_GET_DEFAULT(deliveryChannelName_, "") };
    inline CreateMultiAccountDeliveryChannelRequest& setDeliveryChannelName(string deliveryChannelName) { DARABONBA_PTR_SET_VALUE(deliveryChannelName_, deliveryChannelName) };


    // resourceChangeDelivery Field Functions 
    bool hasResourceChangeDelivery() const { return this->resourceChangeDelivery_ != nullptr;};
    void deleteResourceChangeDelivery() { this->resourceChangeDelivery_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery() const { DARABONBA_PTR_GET_CONST(resourceChangeDelivery_, CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery resourceChangeDelivery() { DARABONBA_PTR_GET(resourceChangeDelivery_, CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceChangeDelivery(const CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery & resourceChangeDelivery) { DARABONBA_PTR_SET_VALUE(resourceChangeDelivery_, resourceChangeDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceChangeDelivery(CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery && resourceChangeDelivery) { DARABONBA_PTR_SET_RVALUE(resourceChangeDelivery_, resourceChangeDelivery) };


    // resourceSnapshotDelivery Field Functions 
    bool hasResourceSnapshotDelivery() const { return this->resourceSnapshotDelivery_ != nullptr;};
    void deleteResourceSnapshotDelivery() { this->resourceSnapshotDelivery_ = nullptr;};
    inline const CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery() const { DARABONBA_PTR_GET_CONST(resourceSnapshotDelivery_, CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery resourceSnapshotDelivery() { DARABONBA_PTR_GET(resourceSnapshotDelivery_, CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceSnapshotDelivery(const CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery & resourceSnapshotDelivery) { DARABONBA_PTR_SET_VALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };
    inline CreateMultiAccountDeliveryChannelRequest& setResourceSnapshotDelivery(CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery && resourceSnapshotDelivery) { DARABONBA_PTR_SET_RVALUE(resourceSnapshotDelivery_, resourceSnapshotDelivery) };


  protected:
    // The description of the delivery channel.
    std::shared_ptr<string> deliveryChannelDescription_ = nullptr;
    // The effective scope of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<CreateMultiAccountDeliveryChannelRequestDeliveryChannelFilter> deliveryChannelFilter_ = nullptr;
    // The name of the delivery channel.
    // 
    // This parameter is required.
    std::shared_ptr<string> deliveryChannelName_ = nullptr;
    // The configurations for delivery of resource configuration change events.
    std::shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceChangeDelivery> resourceChangeDelivery_ = nullptr;
    // The configurations for delivery of scheduled resource snapshots.
    std::shared_ptr<CreateMultiAccountDeliveryChannelRequestResourceSnapshotDelivery> resourceSnapshotDelivery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
