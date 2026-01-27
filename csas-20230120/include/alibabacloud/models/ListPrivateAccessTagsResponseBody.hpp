// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODY_HPP_
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
  class ListPrivateAccessTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListPrivateAccessTagsResponseBody() = default ;
    ListPrivateAccessTagsResponseBody(const ListPrivateAccessTagsResponseBody &) = default ;
    ListPrivateAccessTagsResponseBody(ListPrivateAccessTagsResponseBody &&) = default ;
    ListPrivateAccessTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsResponseBody() = default ;
    ListPrivateAccessTagsResponseBody& operator=(const ListPrivateAccessTagsResponseBody &) = default ;
    ListPrivateAccessTagsResponseBody& operator=(ListPrivateAccessTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagType, tagType_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
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
      virtual bool empty() const override { return this->applicationIds_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->policyIds_ == nullptr && this->tagId_ == nullptr
        && this->tagType_ == nullptr; };
      // applicationIds Field Functions 
      bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
      void deleteApplicationIds() { this->applicationIds_ = nullptr;};
      inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
      inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
      inline Tags& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
      inline Tags& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


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


      // policyIds Field Functions 
      bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
      void deletePolicyIds() { this->policyIds_ = nullptr;};
      inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
      inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
      inline Tags& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
      inline Tags& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


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
      // The IDs of the internal access applications.
      shared_ptr<vector<string>> applicationIds_ {};
      // The time when the internal access tag was created.
      shared_ptr<string> createTime_ {};
      // The description of the internal access tag.
      shared_ptr<string> description_ {};
      // The name of the internal access tag.
      shared_ptr<string> name_ {};
      // The IDs of the internal access policies.
      shared_ptr<vector<string>> policyIds_ {};
      // The ID of the internal access tag.
      shared_ptr<string> tagId_ {};
      // The type of the internal access tag. Valid values:
      // 
      // *   **Default**
      // *   **Custom**
      shared_ptr<string> tagType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tags_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPrivateAccessTagsResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPrivateAccessTagsResponseBody::Tags>) };
    inline vector<ListPrivateAccessTagsResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListPrivateAccessTagsResponseBody::Tags>) };
    inline ListPrivateAccessTagsResponseBody& setTags(const vector<ListPrivateAccessTagsResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrivateAccessTagsResponseBody& setTags(vector<ListPrivateAccessTagsResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListPrivateAccessTagsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The internal access tags.
    shared_ptr<vector<ListPrivateAccessTagsResponseBody::Tags>> tags_ {};
    // The total number of internal access tags.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
