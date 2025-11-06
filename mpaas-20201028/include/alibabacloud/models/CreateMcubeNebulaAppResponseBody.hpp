// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBENEBULAAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBENEBULAAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeNebulaAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeNebulaAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateNebulaAppResult, createNebulaAppResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeNebulaAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateNebulaAppResult, createNebulaAppResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    CreateMcubeNebulaAppResponseBody() = default ;
    CreateMcubeNebulaAppResponseBody(const CreateMcubeNebulaAppResponseBody &) = default ;
    CreateMcubeNebulaAppResponseBody(CreateMcubeNebulaAppResponseBody &&) = default ;
    CreateMcubeNebulaAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeNebulaAppResponseBody() = default ;
    CreateMcubeNebulaAppResponseBody& operator=(const CreateMcubeNebulaAppResponseBody &) = default ;
    CreateMcubeNebulaAppResponseBody& operator=(CreateMcubeNebulaAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createNebulaAppResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // createNebulaAppResult Field Functions 
    bool hasCreateNebulaAppResult() const { return this->createNebulaAppResult_ != nullptr;};
    void deleteCreateNebulaAppResult() { this->createNebulaAppResult_ = nullptr;};
    inline const CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult & createNebulaAppResult() const { DARABONBA_PTR_GET_CONST(createNebulaAppResult_, CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult) };
    inline CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult createNebulaAppResult() { DARABONBA_PTR_GET(createNebulaAppResult_, CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult) };
    inline CreateMcubeNebulaAppResponseBody& setCreateNebulaAppResult(const CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult & createNebulaAppResult) { DARABONBA_PTR_SET_VALUE(createNebulaAppResult_, createNebulaAppResult) };
    inline CreateMcubeNebulaAppResponseBody& setCreateNebulaAppResult(CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult && createNebulaAppResult) { DARABONBA_PTR_SET_RVALUE(createNebulaAppResult_, createNebulaAppResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMcubeNebulaAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateMcubeNebulaAppResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateMcubeNebulaAppResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<CreateMcubeNebulaAppResponseBodyCreateNebulaAppResult> createNebulaAppResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
