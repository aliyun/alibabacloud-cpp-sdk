// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEMINIAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEMINIAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeMiniAppResponseBodyCreateMiniResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeMiniAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMiniResult, createMiniResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeMiniAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMiniResult, createMiniResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeMiniAppResponseBody() = default ;
    CreateMcubeMiniAppResponseBody(const CreateMcubeMiniAppResponseBody &) = default ;
    CreateMcubeMiniAppResponseBody(CreateMcubeMiniAppResponseBody &&) = default ;
    CreateMcubeMiniAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeMiniAppResponseBody() = default ;
    CreateMcubeMiniAppResponseBody& operator=(const CreateMcubeMiniAppResponseBody &) = default ;
    CreateMcubeMiniAppResponseBody& operator=(CreateMcubeMiniAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMiniResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createMiniResult Field Functions 
    bool hasCreateMiniResult() const { return this->createMiniResult_ != nullptr;};
    void deleteCreateMiniResult() { this->createMiniResult_ = nullptr;};
    inline const CreateMcubeMiniAppResponseBodyCreateMiniResult & createMiniResult() const { DARABONBA_PTR_GET_CONST(createMiniResult_, CreateMcubeMiniAppResponseBodyCreateMiniResult) };
    inline CreateMcubeMiniAppResponseBodyCreateMiniResult createMiniResult() { DARABONBA_PTR_GET(createMiniResult_, CreateMcubeMiniAppResponseBodyCreateMiniResult) };
    inline CreateMcubeMiniAppResponseBody& setCreateMiniResult(const CreateMcubeMiniAppResponseBodyCreateMiniResult & createMiniResult) { DARABONBA_PTR_SET_VALUE(createMiniResult_, createMiniResult) };
    inline CreateMcubeMiniAppResponseBody& setCreateMiniResult(CreateMcubeMiniAppResponseBodyCreateMiniResult && createMiniResult) { DARABONBA_PTR_SET_RVALUE(createMiniResult_, createMiniResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeMiniAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeMiniAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeMiniAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeMiniAppResponseBodyCreateMiniResult> createMiniResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
