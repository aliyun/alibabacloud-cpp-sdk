// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
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
  class CreateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAgentResponseBody() = default ;
    CreateAgentResponseBody(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody(CreateAgentResponseBody &&) = default ;
    CreateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentResponseBody() = default ;
    CreateAgentResponseBody& operator=(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody& operator=(CreateAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agent& obj) { 
        DARABONBA_PTR_TO_JSON(ExpertSuites, expertSuites_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
      };
      friend void from_json(const Darabonba::Json& j, Agent& obj) { 
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
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(SkillId, skillId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
        };
        friend void from_json(const Darabonba::Json& j, Skills& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
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
        && this->packageVersion_ == nullptr && this->skillId_ == nullptr && this->source_ == nullptr && this->version_ == nullptr && this->versionSelector_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline Skills& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


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
        // The name of the custom skill.
        shared_ptr<string> name_ {};
        // This field is not returned during creation. Use GetAgent to explicitly query the published version to obtain the fixed official artifact version.
        shared_ptr<string> packageVersion_ {};
        // The ID of the official skill.
        shared_ptr<string> skillId_ {};
        // The source of the skill.
        shared_ptr<string> source_ {};
        // The release version number of the custom skill.
        shared_ptr<int32_t> version_ {};
        // The saved version selection strategy is returned only for personal or enterprise resources and is mutually exclusive with the fixed integer Version. It does not represent the specific revision actually loaded in the session. This field is not returned for official resources.
        shared_ptr<string> versionSelector_ {};
      };

      class ExpertSuites : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpertSuites& obj) { 
          DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(SuiteId, suiteId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(VersionSelector, versionSelector_);
        };
        friend void from_json(const Darabonba::Json& j, ExpertSuites& obj) { 
          DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
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
        virtual bool empty() const override { return this->packageVersion_ == nullptr
        && this->source_ == nullptr && this->suiteId_ == nullptr && this->version_ == nullptr && this->versionSelector_ == nullptr; };
        // packageVersion Field Functions 
        bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
        void deletePackageVersion() { this->packageVersion_ = nullptr;};
        inline string getPackageVersion() const { DARABONBA_PTR_GET_DEFAULT(packageVersion_, "") };
        inline ExpertSuites& setPackageVersion(string packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };


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
        // This field is not returned during creation. Use GetAgent to explicitly query the published version to obtain the fixed official suite artifact version.
        shared_ptr<string> packageVersion_ {};
        // The source of the expert suite.
        shared_ptr<string> source_ {};
        // The ID of the expert suite.
        shared_ptr<string> suiteId_ {};
        // The release version number of the custom suite.
        shared_ptr<int32_t> version_ {};
        // The saved version selection strategy is returned only for personal or enterprise resources and is mutually exclusive with the fixed integer Version. It does not represent the specific revision actually loaded in the session. This field is not returned for official resources.
        shared_ptr<string> versionSelector_ {};
      };

      virtual bool empty() const override { return this->expertSuites_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr && this->skills_ == nullptr; };
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
      // The saved suite references. Official resources return the source and directory ID. The published artifact version is represented by PackageVersion.
      shared_ptr<vector<Agent::ExpertSuites>> expertSuites_ {};
      // The creation time, expressed as a timestamp in milliseconds.
      shared_ptr<int64_t> gmtCreateTime_ {};
      // The last modification time, expressed as a timestamp in milliseconds.
      shared_ptr<int64_t> gmtModifiedTime_ {};
      // The name of the agent.
      shared_ptr<string> name_ {};
      // The saved skill references. Official skills return a fixed PackageVersion after the agent is published.
      shared_ptr<vector<Agent::Skills>> skills_ {};
    };

    virtual bool empty() const override { return this->agent_ == nullptr
        && this->requestId_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const CreateAgentResponseBody::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, CreateAgentResponseBody::Agent) };
    inline CreateAgentResponseBody::Agent getAgent() { DARABONBA_PTR_GET(agent_, CreateAgentResponseBody::Agent) };
    inline CreateAgentResponseBody& setAgent(const CreateAgentResponseBody::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline CreateAgentResponseBody& setAgent(CreateAgentResponseBody::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the created agent.
    shared_ptr<CreateAgentResponseBody::Agent> agent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
