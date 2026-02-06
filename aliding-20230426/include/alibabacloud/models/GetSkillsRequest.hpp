// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_TO_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
      DARABONBA_PTR_FROM_JSON(SourceIdOfAssistantId, sourceIdOfAssistantId_);
    };
    GetSkillsRequest() = default ;
    GetSkillsRequest(const GetSkillsRequest &) = default ;
    GetSkillsRequest(GetSkillsRequest &&) = default ;
    GetSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillsRequest() = default ;
    GetSkillsRequest& operator=(const GetSkillsRequest &) = default ;
    GetSkillsRequest& operator=(GetSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIds_ == nullptr
        && this->skillIds_ == nullptr && this->sourceIdOfAssistantId_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline GetSkillsRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetSkillsRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline GetSkillsRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline GetSkillsRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


    // sourceIdOfAssistantId Field Functions 
    bool hasSourceIdOfAssistantId() const { return this->sourceIdOfAssistantId_ != nullptr;};
    void deleteSourceIdOfAssistantId() { this->sourceIdOfAssistantId_ = nullptr;};
    inline string getSourceIdOfAssistantId() const { DARABONBA_PTR_GET_DEFAULT(sourceIdOfAssistantId_, "") };
    inline GetSkillsRequest& setSourceIdOfAssistantId(string sourceIdOfAssistantId) { DARABONBA_PTR_SET_VALUE(sourceIdOfAssistantId_, sourceIdOfAssistantId) };


  protected:
    shared_ptr<vector<string>> groupIds_ {};
    shared_ptr<vector<string>> skillIds_ {};
    shared_ptr<string> sourceIdOfAssistantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
