// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULARESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULARESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateMcubeNebulaResourceReslult, createMcubeNebulaResourceReslult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateMcubeNebulaResourceReslult, createMcubeNebulaResourceReslult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeNebulaResourceResponseBody() = default ;
    CreateMcubeNebulaResourceResponseBody(const CreateMcubeNebulaResourceResponseBody &) = default ;
    CreateMcubeNebulaResourceResponseBody(CreateMcubeNebulaResourceResponseBody &&) = default ;
    CreateMcubeNebulaResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaResourceResponseBody() = default ;
    CreateMcubeNebulaResourceResponseBody& operator=(const CreateMcubeNebulaResourceResponseBody &) = default ;
    CreateMcubeNebulaResourceResponseBody& operator=(CreateMcubeNebulaResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createMcubeNebulaResourceReslult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createMcubeNebulaResourceReslult Field Functions 
    bool hasCreateMcubeNebulaResourceReslult() const { return this->createMcubeNebulaResourceReslult_ != nullptr;};
    void deleteCreateMcubeNebulaResourceReslult() { this->createMcubeNebulaResourceReslult_ = nullptr;};
    inline const CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult & createMcubeNebulaResourceReslult() const { DARABONBA_PTR_GET_CONST(createMcubeNebulaResourceReslult_, CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult) };
    inline CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult createMcubeNebulaResourceReslult() { DARABONBA_PTR_GET(createMcubeNebulaResourceReslult_, CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult) };
    inline CreateMcubeNebulaResourceResponseBody& setCreateMcubeNebulaResourceReslult(const CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult & createMcubeNebulaResourceReslult) { DARABONBA_PTR_SET_VALUE(createMcubeNebulaResourceReslult_, createMcubeNebulaResourceReslult) };
    inline CreateMcubeNebulaResourceResponseBody& setCreateMcubeNebulaResourceReslult(CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult && createMcubeNebulaResourceReslult) { DARABONBA_PTR_SET_RVALUE(createMcubeNebulaResourceReslult_, createMcubeNebulaResourceReslult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeNebulaResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeNebulaResourceResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeNebulaResourceResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeNebulaResourceResponseBodyCreateMcubeNebulaResourceReslult> createMcubeNebulaResourceReslult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
