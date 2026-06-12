// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetSkillResponseBody() = default ;
    GetSkillResponseBody(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody(GetSkillResponseBody &&) = default ;
    GetSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillResponseBody() = default ;
    GetSkillResponseBody& operator=(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody& operator=(GetSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->requestId_ == nullptr && this->skillDescription_ == nullptr && this->skillId_ == nullptr && this->skillLabels_ == nullptr && this->skillName_ == nullptr
        && this->skillSpaceId_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSkillResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillDescription Field Functions 
    bool hasSkillDescription() const { return this->skillDescription_ != nullptr;};
    void deleteSkillDescription() { this->skillDescription_ = nullptr;};
    inline string getSkillDescription() const { DARABONBA_PTR_GET_DEFAULT(skillDescription_, "") };
    inline GetSkillResponseBody& setSkillDescription(string skillDescription) { DARABONBA_PTR_SET_VALUE(skillDescription_, skillDescription) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline GetSkillResponseBody& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillLabels Field Functions 
    bool hasSkillLabels() const { return this->skillLabels_ != nullptr;};
    void deleteSkillLabels() { this->skillLabels_ = nullptr;};
    inline const vector<string> & getSkillLabels() const { DARABONBA_PTR_GET_CONST(skillLabels_, vector<string>) };
    inline vector<string> getSkillLabels() { DARABONBA_PTR_GET(skillLabels_, vector<string>) };
    inline GetSkillResponseBody& setSkillLabels(const vector<string> & skillLabels) { DARABONBA_PTR_SET_VALUE(skillLabels_, skillLabels) };
    inline GetSkillResponseBody& setSkillLabels(vector<string> && skillLabels) { DARABONBA_PTR_SET_RVALUE(skillLabels_, skillLabels) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline GetSkillResponseBody& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline GetSkillResponseBody& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetSkillResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time the Skill was created.
    shared_ptr<string> createTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The description of the Skill.
    shared_ptr<string> skillDescription_ {};
    // The ID of the Skill.
    shared_ptr<string> skillId_ {};
    // The labels of the Skill.
    shared_ptr<vector<string>> skillLabels_ {};
    // The name of the Skill.
    shared_ptr<string> skillName_ {};
    // The ID of the SkillSpace to which the Skill belongs.
    shared_ptr<string> skillSpaceId_ {};
    // The time the Skill was last updated.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
