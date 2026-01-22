// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    QueryTagsResponseBody() = default ;
    QueryTagsResponseBody(const QueryTagsResponseBody &) = default ;
    QueryTagsResponseBody(QueryTagsResponseBody &&) = default ;
    QueryTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagsResponseBody() = default ;
    QueryTagsResponseBody& operator=(const QueryTagsResponseBody &) = default ;
    QueryTagsResponseBody& operator=(QueryTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagInfos& obj) { 
        DARABONBA_PTR_TO_JSON(TagInfo, tagInfo_);
      };
      friend void from_json(const Darabonba::Json& j, TagInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(TagInfo, tagInfo_);
      };
      TagInfos() = default ;
      TagInfos(const TagInfos &) = default ;
      TagInfos(TagInfos &&) = default ;
      TagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagInfos() = default ;
      TagInfos& operator=(const TagInfos &) = default ;
      TagInfos& operator=(TagInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagInfo& obj) { 
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagInfo() = default ;
        TagInfo(const TagInfo &) = default ;
        TagInfo(TagInfo &&) = default ;
        TagInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagInfo() = default ;
        TagInfo& operator=(const TagInfo &) = default ;
        TagInfo& operator=(TagInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagName_ == nullptr; };
        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagInfo& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->tagInfo_ == nullptr; };
      // tagInfo Field Functions 
      bool hasTagInfo() const { return this->tagInfo_ != nullptr;};
      void deleteTagInfo() { this->tagInfo_ = nullptr;};
      inline const vector<TagInfos::TagInfo> & getTagInfo() const { DARABONBA_PTR_GET_CONST(tagInfo_, vector<TagInfos::TagInfo>) };
      inline vector<TagInfos::TagInfo> getTagInfo() { DARABONBA_PTR_GET(tagInfo_, vector<TagInfos::TagInfo>) };
      inline TagInfos& setTagInfo(const vector<TagInfos::TagInfo> & tagInfo) { DARABONBA_PTR_SET_VALUE(tagInfo_, tagInfo) };
      inline TagInfos& setTagInfo(vector<TagInfos::TagInfo> && tagInfo) { DARABONBA_PTR_SET_RVALUE(tagInfo_, tagInfo) };


    protected:
      shared_ptr<vector<TagInfos::TagInfo>> tagInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tagInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const QueryTagsResponseBody::TagInfos & getTagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, QueryTagsResponseBody::TagInfos) };
    inline QueryTagsResponseBody::TagInfos getTagInfos() { DARABONBA_PTR_GET(tagInfos_, QueryTagsResponseBody::TagInfos) };
    inline QueryTagsResponseBody& setTagInfos(const QueryTagsResponseBody::TagInfos & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline QueryTagsResponseBody& setTagInfos(QueryTagsResponseBody::TagInfos && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryTagsResponseBody::TagInfos> tagInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
