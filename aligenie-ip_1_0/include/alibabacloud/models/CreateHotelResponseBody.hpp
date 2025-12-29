// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class CreateHotelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotelResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Extentions, extentions_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotelResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Extentions, extentions_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    CreateHotelResponseBody() = default ;
    CreateHotelResponseBody(const CreateHotelResponseBody &) = default ;
    CreateHotelResponseBody(CreateHotelResponseBody &&) = default ;
    CreateHotelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotelResponseBody() = default ;
    CreateHotelResponseBody& operator=(const CreateHotelResponseBody &) = default ;
    CreateHotelResponseBody& operator=(CreateHotelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extentions_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // extentions Field Functions 
    bool hasExtentions() const { return this->extentions_ != nullptr;};
    void deleteExtentions() { this->extentions_ = nullptr;};
    inline     const Darabonba::Json & getExtentions() const { DARABONBA_GET(extentions_) };
    Darabonba::Json & getExtentions() { DARABONBA_GET(extentions_) };
    inline CreateHotelResponseBody& setExtentions(const Darabonba::Json & extentions) { DARABONBA_SET_VALUE(extentions_, extentions) };
    inline CreateHotelResponseBody& setExtentions(Darabonba::Json && extentions) { DARABONBA_SET_RVALUE(extentions_, extentions) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHotelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHotelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline CreateHotelResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateHotelResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    Darabonba::Json extentions_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
