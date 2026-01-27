// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessTagsForDynamicRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsForDynamicRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateAccessTagsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(const ListPrivateAccessTagsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(ListPrivateAccessTagsForDynamicRouteResponseBody &&) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsForDynamicRouteResponseBody() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody& operator=(const ListPrivateAccessTagsForDynamicRouteResponseBody &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBody& operator=(ListPrivateAccessTagsForDynamicRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DynamicRoutes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DynamicRoutes& obj) { 
        DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DynamicRoutes& obj) { 
        DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DynamicRoutes() = default ;
      DynamicRoutes(const DynamicRoutes &) = default ;
      DynamicRoutes(DynamicRoutes &&) = default ;
      DynamicRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DynamicRoutes() = default ;
      DynamicRoutes& operator=(const DynamicRoutes &) = default ;
      DynamicRoutes& operator=(DynamicRoutes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagType, tagType_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagType, tagType_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->tagId_ == nullptr && this->tagType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Tags& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Tags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagType Field Functions 
        bool hasTagType() const { return this->tagType_ != nullptr;};
        void deleteTagType() { this->tagType_ = nullptr;};
        inline string getTagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
        inline Tags& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> tagId_ {};
        shared_ptr<string> tagType_ {};
      };

      virtual bool empty() const override { return this->dynamicRouteId_ == nullptr
        && this->tags_ == nullptr; };
      // dynamicRouteId Field Functions 
      bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
      void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
      inline string getDynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
      inline DynamicRoutes& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DynamicRoutes::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DynamicRoutes::Tags>) };
      inline vector<DynamicRoutes::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DynamicRoutes::Tags>) };
      inline DynamicRoutes& setTags(const vector<DynamicRoutes::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DynamicRoutes& setTags(vector<DynamicRoutes::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> dynamicRouteId_ {};
      shared_ptr<vector<DynamicRoutes::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->dynamicRoutes_ == nullptr
        && this->requestId_ == nullptr; };
    // dynamicRoutes Field Functions 
    bool hasDynamicRoutes() const { return this->dynamicRoutes_ != nullptr;};
    void deleteDynamicRoutes() { this->dynamicRoutes_ = nullptr;};
    inline const vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes> & getDynamicRoutes() const { DARABONBA_PTR_GET_CONST(dynamicRoutes_, vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes>) };
    inline vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes> getDynamicRoutes() { DARABONBA_PTR_GET(dynamicRoutes_, vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes>) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setDynamicRoutes(const vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes> & dynamicRoutes) { DARABONBA_PTR_SET_VALUE(dynamicRoutes_, dynamicRoutes) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setDynamicRoutes(vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes> && dynamicRoutes) { DARABONBA_PTR_SET_RVALUE(dynamicRoutes_, dynamicRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessTagsForDynamicRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListPrivateAccessTagsForDynamicRouteResponseBody::DynamicRoutes>> dynamicRoutes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
