// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApiDestinationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetApiDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApiDestinationResponseBody() = default ;
    GetApiDestinationResponseBody(const GetApiDestinationResponseBody &) = default ;
    GetApiDestinationResponseBody(GetApiDestinationResponseBody &&) = default ;
    GetApiDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiDestinationResponseBody() = default ;
    GetApiDestinationResponseBody& operator=(const GetApiDestinationResponseBody &) = default ;
    GetApiDestinationResponseBody& operator=(GetApiDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApiDestinationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApiDestinationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetApiDestinationResponseBodyData) };
    inline GetApiDestinationResponseBodyData data() { DARABONBA_PTR_GET(data_, GetApiDestinationResponseBodyData) };
    inline GetApiDestinationResponseBody& setData(const GetApiDestinationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApiDestinationResponseBody& setData(GetApiDestinationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApiDestinationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned response code. The value Success indicates that the request is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned data.
    std::shared_ptr<GetApiDestinationResponseBodyData> data_ = nullptr;
    // The returned message. If the request is successful, success is returned. If the request failed, an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
