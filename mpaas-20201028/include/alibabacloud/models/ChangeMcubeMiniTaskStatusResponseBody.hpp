// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMCUBEMINITASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMCUBEMINITASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ChangeMcubeMiniTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMcubeMiniTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeMiniTaskStatusResult, changeMiniTaskStatusResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMcubeMiniTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeMiniTaskStatusResult, changeMiniTaskStatusResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ChangeMcubeMiniTaskStatusResponseBody() = default ;
    ChangeMcubeMiniTaskStatusResponseBody(const ChangeMcubeMiniTaskStatusResponseBody &) = default ;
    ChangeMcubeMiniTaskStatusResponseBody(ChangeMcubeMiniTaskStatusResponseBody &&) = default ;
    ChangeMcubeMiniTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMcubeMiniTaskStatusResponseBody() = default ;
    ChangeMcubeMiniTaskStatusResponseBody& operator=(const ChangeMcubeMiniTaskStatusResponseBody &) = default ;
    ChangeMcubeMiniTaskStatusResponseBody& operator=(ChangeMcubeMiniTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeMiniTaskStatusResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // changeMiniTaskStatusResult Field Functions 
    bool hasChangeMiniTaskStatusResult() const { return this->changeMiniTaskStatusResult_ != nullptr;};
    void deleteChangeMiniTaskStatusResult() { this->changeMiniTaskStatusResult_ = nullptr;};
    inline const ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult & changeMiniTaskStatusResult() const { DARABONBA_PTR_GET_CONST(changeMiniTaskStatusResult_, ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult) };
    inline ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult changeMiniTaskStatusResult() { DARABONBA_PTR_GET(changeMiniTaskStatusResult_, ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult) };
    inline ChangeMcubeMiniTaskStatusResponseBody& setChangeMiniTaskStatusResult(const ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult & changeMiniTaskStatusResult) { DARABONBA_PTR_SET_VALUE(changeMiniTaskStatusResult_, changeMiniTaskStatusResult) };
    inline ChangeMcubeMiniTaskStatusResponseBody& setChangeMiniTaskStatusResult(ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult && changeMiniTaskStatusResult) { DARABONBA_PTR_SET_RVALUE(changeMiniTaskStatusResult_, changeMiniTaskStatusResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeMcubeMiniTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ChangeMcubeMiniTaskStatusResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ChangeMcubeMiniTaskStatusResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ChangeMcubeMiniTaskStatusResponseBodyChangeMiniTaskStatusResult> changeMiniTaskStatusResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
