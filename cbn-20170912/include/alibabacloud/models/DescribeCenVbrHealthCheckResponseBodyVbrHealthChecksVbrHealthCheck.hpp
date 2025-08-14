// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODYVBRHEALTHCHECKSVBRHEALTHCHECK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENVBRHEALTHCHECKRESPONSEBODYVBRHEALTHCHECKSVBRHEALTHCHECK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckOnly, healthCheckOnly_);
      DARABONBA_PTR_TO_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_TO_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_TO_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckOnly, healthCheckOnly_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSourceIp, healthCheckSourceIp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTargetIp, healthCheckTargetIp_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      DARABONBA_PTR_FROM_JSON(VbrInstanceRegionId, vbrInstanceRegionId_);
    };
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck() = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck(const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck &) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck(DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck &&) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck() = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& operator=(const DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck &) = default ;
    DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& operator=(DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->description_ != nullptr && this->healthCheckInterval_ != nullptr && this->healthCheckOnly_ != nullptr && this->healthCheckSourceIp_ != nullptr && this->healthCheckTargetIp_ != nullptr
        && this->healthyThreshold_ != nullptr && this->vbrInstanceId_ != nullptr && this->vbrInstanceRegionId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckOnly Field Functions 
    bool hasHealthCheckOnly() const { return this->healthCheckOnly_ != nullptr;};
    void deleteHealthCheckOnly() { this->healthCheckOnly_ = nullptr;};
    inline bool healthCheckOnly() const { DARABONBA_PTR_GET_DEFAULT(healthCheckOnly_, false) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setHealthCheckOnly(bool healthCheckOnly) { DARABONBA_PTR_SET_VALUE(healthCheckOnly_, healthCheckOnly) };


    // healthCheckSourceIp Field Functions 
    bool hasHealthCheckSourceIp() const { return this->healthCheckSourceIp_ != nullptr;};
    void deleteHealthCheckSourceIp() { this->healthCheckSourceIp_ = nullptr;};
    inline string healthCheckSourceIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSourceIp_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setHealthCheckSourceIp(string healthCheckSourceIp) { DARABONBA_PTR_SET_VALUE(healthCheckSourceIp_, healthCheckSourceIp) };


    // healthCheckTargetIp Field Functions 
    bool hasHealthCheckTargetIp() const { return this->healthCheckTargetIp_ != nullptr;};
    void deleteHealthCheckTargetIp() { this->healthCheckTargetIp_ = nullptr;};
    inline string healthCheckTargetIp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTargetIp_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setHealthCheckTargetIp(string healthCheckTargetIp) { DARABONBA_PTR_SET_VALUE(healthCheckTargetIp_, healthCheckTargetIp) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // vbrInstanceId Field Functions 
    bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
    void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
    inline string vbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    // vbrInstanceRegionId Field Functions 
    bool hasVbrInstanceRegionId() const { return this->vbrInstanceRegionId_ != nullptr;};
    void deleteVbrInstanceRegionId() { this->vbrInstanceRegionId_ = nullptr;};
    inline string vbrInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceRegionId_, "") };
    inline DescribeCenVbrHealthCheckResponseBodyVbrHealthChecksVbrHealthCheck& setVbrInstanceRegionId(string vbrInstanceRegionId) { DARABONBA_PTR_SET_VALUE(vbrInstanceRegionId_, vbrInstanceRegionId) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The time interval at which probe packets are sent during the health check. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // Indicates whether probing is enabled. Valid values:
    // 
    // *   **true**: Probing is enabled.
    // 
    //         If you enable probing, the system does not switch to another route if the detected route is not reachable.
    // 
    // *   **false**: Probing is disabled.
    // 
    //           If probing is disabled and a redundant route is specified, the system switches to the redundant route when the detected route is not reachable.
    std::shared_ptr<bool> healthCheckOnly_ = nullptr;
    // The source IP address of the health check.
    std::shared_ptr<string> healthCheckSourceIp_ = nullptr;
    // The destination IP address of the health check.
    std::shared_ptr<string> healthCheckTargetIp_ = nullptr;
    // The number of probe packets that are sent during the health check.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The VBR ID.
    std::shared_ptr<string> vbrInstanceId_ = nullptr;
    // The ID of the region where the VBR is deployed.
    std::shared_ptr<string> vbrInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
