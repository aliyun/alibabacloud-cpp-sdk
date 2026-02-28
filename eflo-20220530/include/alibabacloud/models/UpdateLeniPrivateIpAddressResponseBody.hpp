// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELENIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELENIPRIVATEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateLeniPrivateIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLeniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLeniPrivateIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLeniPrivateIpAddressResponseBody() = default ;
    UpdateLeniPrivateIpAddressResponseBody(const UpdateLeniPrivateIpAddressResponseBody &) = default ;
    UpdateLeniPrivateIpAddressResponseBody(UpdateLeniPrivateIpAddressResponseBody &&) = default ;
    UpdateLeniPrivateIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLeniPrivateIpAddressResponseBody() = default ;
    UpdateLeniPrivateIpAddressResponseBody& operator=(const UpdateLeniPrivateIpAddressResponseBody &) = default ;
    UpdateLeniPrivateIpAddressResponseBody& operator=(UpdateLeniPrivateIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(IpName, ipName_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(IpName, ipName_);
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
      virtual bool empty() const override { return this->elasticNetworkInterfaceId_ == nullptr
        && this->ipName_ == nullptr; };
      // elasticNetworkInterfaceId Field Functions 
      bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
      void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
      inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
      inline Content& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


      // ipName Field Functions 
      bool hasIpName() const { return this->ipName_ != nullptr;};
      void deleteIpName() { this->ipName_ = nullptr;};
      inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
      inline Content& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    protected:
      // Lingjun Elastic Network Interface ID.
      shared_ptr<string> elasticNetworkInterfaceId_ {};
      // Lingjun Elastic Network Interface secondary private IP unique identifier.
      shared_ptr<string> ipName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UpdateLeniPrivateIpAddressResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateLeniPrivateIpAddressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UpdateLeniPrivateIpAddressResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, UpdateLeniPrivateIpAddressResponseBody::Content) };
    inline UpdateLeniPrivateIpAddressResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, UpdateLeniPrivateIpAddressResponseBody::Content) };
    inline UpdateLeniPrivateIpAddressResponseBody& setContent(const UpdateLeniPrivateIpAddressResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UpdateLeniPrivateIpAddressResponseBody& setContent(UpdateLeniPrivateIpAddressResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateLeniPrivateIpAddressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLeniPrivateIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<UpdateLeniPrivateIpAddressResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
