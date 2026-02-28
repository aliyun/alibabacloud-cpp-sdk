// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESBYNCDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListInstancesByNcdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesByNcdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesByNcdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancesByNcdResponseBody() = default ;
    ListInstancesByNcdResponseBody(const ListInstancesByNcdResponseBody &) = default ;
    ListInstancesByNcdResponseBody(ListInstancesByNcdResponseBody &&) = default ;
    ListInstancesByNcdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesByNcdResponseBody() = default ;
    ListInstancesByNcdResponseBody& operator=(const ListInstancesByNcdResponseBody &) = default ;
    ListInstancesByNcdResponseBody& operator=(ListInstancesByNcdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(MaxNcd, maxNcd_);
        DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(MaxNcd, maxNcd_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
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
      class InstanceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Ncd, ncd_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Ncd, ncd_);
        };
        InstanceInfos() = default ;
        InstanceInfos(const InstanceInfos &) = default ;
        InstanceInfos(InstanceInfos &&) = default ;
        InstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceInfos() = default ;
        InstanceInfos& operator=(const InstanceInfos &) = default ;
        InstanceInfos& operator=(InstanceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ncd_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ncd Field Functions 
        bool hasNcd() const { return this->ncd_ != nullptr;};
        void deleteNcd() { this->ncd_ = nullptr;};
        inline int32_t getNcd() const { DARABONBA_PTR_GET_DEFAULT(ncd_, 0) };
        inline InstanceInfos& setNcd(int32_t ncd) { DARABONBA_PTR_SET_VALUE(ncd_, ncd) };


      protected:
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // network communication distance
        shared_ptr<int32_t> ncd_ {};
      };

      virtual bool empty() const override { return this->instanceInfos_ == nullptr
        && this->instanceType_ == nullptr && this->maxNcd_ == nullptr && this->sourceInstanceId_ == nullptr; };
      // instanceInfos Field Functions 
      bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
      void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
      inline const vector<Content::InstanceInfos> & getInstanceInfos() const { DARABONBA_PTR_GET_CONST(instanceInfos_, vector<Content::InstanceInfos>) };
      inline vector<Content::InstanceInfos> getInstanceInfos() { DARABONBA_PTR_GET(instanceInfos_, vector<Content::InstanceInfos>) };
      inline Content& setInstanceInfos(const vector<Content::InstanceInfos> & instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };
      inline Content& setInstanceInfos(vector<Content::InstanceInfos> && instanceInfos) { DARABONBA_PTR_SET_RVALUE(instanceInfos_, instanceInfos) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Content& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // maxNcd Field Functions 
      bool hasMaxNcd() const { return this->maxNcd_ != nullptr;};
      void deleteMaxNcd() { this->maxNcd_ = nullptr;};
      inline int32_t getMaxNcd() const { DARABONBA_PTR_GET_DEFAULT(maxNcd_, 0) };
      inline Content& setMaxNcd(int32_t maxNcd) { DARABONBA_PTR_SET_VALUE(maxNcd_, maxNcd) };


      // sourceInstanceId Field Functions 
      bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
      void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
      inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
      inline Content& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    protected:
      // A collection of instances whose network communication distance from the source instance ID does not exceed maxNcd
      shared_ptr<vector<Content::InstanceInfos>> instanceInfos_ {};
      // Instance Type
      // 
      // Valid value:
      // 
      // *   node: Lingjun node.
      // *   lni: lingjun network interface controller.
      shared_ptr<string> instanceType_ {};
      // Maximum communication distance between nodes
      shared_ptr<int32_t> maxNcd_ {};
      // The ID of the source instance.
      shared_ptr<string> sourceInstanceId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListInstancesByNcdResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListInstancesByNcdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListInstancesByNcdResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListInstancesByNcdResponseBody::Content) };
    inline ListInstancesByNcdResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListInstancesByNcdResponseBody::Content) };
    inline ListInstancesByNcdResponseBody& setContent(const ListInstancesByNcdResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListInstancesByNcdResponseBody& setContent(ListInstancesByNcdResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesByNcdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesByNcdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListInstancesByNcdResponseBody::Content> content_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
