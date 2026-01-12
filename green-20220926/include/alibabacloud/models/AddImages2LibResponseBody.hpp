// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGES2LIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGES2LIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddImages2LibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImages2LibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddImages2LibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddImages2LibResponseBody() = default ;
    AddImages2LibResponseBody(const AddImages2LibResponseBody &) = default ;
    AddImages2LibResponseBody(AddImages2LibResponseBody &&) = default ;
    AddImages2LibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImages2LibResponseBody() = default ;
    AddImages2LibResponseBody& operator=(const AddImages2LibResponseBody &) = default ;
    AddImages2LibResponseBody& operator=(AddImages2LibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImgId, imgId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImgId, imgId_);
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
      virtual bool empty() const override { return this->imgId_ == nullptr; };
      // imgId Field Functions 
      bool hasImgId() const { return this->imgId_ != nullptr;};
      void deleteImgId() { this->imgId_ = nullptr;};
      inline string getImgId() const { DARABONBA_PTR_GET_DEFAULT(imgId_, "") };
      inline Data& setImgId(string imgId) { DARABONBA_PTR_SET_VALUE(imgId_, imgId) };


    protected:
      // The id of the uploaded image.
      shared_ptr<string> imgId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AddImages2LibResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddImages2LibResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddImages2LibResponseBody::Data) };
    inline AddImages2LibResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddImages2LibResponseBody::Data) };
    inline AddImages2LibResponseBody& setData(const AddImages2LibResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddImages2LibResponseBody& setData(AddImages2LibResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline AddImages2LibResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AddImages2LibResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddImages2LibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddImages2LibResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<AddImages2LibResponseBody::Data> data_ {};
    // HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
