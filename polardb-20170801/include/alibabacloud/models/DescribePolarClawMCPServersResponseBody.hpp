// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWMCPSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWMCPSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawMCPServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawMCPServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Servers, servers_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawMCPServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Servers, servers_);
    };
    DescribePolarClawMCPServersResponseBody() = default ;
    DescribePolarClawMCPServersResponseBody(const DescribePolarClawMCPServersResponseBody &) = default ;
    DescribePolarClawMCPServersResponseBody(DescribePolarClawMCPServersResponseBody &&) = default ;
    DescribePolarClawMCPServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawMCPServersResponseBody() = default ;
    DescribePolarClawMCPServersResponseBody& operator=(const DescribePolarClawMCPServersResponseBody &) = default ;
    DescribePolarClawMCPServersResponseBody& operator=(DescribePolarClawMCPServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->servers_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawMCPServersResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawMCPServersResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawMCPServersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawMCPServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline     const Darabonba::Json & getServers() const { DARABONBA_GET(servers_) };
    Darabonba::Json & getServers() { DARABONBA_GET(servers_) };
    inline DescribePolarClawMCPServersResponseBody& setServers(const Darabonba::Json & servers) { DARABONBA_SET_VALUE(servers_, servers) };
    inline DescribePolarClawMCPServersResponseBody& setServers(Darabonba::Json && servers) { DARABONBA_SET_RVALUE(servers_, servers) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    Darabonba::Json servers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
