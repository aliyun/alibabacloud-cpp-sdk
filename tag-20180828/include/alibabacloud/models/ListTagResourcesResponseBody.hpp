// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody(ListTagResourcesResponseBody &&) = default ;
    ListTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody& operator=(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody& operator=(ListTagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagResources& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceARN, resourceARN_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, TagResources& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceARN, resourceARN_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      TagResources() = default ;
      TagResources(const TagResources &) = default ;
      TagResources(TagResources &&) = default ;
      TagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagResources() = default ;
      TagResources& operator=(const TagResources &) = default ;
      TagResources& operator=(TagResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Tags& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the tag. Valid values:
        // 
        // *   Custom
        // *   System
        shared_ptr<string> category_ {};
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->resourceARN_ == nullptr
        && this->tags_ == nullptr; };
      // resourceARN Field Functions 
      bool hasResourceARN() const { return this->resourceARN_ != nullptr;};
      void deleteResourceARN() { this->resourceARN_ = nullptr;};
      inline string getResourceARN() const { DARABONBA_PTR_GET_DEFAULT(resourceARN_, "") };
      inline TagResources& setResourceARN(string resourceARN) { DARABONBA_PTR_SET_VALUE(resourceARN_, resourceARN) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TagResources::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TagResources::Tags>) };
      inline vector<TagResources::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TagResources::Tags>) };
      inline TagResources& setTags(const vector<TagResources::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TagResources& setTags(vector<TagResources::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ARN of the resource.
      shared_ptr<string> resourceARN_ {};
      // The information of the tags.
      shared_ptr<vector<TagResources::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->tagResources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<ListTagResourcesResponseBody::TagResources> & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<ListTagResourcesResponseBody::TagResources>) };
    inline vector<ListTagResourcesResponseBody::TagResources> getTagResources() { DARABONBA_PTR_GET(tagResources_, vector<ListTagResourcesResponseBody::TagResources>) };
    inline ListTagResourcesResponseBody& setTagResources(const vector<ListTagResourcesResponseBody::TagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBody& setTagResources(vector<ListTagResourcesResponseBody::TagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // Indicates whether the `next query` is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the `next query` is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the `token` used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information of the tags that are added to the resources.
    shared_ptr<vector<ListTagResourcesResponseBody::TagResources>> tagResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
