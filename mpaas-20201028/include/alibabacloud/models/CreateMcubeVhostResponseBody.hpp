// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEVHOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEVHOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeVhostResponseBodyCreateVhostResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeVhostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateVhostResult, createVhostResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeVhostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateVhostResult, createVhostResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeVhostResponseBody() = default ;
    CreateMcubeVhostResponseBody(const CreateMcubeVhostResponseBody &) = default ;
    CreateMcubeVhostResponseBody(CreateMcubeVhostResponseBody &&) = default ;
    CreateMcubeVhostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeVhostResponseBody() = default ;
    CreateMcubeVhostResponseBody& operator=(const CreateMcubeVhostResponseBody &) = default ;
    CreateMcubeVhostResponseBody& operator=(CreateMcubeVhostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createVhostResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createVhostResult Field Functions 
    bool hasCreateVhostResult() const { return this->createVhostResult_ != nullptr;};
    void deleteCreateVhostResult() { this->createVhostResult_ = nullptr;};
    inline const CreateMcubeVhostResponseBodyCreateVhostResult & createVhostResult() const { DARABONBA_PTR_GET_CONST(createVhostResult_, CreateMcubeVhostResponseBodyCreateVhostResult) };
    inline CreateMcubeVhostResponseBodyCreateVhostResult createVhostResult() { DARABONBA_PTR_GET(createVhostResult_, CreateMcubeVhostResponseBodyCreateVhostResult) };
    inline CreateMcubeVhostResponseBody& setCreateVhostResult(const CreateMcubeVhostResponseBodyCreateVhostResult & createVhostResult) { DARABONBA_PTR_SET_VALUE(createVhostResult_, createVhostResult) };
    inline CreateMcubeVhostResponseBody& setCreateVhostResult(CreateMcubeVhostResponseBodyCreateVhostResult && createVhostResult) { DARABONBA_PTR_SET_RVALUE(createVhostResult_, createVhostResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeVhostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeVhostResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeVhostResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeVhostResponseBodyCreateVhostResult> createVhostResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
