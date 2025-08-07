// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateUserInformationRequestDeliverySettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateUserInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateUserInformationRequest() = default ;
    UpdateUserInformationRequest(const UpdateUserInformationRequest &) = default ;
    UpdateUserInformationRequest(UpdateUserInformationRequest &&) = default ;
    UpdateUserInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserInformationRequest() = default ;
    UpdateUserInformationRequest& operator=(const UpdateUserInformationRequest &) = default ;
    UpdateUserInformationRequest& operator=(UpdateUserInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deliverySettings_ != nullptr
        && this->regionId_ != nullptr; };
    // deliverySettings Field Functions 
    bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
    void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
    inline const UpdateUserInformationRequestDeliverySettings & deliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, UpdateUserInformationRequestDeliverySettings) };
    inline UpdateUserInformationRequestDeliverySettings deliverySettings() { DARABONBA_PTR_GET(deliverySettings_, UpdateUserInformationRequestDeliverySettings) };
    inline UpdateUserInformationRequest& setDeliverySettings(const UpdateUserInformationRequestDeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
    inline UpdateUserInformationRequest& setDeliverySettings(UpdateUserInformationRequestDeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateUserInformationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The modified delivery settings.
    std::shared_ptr<UpdateUserInformationRequestDeliverySettings> deliverySettings_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
