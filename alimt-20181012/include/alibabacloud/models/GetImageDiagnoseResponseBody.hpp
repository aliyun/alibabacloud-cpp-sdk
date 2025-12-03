// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDIAGNOSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDIAGNOSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageDiagnoseResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetImageDiagnoseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageDiagnoseResponseBody() = default ;
    GetImageDiagnoseResponseBody(const GetImageDiagnoseResponseBody &) = default ;
    GetImageDiagnoseResponseBody(GetImageDiagnoseResponseBody &&) = default ;
    GetImageDiagnoseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDiagnoseResponseBody() = default ;
    GetImageDiagnoseResponseBody& operator=(const GetImageDiagnoseResponseBody &) = default ;
    GetImageDiagnoseResponseBody& operator=(GetImageDiagnoseResponseBody &&) = default ;
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
    inline GetImageDiagnoseResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetImageDiagnoseResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetImageDiagnoseResponseBodyData) };
    inline GetImageDiagnoseResponseBodyData data() { DARABONBA_PTR_GET(data_, GetImageDiagnoseResponseBodyData) };
    inline GetImageDiagnoseResponseBody& setData(const GetImageDiagnoseResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetImageDiagnoseResponseBody& setData(GetImageDiagnoseResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetImageDiagnoseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageDiagnoseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<GetImageDiagnoseResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
