// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTIMAGEPIPELINEEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTIMAGEPIPELINEEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class StartImagePipelineExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartImagePipelineExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartImagePipelineExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartImagePipelineExecutionResponseBody() = default ;
    StartImagePipelineExecutionResponseBody(const StartImagePipelineExecutionResponseBody &) = default ;
    StartImagePipelineExecutionResponseBody(StartImagePipelineExecutionResponseBody &&) = default ;
    StartImagePipelineExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartImagePipelineExecutionResponseBody() = default ;
    StartImagePipelineExecutionResponseBody& operator=(const StartImagePipelineExecutionResponseBody &) = default ;
    StartImagePipelineExecutionResponseBody& operator=(StartImagePipelineExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executionId_ != nullptr
        && this->requestId_ != nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline StartImagePipelineExecutionResponseBody& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartImagePipelineExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the image creation task.
    std::shared_ptr<string> executionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
