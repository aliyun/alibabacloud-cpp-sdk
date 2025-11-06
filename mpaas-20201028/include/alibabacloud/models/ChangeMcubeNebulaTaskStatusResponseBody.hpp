// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMCUBENEBULATASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMCUBENEBULATASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ChangeMcubeNebulaTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMcubeNebulaTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeMcubeNebulaTaskStatusResult, changeMcubeNebulaTaskStatusResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMcubeNebulaTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeMcubeNebulaTaskStatusResult, changeMcubeNebulaTaskStatusResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ChangeMcubeNebulaTaskStatusResponseBody() = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(const ChangeMcubeNebulaTaskStatusResponseBody &) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(ChangeMcubeNebulaTaskStatusResponseBody &&) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMcubeNebulaTaskStatusResponseBody() = default ;
    ChangeMcubeNebulaTaskStatusResponseBody& operator=(const ChangeMcubeNebulaTaskStatusResponseBody &) = default ;
    ChangeMcubeNebulaTaskStatusResponseBody& operator=(ChangeMcubeNebulaTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeMcubeNebulaTaskStatusResult_ == nullptr
        && return this->requestId_ == nullptr && return this->resultCode_ == nullptr && return this->resultMessage_ == nullptr; };
    // changeMcubeNebulaTaskStatusResult Field Functions 
    bool hasChangeMcubeNebulaTaskStatusResult() const { return this->changeMcubeNebulaTaskStatusResult_ != nullptr;};
    void deleteChangeMcubeNebulaTaskStatusResult() { this->changeMcubeNebulaTaskStatusResult_ = nullptr;};
    inline const ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult & changeMcubeNebulaTaskStatusResult() const { DARABONBA_PTR_GET_CONST(changeMcubeNebulaTaskStatusResult_, ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult changeMcubeNebulaTaskStatusResult() { DARABONBA_PTR_GET(changeMcubeNebulaTaskStatusResult_, ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setChangeMcubeNebulaTaskStatusResult(const ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult & changeMcubeNebulaTaskStatusResult) { DARABONBA_PTR_SET_VALUE(changeMcubeNebulaTaskStatusResult_, changeMcubeNebulaTaskStatusResult) };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setChangeMcubeNebulaTaskStatusResult(ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult && changeMcubeNebulaTaskStatusResult) { DARABONBA_PTR_SET_RVALUE(changeMcubeNebulaTaskStatusResult_, changeMcubeNebulaTaskStatusResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ChangeMcubeNebulaTaskStatusResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ChangeMcubeNebulaTaskStatusResponseBodyChangeMcubeNebulaTaskStatusResult> changeMcubeNebulaTaskStatusResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
