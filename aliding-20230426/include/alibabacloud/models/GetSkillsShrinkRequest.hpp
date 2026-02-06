// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSkillsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_TO_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    GetSkillsShrinkRequest() = default ;
    GetSkillsShrinkRequest(const GetSkillsShrinkRequest &) = default ;
    GetSkillsShrinkRequest(GetSkillsShrinkRequest &&) = default ;
    GetSkillsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillsShrinkRequest() = default ;
    GetSkillsShrinkRequest& operator=(const GetSkillsShrinkRequest &) = default ;
    GetSkillsShrinkRequest& operator=(GetSkillsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIdsShrink_ == nullptr
        && this->skillIdsShrink_ == nullptr && this->sourceIdOfAssistantId_ == nullptr; };
    // groupIdsShrink Field Functions 
    bool hasGroupIdsShrink() const { return this->groupIdsShrink_ != nullptr;};
    void deleteGroupIdsShrink() { this->groupIdsShrink_ = nullptr;};
    inline string getGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(groupIdsShrink_, "") };
    inline GetSkillsShrinkRequest& setGroupIdsShrink(string groupIdsShrink) { DARABONBA_PTR_SET_VALUE(groupIdsShrink_, groupIdsShrink) };


    // skillIdsShrink Field Functions 
    bool hasSkillIdsShrink() const { return this->skillIdsShrink_ != nullptr;};
    void deleteSkillIdsShrink() { this->skillIdsShrink_ = nullptr;};
    inline string getSkillIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(skillIdsShrink_, "") };
    inline GetSkillsShrinkRequest& setSkillIdsShrink(string skillIdsShrink) { DARABONBA_PTR_SET_VALUE(skillIdsShrink_, skillIdsShrink) };


    // sourceIdOfAssistantId Field Functions 
    bool hasSourceIdOfAssistantId() const { return this->sourceIdOfAssistantId_ != nullptr;};
    void deleteSourceIdOfAssistantId() { this->sourceIdOfAssistantId_ = nullptr;};
    inline string getSourceIdOfAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfAssistantId_, "") };
    inline GetSkillsShrinkRequest& setSourceIdOfAssistantId(string sourceIdOfAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfAssistantId_, sourceIdOfAssistantId) };


  protected:
    shared_ptr<string> groupIdsShrink_ {};
    shared_ptr<string> skillIdsShrink_ {};
    shared_ptr<string> sourceIdOfAssistantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
