// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNetworkInterfaceResponseBodyContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkInterfaceResponseBody() = default ;
    GetNetworkInterfaceResponseBody(const GetNetworkInterfaceResponseBody &) = default ;
    GetNetworkInterfaceResponseBody(GetNetworkInterfaceResponseBody &&) = default ;
    GetNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkInterfaceResponseBody() = default ;
    GetNetworkInterfaceResponseBody& operator=(const GetNetworkInterfaceResponseBody &) = default ;
    GetNetworkInterfaceResponseBody& operator=(GetNetworkInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->code_ == nullptr && return this->content_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetNetworkInterfaceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetNetworkInterfaceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetNetworkInterfaceResponseBodyContent & content() const { DARABONBA_PTR_GET_CONST(content_, GetNetworkInterfaceResponseBodyContent) };
    inline GetNetworkInterfaceResponseBodyContent content() { DARABONBA_PTR_GET(content_, GetNetworkInterfaceResponseBodyContent) };
    inline GetNetworkInterfaceResponseBody& setContent(const GetNetworkInterfaceResponseBodyContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetNetworkInterfaceResponseBody& setContent(GetNetworkInterfaceResponseBodyContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetNetworkInterfaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The response status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The response data. (If a resource has dependent resources, the existing dependent resources are returned.)
    std::shared_ptr<GetNetworkInterfaceResponseBodyContent> content_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // Request ID of the current request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
