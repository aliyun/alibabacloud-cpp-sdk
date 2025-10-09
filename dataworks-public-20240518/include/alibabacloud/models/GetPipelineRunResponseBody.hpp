// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineRunResponseBodyPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody(GetPipelineRunResponseBody &&) = default ;
    GetPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody& operator=(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody& operator=(GetPipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pipeline_ != nullptr
        && this->requestId_ != nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const GetPipelineRunResponseBodyPipeline & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, GetPipelineRunResponseBodyPipeline) };
    inline GetPipelineRunResponseBodyPipeline pipeline() { DARABONBA_PTR_GET(pipeline_, GetPipelineRunResponseBodyPipeline) };
    inline GetPipelineRunResponseBody& setPipeline(const GetPipelineRunResponseBodyPipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline GetPipelineRunResponseBody& setPipeline(GetPipelineRunResponseBodyPipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the process.
    std::shared_ptr<GetPipelineRunResponseBodyPipeline> pipeline_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
