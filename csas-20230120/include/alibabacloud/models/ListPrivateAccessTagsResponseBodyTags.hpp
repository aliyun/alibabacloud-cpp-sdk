// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODYTAGS_HPP_
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
  class ListPrivateAccessTagsResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagType, tagType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagType, tagType_);
    };
    ListPrivateAccessTagsResponseBodyTags() = default ;
    ListPrivateAccessTagsResponseBodyTags(const ListPrivateAccessTagsResponseBodyTags &) = default ;
    ListPrivateAccessTagsResponseBodyTags(ListPrivateAccessTagsResponseBodyTags &&) = default ;
    ListPrivateAccessTagsResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsResponseBodyTags() = default ;
    ListPrivateAccessTagsResponseBodyTags& operator=(const ListPrivateAccessTagsResponseBodyTags &) = default ;
    ListPrivateAccessTagsResponseBodyTags& operator=(ListPrivateAccessTagsResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->policyIds_ == nullptr && return this->tagId_ == nullptr
        && return this->tagType_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline ListPrivateAccessTagsResponseBodyTags& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline ListPrivateAccessTagsResponseBodyTags& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrivateAccessTagsResponseBodyTags& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPrivateAccessTagsResponseBodyTags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrivateAccessTagsResponseBodyTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListPrivateAccessTagsResponseBodyTags& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListPrivateAccessTagsResponseBodyTags& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListPrivateAccessTagsResponseBodyTags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagType Field Functions 
    bool hasTagType() const { return this->tagType_ != nullptr;};
    void deleteTagType() { this->tagType_ = nullptr;};
    inline string tagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
    inline ListPrivateAccessTagsResponseBodyTags& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


  protected:
    // The IDs of the internal access applications.
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    // The time when the internal access tag was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the internal access tag.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the internal access tag.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the internal access policies.
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    // The ID of the internal access tag.
    std::shared_ptr<string> tagId_ = nullptr;
    // The type of the internal access tag. Valid values:
    // 
    // *   **Default**
    // *   **Custom**
    std::shared_ptr<string> tagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
