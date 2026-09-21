// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteAgentSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SkillIds, skillIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SkillIds, skillIds_);
    };
    DeleteAgentSkillRequest() = default ;
    DeleteAgentSkillRequest(const DeleteAgentSkillRequest &) = default ;
    DeleteAgentSkillRequest(DeleteAgentSkillRequest &&) = default ;
    DeleteAgentSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentSkillRequest() = default ;
    DeleteAgentSkillRequest& operator=(const DeleteAgentSkillRequest &) = default ;
    DeleteAgentSkillRequest& operator=(DeleteAgentSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skillIds_ == nullptr; };
    // skillIds Field Functions 
    bool hasSkillIds() const { return this->skillIds_ != nullptr;};
    void deleteSkillIds() { this->skillIds_ = nullptr;};
    inline const vector<string> & getSkillIds() const { DARABONBA_PTR_GET_CONST(skillIds_, vector<string>) };
    inline vector<string> getSkillIds() { DARABONBA_PTR_GET(skillIds_, vector<string>) };
    inline DeleteAgentSkillRequest& setSkillIds(const vector<string> & skillIds) { DARABONBA_PTR_SET_VALUE(skillIds_, skillIds) };
    inline DeleteAgentSkillRequest& setSkillIds(vector<string> && skillIds) { DARABONBA_PTR_SET_RVALUE(skillIds_, skillIds) };


  protected:
    // The list of skill IDs.
    shared_ptr<vector<string>> skillIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
