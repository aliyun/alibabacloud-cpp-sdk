// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHIMARKETCONSUMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHIMARKETCONSUMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetHiMarketConsumerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHiMarketConsumerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHiMarketConsumerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetHiMarketConsumerResponseBody() = default ;
    GetHiMarketConsumerResponseBody(const GetHiMarketConsumerResponseBody &) = default ;
    GetHiMarketConsumerResponseBody(GetHiMarketConsumerResponseBody &&) = default ;
    GetHiMarketConsumerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHiMarketConsumerResponseBody() = default ;
    GetHiMarketConsumerResponseBody& operator=(const GetHiMarketConsumerResponseBody &) = default ;
    GetHiMarketConsumerResponseBody& operator=(GetHiMarketConsumerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(isPrimary, isPrimary_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(isPrimary, isPrimary_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
      virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->description_ == nullptr && this->isPrimary_ == nullptr && this->name_ == nullptr; };
      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Data& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isPrimary Field Functions 
      bool hasIsPrimary() const { return this->isPrimary_ != nullptr;};
      void deleteIsPrimary() { this->isPrimary_ = nullptr;};
      inline bool getIsPrimary() const { DARABONBA_PTR_GET_DEFAULT(isPrimary_, false) };
      inline Data& setIsPrimary(bool isPrimary) { DARABONBA_PTR_SET_VALUE(isPrimary_, isPrimary) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The consumer ID.
      shared_ptr<string> consumerId_ {};
      // The description of the consumer.
      shared_ptr<string> description_ {};
      // Indicates whether the consumer is the primary consumer.
      shared_ptr<bool> isPrimary_ {};
      // The name of the consumer.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHiMarketConsumerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetHiMarketConsumerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetHiMarketConsumerResponseBody::Data) };
    inline GetHiMarketConsumerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetHiMarketConsumerResponseBody::Data) };
    inline GetHiMarketConsumerResponseBody& setData(const GetHiMarketConsumerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHiMarketConsumerResponseBody& setData(GetHiMarketConsumerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHiMarketConsumerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHiMarketConsumerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetHiMarketConsumerResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
