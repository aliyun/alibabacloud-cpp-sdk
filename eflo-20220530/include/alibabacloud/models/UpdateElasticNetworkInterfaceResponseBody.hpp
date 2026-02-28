// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEELASTICNETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEELASTICNETWORKINTERFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UpdateElasticNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateElasticNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateElasticNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateElasticNetworkInterfaceResponseBody() = default ;
    UpdateElasticNetworkInterfaceResponseBody(const UpdateElasticNetworkInterfaceResponseBody &) = default ;
    UpdateElasticNetworkInterfaceResponseBody(UpdateElasticNetworkInterfaceResponseBody &&) = default ;
    UpdateElasticNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateElasticNetworkInterfaceResponseBody() = default ;
    UpdateElasticNetworkInterfaceResponseBody& operator=(const UpdateElasticNetworkInterfaceResponseBody &) = default ;
    UpdateElasticNetworkInterfaceResponseBody& operator=(UpdateElasticNetworkInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
        && this->nodeId_ == nullptr; };
      // elasticNetworkInterfaceId Field Functions 
      bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
      void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
      inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
      inline Content& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Content& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      // Lingjun Elastic Network Interface ID
      shared_ptr<string> elasticNetworkInterfaceId_ {};
      // Lingjun Node ID
      shared_ptr<string> nodeId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UpdateElasticNetworkInterfaceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateElasticNetworkInterfaceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UpdateElasticNetworkInterfaceResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, UpdateElasticNetworkInterfaceResponseBody::Content) };
    inline UpdateElasticNetworkInterfaceResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, UpdateElasticNetworkInterfaceResponseBody::Content) };
    inline UpdateElasticNetworkInterfaceResponseBody& setContent(const UpdateElasticNetworkInterfaceResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UpdateElasticNetworkInterfaceResponseBody& setContent(UpdateElasticNetworkInterfaceResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateElasticNetworkInterfaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateElasticNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<UpdateElasticNetworkInterfaceResponseBody::Content> content_ {};
    // The return message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
