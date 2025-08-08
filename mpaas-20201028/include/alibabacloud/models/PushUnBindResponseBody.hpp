// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHUNBINDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHUNBINDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushUnBindResponseBodyPushResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushUnBindResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushUnBindResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushResult, pushResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, PushUnBindResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResult, pushResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    PushUnBindResponseBody() = default ;
    PushUnBindResponseBody(const PushUnBindResponseBody &) = default ;
    PushUnBindResponseBody(PushUnBindResponseBody &&) = default ;
    PushUnBindResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushUnBindResponseBody() = default ;
    PushUnBindResponseBody& operator=(const PushUnBindResponseBody &) = default ;
    PushUnBindResponseBody& operator=(PushUnBindResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // pushResult Field Functions 
    bool hasPushResult() const { return this->pushResult_ != nullptr;};
    void deletePushResult() { this->pushResult_ = nullptr;};
    inline const PushUnBindResponseBodyPushResult & pushResult() const { DARABONBA_PTR_GET_CONST(pushResult_, PushUnBindResponseBodyPushResult) };
    inline PushUnBindResponseBodyPushResult pushResult() { DARABONBA_PTR_GET(pushResult_, PushUnBindResponseBodyPushResult) };
    inline PushUnBindResponseBody& setPushResult(const PushUnBindResponseBodyPushResult & pushResult) { DARABONBA_PTR_SET_VALUE(pushResult_, pushResult) };
    inline PushUnBindResponseBody& setPushResult(PushUnBindResponseBodyPushResult && pushResult) { DARABONBA_PTR_SET_RVALUE(pushResult_, pushResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushUnBindResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline PushUnBindResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline PushUnBindResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<PushUnBindResponseBodyPushResult> pushResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
