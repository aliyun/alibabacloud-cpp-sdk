// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSCALINGGROUPZONESHIFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSCALINGGROUPZONESHIFTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartScalingGroupZoneShiftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartScalingGroupZoneShiftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_TO_JSON(ImpairedZoneIds, impairedZoneIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, StartScalingGroupZoneShiftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
      DARABONBA_PTR_FROM_JSON(ImpairedZoneIds, impairedZoneIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    StartScalingGroupZoneShiftRequest() = default ;
    StartScalingGroupZoneShiftRequest(const StartScalingGroupZoneShiftRequest &) = default ;
    StartScalingGroupZoneShiftRequest(StartScalingGroupZoneShiftRequest &&) = default ;
    StartScalingGroupZoneShiftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartScalingGroupZoneShiftRequest() = default ;
    StartScalingGroupZoneShiftRequest& operator=(const StartScalingGroupZoneShiftRequest &) = default ;
    StartScalingGroupZoneShiftRequest& operator=(StartScalingGroupZoneShiftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->expiryTime_ == nullptr && this->impairedZoneIds_ == nullptr && this->regionId_ == nullptr && this->scalingGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartScalingGroupZoneShiftRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // expiryTime Field Functions 
    bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
    void deleteExpiryTime() { this->expiryTime_ = nullptr;};
    inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
    inline StartScalingGroupZoneShiftRequest& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


    // impairedZoneIds Field Functions 
    bool hasImpairedZoneIds() const { return this->impairedZoneIds_ != nullptr;};
    void deleteImpairedZoneIds() { this->impairedZoneIds_ = nullptr;};
    inline const vector<string> & getImpairedZoneIds() const { DARABONBA_PTR_GET_CONST(impairedZoneIds_, vector<string>) };
    inline vector<string> getImpairedZoneIds() { DARABONBA_PTR_GET(impairedZoneIds_, vector<string>) };
    inline StartScalingGroupZoneShiftRequest& setImpairedZoneIds(const vector<string> & impairedZoneIds) { DARABONBA_PTR_SET_VALUE(impairedZoneIds_, impairedZoneIds) };
    inline StartScalingGroupZoneShiftRequest& setImpairedZoneIds(vector<string> && impairedZoneIds) { DARABONBA_PTR_SET_RVALUE(impairedZoneIds_, impairedZoneIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartScalingGroupZoneShiftRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline StartScalingGroupZoneShiftRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see Ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The expiration time of the zone transfer. After the time expires, the system automatically ends the transfer and restores the related zones. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mmZ format. The time must be in UTC. The value must be later than the current time and cannot be more than 3 days after the current time.
    // 
    // This parameter is required.
    shared_ptr<string> expiryTime_ {};
    // The IDs of the impaired zones. Valid values of N: 1 to 5.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> impairedZoneIds_ {};
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
