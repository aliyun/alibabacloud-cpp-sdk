// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationResponseBodyApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->traceId_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const GetApplicationResponseBodyApplication & application() const { DARABONBA_PTR_GET_CONST(application_, GetApplicationResponseBodyApplication) };
    inline GetApplicationResponseBodyApplication application() { DARABONBA_PTR_GET(application_, GetApplicationResponseBodyApplication) };
    inline GetApplicationResponseBody& setApplication(const GetApplicationResponseBodyApplication & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline GetApplicationResponseBody& setApplication(GetApplicationResponseBodyApplication && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetApplicationResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The details of the application.
    std::shared_ptr<GetApplicationResponseBodyApplication> application_ = nullptr;
    // The additional information returned. Valid values:
    // 
    // *   When a request is successful, **success**is returned.
    // *   An error code is returned when a request failed.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the trace. The ID is used to query the details of a request.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
