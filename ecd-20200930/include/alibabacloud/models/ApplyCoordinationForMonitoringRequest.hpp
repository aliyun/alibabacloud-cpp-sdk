// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONFORMONITORINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyCoordinationForMonitoringRequestResourceCandidates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ApplyCoordinationForMonitoringRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinatePolicyType, coordinatePolicyType_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceCandidates, resourceCandidates_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationForMonitoringRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinatePolicyType, coordinatePolicyType_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InitiatorType, initiatorType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceCandidates, resourceCandidates_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ApplyCoordinationForMonitoringRequest() = default ;
    ApplyCoordinationForMonitoringRequest(const ApplyCoordinationForMonitoringRequest &) = default ;
    ApplyCoordinationForMonitoringRequest(ApplyCoordinationForMonitoringRequest &&) = default ;
    ApplyCoordinationForMonitoringRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationForMonitoringRequest() = default ;
    ApplyCoordinationForMonitoringRequest& operator=(const ApplyCoordinationForMonitoringRequest &) = default ;
    ApplyCoordinationForMonitoringRequest& operator=(ApplyCoordinationForMonitoringRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coordinatePolicyType_ == nullptr
        && return this->endUserId_ == nullptr && return this->initiatorType_ == nullptr && return this->regionId_ == nullptr && return this->resourceCandidates_ == nullptr && return this->uuid_ == nullptr; };
    // coordinatePolicyType Field Functions 
    bool hasCoordinatePolicyType() const { return this->coordinatePolicyType_ != nullptr;};
    void deleteCoordinatePolicyType() { this->coordinatePolicyType_ = nullptr;};
    inline string coordinatePolicyType() const { DARABONBA_PTR_GET_DEFAULT(coordinatePolicyType_, "") };
    inline ApplyCoordinationForMonitoringRequest& setCoordinatePolicyType(string coordinatePolicyType) { DARABONBA_PTR_SET_VALUE(coordinatePolicyType_, coordinatePolicyType) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ApplyCoordinationForMonitoringRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // initiatorType Field Functions 
    bool hasInitiatorType() const { return this->initiatorType_ != nullptr;};
    void deleteInitiatorType() { this->initiatorType_ = nullptr;};
    inline string initiatorType() const { DARABONBA_PTR_GET_DEFAULT(initiatorType_, "") };
    inline ApplyCoordinationForMonitoringRequest& setInitiatorType(string initiatorType) { DARABONBA_PTR_SET_VALUE(initiatorType_, initiatorType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyCoordinationForMonitoringRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceCandidates Field Functions 
    bool hasResourceCandidates() const { return this->resourceCandidates_ != nullptr;};
    void deleteResourceCandidates() { this->resourceCandidates_ = nullptr;};
    inline const vector<ApplyCoordinationForMonitoringRequestResourceCandidates> & resourceCandidates() const { DARABONBA_PTR_GET_CONST(resourceCandidates_, vector<ApplyCoordinationForMonitoringRequestResourceCandidates>) };
    inline vector<ApplyCoordinationForMonitoringRequestResourceCandidates> resourceCandidates() { DARABONBA_PTR_GET(resourceCandidates_, vector<ApplyCoordinationForMonitoringRequestResourceCandidates>) };
    inline ApplyCoordinationForMonitoringRequest& setResourceCandidates(const vector<ApplyCoordinationForMonitoringRequestResourceCandidates> & resourceCandidates) { DARABONBA_PTR_SET_VALUE(resourceCandidates_, resourceCandidates) };
    inline ApplyCoordinationForMonitoringRequest& setResourceCandidates(vector<ApplyCoordinationForMonitoringRequestResourceCandidates> && resourceCandidates) { DARABONBA_PTR_SET_RVALUE(resourceCandidates_, resourceCandidates) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ApplyCoordinationForMonitoringRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The coordination policy.
    // 
    // Set the value to FULL_CONTROL.
    // 
    // *   The value FULL_CONTROL specifies that the cloud desktop is shared and remote access to the cloud desktop is allowed.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> coordinatePolicyType_ = nullptr;
    // The ID of the end user who initiates the stream collaboration. If the initiator is the administrator, do not specify this parameter.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The type of the initiator.
    // 
    // Set the value to ADMIN_INITIATE.
    // 
    // *   The value ADMIN_INITIATE specifies that the administrator initiates the coordination request.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> initiatorType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://next.api.aliyun.com/document/ecd/2020-09-30/DescribeRegions) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of cloud desktops that run the collaboration task at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ApplyCoordinationForMonitoringRequestResourceCandidates>> resourceCandidates_ = nullptr;
    // The universally unique identifier (UUID) of the device.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
