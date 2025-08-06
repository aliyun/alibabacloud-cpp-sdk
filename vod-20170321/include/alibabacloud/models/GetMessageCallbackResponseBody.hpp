// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGECALLBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMessageCallbackResponseBodyMessageCallback.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMessageCallbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageCallbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageCallback, messageCallback_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageCallbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageCallback, messageCallback_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMessageCallbackResponseBody() = default ;
    GetMessageCallbackResponseBody(const GetMessageCallbackResponseBody &) = default ;
    GetMessageCallbackResponseBody(GetMessageCallbackResponseBody &&) = default ;
    GetMessageCallbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageCallbackResponseBody() = default ;
    GetMessageCallbackResponseBody& operator=(const GetMessageCallbackResponseBody &) = default ;
    GetMessageCallbackResponseBody& operator=(GetMessageCallbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageCallback_ != nullptr
        && this->requestId_ != nullptr; };
    // messageCallback Field Functions 
    bool hasMessageCallback() const { return this->messageCallback_ != nullptr;};
    void deleteMessageCallback() { this->messageCallback_ = nullptr;};
    inline const GetMessageCallbackResponseBodyMessageCallback & messageCallback() const { DARABONBA_PTR_GET_CONST(messageCallback_, GetMessageCallbackResponseBodyMessageCallback) };
    inline GetMessageCallbackResponseBodyMessageCallback messageCallback() { DARABONBA_PTR_GET(messageCallback_, GetMessageCallbackResponseBodyMessageCallback) };
    inline GetMessageCallbackResponseBody& setMessageCallback(const GetMessageCallbackResponseBodyMessageCallback & messageCallback) { DARABONBA_PTR_SET_VALUE(messageCallback_, messageCallback) };
    inline GetMessageCallbackResponseBody& setMessageCallback(GetMessageCallbackResponseBodyMessageCallback && messageCallback) { DARABONBA_PTR_SET_RVALUE(messageCallback_, messageCallback) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageCallbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the event notification.
    std::shared_ptr<GetMessageCallbackResponseBodyMessageCallback> messageCallback_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
