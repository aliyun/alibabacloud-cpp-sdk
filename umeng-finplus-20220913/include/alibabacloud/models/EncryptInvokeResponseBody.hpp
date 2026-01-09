// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTINVOKERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTINVOKERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class EncryptInvokeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptInvokeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptInvokeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EncryptInvokeResponseBody() = default ;
    EncryptInvokeResponseBody(const EncryptInvokeResponseBody &) = default ;
    EncryptInvokeResponseBody(EncryptInvokeResponseBody &&) = default ;
    EncryptInvokeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptInvokeResponseBody() = default ;
    EncryptInvokeResponseBody& operator=(const EncryptInvokeResponseBody &) = default ;
    EncryptInvokeResponseBody& operator=(EncryptInvokeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(encryptData, encryptData_);
        DARABONBA_PTR_TO_JSON(encryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(sign, sign_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(encryptData, encryptData_);
        DARABONBA_PTR_FROM_JSON(encryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(sign, sign_);
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
      virtual bool empty() const override { return this->encryptData_ == nullptr
        && this->encryptKey_ == nullptr && this->sign_ == nullptr; };
      // encryptData Field Functions 
      bool hasEncryptData() const { return this->encryptData_ != nullptr;};
      void deleteEncryptData() { this->encryptData_ = nullptr;};
      inline string getEncryptData() const { DARABONBA_PTR_GET_DEFAULT(encryptData_, "") };
      inline Data& setEncryptData(string encryptData) { DARABONBA_PTR_SET_VALUE(encryptData_, encryptData) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline Data& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // sign Field Functions 
      bool hasSign() const { return this->sign_ != nullptr;};
      void deleteSign() { this->sign_ = nullptr;};
      inline string getSign() const { DARABONBA_PTR_GET_DEFAULT(sign_, "") };
      inline Data& setSign(string sign) { DARABONBA_PTR_SET_VALUE(sign_, sign) };


    protected:
      shared_ptr<string> encryptData_ {};
      shared_ptr<string> encryptKey_ {};
      shared_ptr<string> sign_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EncryptInvokeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EncryptInvokeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EncryptInvokeResponseBody::Data) };
    inline EncryptInvokeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EncryptInvokeResponseBody::Data) };
    inline EncryptInvokeResponseBody& setData(const EncryptInvokeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EncryptInvokeResponseBody& setData(EncryptInvokeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline EncryptInvokeResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EncryptInvokeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EncryptInvokeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EncryptInvokeResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
