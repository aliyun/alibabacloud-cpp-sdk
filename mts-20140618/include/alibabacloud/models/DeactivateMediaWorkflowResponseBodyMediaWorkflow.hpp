// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATEMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATEMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class DeactivateMediaWorkflowResponseBodyMediaWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateMediaWorkflowResponseBodyMediaWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateMediaWorkflowResponseBodyMediaWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
    };
    DeactivateMediaWorkflowResponseBodyMediaWorkflow() = default ;
    DeactivateMediaWorkflowResponseBodyMediaWorkflow(const DeactivateMediaWorkflowResponseBodyMediaWorkflow &) = default ;
    DeactivateMediaWorkflowResponseBodyMediaWorkflow(DeactivateMediaWorkflowResponseBodyMediaWorkflow &&) = default ;
    DeactivateMediaWorkflowResponseBodyMediaWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateMediaWorkflowResponseBodyMediaWorkflow() = default ;
    DeactivateMediaWorkflowResponseBodyMediaWorkflow& operator=(const DeactivateMediaWorkflowResponseBodyMediaWorkflow &) = default ;
    DeactivateMediaWorkflowResponseBodyMediaWorkflow& operator=(DeactivateMediaWorkflowResponseBodyMediaWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->mediaWorkflowId_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr && return this->topology_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DeactivateMediaWorkflowResponseBodyMediaWorkflow& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline DeactivateMediaWorkflowResponseBodyMediaWorkflow& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeactivateMediaWorkflowResponseBodyMediaWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DeactivateMediaWorkflowResponseBodyMediaWorkflow& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string topology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline DeactivateMediaWorkflowResponseBodyMediaWorkflow& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


  protected:
    // *   After you deactivate a media workflow, you can modify the workflow information.
    // *   After you delete or deactivate a media workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
    // 
    // ## Limits on QPS
    // 
    // You can call this operation up to 100 times per second. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the media workflow that you want to deactivate. To obtain the ID of the media workflow, you can log on to the **ApsaraVideo Media Processing (MPS) console** and choose **Workflows** > **Workflow Settings** in the left-side navigation pane.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The details of the media workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The topology of the media workflow.The status of the media workflow. The value is **Inactive**.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the media workflow. The value is **Inactive**.
    std::shared_ptr<string> topology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
