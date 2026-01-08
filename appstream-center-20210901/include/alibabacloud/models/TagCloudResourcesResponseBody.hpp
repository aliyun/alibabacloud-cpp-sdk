// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TAGCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class TagCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedResources, failedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TagCloudResourcesResponseBody() = default ;
    TagCloudResourcesResponseBody(const TagCloudResourcesResponseBody &) = default ;
    TagCloudResourcesResponseBody(TagCloudResourcesResponseBody &&) = default ;
    TagCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TagCloudResourcesResponseBody() = default ;
    TagCloudResourcesResponseBody& operator=(const TagCloudResourcesResponseBody &) = default ;
    TagCloudResourcesResponseBody& operator=(TagCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedResources& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, FailedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      FailedResources() = default ;
      FailedResources(const FailedResources &) = default ;
      FailedResources(FailedResources &&) = default ;
      FailedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedResources() = default ;
      FailedResources& operator=(const FailedResources &) = default ;
      FailedResources& operator=(FailedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->scope_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline Tags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> scope_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->tags_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline FailedResources& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FailedResources& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline FailedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline FailedResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<FailedResources::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<FailedResources::Tags>) };
      inline vector<FailedResources::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<FailedResources::Tags>) };
      inline FailedResources& setTags(const vector<FailedResources::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline FailedResources& setTags(vector<FailedResources::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> resourceId_ {};
      // The type of the cloud resource.
      // 
      // Valid values:
      // 
      // *   CenterImageId: center image ID.
      // *   AppId: app ID.
      // *   WyId: Alibaba Cloud Workspace user ID.
      // *   AppInstanceGroupId: delivery group ID.
      // *   AliUid: tenant ID.
      shared_ptr<string> resourceType_ {};
      shared_ptr<vector<FailedResources::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->failedResources_ == nullptr
        && this->requestId_ == nullptr; };
    // failedResources Field Functions 
    bool hasFailedResources() const { return this->failedResources_ != nullptr;};
    void deleteFailedResources() { this->failedResources_ = nullptr;};
    inline const vector<TagCloudResourcesResponseBody::FailedResources> & getFailedResources() const { DARABONBA_PTR_GET_CONST(failedResources_, vector<TagCloudResourcesResponseBody::FailedResources>) };
    inline vector<TagCloudResourcesResponseBody::FailedResources> getFailedResources() { DARABONBA_PTR_GET(failedResources_, vector<TagCloudResourcesResponseBody::FailedResources>) };
    inline TagCloudResourcesResponseBody& setFailedResources(const vector<TagCloudResourcesResponseBody::FailedResources> & failedResources) { DARABONBA_PTR_SET_VALUE(failedResources_, failedResources) };
    inline TagCloudResourcesResponseBody& setFailedResources(vector<TagCloudResourcesResponseBody::FailedResources> && failedResources) { DARABONBA_PTR_SET_RVALUE(failedResources_, failedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TagCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The cloud resources on which the operation failed and the corresponding tags.
    shared_ptr<vector<TagCloudResourcesResponseBody::FailedResources>> failedResources_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
