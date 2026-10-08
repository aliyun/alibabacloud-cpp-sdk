// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDEPLOYGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDEPLOYGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ChangeDeployGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDeployGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeDeployGroupResponseBody() = default ;
    ChangeDeployGroupResponseBody(const ChangeDeployGroupResponseBody &) = default ;
    ChangeDeployGroupResponseBody(ChangeDeployGroupResponseBody &&) = default ;
    ChangeDeployGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDeployGroupResponseBody() = default ;
    ChangeDeployGroupResponseBody& operator=(const ChangeDeployGroupResponseBody &) = default ;
    ChangeDeployGroupResponseBody& operator=(ChangeDeployGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline ChangeDeployGroupResponseBody& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ChangeDeployGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChangeDeployGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeDeployGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the change flow.
    shared_ptr<string> changeOrderId_ {};
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
