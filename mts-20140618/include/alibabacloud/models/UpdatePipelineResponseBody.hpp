// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePipelineResponseBodyPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdatePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdatePipelineResponseBody() = default ;
    UpdatePipelineResponseBody(const UpdatePipelineResponseBody &) = default ;
    UpdatePipelineResponseBody(UpdatePipelineResponseBody &&) = default ;
    UpdatePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineResponseBody() = default ;
    UpdatePipelineResponseBody& operator=(const UpdatePipelineResponseBody &) = default ;
    UpdatePipelineResponseBody& operator=(UpdatePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeline_ == nullptr
        && return this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const UpdatePipelineResponseBodyPipeline & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, UpdatePipelineResponseBodyPipeline) };
    inline UpdatePipelineResponseBodyPipeline pipeline() { DARABONBA_PTR_GET(pipeline_, UpdatePipelineResponseBodyPipeline) };
    inline UpdatePipelineResponseBody& setPipeline(const UpdatePipelineResponseBodyPipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline UpdatePipelineResponseBody& setPipeline(UpdatePipelineResponseBodyPipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the MPS queue.
    std::shared_ptr<UpdatePipelineResponseBodyPipeline> pipeline_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
