// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVALUATORSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVALUATORSKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteEvaluatorSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEvaluatorSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEvaluatorSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
    };
    DeleteEvaluatorSkillRequest() = default ;
    DeleteEvaluatorSkillRequest(const DeleteEvaluatorSkillRequest &) = default ;
    DeleteEvaluatorSkillRequest(DeleteEvaluatorSkillRequest &&) = default ;
    DeleteEvaluatorSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEvaluatorSkillRequest() = default ;
    DeleteEvaluatorSkillRequest& operator=(const DeleteEvaluatorSkillRequest &) = default ;
    DeleteEvaluatorSkillRequest& operator=(DeleteEvaluatorSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline DeleteEvaluatorSkillRequest& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


  protected:
    // The AgentSpace name.
    // 
    // This parameter is required.
    shared_ptr<string> agentSpace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
