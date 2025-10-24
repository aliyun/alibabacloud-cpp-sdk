// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODYMEDIAWORKFLOWLISTMEDIAWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODYMEDIAWORKFLOWLISTMEDIAWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
      DARABONBA_PTR_TO_JSON(TriggerMode, triggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
      DARABONBA_PTR_FROM_JSON(TriggerMode, triggerMode_);
    };
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow() = default ;
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow(const QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow &) = default ;
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow(QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow &&) = default ;
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow() = default ;
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& operator=(const QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow &) = default ;
    QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& operator=(QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->mediaWorkflowId_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr && return this->topology_ == nullptr && return this->triggerMode_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string topology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


    // triggerMode Field Functions 
    bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
    void deleteTriggerMode() { this->triggerMode_ = nullptr;};
    inline string triggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
    inline QueryMediaWorkflowListResponseBodyMediaWorkflowListMediaWorkflow& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


  protected:
    // The time when the media workflow was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the media workflow.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The name of the media workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The state of the media workflow. Valid values:
    // 
    // *   **Inactive**: The media workflow was deactivated.
    // *   **Active**: The media workflow was activated.
    // *   **Deleted**: The media workflow was deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The topology of the media workflow.
    std::shared_ptr<string> topology_ = nullptr;
    // The trigger mode of the media workflow. Valid values:
    // 
    // *   **OssAutoTrigger**: The media workflow is automatically triggered.
    // *   **NotInAuto**: The media workflow is not automatically triggered.
    std::shared_ptr<string> triggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
