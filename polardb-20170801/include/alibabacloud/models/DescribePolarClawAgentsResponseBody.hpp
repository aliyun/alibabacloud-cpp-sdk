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
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Identity, identity_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Agents& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Identity, identity_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
        shared_ptr<string> avatar_ {};
        shared_ptr<string> avatarUrl_ {};
        shared_ptr<string> emoji_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> theme_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->identity_ == nullptr && this->name_ == nullptr; };
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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Agent ID
      shared_ptr<string> id_ {};
      shared_ptr<Agents::Identity> identity_ {};
      shared_ptr<string> name_ {};
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
    shared_ptr<vector<DescribePolarClawAgentsResponseBody::Agents>> agents_ {};
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> defaultId_ {};
    shared_ptr<string> mainKey_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
