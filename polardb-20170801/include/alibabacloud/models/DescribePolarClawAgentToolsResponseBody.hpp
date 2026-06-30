// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawAgentToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentConfig, currentConfig_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Profiles, profiles_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentConfig, currentConfig_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Profiles, profiles_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolarClawAgentToolsResponseBody() = default ;
    DescribePolarClawAgentToolsResponseBody(const DescribePolarClawAgentToolsResponseBody &) = default ;
    DescribePolarClawAgentToolsResponseBody(DescribePolarClawAgentToolsResponseBody &&) = default ;
    DescribePolarClawAgentToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentToolsResponseBody() = default ;
    DescribePolarClawAgentToolsResponseBody& operator=(const DescribePolarClawAgentToolsResponseBody &) = default ;
    DescribePolarClawAgentToolsResponseBody& operator=(DescribePolarClawAgentToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Profiles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Profiles& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Label, label_);
      };
      friend void from_json(const Darabonba::Json& j, Profiles& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
      };
      Profiles() = default ;
      Profiles(const Profiles &) = default ;
      Profiles(Profiles &&) = default ;
      Profiles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Profiles() = default ;
      Profiles& operator=(const Profiles &) = default ;
      Profiles& operator=(Profiles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Profiles& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Profiles& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    protected:
      // The profile identifier.
      shared_ptr<string> id_ {};
      // The display name.
      shared_ptr<string> label_ {};
    };

    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Tools, tools_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultProfiles, defaultProfiles_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultProfiles, defaultProfiles_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        Tools() = default ;
        Tools(const Tools &) = default ;
        Tools(Tools &&) = default ;
        Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tools() = default ;
        Tools& operator=(const Tools &) = default ;
        Tools& operator=(Tools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultProfiles_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->label_ == nullptr && this->source_ == nullptr; };
        // defaultProfiles Field Functions 
        bool hasDefaultProfiles() const { return this->defaultProfiles_ != nullptr;};
        void deleteDefaultProfiles() { this->defaultProfiles_ = nullptr;};
        inline const vector<string> & getDefaultProfiles() const { DARABONBA_PTR_GET_CONST(defaultProfiles_, vector<string>) };
        inline vector<string> getDefaultProfiles() { DARABONBA_PTR_GET(defaultProfiles_, vector<string>) };
        inline Tools& setDefaultProfiles(const vector<string> & defaultProfiles) { DARABONBA_PTR_SET_VALUE(defaultProfiles_, defaultProfiles) };
        inline Tools& setDefaultProfiles(vector<string> && defaultProfiles) { DARABONBA_PTR_SET_RVALUE(defaultProfiles_, defaultProfiles) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Tools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Tools& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Tools& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Tools& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // The list of profiles that include this tool by default.
        shared_ptr<vector<string>> defaultProfiles_ {};
        // The tool description.
        shared_ptr<string> description_ {};
        // The tool identifier.
        shared_ptr<string> id_ {};
        // The tool name.
        shared_ptr<string> label_ {};
        // The source.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr && this->source_ == nullptr && this->tools_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Groups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Groups& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Groups& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Groups::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Groups::Tools>) };
      inline vector<Groups::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<Groups::Tools>) };
      inline Groups& setTools(const vector<Groups::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Groups& setTools(vector<Groups::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      // The group identifier.
      shared_ptr<string> id_ {};
      // The group name.
      shared_ptr<string> label_ {};
      // The source, which is core or a plugin ID.
      shared_ptr<string> source_ {};
      // The list of tools.
      shared_ptr<vector<Groups::Tools>> tools_ {};
    };

    class CurrentConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CurrentConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Allow, allow_);
        DARABONBA_PTR_TO_JSON(AlsoAllow, alsoAllow_);
        DARABONBA_PTR_TO_JSON(Deny, deny_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
      };
      friend void from_json(const Darabonba::Json& j, CurrentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Allow, allow_);
        DARABONBA_PTR_FROM_JSON(AlsoAllow, alsoAllow_);
        DARABONBA_PTR_FROM_JSON(Deny, deny_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
      };
      CurrentConfig() = default ;
      CurrentConfig(const CurrentConfig &) = default ;
      CurrentConfig(CurrentConfig &&) = default ;
      CurrentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CurrentConfig() = default ;
      CurrentConfig& operator=(const CurrentConfig &) = default ;
      CurrentConfig& operator=(CurrentConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allow_ == nullptr
        && this->alsoAllow_ == nullptr && this->deny_ == nullptr && this->profile_ == nullptr; };
      // allow Field Functions 
      bool hasAllow() const { return this->allow_ != nullptr;};
      void deleteAllow() { this->allow_ = nullptr;};
      inline const vector<string> & getAllow() const { DARABONBA_PTR_GET_CONST(allow_, vector<string>) };
      inline vector<string> getAllow() { DARABONBA_PTR_GET(allow_, vector<string>) };
      inline CurrentConfig& setAllow(const vector<string> & allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };
      inline CurrentConfig& setAllow(vector<string> && allow) { DARABONBA_PTR_SET_RVALUE(allow_, allow) };


      // alsoAllow Field Functions 
      bool hasAlsoAllow() const { return this->alsoAllow_ != nullptr;};
      void deleteAlsoAllow() { this->alsoAllow_ = nullptr;};
      inline const vector<string> & getAlsoAllow() const { DARABONBA_PTR_GET_CONST(alsoAllow_, vector<string>) };
      inline vector<string> getAlsoAllow() { DARABONBA_PTR_GET(alsoAllow_, vector<string>) };
      inline CurrentConfig& setAlsoAllow(const vector<string> & alsoAllow) { DARABONBA_PTR_SET_VALUE(alsoAllow_, alsoAllow) };
      inline CurrentConfig& setAlsoAllow(vector<string> && alsoAllow) { DARABONBA_PTR_SET_RVALUE(alsoAllow_, alsoAllow) };


      // deny Field Functions 
      bool hasDeny() const { return this->deny_ != nullptr;};
      void deleteDeny() { this->deny_ = nullptr;};
      inline const vector<string> & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, vector<string>) };
      inline vector<string> getDeny() { DARABONBA_PTR_GET(deny_, vector<string>) };
      inline CurrentConfig& setDeny(const vector<string> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
      inline CurrentConfig& setDeny(vector<string> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline CurrentConfig& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    protected:
      // The list of explicitly allowed tools.
      shared_ptr<vector<string>> allow_ {};
      // The list of additionally allowed tools.
      shared_ptr<vector<string>> alsoAllow_ {};
      // The list of denied tools.
      shared_ptr<vector<string>> deny_ {};
      // The tool profile.
      shared_ptr<string> profile_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->currentConfig_ == nullptr && this->groups_ == nullptr && this->message_ == nullptr
        && this->profiles_ == nullptr && this->requestId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribePolarClawAgentToolsResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentToolsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawAgentToolsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentConfig Field Functions 
    bool hasCurrentConfig() const { return this->currentConfig_ != nullptr;};
    void deleteCurrentConfig() { this->currentConfig_ = nullptr;};
    inline const DescribePolarClawAgentToolsResponseBody::CurrentConfig & getCurrentConfig() const { DARABONBA_PTR_GET_CONST(currentConfig_, DescribePolarClawAgentToolsResponseBody::CurrentConfig) };
    inline DescribePolarClawAgentToolsResponseBody::CurrentConfig getCurrentConfig() { DARABONBA_PTR_GET(currentConfig_, DescribePolarClawAgentToolsResponseBody::CurrentConfig) };
    inline DescribePolarClawAgentToolsResponseBody& setCurrentConfig(const DescribePolarClawAgentToolsResponseBody::CurrentConfig & currentConfig) { DARABONBA_PTR_SET_VALUE(currentConfig_, currentConfig) };
    inline DescribePolarClawAgentToolsResponseBody& setCurrentConfig(DescribePolarClawAgentToolsResponseBody::CurrentConfig && currentConfig) { DARABONBA_PTR_SET_RVALUE(currentConfig_, currentConfig) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<DescribePolarClawAgentToolsResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<DescribePolarClawAgentToolsResponseBody::Groups>) };
    inline vector<DescribePolarClawAgentToolsResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<DescribePolarClawAgentToolsResponseBody::Groups>) };
    inline DescribePolarClawAgentToolsResponseBody& setGroups(const vector<DescribePolarClawAgentToolsResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline DescribePolarClawAgentToolsResponseBody& setGroups(vector<DescribePolarClawAgentToolsResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawAgentToolsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // profiles Field Functions 
    bool hasProfiles() const { return this->profiles_ != nullptr;};
    void deleteProfiles() { this->profiles_ = nullptr;};
    inline const vector<DescribePolarClawAgentToolsResponseBody::Profiles> & getProfiles() const { DARABONBA_PTR_GET_CONST(profiles_, vector<DescribePolarClawAgentToolsResponseBody::Profiles>) };
    inline vector<DescribePolarClawAgentToolsResponseBody::Profiles> getProfiles() { DARABONBA_PTR_GET(profiles_, vector<DescribePolarClawAgentToolsResponseBody::Profiles>) };
    inline DescribePolarClawAgentToolsResponseBody& setProfiles(const vector<DescribePolarClawAgentToolsResponseBody::Profiles> & profiles) { DARABONBA_PTR_SET_VALUE(profiles_, profiles) };
    inline DescribePolarClawAgentToolsResponseBody& setProfiles(vector<DescribePolarClawAgentToolsResponseBody::Profiles> && profiles) { DARABONBA_PTR_SET_RVALUE(profiles_, profiles) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawAgentToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The current tool configuration.
    shared_ptr<DescribePolarClawAgentToolsResponseBody::CurrentConfig> currentConfig_ {};
    // The list of tool groups.
    shared_ptr<vector<DescribePolarClawAgentToolsResponseBody::Groups>> groups_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The list of available profiles.
    shared_ptr<vector<DescribePolarClawAgentToolsResponseBody::Profiles>> profiles_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
