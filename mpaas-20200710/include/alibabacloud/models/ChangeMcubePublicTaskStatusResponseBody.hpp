// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEMCUBEPUBLICTASKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEMCUBEPUBLICTASKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeMcubePublicTaskStatusResponseBodyChangeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class ChangeMcubePublicTaskStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeMcubePublicTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeResult, changeResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeMcubePublicTaskStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeResult, changeResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    ChangeMcubePublicTaskStatusResponseBody() = default ;
    ChangeMcubePublicTaskStatusResponseBody(const ChangeMcubePublicTaskStatusResponseBody &) = default ;
    ChangeMcubePublicTaskStatusResponseBody(ChangeMcubePublicTaskStatusResponseBody &&) = default ;
    ChangeMcubePublicTaskStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeMcubePublicTaskStatusResponseBody() = default ;
    ChangeMcubePublicTaskStatusResponseBody& operator=(const ChangeMcubePublicTaskStatusResponseBody &) = default ;
    ChangeMcubePublicTaskStatusResponseBody& operator=(ChangeMcubePublicTaskStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeResult_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMessage_ != nullptr; };
    // changeResult Field Functions 
    bool hasChangeResult() const { return this->changeResult_ != nullptr;};
    void deleteChangeResult() { this->changeResult_ = nullptr;};
    inline const ChangeMcubePublicTaskStatusResponseBodyChangeResult & changeResult() const { DARABONBA_PTR_GET_CONST(changeResult_, ChangeMcubePublicTaskStatusResponseBodyChangeResult) };
    inline ChangeMcubePublicTaskStatusResponseBodyChangeResult changeResult() { DARABONBA_PTR_GET(changeResult_, ChangeMcubePublicTaskStatusResponseBodyChangeResult) };
    inline ChangeMcubePublicTaskStatusResponseBody& setChangeResult(const ChangeMcubePublicTaskStatusResponseBodyChangeResult & changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };
    inline ChangeMcubePublicTaskStatusResponseBody& setChangeResult(ChangeMcubePublicTaskStatusResponseBodyChangeResult && changeResult) { DARABONBA_PTR_SET_RVALUE(changeResult_, changeResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeMcubePublicTaskStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ChangeMcubePublicTaskStatusResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string resultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ChangeMcubePublicTaskStatusResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    std::shared_ptr<ChangeMcubePublicTaskStatusResponseBodyChangeResult> changeResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
