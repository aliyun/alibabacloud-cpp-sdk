// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetConnectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetConnectorResponseBody() = default ;
    GetConnectorResponseBody(const GetConnectorResponseBody &) = default ;
    GetConnectorResponseBody(GetConnectorResponseBody &&) = default ;
    GetConnectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectorResponseBody() = default ;
    GetConnectorResponseBody& operator=(const GetConnectorResponseBody &) = default ;
    GetConnectorResponseBody& operator=(GetConnectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
        DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
        DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
        DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
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
      virtual bool empty() const override { return this->connectorId_ == nullptr
        && this->connectorName_ == nullptr && this->connectorType_ == nullptr && this->description_ == nullptr; };
      // connectorId Field Functions 
      bool hasConnectorId() const { return this->connectorId_ != nullptr;};
      void deleteConnectorId() { this->connectorId_ = nullptr;};
      inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
      inline Data& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


      // connectorName Field Functions 
      bool hasConnectorName() const { return this->connectorName_ != nullptr;};
      void deleteConnectorName() { this->connectorName_ = nullptr;};
      inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
      inline Data& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


      // connectorType Field Functions 
      bool hasConnectorType() const { return this->connectorType_ != nullptr;};
      void deleteConnectorType() { this->connectorType_ = nullptr;};
      inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
      inline Data& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      shared_ptr<string> connectorId_ {};
      shared_ptr<string> connectorName_ {};
      shared_ptr<string> connectorType_ {};
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConnectorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConnectorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConnectorResponseBody::Data) };
    inline GetConnectorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConnectorResponseBody::Data) };
    inline GetConnectorResponseBody& setData(const GetConnectorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConnectorResponseBody& setData(GetConnectorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConnectorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConnectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetConnectorResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConnectorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetConnectorResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
