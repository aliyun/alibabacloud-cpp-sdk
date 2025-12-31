// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagResources& obj) { 
          DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
        };
        friend void from_json(const Darabonba::Json& j, TagResources& obj) { 
          DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
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
        class TagResourcesItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagResourcesItem& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, TagResourcesItem& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          TagResourcesItem() = default ;
          TagResourcesItem(const TagResourcesItem &) = default ;
          TagResourcesItem(TagResourcesItem &&) = default ;
          TagResourcesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagResourcesItem() = default ;
          TagResourcesItem& operator=(const TagResourcesItem &) = default ;
          TagResourcesItem& operator=(TagResourcesItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline TagResourcesItem& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline TagResourcesItem& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline TagResourcesItem& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline TagResourcesItem& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          shared_ptr<string> resourceId_ {};
          shared_ptr<string> resourceType_ {};
          shared_ptr<string> tagKey_ {};
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->tagResources_ == nullptr; };
        // tagResources Field Functions 
        bool hasTagResources() const { return this->tagResources_ != nullptr;};
        void deleteTagResources() { this->tagResources_ = nullptr;};
        inline const vector<TagResources::TagResourcesItem> & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<TagResources::TagResourcesItem>) };
        inline vector<TagResources::TagResourcesItem> getTagResources() { DARABONBA_PTR_GET(tagResources_, vector<TagResources::TagResourcesItem>) };
        inline TagResources& setTagResources(const vector<TagResources::TagResourcesItem> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
        inline TagResources& setTagResources(vector<TagResources::TagResourcesItem> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


      protected:
        shared_ptr<vector<TagResources::TagResourcesItem>> tagResources_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->tagResources_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // tagResources Field Functions 
      bool hasTagResources() const { return this->tagResources_ != nullptr;};
      void deleteTagResources() { this->tagResources_ = nullptr;};
      inline const Data::TagResources & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, Data::TagResources) };
      inline Data::TagResources getTagResources() { DARABONBA_PTR_GET(tagResources_, Data::TagResources) };
      inline Data& setTagResources(const Data::TagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
      inline Data& setTagResources(Data::TagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


    protected:
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<Data::TagResources> tagResources_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTagResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTagResourcesResponseBody::Data) };
    inline ListTagResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTagResourcesResponseBody::Data) };
    inline ListTagResourcesResponseBody& setData(const ListTagResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTagResourcesResponseBody& setData(ListTagResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListTagResourcesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
