// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class PodRestartState : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodRestartState& obj) { 
        DARABONBA_PTR_TO_JSON(LastTerminatedReason, lastTerminatedReason_);
        DARABONBA_PTR_TO_JSON(RestartCount, restartCount_);
      };
      friend void from_json(const Darabonba::Json& j, PodRestartState& obj) { 
        DARABONBA_PTR_FROM_JSON(LastTerminatedReason, lastTerminatedReason_);
        DARABONBA_PTR_FROM_JSON(RestartCount, restartCount_);
      };
      PodRestartState() = default ;
      PodRestartState(const PodRestartState &) = default ;
      PodRestartState(PodRestartState &&) = default ;
      PodRestartState(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodRestartState() = default ;
      PodRestartState& operator=(const PodRestartState &) = default ;
      PodRestartState& operator=(PodRestartState &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastTerminatedReason_ == nullptr
        && this->restartCount_ == nullptr; };
      // lastTerminatedReason Field Functions 
      bool hasLastTerminatedReason() const { return this->lastTerminatedReason_ != nullptr;};
      void deleteLastTerminatedReason() { this->lastTerminatedReason_ = nullptr;};
      inline string getLastTerminatedReason() const { DARABONBA_PTR_GET_DEFAULT(lastTerminatedReason_, "") };
      inline PodRestartState& setLastTerminatedReason(string lastTerminatedReason) { DARABONBA_PTR_SET_VALUE(lastTerminatedReason_, lastTerminatedReason) };


      // restartCount Field Functions 
      bool hasRestartCount() const { return this->restartCount_ != nullptr;};
      void deleteRestartCount() { this->restartCount_ = nullptr;};
      inline int32_t getRestartCount() const { DARABONBA_PTR_GET_DEFAULT(restartCount_, 0) };
      inline PodRestartState& setRestartCount(int32_t restartCount) { DARABONBA_PTR_SET_VALUE(restartCount_, restartCount) };


    protected:
      // The reason for the last restart.
      shared_ptr<string> lastTerminatedReason_ {};
      // The number of times that the container restarted.
      shared_ptr<int32_t> restartCount_ {};
    };

    virtual bool empty() const override { return this->containersReady_ == nullptr
        && this->creationTimestamp_ == nullptr && this->initialized_ == nullptr && this->phase_ == nullptr && this->podRestartState_ == nullptr && this->ready_ == nullptr
        && this->requestId_ == nullptr && this->scheduled_ == nullptr && this->VIPs_ == nullptr; };
    // containersReady Field Functions 
    bool hasContainersReady() const { return this->containersReady_ != nullptr;};
    void deleteContainersReady() { this->containersReady_ = nullptr;};
    inline string getContainersReady() const { DARABONBA_PTR_GET_DEFAULT(containersReady_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setContainersReady(string containersReady) { DARABONBA_PTR_SET_VALUE(containersReady_, containersReady) };


    // creationTimestamp Field Functions 
    bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
    void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
    inline string getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setCreationTimestamp(string creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


    // initialized Field Functions 
    bool hasInitialized() const { return this->initialized_ != nullptr;};
    void deleteInitialized() { this->initialized_ = nullptr;};
    inline string getInitialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setInitialized(string initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // podRestartState Field Functions 
    bool hasPodRestartState() const { return this->podRestartState_ != nullptr;};
    void deletePodRestartState() { this->podRestartState_ = nullptr;};
    inline const GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState & getPodRestartState() const { DARABONBA_PTR_GET_CONST(podRestartState_, GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState getPodRestartState() { DARABONBA_PTR_GET(podRestartState_, GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPodRestartState(const GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState & podRestartState) { DARABONBA_PTR_SET_VALUE(podRestartState_, podRestartState) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setPodRestartState(GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState && podRestartState) { DARABONBA_PTR_SET_RVALUE(podRestartState_, podRestartState) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline string getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setReady(string ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduled Field Functions 
    bool hasScheduled() const { return this->scheduled_ != nullptr;};
    void deleteScheduled() { this->scheduled_ = nullptr;};
    inline string getScheduled() const { DARABONBA_PTR_GET_DEFAULT(scheduled_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setScheduled(string scheduled) { DARABONBA_PTR_SET_VALUE(scheduled_, scheduled) };


    // VIPs Field Functions 
    bool hasVIPs() const { return this->VIPs_ != nullptr;};
    void deleteVIPs() { this->VIPs_ = nullptr;};
    inline const vector<string> & getVIPs() const { DARABONBA_PTR_GET_CONST(VIPs_, vector<string>) };
    inline vector<string> getVIPs() { DARABONBA_PTR_GET(VIPs_, vector<string>) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setVIPs(const vector<string> & VIPs) { DARABONBA_PTR_SET_VALUE(VIPs_, VIPs) };
    inline GetEdgeContainerStagingDeployStatusResponseBody& setVIPs(vector<string> && VIPs) { DARABONBA_PTR_SET_RVALUE(VIPs_, VIPs) };


  protected:
    // Indicates whether the container is ready.
    // 
    // *   ok
    // *   unready
    shared_ptr<string> containersReady_ {};
    // The time when the container was created. The value is a timestamp.
    shared_ptr<string> creationTimestamp_ {};
    // The initialization status of the container.
    // 
    // *   ok
    // *   unready
    shared_ptr<string> initialized_ {};
    // The status of the container in the staging environment.
    // 
    // *   NoContainer: created.
    // *   Running: running.
    // *   Failed: abnormal.
    shared_ptr<string> phase_ {};
    // The details of container restart.
    shared_ptr<GetEdgeContainerStagingDeployStatusResponseBody::PodRestartState> podRestartState_ {};
    // Indicates whether domain names are associated with the container.
    // 
    // *   ok
    // *   unready
    shared_ptr<string> ready_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scheduling status of the container.
    // 
    // *   ok
    // *   unready
    shared_ptr<string> scheduled_ {};
    // The virtual IP addresses.
    shared_ptr<vector<string>> VIPs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
