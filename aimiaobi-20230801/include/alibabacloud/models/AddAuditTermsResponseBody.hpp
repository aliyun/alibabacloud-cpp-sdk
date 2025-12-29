// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAUDITTERMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDAUDITTERMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddAuditTermsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAuditTermsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DataV1, dataV1_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddAuditTermsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DataV1, dataV1_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddAuditTermsResponseBody() = default ;
    AddAuditTermsResponseBody(const AddAuditTermsResponseBody &) = default ;
    AddAuditTermsResponseBody(AddAuditTermsResponseBody &&) = default ;
    AddAuditTermsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAuditTermsResponseBody() = default ;
    AddAuditTermsResponseBody& operator=(const AddAuditTermsResponseBody &) = default ;
    AddAuditTermsResponseBody& operator=(AddAuditTermsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataV1 : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataV1& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, DataV1& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      DataV1() = default ;
      DataV1(const DataV1 &) = default ;
      DataV1(DataV1 &&) = default ;
      DataV1(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataV1() = default ;
      DataV1& operator=(const DataV1 &) = default ;
      DataV1& operator=(DataV1 &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataV1& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dataV1_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddAuditTermsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline bool getData() const { DARABONBA_PTR_GET_DEFAULT(data_, false) };
    inline AddAuditTermsResponseBody& setData(bool data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // dataV1 Field Functions 
    bool hasDataV1() const { return this->dataV1_ != nullptr;};
    void deleteDataV1() { this->dataV1_ = nullptr;};
    inline const AddAuditTermsResponseBody::DataV1 & getDataV1() const { DARABONBA_PTR_GET_CONST(dataV1_, AddAuditTermsResponseBody::DataV1) };
    inline AddAuditTermsResponseBody::DataV1 getDataV1() { DARABONBA_PTR_GET(dataV1_, AddAuditTermsResponseBody::DataV1) };
    inline AddAuditTermsResponseBody& setDataV1(const AddAuditTermsResponseBody::DataV1 & dataV1) { DARABONBA_PTR_SET_VALUE(dataV1_, dataV1) };
    inline AddAuditTermsResponseBody& setDataV1(AddAuditTermsResponseBody::DataV1 && dataV1) { DARABONBA_PTR_SET_RVALUE(dataV1_, dataV1) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddAuditTermsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddAuditTermsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAuditTermsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddAuditTermsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<bool> data_ {};
    shared_ptr<AddAuditTermsResponseBody::DataV1> dataV1_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
