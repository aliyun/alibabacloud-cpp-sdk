// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULATASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULATASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMcubeNebulaTaskResult, createMcubeNebulaTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMcubeNebulaTaskResult, createMcubeNebulaTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeNebulaTaskResponseBody() = default ;
    CreateMcubeNebulaTaskResponseBody(const CreateMcubeNebulaTaskResponseBody &) = default ;
    CreateMcubeNebulaTaskResponseBody(CreateMcubeNebulaTaskResponseBody &&) = default ;
    CreateMcubeNebulaTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaTaskResponseBody() = default ;
    CreateMcubeNebulaTaskResponseBody& operator=(const CreateMcubeNebulaTaskResponseBody &) = default ;
    CreateMcubeNebulaTaskResponseBody& operator=(CreateMcubeNebulaTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMcubeNebulaTaskResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createMcubeNebulaTaskResult Field Functions 
    bool hasCreateMcubeNebulaTaskResult() const { return this->createMcubeNebulaTaskResult_ != nullptr;};
    void deleteCreateMcubeNebulaTaskResult() { this->createMcubeNebulaTaskResult_ = nullptr;};
    inline const CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult & createMcubeNebulaTaskResult() const { DARABONBA_PTR_GET_CONST(createMcubeNebulaTaskResult_, CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult createMcubeNebulaTaskResult() { DARABONBA_PTR_GET(createMcubeNebulaTaskResult_, CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBody& setCreateMcubeNebulaTaskResult(const CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult & createMcubeNebulaTaskResult) { DARABONBA_PTR_SET_VALUE(createMcubeNebulaTaskResult_, createMcubeNebulaTaskResult) };
    inline CreateMcubeNebulaTaskResponseBody& setCreateMcubeNebulaTaskResult(CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult && createMcubeNebulaTaskResult) { DARABONBA_PTR_SET_RVALUE(createMcubeNebulaTaskResult_, createMcubeNebulaTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeNebulaTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeNebulaTaskResponseBodyCreateMcubeNebulaTaskResult> createMcubeNebulaTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
