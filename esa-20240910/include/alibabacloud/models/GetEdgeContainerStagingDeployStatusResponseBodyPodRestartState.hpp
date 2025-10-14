// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODYPODRESTARTSTATE_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSRESPONSEBODYPODRESTARTSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& obj) { 
      DARABONBA_PTR_TO_JSON(LastTerminatedReason, lastTerminatedReason_);
      DARABONBA_PTR_TO_JSON(RestartCount, restartCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& obj) { 
      DARABONBA_PTR_FROM_JSON(LastTerminatedReason, lastTerminatedReason_);
      DARABONBA_PTR_FROM_JSON(RestartCount, restartCount_);
    };
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState() = default ;
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState(const GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState &) = default ;
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState(GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState &&) = default ;
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState() = default ;
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& operator=(const GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState &) = default ;
    GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& operator=(GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastTerminatedReason_ == nullptr
        && return this->restartCount_ == nullptr; };
    // lastTerminatedReason Field Functions 
    bool hasLastTerminatedReason() const { return this->lastTerminatedReason_ != nullptr;};
    void deleteLastTerminatedReason() { this->lastTerminatedReason_ = nullptr;};
    inline string lastTerminatedReason() const { DARABONBA_PTR_GET_DEFAULT(lastTerminatedReason_, "") };
    inline GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& setLastTerminatedReason(string lastTerminatedReason) { DARABONBA_PTR_SET_VALUE(lastTerminatedReason_, lastTerminatedReason) };


    // restartCount Field Functions 
    bool hasRestartCount() const { return this->restartCount_ != nullptr;};
    void deleteRestartCount() { this->restartCount_ = nullptr;};
    inline int32_t restartCount() const { DARABONBA_PTR_GET_DEFAULT(restartCount_, 0) };
    inline GetEdgeContainerStagingDeployStatusResponseBodyPodRestartState& setRestartCount(int32_t restartCount) { DARABONBA_PTR_SET_VALUE(restartCount_, restartCount) };


  protected:
    // The reason for the last restart.
    std::shared_ptr<string> lastTerminatedReason_ = nullptr;
    // The number of times that the container restarted.
    std::shared_ptr<int32_t> restartCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
