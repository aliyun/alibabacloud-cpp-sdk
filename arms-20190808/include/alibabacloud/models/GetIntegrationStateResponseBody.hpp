// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetIntegrationStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetIntegrationStateResponseBody() = default ;
    GetIntegrationStateResponseBody(const GetIntegrationStateResponseBody &) = default ;
    GetIntegrationStateResponseBody(GetIntegrationStateResponseBody &&) = default ;
    GetIntegrationStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationStateResponseBody() = default ;
    GetIntegrationStateResponseBody& operator=(const GetIntegrationStateResponseBody &) = default ;
    GetIntegrationStateResponseBody& operator=(GetIntegrationStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->state_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetIntegrationStateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIntegrationStateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntegrationStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline bool state() const { DARABONBA_PTR_GET_DEFAULT(state_, false) };
    inline GetIntegrationStateResponseBody& setState(bool state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Status code. 200 means success, other status codes are exceptions.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The prompt information of the returned result.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The integration state of Prometheus dashboards and collection rules. Valid values:
    // 
    // *   `true`: The Prometheus dashboards and collection rules that monitor the software are integrated.
    // *   `false`: The Prometheus dashboards and collection rules that monitor the software are not integrated.
    std::shared_ptr<bool> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
