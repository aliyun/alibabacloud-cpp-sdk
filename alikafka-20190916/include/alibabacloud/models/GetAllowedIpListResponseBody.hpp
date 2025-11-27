// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLOWEDIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAllowedIpListResponseBodyAllowedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetAllowedIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllowedIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedList, allowedList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllowedIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedList, allowedList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAllowedIpListResponseBody() = default ;
    GetAllowedIpListResponseBody(const GetAllowedIpListResponseBody &) = default ;
    GetAllowedIpListResponseBody(GetAllowedIpListResponseBody &&) = default ;
    GetAllowedIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllowedIpListResponseBody() = default ;
    GetAllowedIpListResponseBody& operator=(const GetAllowedIpListResponseBody &) = default ;
    GetAllowedIpListResponseBody& operator=(GetAllowedIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // allowedList Field Functions 
    bool hasAllowedList() const { return this->allowedList_ != nullptr;};
    void deleteAllowedList() { this->allowedList_ = nullptr;};
    inline const GetAllowedIpListResponseBodyAllowedList & allowedList() const { DARABONBA_PTR_GET_CONST(allowedList_, GetAllowedIpListResponseBodyAllowedList) };
    inline GetAllowedIpListResponseBodyAllowedList allowedList() { DARABONBA_PTR_GET(allowedList_, GetAllowedIpListResponseBodyAllowedList) };
    inline GetAllowedIpListResponseBody& setAllowedList(const GetAllowedIpListResponseBodyAllowedList & allowedList) { DARABONBA_PTR_SET_VALUE(allowedList_, allowedList) };
    inline GetAllowedIpListResponseBody& setAllowedList(GetAllowedIpListResponseBodyAllowedList && allowedList) { DARABONBA_PTR_SET_RVALUE(allowedList_, allowedList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAllowedIpListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAllowedIpListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllowedIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAllowedIpListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The IP address whitelist.
    std::shared_ptr<GetAllowedIpListResponseBodyAllowedList> allowedList_ = nullptr;
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
