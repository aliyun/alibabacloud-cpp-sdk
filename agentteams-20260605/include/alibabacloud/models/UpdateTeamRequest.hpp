// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class UpdateTeamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTeamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TeamMembers, teamMembers_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTeamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TeamMembers, teamMembers_);
    };
    UpdateTeamRequest() = default ;
    UpdateTeamRequest(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest(UpdateTeamRequest &&) = default ;
    UpdateTeamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTeamRequest() = default ;
    UpdateTeamRequest& operator=(const UpdateTeamRequest &) = default ;
    UpdateTeamRequest& operator=(UpdateTeamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TeamMembers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TeamMembers& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, TeamMembers& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      TeamMembers() = default ;
      TeamMembers(const TeamMembers &) = default ;
      TeamMembers(TeamMembers &&) = default ;
      TeamMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TeamMembers() = default ;
      TeamMembers& operator=(const TeamMembers &) = default ;
      TeamMembers& operator=(TeamMembers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline TeamMembers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->teamMembers_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTeamRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTeamRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTeamRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTeamRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // teamMembers Field Functions 
    bool hasTeamMembers() const { return this->teamMembers_ != nullptr;};
    void deleteTeamMembers() { this->teamMembers_ = nullptr;};
    inline const vector<UpdateTeamRequest::TeamMembers> & getTeamMembers() const { DARABONBA_PTR_GET_CONST(teamMembers_, vector<UpdateTeamRequest::TeamMembers>) };
    inline vector<UpdateTeamRequest::TeamMembers> getTeamMembers() { DARABONBA_PTR_GET(teamMembers_, vector<UpdateTeamRequest::TeamMembers>) };
    inline UpdateTeamRequest& setTeamMembers(const vector<UpdateTeamRequest::TeamMembers> & teamMembers) { DARABONBA_PTR_SET_VALUE(teamMembers_, teamMembers) };
    inline UpdateTeamRequest& setTeamMembers(vector<UpdateTeamRequest::TeamMembers> && teamMembers) { DARABONBA_PTR_SET_RVALUE(teamMembers_, teamMembers) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<UpdateTeamRequest::TeamMembers>> teamMembers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
