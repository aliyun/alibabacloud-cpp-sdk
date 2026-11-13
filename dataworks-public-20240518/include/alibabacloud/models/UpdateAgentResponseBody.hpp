// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateAgentResponseBody() = default ;
    UpdateAgentResponseBody(const UpdateAgentResponseBody &) = default ;
    UpdateAgentResponseBody(UpdateAgentResponseBody &&) = default ;
    UpdateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentResponseBody() = default ;
    UpdateAgentResponseBody& operator=(const UpdateAgentResponseBody &) = default ;
    UpdateAgentResponseBody& operator=(UpdateAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agent& obj) { 
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(ExpertSuites, expertSuites_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
      };
      friend void from_json(const Darabonba::Json& j, Agent& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(ExpertSuites, expertSuites_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
      };
      Agent() = default ;
      Agent(const Agent &) = default ;
      Agent(Agent &&) = default ;
      Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agent() = default ;
      Agent& operator=(const Agent &) = default ;
      Agent& operator=(Agent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Skills : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skills& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SkillId, skillId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionSelector, versionSelector_);
        };
        Skills() = default ;
        Skills(const Skills &) = default ;
        Skills(Skills &&) = default ;
        Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Skills() = default ;
        Skills& operator=(const Skills &) = default ;
        Skills& operator=(Skills &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->skillId_ == nullptr && this->source_ == nullptr && this->version_ == nullptr && this->versionSelector_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skillId Field Functions 
        bool hasSkillId() const { return this->skillId_ != nullptr;};
        void deleteSkillId() { this->skillId_ = nullptr;};
        inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
        inline Skills& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Skills& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Skills& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionSelector Field Functions 
        bool hasVersionSelector() const { return this->versionSelector_ != nullptr;};
        void deleteVersionSelector() { this->versionSelector_ = nullptr;};
        inline string getVersionSelector() const { DARABONBA_PTR_GET_DEFAULT(versionSelector_, "") };
        inline Skills& setVersionSelector(string versionSelector) { DARABONBA_PTR_SET_VALUE(versionSelector_, versionSelector) };


      protected:
        // The name of the bound custom skill.
        shared_ptr<string> name_ {};
        // The official skill ID.
        shared_ptr<string> skillId_ {};
        // The source of the skill.
        shared_ptr<string> source_ {};
        // The published version number of the bound custom skill.
        shared_ptr<int32_t> version_ {};
        // The version selection expression.
        shared_ptr<string> versionSelector_ {};
      };

      class ExpertSuites : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpertSuites& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SemanticVersion, semanticVersion_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(SuiteId, suiteId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
        };
        friend void from_json(const Darabonba::Json& j, ExpertSuites& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SemanticVersion, semanticVersion_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(SuiteId, suiteId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(VersionSelector, versionSelector_);
        };
        ExpertSuites() = default ;
        ExpertSuites(const ExpertSuites &) = default ;
        ExpertSuites(ExpertSuites &&) = default ;
        ExpertSuites(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExpertSuites() = default ;
        ExpertSuites& operator=(const ExpertSuites &) = default ;
        ExpertSuites& operator=(ExpertSuites &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->name_ == nullptr && this->semanticVersion_ == nullptr && this->source_ == nullptr && this->suiteId_ == nullptr
        && this->version_ == nullptr && this->versionSelector_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ExpertSuites& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline ExpertSuites& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ExpertSuites& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // semanticVersion Field Functions 
        bool hasSemanticVersion() const { return this->semanticVersion_ != nullptr;};
        void deleteSemanticVersion() { this->semanticVersion_ = nullptr;};
        inline string getSemanticVersion() const { DARABONBA_PTR_GET_DEFAULT(semanticVersion_, "") };
        inline ExpertSuites& setSemanticVersion(string semanticVersion) { DARABONBA_PTR_SET_VALUE(semanticVersion_, semanticVersion) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ExpertSuites& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // suiteId Field Functions 
        bool hasSuiteId() const { return this->suiteId_ != nullptr;};
        void deleteSuiteId() { this->suiteId_ = nullptr;};
        inline string getSuiteId() const { DARABONBA_PTR_GET_DEFAULT(suiteId_, "") };
        inline ExpertSuites& setSuiteId(string suiteId) { DARABONBA_PTR_SET_VALUE(suiteId_, suiteId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline ExpertSuites& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // versionSelector Field Functions 
        bool hasVersionSelector() const { return this->versionSelector_ != nullptr;};
        void deleteVersionSelector() { this->versionSelector_ = nullptr;};
        inline string getVersionSelector() const { DARABONBA_PTR_GET_DEFAULT(versionSelector_, "") };
        inline ExpertSuites& setVersionSelector(string versionSelector) { DARABONBA_PTR_SET_VALUE(versionSelector_, versionSelector) };


      protected:
        // The suite description of the bound version.
        shared_ptr<string> description_ {};
        // The display name of the bound version.
        shared_ptr<string> displayName_ {};
        // The suite name of the bound version.
        shared_ptr<string> name_ {};
        // The semantic version of the bound version.
        shared_ptr<string> semanticVersion_ {};
        // The source of the expert suite.
        shared_ptr<string> source_ {};
        // The ID of the expert suite.
        shared_ptr<string> suiteId_ {};
        // The bound published version number.
        shared_ptr<int32_t> version_ {};
        // The version selection expression.
        shared_ptr<string> versionSelector_ {};
      };

      virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->expertSuites_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr && this->skills_ == nullptr; };
      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline int32_t getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, 0) };
      inline Agent& setAgentVersion(int32_t agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // expertSuites Field Functions 
      bool hasExpertSuites() const { return this->expertSuites_ != nullptr;};
      void deleteExpertSuites() { this->expertSuites_ = nullptr;};
      inline const vector<Agent::ExpertSuites> & getExpertSuites() const { DARABONBA_PTR_GET_CONST(expertSuites_, vector<Agent::ExpertSuites>) };
      inline vector<Agent::ExpertSuites> getExpertSuites() { DARABONBA_PTR_GET(expertSuites_, vector<Agent::ExpertSuites>) };
      inline Agent& setExpertSuites(const vector<Agent::ExpertSuites> & expertSuites) { DARABONBA_PTR_SET_VALUE(expertSuites_, expertSuites) };
      inline Agent& setExpertSuites(vector<Agent::ExpertSuites> && expertSuites) { DARABONBA_PTR_SET_RVALUE(expertSuites_, expertSuites) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline int64_t getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, 0L) };
      inline Agent& setGmtCreateTime(int64_t gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline int64_t getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, 0L) };
      inline Agent& setGmtModifiedTime(int64_t gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<Agent::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<Agent::Skills>) };
      inline vector<Agent::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<Agent::Skills>) };
      inline Agent& setSkills(const vector<Agent::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Agent& setSkills(vector<Agent::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    protected:
      // The updated agent definition version.
      shared_ptr<int32_t> agentVersion_ {};
      // The bound expert suites.
      shared_ptr<vector<Agent::ExpertSuites>> expertSuites_ {};
      // The time when the agent was created. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreateTime_ {};
      // The time when the agent was last modified. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> gmtModifiedTime_ {};
      // The name of the agent.
      shared_ptr<string> name_ {};
      // The list of bound skill references after the update.
      shared_ptr<vector<Agent::Skills>> skills_ {};
    };

    virtual bool empty() const override { return this->agent_ == nullptr
        && this->requestId_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const UpdateAgentResponseBody::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, UpdateAgentResponseBody::Agent) };
    inline UpdateAgentResponseBody::Agent getAgent() { DARABONBA_PTR_GET(agent_, UpdateAgentResponseBody::Agent) };
    inline UpdateAgentResponseBody& setAgent(const UpdateAgentResponseBody::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline UpdateAgentResponseBody& setAgent(UpdateAgentResponseBody::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the updated agent.
    shared_ptr<UpdateAgentResponseBody::Agent> agent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
