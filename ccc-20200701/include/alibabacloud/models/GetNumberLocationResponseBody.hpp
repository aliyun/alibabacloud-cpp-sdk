// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNUMBERLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNUMBERLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetNumberLocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNumberLocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNumberLocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNumberLocationResponseBody() = default ;
    GetNumberLocationResponseBody(const GetNumberLocationResponseBody &) = default ;
    GetNumberLocationResponseBody(GetNumberLocationResponseBody &&) = default ;
    GetNumberLocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNumberLocationResponseBody() = default ;
    GetNumberLocationResponseBody& operator=(const GetNumberLocationResponseBody &) = default ;
    GetNumberLocationResponseBody& operator=(GetNumberLocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(Province, province_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
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
      virtual bool empty() const override { return this->city_ == nullptr
        && this->number_ == nullptr && this->province_ == nullptr; };
      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Data& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline Data& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Data& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    protected:
      shared_ptr<string> city_ {};
      shared_ptr<string> number_ {};
      shared_ptr<string> province_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetNumberLocationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNumberLocationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNumberLocationResponseBody::Data) };
    inline GetNumberLocationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNumberLocationResponseBody::Data) };
    inline GetNumberLocationResponseBody& setData(const GetNumberLocationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNumberLocationResponseBody& setData(GetNumberLocationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetNumberLocationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNumberLocationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNumberLocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetNumberLocationResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
