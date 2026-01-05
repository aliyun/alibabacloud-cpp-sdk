// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIOPERATIONRESPONSEBODY_HPP_
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
  class CreateHttpApiOperationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiOperationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiOperationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateHttpApiOperationResponseBody() = default ;
    CreateHttpApiOperationResponseBody(const CreateHttpApiOperationResponseBody &) = default ;
    CreateHttpApiOperationResponseBody(CreateHttpApiOperationResponseBody &&) = default ;
    CreateHttpApiOperationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiOperationResponseBody() = default ;
    CreateHttpApiOperationResponseBody& operator=(const CreateHttpApiOperationResponseBody &) = default ;
    CreateHttpApiOperationResponseBody& operator=(CreateHttpApiOperationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(operations, operations_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(operations, operations_);
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
      class Operations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Operations& obj) { 
          DARABONBA_PTR_TO_JSON(operationId, operationId_);
        };
        friend void from_json(const Darabonba::Json& j, Operations& obj) { 
          DARABONBA_PTR_FROM_JSON(operationId, operationId_);
        };
        Operations() = default ;
        Operations(const Operations &) = default ;
        Operations(Operations &&) = default ;
        Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Operations() = default ;
        Operations& operator=(const Operations &) = default ;
        Operations& operator=(Operations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operationId_ == nullptr; };
        // operationId Field Functions 
        bool hasOperationId() const { return this->operationId_ != nullptr;};
        void deleteOperationId() { this->operationId_ = nullptr;};
        inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
        inline Operations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      protected:
        // Operation ID.
        shared_ptr<string> operationId_ {};
      };

      virtual bool empty() const override { return this->operations_ == nullptr; };
      // operations Field Functions 
      bool hasOperations() const { return this->operations_ != nullptr;};
      void deleteOperations() { this->operations_ = nullptr;};
      inline const vector<Data::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Data::Operations>) };
      inline vector<Data::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<Data::Operations>) };
      inline Data& setOperations(const vector<Data::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
      inline Data& setOperations(vector<Data::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    protected:
      // Operation information.
      shared_ptr<vector<Data::Operations>> operations_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHttpApiOperationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateHttpApiOperationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateHttpApiOperationResponseBody::Data) };
    inline CreateHttpApiOperationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateHttpApiOperationResponseBody::Data) };
    inline CreateHttpApiOperationResponseBody& setData(const CreateHttpApiOperationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateHttpApiOperationResponseBody& setData(CreateHttpApiOperationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHttpApiOperationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHttpApiOperationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response status code.
    shared_ptr<string> code_ {};
    // Operation information.
    shared_ptr<CreateHttpApiOperationResponseBody::Data> data_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
