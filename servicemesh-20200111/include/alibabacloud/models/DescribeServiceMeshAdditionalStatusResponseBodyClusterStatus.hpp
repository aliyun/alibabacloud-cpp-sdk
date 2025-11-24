// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODYCLUSTERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODYCLUSTERSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus.hpp>
#include <alibabacloud/models/DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus.hpp>
#include <alibabacloud/models/DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLogProjectStatus, accessLogProjectStatus_);
      DARABONBA_PTR_TO_JSON(ApiServerEIPStatus, apiServerEIPStatus_);
      DARABONBA_PTR_TO_JSON(ApiServerLoadBalancerStatus, apiServerLoadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(AuditProjectStatus, auditProjectStatus_);
      DARABONBA_PTR_TO_JSON(CanaryPilotEIPStatus, canaryPilotEIPStatus_);
      DARABONBA_PTR_TO_JSON(CanaryPilotLoadBalancerStatus, canaryPilotLoadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(ControlPlaneProjectStatus, controlPlaneProjectStatus_);
      DARABONBA_ANY_TO_JSON(LogtailStatusRecord, logtailStatusRecord_);
      DARABONBA_PTR_TO_JSON(PilotEIPStatus, pilotEIPStatus_);
      DARABONBA_PTR_TO_JSON(PilotLoadBalancerStatus, pilotLoadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(RAMApplicationStatus, RAMApplicationStatus_);
      DARABONBA_PTR_TO_JSON(SgStatus, sgStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLogProjectStatus, accessLogProjectStatus_);
      DARABONBA_PTR_FROM_JSON(ApiServerEIPStatus, apiServerEIPStatus_);
      DARABONBA_PTR_FROM_JSON(ApiServerLoadBalancerStatus, apiServerLoadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(AuditProjectStatus, auditProjectStatus_);
      DARABONBA_PTR_FROM_JSON(CanaryPilotEIPStatus, canaryPilotEIPStatus_);
      DARABONBA_PTR_FROM_JSON(CanaryPilotLoadBalancerStatus, canaryPilotLoadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneProjectStatus, controlPlaneProjectStatus_);
      DARABONBA_ANY_FROM_JSON(LogtailStatusRecord, logtailStatusRecord_);
      DARABONBA_PTR_FROM_JSON(PilotEIPStatus, pilotEIPStatus_);
      DARABONBA_PTR_FROM_JSON(PilotLoadBalancerStatus, pilotLoadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(RAMApplicationStatus, RAMApplicationStatus_);
      DARABONBA_PTR_FROM_JSON(SgStatus, sgStatus_);
    };
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus() = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus(const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus(DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus &&) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus() = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& operator=(const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& operator=(DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLogProjectStatus_ == nullptr
        && return this->apiServerEIPStatus_ == nullptr && return this->apiServerLoadBalancerStatus_ == nullptr && return this->auditProjectStatus_ == nullptr && return this->canaryPilotEIPStatus_ == nullptr && return this->canaryPilotLoadBalancerStatus_ == nullptr
        && return this->controlPlaneProjectStatus_ == nullptr && return this->logtailStatusRecord_ == nullptr && return this->pilotEIPStatus_ == nullptr && return this->pilotLoadBalancerStatus_ == nullptr && return this->RAMApplicationStatus_ == nullptr
        && return this->sgStatus_ == nullptr; };
    // accessLogProjectStatus Field Functions 
    bool hasAccessLogProjectStatus() const { return this->accessLogProjectStatus_ != nullptr;};
    void deleteAccessLogProjectStatus() { this->accessLogProjectStatus_ = nullptr;};
    inline string accessLogProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(accessLogProjectStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setAccessLogProjectStatus(string accessLogProjectStatus) { DARABONBA_PTR_SET_VALUE(accessLogProjectStatus_, accessLogProjectStatus) };


    // apiServerEIPStatus Field Functions 
    bool hasApiServerEIPStatus() const { return this->apiServerEIPStatus_ != nullptr;};
    void deleteApiServerEIPStatus() { this->apiServerEIPStatus_ = nullptr;};
    inline string apiServerEIPStatus() const { DARABONBA_PTR_GET_DEFAULT(apiServerEIPStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setApiServerEIPStatus(string apiServerEIPStatus) { DARABONBA_PTR_SET_VALUE(apiServerEIPStatus_, apiServerEIPStatus) };


    // apiServerLoadBalancerStatus Field Functions 
    bool hasApiServerLoadBalancerStatus() const { return this->apiServerLoadBalancerStatus_ != nullptr;};
    void deleteApiServerLoadBalancerStatus() { this->apiServerLoadBalancerStatus_ = nullptr;};
    inline const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus & apiServerLoadBalancerStatus() const { DARABONBA_PTR_GET_CONST(apiServerLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus) };
    inline Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus apiServerLoadBalancerStatus() { DARABONBA_PTR_GET(apiServerLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setApiServerLoadBalancerStatus(const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus & apiServerLoadBalancerStatus) { DARABONBA_PTR_SET_VALUE(apiServerLoadBalancerStatus_, apiServerLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setApiServerLoadBalancerStatus(Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus && apiServerLoadBalancerStatus) { DARABONBA_PTR_SET_RVALUE(apiServerLoadBalancerStatus_, apiServerLoadBalancerStatus) };


    // auditProjectStatus Field Functions 
    bool hasAuditProjectStatus() const { return this->auditProjectStatus_ != nullptr;};
    void deleteAuditProjectStatus() { this->auditProjectStatus_ = nullptr;};
    inline string auditProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(auditProjectStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setAuditProjectStatus(string auditProjectStatus) { DARABONBA_PTR_SET_VALUE(auditProjectStatus_, auditProjectStatus) };


    // canaryPilotEIPStatus Field Functions 
    bool hasCanaryPilotEIPStatus() const { return this->canaryPilotEIPStatus_ != nullptr;};
    void deleteCanaryPilotEIPStatus() { this->canaryPilotEIPStatus_ = nullptr;};
    inline string canaryPilotEIPStatus() const { DARABONBA_PTR_GET_DEFAULT(canaryPilotEIPStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setCanaryPilotEIPStatus(string canaryPilotEIPStatus) { DARABONBA_PTR_SET_VALUE(canaryPilotEIPStatus_, canaryPilotEIPStatus) };


    // canaryPilotLoadBalancerStatus Field Functions 
    bool hasCanaryPilotLoadBalancerStatus() const { return this->canaryPilotLoadBalancerStatus_ != nullptr;};
    void deleteCanaryPilotLoadBalancerStatus() { this->canaryPilotLoadBalancerStatus_ = nullptr;};
    inline const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus & canaryPilotLoadBalancerStatus() const { DARABONBA_PTR_GET_CONST(canaryPilotLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus) };
    inline Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus canaryPilotLoadBalancerStatus() { DARABONBA_PTR_GET(canaryPilotLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setCanaryPilotLoadBalancerStatus(const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus & canaryPilotLoadBalancerStatus) { DARABONBA_PTR_SET_VALUE(canaryPilotLoadBalancerStatus_, canaryPilotLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setCanaryPilotLoadBalancerStatus(Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus && canaryPilotLoadBalancerStatus) { DARABONBA_PTR_SET_RVALUE(canaryPilotLoadBalancerStatus_, canaryPilotLoadBalancerStatus) };


    // controlPlaneProjectStatus Field Functions 
    bool hasControlPlaneProjectStatus() const { return this->controlPlaneProjectStatus_ != nullptr;};
    void deleteControlPlaneProjectStatus() { this->controlPlaneProjectStatus_ = nullptr;};
    inline string controlPlaneProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(controlPlaneProjectStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setControlPlaneProjectStatus(string controlPlaneProjectStatus) { DARABONBA_PTR_SET_VALUE(controlPlaneProjectStatus_, controlPlaneProjectStatus) };


    // logtailStatusRecord Field Functions 
    bool hasLogtailStatusRecord() const { return this->logtailStatusRecord_ != nullptr;};
    void deleteLogtailStatusRecord() { this->logtailStatusRecord_ = nullptr;};
    inline     const Darabonba::Json & logtailStatusRecord() const { DARABONBA_GET(logtailStatusRecord_) };
    Darabonba::Json & logtailStatusRecord() { DARABONBA_GET(logtailStatusRecord_) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setLogtailStatusRecord(const Darabonba::Json & logtailStatusRecord) { DARABONBA_SET_VALUE(logtailStatusRecord_, logtailStatusRecord) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setLogtailStatusRecord(Darabonba::Json & logtailStatusRecord) { DARABONBA_SET_RVALUE(logtailStatusRecord_, logtailStatusRecord) };


    // pilotEIPStatus Field Functions 
    bool hasPilotEIPStatus() const { return this->pilotEIPStatus_ != nullptr;};
    void deletePilotEIPStatus() { this->pilotEIPStatus_ = nullptr;};
    inline string pilotEIPStatus() const { DARABONBA_PTR_GET_DEFAULT(pilotEIPStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setPilotEIPStatus(string pilotEIPStatus) { DARABONBA_PTR_SET_VALUE(pilotEIPStatus_, pilotEIPStatus) };


    // pilotLoadBalancerStatus Field Functions 
    bool hasPilotLoadBalancerStatus() const { return this->pilotLoadBalancerStatus_ != nullptr;};
    void deletePilotLoadBalancerStatus() { this->pilotLoadBalancerStatus_ = nullptr;};
    inline const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus & pilotLoadBalancerStatus() const { DARABONBA_PTR_GET_CONST(pilotLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus) };
    inline Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus pilotLoadBalancerStatus() { DARABONBA_PTR_GET(pilotLoadBalancerStatus_, Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setPilotLoadBalancerStatus(const Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus & pilotLoadBalancerStatus) { DARABONBA_PTR_SET_VALUE(pilotLoadBalancerStatus_, pilotLoadBalancerStatus) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setPilotLoadBalancerStatus(Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus && pilotLoadBalancerStatus) { DARABONBA_PTR_SET_RVALUE(pilotLoadBalancerStatus_, pilotLoadBalancerStatus) };


    // RAMApplicationStatus Field Functions 
    bool hasRAMApplicationStatus() const { return this->RAMApplicationStatus_ != nullptr;};
    void deleteRAMApplicationStatus() { this->RAMApplicationStatus_ = nullptr;};
    inline string RAMApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(RAMApplicationStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setRAMApplicationStatus(string RAMApplicationStatus) { DARABONBA_PTR_SET_VALUE(RAMApplicationStatus_, RAMApplicationStatus) };


    // sgStatus Field Functions 
    bool hasSgStatus() const { return this->sgStatus_ != nullptr;};
    void deleteSgStatus() { this->sgStatus_ = nullptr;};
    inline string sgStatus() const { DARABONBA_PTR_GET_DEFAULT(sgStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatus& setSgStatus(string sgStatus) { DARABONBA_PTR_SET_VALUE(sgStatus_, sgStatus) };


  protected:
    // Indicates whether access logs exist. Valid values:
    // 
    // *   `exist`: Access logs exist.
    // *   `not_exist`: Access logs do not exist.
    // *   `failed`: The check fails.
    // *   `time_out`: The check times out.
    std::shared_ptr<string> accessLogProjectStatus_ = nullptr;
    // The check result of the EIP associated with the API server. Valid values:
    // 
    // *   `exist`: The EIP exists.
    // *   `not_exist`: The EIP does not exist.
    // *   `failed`: The check fails.
    // *   `time_out`: The check times out.
    // *   `not_in_use`: The EIP is not associated with the API Server.
    // *   `locked`: The EIP is locked.
    std::shared_ptr<string> apiServerEIPStatus_ = nullptr;
    // The check results of the CLB instance created for exposing the API server.
    std::shared_ptr<Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusApiServerLoadBalancerStatus> apiServerLoadBalancerStatus_ = nullptr;
    // Indicates whether audit logs exist. Valid values:
    // 
    // *   `exist`
    // *   `not exist`
    std::shared_ptr<string> auditProjectStatus_ = nullptr;
    std::shared_ptr<string> canaryPilotEIPStatus_ = nullptr;
    // The check results of the CLB instance that is created for exposing Istio Pilot and used during canary release.
    std::shared_ptr<Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus> canaryPilotLoadBalancerStatus_ = nullptr;
    // Indicates whether control plane logs exist. Valid values:
    // 
    // *   `exist`: Control plane logs exist.
    // *   `not_exist`: Control plane logs do not exist.
    // *   `failed`: The check fails.
    // *   `time_out`: The check times out.
    std::shared_ptr<string> controlPlaneProjectStatus_ = nullptr;
    // Indicates whether Logtail is installed in clusters on the data plane.
    Darabonba::Json logtailStatusRecord_ = nullptr;
    // The check result of whether the EIP is associated with the API server. Valid values:
    // 
    // *   `exist`: The EIP exists.
    // *   `not_exist`: The EIP does not exist.
    // *   `failed`: The check fails.
    // *   `time_out`: The check is timed out.
    // *   `not_in_use`: The EIP is not associated with the API server.
    // *   `locked`: The EIP is locked.
    std::shared_ptr<string> pilotEIPStatus_ = nullptr;
    // The check results of the CLB instance created for exposing Istio Pilot.
    std::shared_ptr<Models::DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusPilotLoadBalancerStatus> pilotLoadBalancerStatus_ = nullptr;
    // The status of the RAM OAuth application that is integrated with Mesh Topology. Valid values:
    // 
    // *   `exist`: The RAM OAuth application exists.
    // *   `reused`: The RAM OAuth application is reused.
    // *   `not_exist`: The RAM OAuth application does not exist.
    // *   `failed`: The check fails.
    // *   `time_out`: The check times out.
    std::shared_ptr<string> RAMApplicationStatus_ = nullptr;
    // Indicates whether the security group is reused. Valid values:
    // 
    // *   `reused`: The security group is reused.
    // *   `not_reused`: The security group is not reused.
    // *   `failed`: The check fails.
    // *   `time_out`: The check times out.
    std::shared_ptr<string> sgStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
