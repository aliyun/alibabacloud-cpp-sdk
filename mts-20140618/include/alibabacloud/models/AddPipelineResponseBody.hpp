// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddPipelineResponseBodyPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPipelineResponseBody() = default ;
    AddPipelineResponseBody(const AddPipelineResponseBody &) = default ;
    AddPipelineResponseBody(AddPipelineResponseBody &&) = default ;
    AddPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineResponseBody() = default ;
    AddPipelineResponseBody& operator=(const AddPipelineResponseBody &) = default ;
    AddPipelineResponseBody& operator=(AddPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeline_ == nullptr
        && return this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const AddPipelineResponseBodyPipeline & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, AddPipelineResponseBodyPipeline) };
    inline AddPipelineResponseBodyPipeline pipeline() { DARABONBA_PTR_GET(pipeline_, AddPipelineResponseBodyPipeline) };
    inline AddPipelineResponseBody& setPipeline(const AddPipelineResponseBodyPipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline AddPipelineResponseBody& setPipeline(AddPipelineResponseBodyPipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The MPS queue.
    std::shared_ptr<AddPipelineResponseBodyPipeline> pipeline_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
