// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKLOCALCLIENTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSparkLocalClientInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkLocalClientInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkLocalClientInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSparkLocalClientInfoResponseBody() = default ;
    GetSparkLocalClientInfoResponseBody(const GetSparkLocalClientInfoResponseBody &) = default ;
    GetSparkLocalClientInfoResponseBody(GetSparkLocalClientInfoResponseBody &&) = default ;
    GetSparkLocalClientInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkLocalClientInfoResponseBody() = default ;
    GetSparkLocalClientInfoResponseBody& operator=(const GetSparkLocalClientInfoResponseBody &) = default ;
    GetSparkLocalClientInfoResponseBody& operator=(GetSparkLocalClientInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClientFileResourceId, clientFileResourceId_);
        DARABONBA_PTR_TO_JSON(ClientFileResourceName, clientFileResourceName_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(Editable, editable_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientFileResourceId, clientFileResourceId_);
        DARABONBA_PTR_FROM_JSON(ClientFileResourceName, clientFileResourceName_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(Editable, editable_);
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
      virtual bool empty() const override { return this->clientFileResourceId_ == nullptr
        && this->clientFileResourceName_ == nullptr && this->clientName_ == nullptr && this->editable_ == nullptr; };
      // clientFileResourceId Field Functions 
      bool hasClientFileResourceId() const { return this->clientFileResourceId_ != nullptr;};
      void deleteClientFileResourceId() { this->clientFileResourceId_ = nullptr;};
      inline string getClientFileResourceId() const { DARABONBA_PTR_GET_DEFAULT(clientFileResourceId_, "") };
      inline Data& setClientFileResourceId(string clientFileResourceId) { DARABONBA_PTR_SET_VALUE(clientFileResourceId_, clientFileResourceId) };


      // clientFileResourceName Field Functions 
      bool hasClientFileResourceName() const { return this->clientFileResourceName_ != nullptr;};
      void deleteClientFileResourceName() { this->clientFileResourceName_ = nullptr;};
      inline string getClientFileResourceName() const { DARABONBA_PTR_GET_DEFAULT(clientFileResourceName_, "") };
      inline Data& setClientFileResourceName(string clientFileResourceName) { DARABONBA_PTR_SET_VALUE(clientFileResourceName_, clientFileResourceName) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline Data& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // editable Field Functions 
      bool hasEditable() const { return this->editable_ != nullptr;};
      void deleteEditable() { this->editable_ = nullptr;};
      inline bool getEditable() const { DARABONBA_PTR_GET_DEFAULT(editable_, false) };
      inline Data& setEditable(bool editable) { DARABONBA_PTR_SET_VALUE(editable_, editable) };


    protected:
      shared_ptr<string> clientFileResourceId_ {};
      shared_ptr<string> clientFileResourceName_ {};
      shared_ptr<string> clientName_ {};
      shared_ptr<bool> editable_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSparkLocalClientInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSparkLocalClientInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSparkLocalClientInfoResponseBody::Data>) };
    inline vector<GetSparkLocalClientInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSparkLocalClientInfoResponseBody::Data>) };
    inline GetSparkLocalClientInfoResponseBody& setData(const vector<GetSparkLocalClientInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkLocalClientInfoResponseBody& setData(vector<GetSparkLocalClientInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSparkLocalClientInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSparkLocalClientInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkLocalClientInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSparkLocalClientInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetSparkLocalClientInfoResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
