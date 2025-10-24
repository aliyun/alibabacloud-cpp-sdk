// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIAWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIAWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaWorkflowResponseBodyMediaWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateMediaWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflow, mediaWorkflow_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflow, mediaWorkflow_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateMediaWorkflowResponseBody() = default ;
    UpdateMediaWorkflowResponseBody(const UpdateMediaWorkflowResponseBody &) = default ;
    UpdateMediaWorkflowResponseBody(UpdateMediaWorkflowResponseBody &&) = default ;
    UpdateMediaWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaWorkflowResponseBody() = default ;
    UpdateMediaWorkflowResponseBody& operator=(const UpdateMediaWorkflowResponseBody &) = default ;
    UpdateMediaWorkflowResponseBody& operator=(UpdateMediaWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaWorkflow_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaWorkflow Field Functions 
    bool hasMediaWorkflow() const { return this->mediaWorkflow_ != nullptr;};
    void deleteMediaWorkflow() { this->mediaWorkflow_ = nullptr;};
    inline const UpdateMediaWorkflowResponseBodyMediaWorkflow & mediaWorkflow() const { DARABONBA_PTR_GET_CONST(mediaWorkflow_, UpdateMediaWorkflowResponseBodyMediaWorkflow) };
    inline UpdateMediaWorkflowResponseBodyMediaWorkflow mediaWorkflow() { DARABONBA_PTR_GET(mediaWorkflow_, UpdateMediaWorkflowResponseBodyMediaWorkflow) };
    inline UpdateMediaWorkflowResponseBody& setMediaWorkflow(const UpdateMediaWorkflowResponseBodyMediaWorkflow & mediaWorkflow) { DARABONBA_PTR_SET_VALUE(mediaWorkflow_, mediaWorkflow) };
    inline UpdateMediaWorkflowResponseBody& setMediaWorkflow(UpdateMediaWorkflowResponseBodyMediaWorkflow && mediaWorkflow) { DARABONBA_PTR_SET_RVALUE(mediaWorkflow_, mediaWorkflow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMediaWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the media workflow.
    std::shared_ptr<UpdateMediaWorkflowResponseBodyMediaWorkflow> mediaWorkflow_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
