// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranslateImageBatchResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTranslateImageBatchResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranslateImageBatchResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranslateImageBatchResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTranslateImageBatchResultResponseBody() = default ;
    GetTranslateImageBatchResultResponseBody(const GetTranslateImageBatchResultResponseBody &) = default ;
    GetTranslateImageBatchResultResponseBody(GetTranslateImageBatchResultResponseBody &&) = default ;
    GetTranslateImageBatchResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranslateImageBatchResultResponseBody() = default ;
    GetTranslateImageBatchResultResponseBody& operator=(const GetTranslateImageBatchResultResponseBody &) = default ;
    GetTranslateImageBatchResultResponseBody& operator=(GetTranslateImageBatchResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTranslateImageBatchResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTranslateImageBatchResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetTranslateImageBatchResultResponseBodyData) };
    inline GetTranslateImageBatchResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetTranslateImageBatchResultResponseBodyData) };
    inline GetTranslateImageBatchResultResponseBody& setData(const GetTranslateImageBatchResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTranslateImageBatchResultResponseBody& setData(GetTranslateImageBatchResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTranslateImageBatchResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTranslateImageBatchResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<GetTranslateImageBatchResultResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
