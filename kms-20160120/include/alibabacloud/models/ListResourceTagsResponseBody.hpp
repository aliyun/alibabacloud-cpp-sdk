// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListResourceTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody(ListResourceTagsResponseBody &&) = default ;
    ListResourceTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody& operator=(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody& operator=(ListResourceTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(KeyId, keyId_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keyId_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // keyId Field Functions 
        bool hasKeyId() const { return this->keyId_ != nullptr;};
        void deleteKeyId() { this->keyId_ = nullptr;};
        inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
        inline Tag& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> keyId_ {};
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tags_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const ListResourceTagsResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ListResourceTagsResponseBody::Tags) };
    inline ListResourceTagsResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, ListResourceTagsResponseBody::Tags) };
    inline ListResourceTagsResponseBody& setTags(const ListResourceTagsResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceTagsResponseBody& setTags(ListResourceTagsResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListResourceTagsResponseBody::Tags> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
