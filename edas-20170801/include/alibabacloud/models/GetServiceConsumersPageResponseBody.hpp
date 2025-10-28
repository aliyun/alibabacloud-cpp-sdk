// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceConsumersPageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceConsumersPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConsumersPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConsumersPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceConsumersPageResponseBody() = default ;
    GetServiceConsumersPageResponseBody(const GetServiceConsumersPageResponseBody &) = default ;
    GetServiceConsumersPageResponseBody(GetServiceConsumersPageResponseBody &&) = default ;
    GetServiceConsumersPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConsumersPageResponseBody() = default ;
    GetServiceConsumersPageResponseBody& operator=(const GetServiceConsumersPageResponseBody &) = default ;
    GetServiceConsumersPageResponseBody& operator=(GetServiceConsumersPageResponseBody &&) = default ;
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
    inline GetServiceConsumersPageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceConsumersPageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetServiceConsumersPageResponseBodyData) };
    inline GetServiceConsumersPageResponseBodyData data() { DARABONBA_PTR_GET(data_, GetServiceConsumersPageResponseBodyData) };
    inline GetServiceConsumersPageResponseBody& setData(const GetServiceConsumersPageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceConsumersPageResponseBody& setData(GetServiceConsumersPageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceConsumersPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceConsumersPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data that is returned.
    std::shared_ptr<GetServiceConsumersPageResponseBodyData> data_ = nullptr;
    // The message that is returned for the request.
    std::shared_ptr<string> message_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
