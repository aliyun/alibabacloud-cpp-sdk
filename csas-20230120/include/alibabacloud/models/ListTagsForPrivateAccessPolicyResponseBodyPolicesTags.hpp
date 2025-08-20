// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSPOLICYRESPONSEBODYPOLICESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListTagsForPrivateAccessPolicyResponseBodyPolicesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagType, tagType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagType, tagType_);
    };
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags() = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags(const ListTagsForPrivateAccessPolicyResponseBodyPolicesTags &) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags(ListTagsForPrivateAccessPolicyResponseBodyPolicesTags &&) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessPolicyResponseBodyPolicesTags() = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& operator=(const ListTagsForPrivateAccessPolicyResponseBodyPolicesTags &) = default ;
    ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& operator=(ListTagsForPrivateAccessPolicyResponseBodyPolicesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->tagId_ != nullptr && this->tagType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagType Field Functions 
    bool hasTagType() const { return this->tagType_ != nullptr;};
    void deleteTagType() { this->tagType_ = nullptr;};
    inline string tagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
    inline ListTagsForPrivateAccessPolicyResponseBodyPolicesTags& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


  protected:
    // 内网访问标签创建时间。
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
    std::shared_ptr<string> tagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
