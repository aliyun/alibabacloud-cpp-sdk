// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceDetailResponseBody() = default ;
    GetServiceDetailResponseBody(const GetServiceDetailResponseBody &) = default ;
    GetServiceDetailResponseBody(GetServiceDetailResponseBody &&) = default ;
    GetServiceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceDetailResponseBody() = default ;
    GetServiceDetailResponseBody& operator=(const GetServiceDetailResponseBody &) = default ;
    GetServiceDetailResponseBody& operator=(GetServiceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetServiceDetailResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceDetailResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetServiceDetailResponseBodyData) };
    inline GetServiceDetailResponseBodyData data() { DARABONBA_PTR_GET(data_, GetServiceDetailResponseBodyData) };
    inline GetServiceDetailResponseBody& setData(const GetServiceDetailResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceDetailResponseBody& setData(GetServiceDetailResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data structure.
    std::shared_ptr<GetServiceDetailResponseBodyData> data_ = nullptr;
    // The message returned for the request.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
