// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineResponseBodyPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPipelineResponseBody() = default ;
    GetPipelineResponseBody(const GetPipelineResponseBody &) = default ;
    GetPipelineResponseBody(GetPipelineResponseBody &&) = default ;
    GetPipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBody() = default ;
    GetPipelineResponseBody& operator=(const GetPipelineResponseBody &) = default ;
    GetPipelineResponseBody& operator=(GetPipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeline_ == nullptr
        && return this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const GetPipelineResponseBodyPipeline & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, GetPipelineResponseBodyPipeline) };
    inline GetPipelineResponseBodyPipeline pipeline() { DARABONBA_PTR_GET(pipeline_, GetPipelineResponseBodyPipeline) };
    inline GetPipelineResponseBody& setPipeline(const GetPipelineResponseBodyPipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline GetPipelineResponseBody& setPipeline(GetPipelineResponseBodyPipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the MPS queue.
    std::shared_ptr<GetPipelineResponseBodyPipeline> pipeline_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
