// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetTeamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTeamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTeamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTeamResponseBody() = default ;
    GetTeamResponseBody(const GetTeamResponseBody &) = default ;
    GetTeamResponseBody(GetTeamResponseBody &&) = default ;
    GetTeamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTeamResponseBody() = default ;
    GetTeamResponseBody& operator=(const GetTeamResponseBody &) = default ;
    GetTeamResponseBody& operator=(GetTeamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agents, agents_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(teamId, teamId_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(users, users_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agents, agents_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(teamId, teamId_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(users, users_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Users : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Users& obj) { 
          DARABONBA_PTR_TO_JSON(authMethod, authMethod_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(initialPassword, initialPassword_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(note, note_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(teamRole, teamRole_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(userId, userId_);
          DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Users& obj) { 
          DARABONBA_PTR_FROM_JSON(authMethod, authMethod_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(initialPassword, initialPassword_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(note, note_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(teamRole, teamRole_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(userId, userId_);
          DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
        };
        Users() = default ;
        Users(const Users &) = default ;
        Users(Users &&) = default ;
        Users(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Users() = default ;
        Users& operator=(const Users &) = default ;
        Users& operator=(Users &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authMethod_ == nullptr
        && this->createdAt_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->initialPassword_ == nullptr && this->name_ == nullptr
        && this->note_ == nullptr && this->status_ == nullptr && this->teamRole_ == nullptr && this->updatedAt_ == nullptr && this->userId_ == nullptr
        && this->workspaceId_ == nullptr; };
        // authMethod Field Functions 
        bool hasAuthMethod() const { return this->authMethod_ != nullptr;};
        void deleteAuthMethod() { this->authMethod_ = nullptr;};
        inline string getAuthMethod() const { DARABONBA_PTR_GET_DEFAULT(authMethod_, "") };
        inline Users& setAuthMethod(string authMethod) { DARABONBA_PTR_SET_VALUE(authMethod_, authMethod) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Users& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Users& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Users& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // initialPassword Field Functions 
        bool hasInitialPassword() const { return this->initialPassword_ != nullptr;};
        void deleteInitialPassword() { this->initialPassword_ = nullptr;};
        inline string getInitialPassword() const { DARABONBA_PTR_GET_DEFAULT(initialPassword_, "") };
        inline Users& setInitialPassword(string initialPassword) { DARABONBA_PTR_SET_VALUE(initialPassword_, initialPassword) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Users& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline Users& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Users& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // teamRole Field Functions 
        bool hasTeamRole() const { return this->teamRole_ != nullptr;};
        void deleteTeamRole() { this->teamRole_ = nullptr;};
        inline string getTeamRole() const { DARABONBA_PTR_GET_DEFAULT(teamRole_, "") };
        inline Users& setTeamRole(string teamRole) { DARABONBA_PTR_SET_VALUE(teamRole_, teamRole) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Users& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Users& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> authMethod_ {};
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> initialPassword_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> note_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> teamRole_ {};
        shared_ptr<string> updatedAt_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> workspaceId_ {};
      };

      class Agents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agents& obj) { 
          DARABONBA_PTR_TO_JSON(agentId, agentId_);
          DARABONBA_PTR_TO_JSON(createMode, createMode_);
          DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
          DARABONBA_PTR_TO_JSON(deployType, deployType_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(effectiveSpecVersion, effectiveSpecVersion_);
          DARABONBA_PTR_TO_JSON(latestSpecVersion, latestSpecVersion_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(runtime, runtime_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(teamRole, teamRole_);
          DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Agents& obj) { 
          DARABONBA_PTR_FROM_JSON(agentId, agentId_);
          DARABONBA_PTR_FROM_JSON(createMode, createMode_);
          DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
          DARABONBA_PTR_FROM_JSON(deployType, deployType_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(effectiveSpecVersion, effectiveSpecVersion_);
          DARABONBA_PTR_FROM_JSON(latestSpecVersion, latestSpecVersion_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(runtime, runtime_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(teamRole, teamRole_);
          DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
          DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
        };
        Agents() = default ;
        Agents(const Agents &) = default ;
        Agents(Agents &&) = default ;
        Agents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agents() = default ;
        Agents& operator=(const Agents &) = default ;
        Agents& operator=(Agents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createMode_ == nullptr && this->createdAt_ == nullptr && this->deployType_ == nullptr && this->description_ == nullptr && this->effectiveSpecVersion_ == nullptr
        && this->latestSpecVersion_ == nullptr && this->name_ == nullptr && this->runtime_ == nullptr && this->status_ == nullptr && this->teamRole_ == nullptr
        && this->updatedAt_ == nullptr && this->workspaceId_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline Agents& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // createMode Field Functions 
        bool hasCreateMode() const { return this->createMode_ != nullptr;};
        void deleteCreateMode() { this->createMode_ = nullptr;};
        inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
        inline Agents& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


        // createdAt Field Functions 
        bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
        void deleteCreatedAt() { this->createdAt_ = nullptr;};
        inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
        inline Agents& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


        // deployType Field Functions 
        bool hasDeployType() const { return this->deployType_ != nullptr;};
        void deleteDeployType() { this->deployType_ = nullptr;};
        inline string getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, "") };
        inline Agents& setDeployType(string deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Agents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveSpecVersion Field Functions 
        bool hasEffectiveSpecVersion() const { return this->effectiveSpecVersion_ != nullptr;};
        void deleteEffectiveSpecVersion() { this->effectiveSpecVersion_ = nullptr;};
        inline int64_t getEffectiveSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveSpecVersion_, 0L) };
        inline Agents& setEffectiveSpecVersion(int64_t effectiveSpecVersion) { DARABONBA_PTR_SET_VALUE(effectiveSpecVersion_, effectiveSpecVersion) };


        // latestSpecVersion Field Functions 
        bool hasLatestSpecVersion() const { return this->latestSpecVersion_ != nullptr;};
        void deleteLatestSpecVersion() { this->latestSpecVersion_ = nullptr;};
        inline int64_t getLatestSpecVersion() const { DARABONBA_PTR_GET_DEFAULT(latestSpecVersion_, 0L) };
        inline Agents& setLatestSpecVersion(int64_t latestSpecVersion) { DARABONBA_PTR_SET_VALUE(latestSpecVersion_, latestSpecVersion) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Agents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // runtime Field Functions 
        bool hasRuntime() const { return this->runtime_ != nullptr;};
        void deleteRuntime() { this->runtime_ = nullptr;};
        inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
        inline Agents& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Agents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // teamRole Field Functions 
        bool hasTeamRole() const { return this->teamRole_ != nullptr;};
        void deleteTeamRole() { this->teamRole_ = nullptr;};
        inline string getTeamRole() const { DARABONBA_PTR_GET_DEFAULT(teamRole_, "") };
        inline Agents& setTeamRole(string teamRole) { DARABONBA_PTR_SET_VALUE(teamRole_, teamRole) };


        // updatedAt Field Functions 
        bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
        void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
        inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
        inline Agents& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Agents& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> createMode_ {};
        shared_ptr<string> createdAt_ {};
        shared_ptr<string> deployType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> effectiveSpecVersion_ {};
        shared_ptr<int64_t> latestSpecVersion_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> runtime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> teamRole_ {};
        shared_ptr<string> updatedAt_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->agents_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->teamId_ == nullptr && this->updatedAt_ == nullptr && this->users_ == nullptr && this->workspaceId_ == nullptr; };
      // agents Field Functions 
      bool hasAgents() const { return this->agents_ != nullptr;};
      void deleteAgents() { this->agents_ = nullptr;};
      inline const vector<Data::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<Data::Agents>) };
      inline vector<Data::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<Data::Agents>) };
      inline Data& setAgents(const vector<Data::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
      inline Data& setAgents(vector<Data::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // teamId Field Functions 
      bool hasTeamId() const { return this->teamId_ != nullptr;};
      void deleteTeamId() { this->teamId_ = nullptr;};
      inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
      inline Data& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<Data::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<Data::Users>) };
      inline vector<Data::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<Data::Users>) };
      inline Data& setUsers(const vector<Data::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Data& setUsers(vector<Data::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<vector<Data::Agents>> agents_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> teamId_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<vector<Data::Users>> users_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTeamResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTeamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTeamResponseBody::Data) };
    inline GetTeamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTeamResponseBody::Data) };
    inline GetTeamResponseBody& setData(const GetTeamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTeamResponseBody& setData(GetTeamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTeamResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTeamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTeamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTeamResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTeamResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
