// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UnAssignPrivateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssignPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssignPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnAssignPrivateIpAddressResponseBody() = default ;
    UnAssignPrivateIpAddressResponseBody(const UnAssignPrivateIpAddressResponseBody &) = default ;
    UnAssignPrivateIpAddressResponseBody(UnAssignPrivateIpAddressResponseBody &&) = default ;
    UnAssignPrivateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssignPrivateIpAddressResponseBody() = default ;
    UnAssignPrivateIpAddressResponseBody& operator=(const UnAssignPrivateIpAddressResponseBody &) = default ;
    UnAssignPrivateIpAddressResponseBody& operator=(UnAssignPrivateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(IpName, ipName_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(IpName, ipName_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ipName_ == nullptr
        && this->networkInterfaceId_ == nullptr; };
      // ipName Field Functions 
      bool hasIpName() const { return this->ipName_ != nullptr;};
      void deleteIpName() { this->ipName_ = nullptr;};
      inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
      inline Content& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline Content& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    protected:
      // IP unique identifier
      shared_ptr<string> ipName_ {};
      // Lingjun network interface controller ID
      shared_ptr<string> networkInterfaceId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UnAssignPrivateIpAddressResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UnAssignPrivateIpAddressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UnAssignPrivateIpAddressResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, UnAssignPrivateIpAddressResponseBody::Content) };
    inline UnAssignPrivateIpAddressResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, UnAssignPrivateIpAddressResponseBody::Content) };
    inline UnAssignPrivateIpAddressResponseBody& setContent(const UnAssignPrivateIpAddressResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UnAssignPrivateIpAddressResponseBody& setContent(UnAssignPrivateIpAddressResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UnAssignPrivateIpAddressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnAssignPrivateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<UnAssignPrivateIpAddressResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
