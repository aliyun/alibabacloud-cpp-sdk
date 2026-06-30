// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWAGENTSRESPONSEBODY_HPP_
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
  class DescribePolarClawAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agents, agents_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultId, defaultId_);
      DARABONBA_PTR_TO_JSON(MainKey, mainKey_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agents, agents_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultId, defaultId_);
      DARABONBA_PTR_FROM_JSON(MainKey, mainKey_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribePolarClawAgentsResponseBody() = default ;
    DescribePolarClawAgentsResponseBody(const DescribePolarClawAgentsResponseBody &) = default ;
    DescribePolarClawAgentsResponseBody(DescribePolarClawAgentsResponseBody &&) = default ;
    DescribePolarClawAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawAgentsResponseBody() = default ;
    DescribePolarClawAgentsResponseBody& operator=(const DescribePolarClawAgentsResponseBody &) = default ;
    DescribePolarClawAgentsResponseBody& operator=(DescribePolarClawAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agents& obj) { 
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(Files, files_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Identity, identity_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skills, skills_);
        DARABONBA_PTR_TO_JSON(Workspace, workspace_);
      };
      friend void from_json(const Darabonba::Json& j, Agents& obj) { 
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(Files, files_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Identity, identity_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Skills, skills_);
        DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
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
      class Model : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Model& obj) { 
          DARABONBA_PTR_TO_JSON(Fallbacks, fallbacks_);
          DARABONBA_PTR_TO_JSON(Primary, primary_);
        };
        friend void from_json(const Darabonba::Json& j, Model& obj) { 
          DARABONBA_PTR_FROM_JSON(Fallbacks, fallbacks_);
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
        };
        Model() = default ;
        Model(const Model &) = default ;
        Model(Model &&) = default ;
        Model(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Model() = default ;
        Model& operator=(const Model &) = default ;
        Model& operator=(Model &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fallbacks_ == nullptr
        && this->primary_ == nullptr; };
        // fallbacks Field Functions 
        bool hasFallbacks() const { return this->fallbacks_ != nullptr;};
        void deleteFallbacks() { this->fallbacks_ = nullptr;};
        inline const vector<string> & getFallbacks() const { DARABONBA_PTR_GET_CONST(fallbacks_, vector<string>) };
        inline vector<string> getFallbacks() { DARABONBA_PTR_GET(fallbacks_, vector<string>) };
        inline Model& setFallbacks(const vector<string> & fallbacks) { DARABONBA_PTR_SET_VALUE(fallbacks_, fallbacks) };
        inline Model& setFallbacks(vector<string> && fallbacks) { DARABONBA_PTR_SET_RVALUE(fallbacks_, fallbacks) };


        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline string getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, "") };
        inline Model& setPrimary(string primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


      protected:
        // The fallback model list.
        shared_ptr<vector<string>> fallbacks_ {};
        // The primary model.
        shared_ptr<string> primary_ {};
      };

      class Identity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Identity& obj) { 
          DARABONBA_PTR_TO_JSON(Avatar, avatar_);
          DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_TO_JSON(Emoji, emoji_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Theme, theme_);
        };
        friend void from_json(const Darabonba::Json& j, Identity& obj) { 
          DARABONBA_PTR_FROM_JSON(Avatar, avatar_);
          DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
          DARABONBA_PTR_FROM_JSON(Emoji, emoji_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Theme, theme_);
        };
        Identity() = default ;
        Identity(const Identity &) = default ;
        Identity(Identity &&) = default ;
        Identity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Identity() = default ;
        Identity& operator=(const Identity &) = default ;
        Identity& operator=(Identity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avatar_ == nullptr
        && this->avatarUrl_ == nullptr && this->emoji_ == nullptr && this->name_ == nullptr && this->theme_ == nullptr; };
        // avatar Field Functions 
        bool hasAvatar() const { return this->avatar_ != nullptr;};
        void deleteAvatar() { this->avatar_ = nullptr;};
        inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
        inline Identity& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


        // avatarUrl Field Functions 
        bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
        void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
        inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
        inline Identity& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


        // emoji Field Functions 
        bool hasEmoji() const { return this->emoji_ != nullptr;};
        void deleteEmoji() { this->emoji_ = nullptr;};
        inline string getEmoji() const { DARABONBA_PTR_GET_DEFAULT(emoji_, "") };
        inline Identity& setEmoji(string emoji) { DARABONBA_PTR_SET_VALUE(emoji_, emoji) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Identity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // theme Field Functions 
        bool hasTheme() const { return this->theme_ != nullptr;};
        void deleteTheme() { this->theme_ = nullptr;};
        inline string getTheme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
        inline Identity& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


      protected:
        // The avatar path or content.
        shared_ptr<string> avatar_ {};
        // The avatar URL.
        shared_ptr<string> avatarUrl_ {};
        // The emoji identifier in Unicode format such as U+1F99E, or a direct emoji character.
        shared_ptr<string> emoji_ {};
        // The identity name.
        shared_ptr<string> name_ {};
        // The theme.
        shared_ptr<string> theme_ {};
      };

      class Files : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Files& obj) { 
          DARABONBA_PTR_TO_JSON(Missing, missing_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(UpdatedAtMs, updatedAtMs_);
        };
        friend void from_json(const Darabonba::Json& j, Files& obj) { 
          DARABONBA_PTR_FROM_JSON(Missing, missing_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(UpdatedAtMs, updatedAtMs_);
        };
        Files() = default ;
        Files(const Files &) = default ;
        Files(Files &&) = default ;
        Files(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Files() = default ;
        Files& operator=(const Files &) = default ;
        Files& operator=(Files &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->missing_ == nullptr
        && this->name_ == nullptr && this->path_ == nullptr && this->size_ == nullptr && this->updatedAtMs_ == nullptr; };
        // missing Field Functions 
        bool hasMissing() const { return this->missing_ != nullptr;};
        void deleteMissing() { this->missing_ = nullptr;};
        inline bool getMissing() const { DARABONBA_PTR_GET_DEFAULT(missing_, false) };
        inline Files& setMissing(bool missing) { DARABONBA_PTR_SET_VALUE(missing_, missing) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Files& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Files& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // updatedAtMs Field Functions 
        bool hasUpdatedAtMs() const { return this->updatedAtMs_ != nullptr;};
        void deleteUpdatedAtMs() { this->updatedAtMs_ = nullptr;};
        inline int64_t getUpdatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(updatedAtMs_, 0L) };
        inline Files& setUpdatedAtMs(int64_t updatedAtMs) { DARABONBA_PTR_SET_VALUE(updatedAtMs_, updatedAtMs) };


      protected:
        // Indicates whether the file is missing.
        shared_ptr<bool> missing_ {};
        // The file name.
        shared_ptr<string> name_ {};
        // The file path.
        shared_ptr<string> path_ {};
        // The file size, in bytes.
        shared_ptr<int64_t> size_ {};
        // The last updated timestamp, in milliseconds.
        shared_ptr<int64_t> updatedAtMs_ {};
      };

      virtual bool empty() const override { return this->default_ == nullptr
        && this->files_ == nullptr && this->id_ == nullptr && this->identity_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->skills_ == nullptr && this->workspace_ == nullptr; };
      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline Agents& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // files Field Functions 
      bool hasFiles() const { return this->files_ != nullptr;};
      void deleteFiles() { this->files_ = nullptr;};
      inline const vector<Agents::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<Agents::Files>) };
      inline vector<Agents::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<Agents::Files>) };
      inline Agents& setFiles(const vector<Agents::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
      inline Agents& setFiles(vector<Agents::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Agents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identity Field Functions 
      bool hasIdentity() const { return this->identity_ != nullptr;};
      void deleteIdentity() { this->identity_ = nullptr;};
      inline const Agents::Identity & getIdentity() const { DARABONBA_PTR_GET_CONST(identity_, Agents::Identity) };
      inline Agents::Identity getIdentity() { DARABONBA_PTR_GET(identity_, Agents::Identity) };
      inline Agents& setIdentity(const Agents::Identity & identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };
      inline Agents& setIdentity(Agents::Identity && identity) { DARABONBA_PTR_SET_RVALUE(identity_, identity) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline const Agents::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, Agents::Model) };
      inline Agents::Model getModel() { DARABONBA_PTR_GET(model_, Agents::Model) };
      inline Agents& setModel(const Agents::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
      inline Agents& setModel(Agents::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
      inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
      inline Agents& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Agents& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


      // workspace Field Functions 
      bool hasWorkspace() const { return this->workspace_ != nullptr;};
      void deleteWorkspace() { this->workspace_ = nullptr;};
      inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
      inline Agents& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    protected:
      // Indicates whether this is the default agent.
      shared_ptr<bool> default_ {};
      // The agent file list.
      shared_ptr<vector<Agents::Files>> files_ {};
      // Agent ID
      shared_ptr<string> id_ {};
      // The identity information.
      shared_ptr<Agents::Identity> identity_ {};
      // The model configuration.
      shared_ptr<Agents::Model> model_ {};
      // The agent display name.
      shared_ptr<string> name_ {};
      // The list of skills available to the agent.
      shared_ptr<vector<string>> skills_ {};
      // The working directory path.
      shared_ptr<string> workspace_ {};
    };

    virtual bool empty() const override { return this->agents_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->defaultId_ == nullptr && this->mainKey_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->scope_ == nullptr; };
    // agents Field Functions 
    bool hasAgents() const { return this->agents_ != nullptr;};
    void deleteAgents() { this->agents_ = nullptr;};
    inline const vector<DescribePolarClawAgentsResponseBody::Agents> & getAgents() const { DARABONBA_PTR_GET_CONST(agents_, vector<DescribePolarClawAgentsResponseBody::Agents>) };
    inline vector<DescribePolarClawAgentsResponseBody::Agents> getAgents() { DARABONBA_PTR_GET(agents_, vector<DescribePolarClawAgentsResponseBody::Agents>) };
    inline DescribePolarClawAgentsResponseBody& setAgents(const vector<DescribePolarClawAgentsResponseBody::Agents> & agents) { DARABONBA_PTR_SET_VALUE(agents_, agents) };
    inline DescribePolarClawAgentsResponseBody& setAgents(vector<DescribePolarClawAgentsResponseBody::Agents> && agents) { DARABONBA_PTR_SET_RVALUE(agents_, agents) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawAgentsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribePolarClawAgentsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultId Field Functions 
    bool hasDefaultId() const { return this->defaultId_ != nullptr;};
    void deleteDefaultId() { this->defaultId_ = nullptr;};
    inline string getDefaultId() const { DARABONBA_PTR_GET_DEFAULT(defaultId_, "") };
    inline DescribePolarClawAgentsResponseBody& setDefaultId(string defaultId) { DARABONBA_PTR_SET_VALUE(defaultId_, defaultId) };


    // mainKey Field Functions 
    bool hasMainKey() const { return this->mainKey_ != nullptr;};
    void deleteMainKey() { this->mainKey_ = nullptr;};
    inline string getMainKey() const { DARABONBA_PTR_GET_DEFAULT(mainKey_, "") };
    inline DescribePolarClawAgentsResponseBody& setMainKey(string mainKey) { DARABONBA_PTR_SET_VALUE(mainKey_, mainKey) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePolarClawAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribePolarClawAgentsResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The agent list.
    shared_ptr<vector<DescribePolarClawAgentsResponseBody::Agents>> agents_ {};
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The default agent ID.
    shared_ptr<string> defaultId_ {};
    // The primary agent key name.
    shared_ptr<string> mainKey_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The routing scope.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
