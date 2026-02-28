// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetUploadAudioDataParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadAudioDataParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadAudioDataParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUploadAudioDataParamsResponseBody() = default ;
    GetUploadAudioDataParamsResponseBody(const GetUploadAudioDataParamsResponseBody &) = default ;
    GetUploadAudioDataParamsResponseBody(GetUploadAudioDataParamsResponseBody &&) = default ;
    GetUploadAudioDataParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadAudioDataParamsResponseBody() = default ;
    GetUploadAudioDataParamsResponseBody& operator=(const GetUploadAudioDataParamsResponseBody &) = default ;
    GetUploadAudioDataParamsResponseBody& operator=(GetUploadAudioDataParamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ParamsStr, paramsStr_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamsStr, paramsStr_);
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
      virtual bool empty() const override { return this->paramsStr_ == nullptr; };
      // paramsStr Field Functions 
      bool hasParamsStr() const { return this->paramsStr_ != nullptr;};
      void deleteParamsStr() { this->paramsStr_ = nullptr;};
      inline string getParamsStr() const { DARABONBA_PTR_GET_DEFAULT(paramsStr_, "") };
      inline Data& setParamsStr(string paramsStr) { DARABONBA_PTR_SET_VALUE(paramsStr_, paramsStr) };


    protected:
      shared_ptr<string> paramsStr_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUploadAudioDataParamsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUploadAudioDataParamsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUploadAudioDataParamsResponseBody::Data) };
    inline GetUploadAudioDataParamsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUploadAudioDataParamsResponseBody::Data) };
    inline GetUploadAudioDataParamsResponseBody& setData(const GetUploadAudioDataParamsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUploadAudioDataParamsResponseBody& setData(GetUploadAudioDataParamsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUploadAudioDataParamsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUploadAudioDataParamsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUploadAudioDataParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetUploadAudioDataParamsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
