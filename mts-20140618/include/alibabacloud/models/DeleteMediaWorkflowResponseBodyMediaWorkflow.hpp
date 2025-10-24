// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIAWORKFLOWRESPONSEBODYMEDIAWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class DeleteMediaWorkflowResponseBodyMediaWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaWorkflowResponseBodyMediaWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaWorkflowResponseBodyMediaWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
    };
    DeleteMediaWorkflowResponseBodyMediaWorkflow() = default ;
    DeleteMediaWorkflowResponseBodyMediaWorkflow(const DeleteMediaWorkflowResponseBodyMediaWorkflow &) = default ;
    DeleteMediaWorkflowResponseBodyMediaWorkflow(DeleteMediaWorkflowResponseBodyMediaWorkflow &&) = default ;
    DeleteMediaWorkflowResponseBodyMediaWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaWorkflowResponseBodyMediaWorkflow() = default ;
    DeleteMediaWorkflowResponseBodyMediaWorkflow& operator=(const DeleteMediaWorkflowResponseBodyMediaWorkflow &) = default ;
    DeleteMediaWorkflowResponseBodyMediaWorkflow& operator=(DeleteMediaWorkflowResponseBodyMediaWorkflow &&) = default ;
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
    inline DeleteMediaWorkflowResponseBodyMediaWorkflow& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string mediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline DeleteMediaWorkflowResponseBodyMediaWorkflow& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteMediaWorkflowResponseBodyMediaWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DeleteMediaWorkflowResponseBodyMediaWorkflow& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline string topology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
    inline DeleteMediaWorkflowResponseBodyMediaWorkflow& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


  protected:
    // The time when the media workflow was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the media workflow that is deleted.
    std::shared_ptr<string> mediaWorkflowId_ = nullptr;
    // The name of the media workflow that is deleted.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the media workflow. The value is **Deleted**.
    std::shared_ptr<string> state_ = nullptr;
    // The topology of the media workflow.
    std::shared_ptr<string> topology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
