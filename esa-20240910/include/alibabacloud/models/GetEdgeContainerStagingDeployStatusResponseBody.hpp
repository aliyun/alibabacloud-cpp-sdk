// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerStagingDeployStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerStagingDeployStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainersReady, containersReady_);
      DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_TO_JSON(Initialized, initialized_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(PodRestartState, podRestartState_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scheduled, scheduled_);
      DARABONBA_PTR_TO_JSON(VIPs, VIPs_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerStagingDeployStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainersReady, containersReady_);
      DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
      DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(PodRestartState, podRestartState_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scheduled, scheduled_);
      DARABONBA_PTR_FROM_JSON(VIPs, VIPs_);
    };
    GetEdgeContainerStagingDeployStatusResponseBody() = default ;
    GetEdgeContainerStagingDeployStatusResponseBody(const GetEdgeContainerStagingDeployStatusResponseBody &) = default ;
    GetEdgeContainerStagingDeployStatusResponseBody(GetEdgeContainerStagingDeployStatusResponseBody &&) = default ;
    GetEdgeContainerStagingDeployStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerStagingDeployStatusResponseBody() = default ;
    GetEdgeContainerStagingDeployStatusResponseBody& operator=(const GetEdgeContainerStagingDeployStatusResponseBody &) = default ;
    GetEdgeContainerStagingDeployStatusResponseBody& operator=(GetEdgeContainerStagingDeployStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containersReady_ == nullptr
        && return this->creationTimestamp_ == nullptr && return this->initialized_ == nullptr && return this->phase_ == nullptr && return this->podRestartState_ == nullptr && return this->ready_ == nullptr
        && return this->requestId_ == nullptr && return this->scheduled_ == nullptr && return this->VIPs_ == nullptr; };
    // containersReady Field Functions 
    bool hasContainersReady() const { return this->containersReady_ != nullptr;};
    void deleteContainersReady() { this->containersReady_ = nullptr;};
    inline string containersReady() const { DARABONBA_PTR_GET_DEFAULT(containersReady_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setContainersReady(string containersReady) { DARABONBA_PTR_SET_VALUE(containersReady_, containersReady) };


    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string creationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // initialized Field Functions 
    bool hasInitialized() const { return this->initialized_ != nullptr;};
    void deleteInitialized() { this->initialized_ = nullptr;};
    inline string initialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setInitialized(string initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // podRestartState Field Functions 
    bool hasPodRestartState() const { return this->podRestartState_ != nullptr;};
    void deletePodRestartState() { this->podRestartState_ = nullptr;};
    inline const GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState & podRestartState() const { DARABONBA_PTR_GET_CONST(podRestartState_, GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState podRestartState() { DARABONBA_PTR_GET(podRestartState_, GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPodRestartState(const GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState & podRestartState) { DARABONBA_PTR_SET_VALUE(podRestartState_, podRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPodRestartState(GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState && podRestartState) { DARABONBA_PTR_SET_RVALUE(podRestartState_, podRestartState) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline string ready() const { DARABONBA_PTR_GET_DEFAULT(ready_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setReady(string ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduled Field Functions 
    bool hasScheduled() const { return this->scheduled_ != nullptr;};
    void deleteScheduled() { this->scheduled_ = nullptr;};
    inline string scheduled() const { DARABONBA_PTR_GET_DEFAULT(scheduled_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setScheduled(string scheduled) { DARABONBA_PTR_SET_VALUE(scheduled_, scheduled) };


    // VIPs Field Functions 
    bool hasVIPs() const { return this->VIPs_ != nullptr;};
    void deleteVIPs() { this->VIPs_ = nullptr;};
    inline const vector<string> & VIPs() const { DARABONBA_PTR_GET_CONST(VIPs_, vector<string>) };
    inline vector<string> VIPs() { DARABONBA_PTR_GET(VIPs_, vector<string>) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setVIPs(const vector<string> & VIPs) { DARABONBA_PTR_SET_VALUE(VIPs_, VIPs) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setVIPs(vector<string> && VIPs) { DARABONBA_PTR_SET_RVALUE(VIPs_, VIPs) };


  protected:
    // Indicates whether the container is ready.
    // 
    // *   ok
    // *   unready
    std::shared_ptr<string> containersReady_ = nullptr;
    // The time when the container was created. The value is a timestamp.
    std::shared_ptr<string> creationTimestamp_ = nullptr;
    // The initialization status of the container.
    // 
    // *   ok
    // *   unready
    std::shared_ptr<string> initialized_ = nullptr;
    // The status of the container in the staging environment.
    // 
    // *   NoContainer: created.
    // *   Running: running.
    // *   Failed: abnormal.
    std::shared_ptr<string> phase_ = nullptr;
    // The details of container restart.
    std::shared_ptr<GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState> podRestartState_ = nullptr;
    // Indicates whether domain names are associated with the container.
    // 
    // *   ok
    // *   unready
    std::shared_ptr<string> ready_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling status of the container.
    // 
    // *   ok
    // *   unready
    std::shared_ptr<string> scheduled_ = nullptr;
    // The virtual IP addresses.
    std::shared_ptr<vector<string>> VIPs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
