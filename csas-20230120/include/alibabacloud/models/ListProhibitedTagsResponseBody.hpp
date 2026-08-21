// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROHIBITEDTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROHIBITEDTAGSRESPONSEBODY_HPP_
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
  class ListProhibitedTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProhibitedTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListProhibitedTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListProhibitedTagsResponseBody() = default ;
    ListProhibitedTagsResponseBody(const ListProhibitedTagsResponseBody &) = default ;
    ListProhibitedTagsResponseBody(ListProhibitedTagsResponseBody &&) = default ;
    ListProhibitedTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProhibitedTagsResponseBody() = default ;
    ListProhibitedTagsResponseBody& operator=(const ListProhibitedTagsResponseBody &) = default ;
    ListProhibitedTagsResponseBody& operator=(ListProhibitedTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
        DARABONBA_PTR_TO_JSON(SoftwareIds, softwareIds_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
        DARABONBA_PTR_FROM_JSON(SoftwareIds, softwareIds_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
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
        && this->description_ == nullptr && this->isDefault_ == nullptr && this->name_ == nullptr && this->policyIds_ == nullptr && this->softwareIds_ == nullptr
        && this->tagId_ == nullptr; };
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


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Tags& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


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


      // softwareIds Field Functions 
      bool hasSoftwareIds() const { return this->softwareIds_ != nullptr;};
      void deleteSoftwareIds() { this->softwareIds_ = nullptr;};
      inline const vector<string> & getSoftwareIds() const { DARABONBA_PTR_GET_CONST(softwareIds_, vector<string>) };
      inline vector<string> getSoftwareIds() { DARABONBA_PTR_GET(softwareIds_, vector<string>) };
      inline Tags& setSoftwareIds(const vector<string> & softwareIds) { DARABONBA_PTR_SET_VALUE(softwareIds_, softwareIds) };
      inline Tags& setSoftwareIds(vector<string> && softwareIds) { DARABONBA_PTR_SET_RVALUE(softwareIds_, softwareIds) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // The time when the prohibited software tag was created, in the yyyy-MM-dd HH:mm:ss format. The time is in the UTC+8 time zone.
      shared_ptr<string> createTime_ {};
      // The description of the prohibited software tag.
      shared_ptr<string> description_ {};
      // Indicates whether the tag is a system built-in device tag. Valid values:
      // - **true**: A system built-in device tag.
      // - **false**: A user-defined device tag.
      shared_ptr<bool> isDefault_ {};
      // The name of the prohibited software tag.
      shared_ptr<string> name_ {};
      // The collection of software prohibition policy IDs that reference the tag.
      shared_ptr<vector<string>> policyIds_ {};
      // The collection of prohibited software IDs included in the tag.
      shared_ptr<vector<string>> softwareIds_ {};
      // The ID of the prohibited software tag.
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tags_ == nullptr && this->totalNum_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProhibitedTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListProhibitedTagsResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListProhibitedTagsResponseBody::Tags>) };
    inline vector<ListProhibitedTagsResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListProhibitedTagsResponseBody::Tags>) };
    inline ListProhibitedTagsResponseBody& setTags(const vector<ListProhibitedTagsResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListProhibitedTagsResponseBody& setTags(vector<ListProhibitedTagsResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline ListProhibitedTagsResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The list of prohibited software tags.
    shared_ptr<vector<ListProhibitedTagsResponseBody::Tags>> tags_ {};
    // The total number of prohibited software tags.
    shared_ptr<int64_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
