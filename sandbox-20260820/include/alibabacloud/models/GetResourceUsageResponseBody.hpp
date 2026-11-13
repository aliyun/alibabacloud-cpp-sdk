// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class GetResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceUsage, resourceUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceUsage, resourceUsage_);
    };
    GetResourceUsageResponseBody() = default ;
    GetResourceUsageResponseBody(const GetResourceUsageResponseBody &) = default ;
    GetResourceUsageResponseBody(GetResourceUsageResponseBody &&) = default ;
    GetResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceUsageResponseBody() = default ;
    GetResourceUsageResponseBody& operator=(const GetResourceUsageResponseBody &) = default ;
    GetResourceUsageResponseBody& operator=(GetResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resourceUsage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourceUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourceUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceUsage Field Functions 
    bool hasResourceUsage() const { return this->resourceUsage_ != nullptr;};
    void deleteResourceUsage() { this->resourceUsage_ = nullptr;};
    inline const ResourceUsage & getResourceUsage() const { DARABONBA_PTR_GET_CONST(resourceUsage_, ResourceUsage) };
    inline ResourceUsage getResourceUsage() { DARABONBA_PTR_GET(resourceUsage_, ResourceUsage) };
    inline GetResourceUsageResponseBody& setResourceUsage(const ResourceUsage & resourceUsage) { DARABONBA_PTR_SET_VALUE(resourceUsage_, resourceUsage) };
    inline GetResourceUsageResponseBody& setResourceUsage(ResourceUsage && resourceUsage) { DARABONBA_PTR_SET_RVALUE(resourceUsage_, resourceUsage) };


  protected:
    // The response code. A value of 200 indicates success. Other values indicate specific error codes.
    shared_ptr<string> code_ {};
    // The message that describes the result of the request.
    shared_ptr<string> message_ {};
    // The unique identifier of the request.
    shared_ptr<string> requestId_ {};
    // The usage results for the query interval and each group.
    shared_ptr<ResourceUsage> resourceUsage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
