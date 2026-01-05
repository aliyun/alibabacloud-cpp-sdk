// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERAUTHORIZATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateConsumerAuthorizationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerAuthorizationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateConsumerAuthorizationRulesResponseBody() = default ;
    CreateConsumerAuthorizationRulesResponseBody(const CreateConsumerAuthorizationRulesResponseBody &) = default ;
    CreateConsumerAuthorizationRulesResponseBody(CreateConsumerAuthorizationRulesResponseBody &&) = default ;
    CreateConsumerAuthorizationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerAuthorizationRulesResponseBody() = default ;
    CreateConsumerAuthorizationRulesResponseBody& operator=(const CreateConsumerAuthorizationRulesResponseBody &) = default ;
    CreateConsumerAuthorizationRulesResponseBody& operator=(CreateConsumerAuthorizationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerAuthorizationRuleIds, consumerAuthorizationRuleIds_);
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
      virtual bool empty() const override { return this->consumerAuthorizationRuleIds_ == nullptr; };
      // consumerAuthorizationRuleIds Field Functions 
      bool hasConsumerAuthorizationRuleIds() const { return this->consumerAuthorizationRuleIds_ != nullptr;};
      void deleteConsumerAuthorizationRuleIds() { this->consumerAuthorizationRuleIds_ = nullptr;};
      inline const vector<string> & getConsumerAuthorizationRuleIds() const { DARABONBA_PTR_GET_CONST(consumerAuthorizationRuleIds_, vector<string>) };
      inline vector<string> getConsumerAuthorizationRuleIds() { DARABONBA_PTR_GET(consumerAuthorizationRuleIds_, vector<string>) };
      inline Data& setConsumerAuthorizationRuleIds(const vector<string> & consumerAuthorizationRuleIds) { DARABONBA_PTR_SET_VALUE(consumerAuthorizationRuleIds_, consumerAuthorizationRuleIds) };
      inline Data& setConsumerAuthorizationRuleIds(vector<string> && consumerAuthorizationRuleIds) { DARABONBA_PTR_SET_RVALUE(consumerAuthorizationRuleIds_, consumerAuthorizationRuleIds) };


    protected:
      // The authentication rule IDs.
      shared_ptr<vector<string>> consumerAuthorizationRuleIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateConsumerAuthorizationRulesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateConsumerAuthorizationRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateConsumerAuthorizationRulesResponseBody::Data) };
    inline CreateConsumerAuthorizationRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateConsumerAuthorizationRulesResponseBody::Data) };
    inline CreateConsumerAuthorizationRulesResponseBody& setData(const CreateConsumerAuthorizationRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateConsumerAuthorizationRulesResponseBody& setData(CreateConsumerAuthorizationRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateConsumerAuthorizationRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateConsumerAuthorizationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<CreateConsumerAuthorizationRulesResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
