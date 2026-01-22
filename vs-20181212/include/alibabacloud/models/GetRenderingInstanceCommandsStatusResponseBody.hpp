// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGINSTANCECOMMANDSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGINSTANCECOMMANDSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingInstanceCommandsStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingInstanceCommandsStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingInstanceCommandsStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRenderingInstanceCommandsStatusResponseBody() = default ;
    GetRenderingInstanceCommandsStatusResponseBody(const GetRenderingInstanceCommandsStatusResponseBody &) = default ;
    GetRenderingInstanceCommandsStatusResponseBody(GetRenderingInstanceCommandsStatusResponseBody &&) = default ;
    GetRenderingInstanceCommandsStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingInstanceCommandsStatusResponseBody() = default ;
    GetRenderingInstanceCommandsStatusResponseBody& operator=(const GetRenderingInstanceCommandsStatusResponseBody &) = default ;
    GetRenderingInstanceCommandsStatusResponseBody& operator=(GetRenderingInstanceCommandsStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRenderingInstanceCommandsStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRenderingInstanceCommandsStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetRenderingInstanceCommandsStatusResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRenderingInstanceCommandsStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> result_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
