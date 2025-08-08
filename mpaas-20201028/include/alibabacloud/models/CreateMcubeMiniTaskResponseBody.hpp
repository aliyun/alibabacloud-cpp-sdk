// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeMiniTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMiniTaskResult, createMiniTaskResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeMiniTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMiniTaskResult, createMiniTaskResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeMiniTaskResponseBody() = default ;
    CreateMcubeMiniTaskResponseBody(const CreateMcubeMiniTaskResponseBody &) = default ;
    CreateMcubeMiniTaskResponseBody(CreateMcubeMiniTaskResponseBody &&) = default ;
    CreateMcubeMiniTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeMiniTaskResponseBody() = default ;
    CreateMcubeMiniTaskResponseBody& operator=(const CreateMcubeMiniTaskResponseBody &) = default ;
    CreateMcubeMiniTaskResponseBody& operator=(CreateMcubeMiniTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createMiniTaskResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // createMiniTaskResult Field Functions 
    bool hasCreateMiniTaskResult() const { return this->createMiniTaskResult_ != nullptr;};
    void deleteCreateMiniTaskResult() { this->createMiniTaskResult_ = nullptr;};
    inline const CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult & createMiniTaskResult() const { DARABONBA_PTR_GET_CONST(createMiniTaskResult_, CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult createMiniTaskResult() { DARABONBA_PTR_GET(createMiniTaskResult_, CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBody& setCreateMiniTaskResult(const CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult & createMiniTaskResult) { DARABONBA_PTR_SET_VALUE(createMiniTaskResult_, createMiniTaskResult) };
    inline CreateMcubeMiniTaskResponseBody& setCreateMiniTaskResult(CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult && createMiniTaskResult) { DARABONBA_PTR_SET_RVALUE(createMiniTaskResult_, createMiniTaskResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeMiniTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeMiniTaskResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeMiniTaskResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult> createMiniTaskResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
