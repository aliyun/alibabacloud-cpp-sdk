// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODY_HPP_
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
  class ListTagsForPrivateAccessApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTagsForPrivateAccessApplicationResponseBody() = default ;
    ListTagsForPrivateAccessApplicationResponseBody(const ListTagsForPrivateAccessApplicationResponseBody &) = default ;
    ListTagsForPrivateAccessApplicationResponseBody(ListTagsForPrivateAccessApplicationResponseBody &&) = default ;
    ListTagsForPrivateAccessApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessApplicationResponseBody() = default ;
    ListTagsForPrivateAccessApplicationResponseBody& operator=(const ListTagsForPrivateAccessApplicationResponseBody &) = default ;
    ListTagsForPrivateAccessApplicationResponseBody& operator=(ListTagsForPrivateAccessApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
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

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->tags_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Applications::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Applications::Tags>) };
      inline vector<Applications::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Applications::Tags>) };
      inline Applications& setTags(const vector<Applications::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Applications& setTags(vector<Applications::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<vector<Applications::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListTagsForPrivateAccessApplicationResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListTagsForPrivateAccessApplicationResponseBody::Applications>) };
    inline vector<ListTagsForPrivateAccessApplicationResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListTagsForPrivateAccessApplicationResponseBody::Applications>) };
    inline ListTagsForPrivateAccessApplicationResponseBody& setApplications(const vector<ListTagsForPrivateAccessApplicationResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListTagsForPrivateAccessApplicationResponseBody& setApplications(vector<ListTagsForPrivateAccessApplicationResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsForPrivateAccessApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListTagsForPrivateAccessApplicationResponseBody::Applications>> applications_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
