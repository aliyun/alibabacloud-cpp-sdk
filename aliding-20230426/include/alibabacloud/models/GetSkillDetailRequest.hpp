// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSkillDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    GetSkillDetailRequest() = default ;
    GetSkillDetailRequest(const GetSkillDetailRequest &) = default ;
    GetSkillDetailRequest(GetSkillDetailRequest &&) = default ;
    GetSkillDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillDetailRequest() = default ;
    GetSkillDetailRequest& operator=(const GetSkillDetailRequest &) = default ;
    GetSkillDetailRequest& operator=(GetSkillDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->skillId_ == nullptr && this->sourceIdOfAssistantId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetSkillDetailRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline GetSkillDetailRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // sourceIdOfAssistantId Field Functions 
    bool hasSourceIdOfAssistantId() const { return this->sourceIdOfAssistantId_ != nullptr;};
    void deleteSourceIdOfAssistantId() { this->sourceIdOfAssistantId_ = nullptr;};
    inline string getSourceIdOfAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfAssistantId_, "") };
    inline GetSkillDetailRequest& setSourceIdOfAssistantId(string sourceIdOfAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfAssistantId_, sourceIdOfAssistantId) };


  protected:
    shared_ptr<string> groupId_ {};
    shared_ptr<string> skillId_ {};
    shared_ptr<string> sourceIdOfAssistantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
