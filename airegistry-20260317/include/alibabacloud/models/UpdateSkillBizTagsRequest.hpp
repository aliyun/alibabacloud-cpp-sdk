// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLBIZTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLBIZTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class UpdateSkillBizTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillBizTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillBizTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    UpdateSkillBizTagsRequest() = default ;
    UpdateSkillBizTagsRequest(const UpdateSkillBizTagsRequest &) = default ;
    UpdateSkillBizTagsRequest(UpdateSkillBizTagsRequest &&) = default ;
    UpdateSkillBizTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillBizTagsRequest() = default ;
    UpdateSkillBizTagsRequest& operator=(const UpdateSkillBizTagsRequest &) = default ;
    UpdateSkillBizTagsRequest& operator=(UpdateSkillBizTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->namespaceId_ == nullptr && this->skillName_ == nullptr; };
    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
    inline UpdateSkillBizTagsRequest& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateSkillBizTagsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline UpdateSkillBizTagsRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizTags_ {};
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
