// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEAGENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineAgentDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineAgentDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineAgentDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHotlineAgentDetailResponseBody() = default ;
    GetHotlineAgentDetailResponseBody(const GetHotlineAgentDetailResponseBody &) = default ;
    GetHotlineAgentDetailResponseBody(GetHotlineAgentDetailResponseBody &&) = default ;
    GetHotlineAgentDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineAgentDetailResponseBody() = default ;
    GetHotlineAgentDetailResponseBody& operator=(const GetHotlineAgentDetailResponseBody &) = default ;
    GetHotlineAgentDetailResponseBody& operator=(GetHotlineAgentDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(AgentStatusCode, agentStatusCode_);
        DARABONBA_PTR_TO_JSON(Assigned, assigned_);
        DARABONBA_PTR_TO_JSON(RestType, restType_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(AgentStatusCode, agentStatusCode_);
        DARABONBA_PTR_FROM_JSON(Assigned, assigned_);
        DARABONBA_PTR_FROM_JSON(RestType, restType_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->agentStatusCode_ == nullptr && this->assigned_ == nullptr && this->restType_ == nullptr && this->tenantId_ == nullptr
        && this->token_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Data& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline int32_t getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, 0) };
      inline Data& setAgentStatus(int32_t agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // agentStatusCode Field Functions 
      bool hasAgentStatusCode() const { return this->agentStatusCode_ != nullptr;};
      void deleteAgentStatusCode() { this->agentStatusCode_ = nullptr;};
      inline string getAgentStatusCode() const { DARABONBA_PTR_GET_DEFAULT(agentStatusCode_, "") };
      inline Data& setAgentStatusCode(string agentStatusCode) { DARABONBA_PTR_SET_VALUE(agentStatusCode_, agentStatusCode) };


      // assigned Field Functions 
      bool hasAssigned() const { return this->assigned_ != nullptr;};
      void deleteAssigned() { this->assigned_ = nullptr;};
      inline bool getAssigned() const { DARABONBA_PTR_GET_DEFAULT(assigned_, false) };
      inline Data& setAssigned(bool assigned) { DARABONBA_PTR_SET_VALUE(assigned_, assigned) };


      // restType Field Functions 
      bool hasRestType() const { return this->restType_ != nullptr;};
      void deleteRestType() { this->restType_ = nullptr;};
      inline int32_t getRestType() const { DARABONBA_PTR_GET_DEFAULT(restType_, 0) };
      inline Data& setRestType(int32_t restType) { DARABONBA_PTR_SET_VALUE(restType_, restType) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      shared_ptr<int64_t> agentId_ {};
      shared_ptr<int32_t> agentStatus_ {};
      shared_ptr<string> agentStatusCode_ {};
      shared_ptr<bool> assigned_ {};
      shared_ptr<int32_t> restType_ {};
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotlineAgentDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHotlineAgentDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHotlineAgentDetailResponseBody::Data) };
    inline GetHotlineAgentDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHotlineAgentDetailResponseBody::Data) };
    inline GetHotlineAgentDetailResponseBody& setData(const GetHotlineAgentDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotlineAgentDetailResponseBody& setData(GetHotlineAgentDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetHotlineAgentDetailResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotlineAgentDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotlineAgentDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHotlineAgentDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetHotlineAgentDetailResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
