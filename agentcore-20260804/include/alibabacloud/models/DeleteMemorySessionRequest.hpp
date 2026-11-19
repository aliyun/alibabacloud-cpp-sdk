// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEMORYSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEMORYSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteMemorySessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMemorySessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
      DARABONBA_PTR_TO_JSON(teamId, teamId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMemorySessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
      DARABONBA_PTR_FROM_JSON(teamId, teamId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DeleteMemorySessionRequest() = default ;
    DeleteMemorySessionRequest(const DeleteMemorySessionRequest &) = default ;
    DeleteMemorySessionRequest(DeleteMemorySessionRequest &&) = default ;
    DeleteMemorySessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMemorySessionRequest() = default ;
    DeleteMemorySessionRequest& operator=(const DeleteMemorySessionRequest &) = default ;
    DeleteMemorySessionRequest& operator=(DeleteMemorySessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->teamId_ == nullptr && this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeleteMemorySessionRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // teamId Field Functions 
    bool hasTeamId() const { return this->teamId_ != nullptr;};
    void deleteTeamId() { this->teamId_ = nullptr;};
    inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
    inline DeleteMemorySessionRequest& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteMemorySessionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // agentId
    shared_ptr<string> agentId_ {};
    // teamId
    shared_ptr<string> teamId_ {};
    // userId
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
