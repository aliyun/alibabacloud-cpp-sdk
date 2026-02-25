// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEMEDIAWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEMEDIAWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ActivateMediaWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflow, mediaWorkflow_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflow, mediaWorkflow_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ActivateMediaWorkflowResponseBody() = default ;
    ActivateMediaWorkflowResponseBody(const ActivateMediaWorkflowResponseBody &) = default ;
    ActivateMediaWorkflowResponseBody(ActivateMediaWorkflowResponseBody &&) = default ;
    ActivateMediaWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateMediaWorkflowResponseBody() = default ;
    ActivateMediaWorkflowResponseBody& operator=(const ActivateMediaWorkflowResponseBody &) = default ;
    ActivateMediaWorkflowResponseBody& operator=(ActivateMediaWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaWorkflow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaWorkflow& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Topology, topology_);
      };
      friend void from_json(const Darabonba::Json& j, MediaWorkflow& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Topology, topology_);
      };
      MediaWorkflow() = default ;
      MediaWorkflow(const MediaWorkflow &) = default ;
      MediaWorkflow(MediaWorkflow &&) = default ;
      MediaWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaWorkflow() = default ;
      MediaWorkflow& operator=(const MediaWorkflow &) = default ;
      MediaWorkflow& operator=(MediaWorkflow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->mediaWorkflowId_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->topology_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaWorkflow& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // mediaWorkflowId Field Functions 
      bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
      void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
      inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
      inline MediaWorkflow& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MediaWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MediaWorkflow& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // topology Field Functions 
      bool hasTopology() const { return this->topology_ != nullptr;};
      void deleteTopology() { this->topology_ = nullptr;};
      inline string getTopology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
      inline MediaWorkflow& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


    protected:
      // The time when the media workflow was created.
      shared_ptr<string> creationTime_ {};
      // The ID of the media workflow.
      shared_ptr<string> mediaWorkflowId_ {};
      // The name of the media workflow.
      shared_ptr<string> name_ {};
      // The status of the media workflow. The value is **Active**.
      shared_ptr<string> state_ {};
      // The topology of the media workflow.
      shared_ptr<string> topology_ {};
    };

    virtual bool empty() const override { return this->mediaWorkflow_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaWorkflow Field Functions 
    bool hasMediaWorkflow() const { return this->mediaWorkflow_ != nullptr;};
    void deleteMediaWorkflow() { this->mediaWorkflow_ = nullptr;};
    inline const ActivateMediaWorkflowResponseBody::MediaWorkflow & getMediaWorkflow() const { DARABONBA_PTR_GET_CONST(mediaWorkflow_, ActivateMediaWorkflowResponseBody::MediaWorkflow) };
    inline ActivateMediaWorkflowResponseBody::MediaWorkflow getMediaWorkflow() { DARABONBA_PTR_GET(mediaWorkflow_, ActivateMediaWorkflowResponseBody::MediaWorkflow) };
    inline ActivateMediaWorkflowResponseBody& setMediaWorkflow(const ActivateMediaWorkflowResponseBody::MediaWorkflow & mediaWorkflow) { DARABONBA_PTR_SET_VALUE(mediaWorkflow_, mediaWorkflow) };
    inline ActivateMediaWorkflowResponseBody& setMediaWorkflow(ActivateMediaWorkflowResponseBody::MediaWorkflow && mediaWorkflow) { DARABONBA_PTR_SET_RVALUE(mediaWorkflow_, mediaWorkflow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateMediaWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media workflow.
    shared_ptr<ActivateMediaWorkflowResponseBody::MediaWorkflow> mediaWorkflow_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
