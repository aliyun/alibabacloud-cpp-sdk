// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCENCDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCENCDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class QueryInstanceNcdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceNcdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceNcdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryInstanceNcdResponseBody() = default ;
    QueryInstanceNcdResponseBody(const QueryInstanceNcdResponseBody &) = default ;
    QueryInstanceNcdResponseBody(QueryInstanceNcdResponseBody &&) = default ;
    QueryInstanceNcdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceNcdResponseBody() = default ;
    QueryInstanceNcdResponseBody& operator=(const QueryInstanceNcdResponseBody &) = default ;
    QueryInstanceNcdResponseBody& operator=(QueryInstanceNcdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId1, instanceId1_);
        DARABONBA_PTR_TO_JSON(InstanceId2, instanceId2_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Ncd, ncd_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId1, instanceId1_);
        DARABONBA_PTR_FROM_JSON(InstanceId2, instanceId2_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ncd, ncd_);
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
      virtual bool empty() const override { return this->instanceId1_ == nullptr
        && this->instanceId2_ == nullptr && this->instanceType_ == nullptr && this->ncd_ == nullptr; };
      // instanceId1 Field Functions 
      bool hasInstanceId1() const { return this->instanceId1_ != nullptr;};
      void deleteInstanceId1() { this->instanceId1_ = nullptr;};
      inline string getInstanceId1() const { DARABONBA_PTR_GET_DEFAULT(instanceId1_, "") };
      inline Content& setInstanceId1(string instanceId1) { DARABONBA_PTR_SET_VALUE(instanceId1_, instanceId1) };


      // instanceId2 Field Functions 
      bool hasInstanceId2() const { return this->instanceId2_ != nullptr;};
      void deleteInstanceId2() { this->instanceId2_ = nullptr;};
      inline string getInstanceId2() const { DARABONBA_PTR_GET_DEFAULT(instanceId2_, "") };
      inline Content& setInstanceId2(string instanceId2) { DARABONBA_PTR_SET_VALUE(instanceId2_, instanceId2) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Content& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ncd Field Functions 
      bool hasNcd() const { return this->ncd_ != nullptr;};
      void deleteNcd() { this->ncd_ = nullptr;};
      inline int32_t getNcd() const { DARABONBA_PTR_GET_DEFAULT(ncd_, 0) };
      inline Content& setNcd(int32_t ncd) { DARABONBA_PTR_SET_VALUE(ncd_, ncd) };


    protected:
      // Instance 1ID
      shared_ptr<string> instanceId1_ {};
      // Instance 2ID
      shared_ptr<string> instanceId2_ {};
      // Instance Type
      // 
      // Valid value:
      // 
      // *   node: Lingjun node.
      // *   lni: lingjun network interface controller.
      shared_ptr<string> instanceType_ {};
      // network communication distance between instances
      shared_ptr<int32_t> ncd_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryInstanceNcdResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryInstanceNcdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const QueryInstanceNcdResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, QueryInstanceNcdResponseBody::Content) };
    inline QueryInstanceNcdResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, QueryInstanceNcdResponseBody::Content) };
    inline QueryInstanceNcdResponseBody& setContent(const QueryInstanceNcdResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline QueryInstanceNcdResponseBody& setContent(QueryInstanceNcdResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInstanceNcdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInstanceNcdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<QueryInstanceNcdResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
