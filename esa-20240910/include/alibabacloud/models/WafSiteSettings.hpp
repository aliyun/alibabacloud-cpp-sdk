// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AddBotProtectionHeaders, addBotProtectionHeaders_);
      DARABONBA_PTR_TO_JSON(AddSecurityHeaders, addSecurityHeaders_);
      DARABONBA_PTR_TO_JSON(BandwidthAbuseProtection, bandwidthAbuseProtection_);
      DARABONBA_PTR_TO_JSON(BotManagement, botManagement_);
      DARABONBA_PTR_TO_JSON(ClientIpIdentifier, clientIpIdentifier_);
      DARABONBA_PTR_TO_JSON(DisableSecurityModule, disableSecurityModule_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AddBotProtectionHeaders, addBotProtectionHeaders_);
      DARABONBA_PTR_FROM_JSON(AddSecurityHeaders, addSecurityHeaders_);
      DARABONBA_PTR_FROM_JSON(BandwidthAbuseProtection, bandwidthAbuseProtection_);
      DARABONBA_PTR_FROM_JSON(BotManagement, botManagement_);
      DARABONBA_PTR_FROM_JSON(ClientIpIdentifier, clientIpIdentifier_);
      DARABONBA_PTR_FROM_JSON(DisableSecurityModule, disableSecurityModule_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    WafSiteSettings() = default ;
    WafSiteSettings(const WafSiteSettings &) = default ;
    WafSiteSettings(WafSiteSettings &&) = default ;
    WafSiteSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettings() = default ;
    WafSiteSettings& operator=(const WafSiteSettings &) = default ;
    WafSiteSettings& operator=(WafSiteSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityLevel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityLevel& obj) { 
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityLevel& obj) { 
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SecurityLevel() = default ;
      SecurityLevel(const SecurityLevel &) = default ;
      SecurityLevel(SecurityLevel &&) = default ;
      SecurityLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityLevel() = default ;
      SecurityLevel& operator=(const SecurityLevel &) = default ;
      SecurityLevel& operator=(SecurityLevel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->value_ == nullptr; };
      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline SecurityLevel& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> value_ {};
    };

    class DisableSecurityModule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DisableSecurityModule& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DisableSecurityModule& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DisableSecurityModule() = default ;
      DisableSecurityModule(const DisableSecurityModule &) = default ;
      DisableSecurityModule(DisableSecurityModule &&) = default ;
      DisableSecurityModule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DisableSecurityModule() = default ;
      DisableSecurityModule& operator=(const DisableSecurityModule &) = default ;
      DisableSecurityModule& operator=(DisableSecurityModule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DisableSecurityModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> status_ {};
    };

    class ClientIpIdentifier : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientIpIdentifier& obj) { 
        DARABONBA_PTR_TO_JSON(Headers, headers_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
      };
      friend void from_json(const Darabonba::Json& j, ClientIpIdentifier& obj) { 
        DARABONBA_PTR_FROM_JSON(Headers, headers_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
      };
      ClientIpIdentifier() = default ;
      ClientIpIdentifier(const ClientIpIdentifier &) = default ;
      ClientIpIdentifier(ClientIpIdentifier &&) = default ;
      ClientIpIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientIpIdentifier() = default ;
      ClientIpIdentifier& operator=(const ClientIpIdentifier &) = default ;
      ClientIpIdentifier& operator=(ClientIpIdentifier &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->headers_ == nullptr
        && this->mode_ == nullptr; };
      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline const vector<string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, vector<string>) };
      inline vector<string> getHeaders() { DARABONBA_PTR_GET(headers_, vector<string>) };
      inline ClientIpIdentifier& setHeaders(const vector<string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
      inline ClientIpIdentifier& setHeaders(vector<string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ClientIpIdentifier& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    protected:
      shared_ptr<vector<string>> headers_ {};
      shared_ptr<string> mode_ {};
    };

    class BotManagement : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BotManagement& obj) { 
        DARABONBA_PTR_TO_JSON(DefiniteBots, definiteBots_);
        DARABONBA_PTR_TO_JSON(EffectOnStatic, effectOnStatic_);
        DARABONBA_PTR_TO_JSON(JSDetection, JSDetection_);
        DARABONBA_PTR_TO_JSON(LikelyBots, likelyBots_);
        DARABONBA_PTR_TO_JSON(VerifiedBots, verifiedBots_);
      };
      friend void from_json(const Darabonba::Json& j, BotManagement& obj) { 
        DARABONBA_PTR_FROM_JSON(DefiniteBots, definiteBots_);
        DARABONBA_PTR_FROM_JSON(EffectOnStatic, effectOnStatic_);
        DARABONBA_PTR_FROM_JSON(JSDetection, JSDetection_);
        DARABONBA_PTR_FROM_JSON(LikelyBots, likelyBots_);
        DARABONBA_PTR_FROM_JSON(VerifiedBots, verifiedBots_);
      };
      BotManagement() = default ;
      BotManagement(const BotManagement &) = default ;
      BotManagement(BotManagement &&) = default ;
      BotManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BotManagement() = default ;
      BotManagement& operator=(const BotManagement &) = default ;
      BotManagement& operator=(BotManagement &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VerifiedBots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VerifiedBots& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, VerifiedBots& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        VerifiedBots() = default ;
        VerifiedBots(const VerifiedBots &) = default ;
        VerifiedBots(VerifiedBots &&) = default ;
        VerifiedBots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VerifiedBots() = default ;
        VerifiedBots& operator=(const VerifiedBots &) = default ;
        VerifiedBots& operator=(VerifiedBots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline VerifiedBots& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline VerifiedBots& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int64_t> id_ {};
      };

      class LikelyBots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LikelyBots& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, LikelyBots& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        LikelyBots() = default ;
        LikelyBots(const LikelyBots &) = default ;
        LikelyBots(LikelyBots &&) = default ;
        LikelyBots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LikelyBots() = default ;
        LikelyBots& operator=(const LikelyBots &) = default ;
        LikelyBots& operator=(LikelyBots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline LikelyBots& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline LikelyBots& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int64_t> id_ {};
      };

      class JSDetection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JSDetection& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, JSDetection& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
        };
        JSDetection() = default ;
        JSDetection(const JSDetection &) = default ;
        JSDetection(JSDetection &&) = default ;
        JSDetection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JSDetection() = default ;
        JSDetection& operator=(const JSDetection &) = default ;
        JSDetection& operator=(JSDetection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline JSDetection& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        shared_ptr<bool> enable_ {};
      };

      class EffectOnStatic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EffectOnStatic& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, EffectOnStatic& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
        };
        EffectOnStatic() = default ;
        EffectOnStatic(const EffectOnStatic &) = default ;
        EffectOnStatic(EffectOnStatic &&) = default ;
        EffectOnStatic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EffectOnStatic() = default ;
        EffectOnStatic& operator=(const EffectOnStatic &) = default ;
        EffectOnStatic& operator=(EffectOnStatic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline EffectOnStatic& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        shared_ptr<bool> enable_ {};
      };

      class DefiniteBots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefiniteBots& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DefiniteBots& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        DefiniteBots() = default ;
        DefiniteBots(const DefiniteBots &) = default ;
        DefiniteBots(DefiniteBots &&) = default ;
        DefiniteBots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DefiniteBots() = default ;
        DefiniteBots& operator=(const DefiniteBots &) = default ;
        DefiniteBots& operator=(DefiniteBots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DefiniteBots& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DefiniteBots& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<int64_t> id_ {};
      };

      virtual bool empty() const override { return this->definiteBots_ == nullptr
        && this->effectOnStatic_ == nullptr && this->JSDetection_ == nullptr && this->likelyBots_ == nullptr && this->verifiedBots_ == nullptr; };
      // definiteBots Field Functions 
      bool hasDefiniteBots() const { return this->definiteBots_ != nullptr;};
      void deleteDefiniteBots() { this->definiteBots_ = nullptr;};
      inline const BotManagement::DefiniteBots & getDefiniteBots() const { DARABONBA_PTR_GET_CONST(definiteBots_, BotManagement::DefiniteBots) };
      inline BotManagement::DefiniteBots getDefiniteBots() { DARABONBA_PTR_GET(definiteBots_, BotManagement::DefiniteBots) };
      inline BotManagement& setDefiniteBots(const BotManagement::DefiniteBots & definiteBots) { DARABONBA_PTR_SET_VALUE(definiteBots_, definiteBots) };
      inline BotManagement& setDefiniteBots(BotManagement::DefiniteBots && definiteBots) { DARABONBA_PTR_SET_RVALUE(definiteBots_, definiteBots) };


      // effectOnStatic Field Functions 
      bool hasEffectOnStatic() const { return this->effectOnStatic_ != nullptr;};
      void deleteEffectOnStatic() { this->effectOnStatic_ = nullptr;};
      inline const BotManagement::EffectOnStatic & getEffectOnStatic() const { DARABONBA_PTR_GET_CONST(effectOnStatic_, BotManagement::EffectOnStatic) };
      inline BotManagement::EffectOnStatic getEffectOnStatic() { DARABONBA_PTR_GET(effectOnStatic_, BotManagement::EffectOnStatic) };
      inline BotManagement& setEffectOnStatic(const BotManagement::EffectOnStatic & effectOnStatic) { DARABONBA_PTR_SET_VALUE(effectOnStatic_, effectOnStatic) };
      inline BotManagement& setEffectOnStatic(BotManagement::EffectOnStatic && effectOnStatic) { DARABONBA_PTR_SET_RVALUE(effectOnStatic_, effectOnStatic) };


      // JSDetection Field Functions 
      bool hasJSDetection() const { return this->JSDetection_ != nullptr;};
      void deleteJSDetection() { this->JSDetection_ = nullptr;};
      inline const BotManagement::JSDetection & getJSDetection() const { DARABONBA_PTR_GET_CONST(JSDetection_, BotManagement::JSDetection) };
      inline BotManagement::JSDetection getJSDetection() { DARABONBA_PTR_GET(JSDetection_, BotManagement::JSDetection) };
      inline BotManagement& setJSDetection(const BotManagement::JSDetection & jSDetection) { DARABONBA_PTR_SET_VALUE(JSDetection_, jSDetection) };
      inline BotManagement& setJSDetection(BotManagement::JSDetection && jSDetection) { DARABONBA_PTR_SET_RVALUE(JSDetection_, jSDetection) };


      // likelyBots Field Functions 
      bool hasLikelyBots() const { return this->likelyBots_ != nullptr;};
      void deleteLikelyBots() { this->likelyBots_ = nullptr;};
      inline const BotManagement::LikelyBots & getLikelyBots() const { DARABONBA_PTR_GET_CONST(likelyBots_, BotManagement::LikelyBots) };
      inline BotManagement::LikelyBots getLikelyBots() { DARABONBA_PTR_GET(likelyBots_, BotManagement::LikelyBots) };
      inline BotManagement& setLikelyBots(const BotManagement::LikelyBots & likelyBots) { DARABONBA_PTR_SET_VALUE(likelyBots_, likelyBots) };
      inline BotManagement& setLikelyBots(BotManagement::LikelyBots && likelyBots) { DARABONBA_PTR_SET_RVALUE(likelyBots_, likelyBots) };


      // verifiedBots Field Functions 
      bool hasVerifiedBots() const { return this->verifiedBots_ != nullptr;};
      void deleteVerifiedBots() { this->verifiedBots_ = nullptr;};
      inline const BotManagement::VerifiedBots & getVerifiedBots() const { DARABONBA_PTR_GET_CONST(verifiedBots_, BotManagement::VerifiedBots) };
      inline BotManagement::VerifiedBots getVerifiedBots() { DARABONBA_PTR_GET(verifiedBots_, BotManagement::VerifiedBots) };
      inline BotManagement& setVerifiedBots(const BotManagement::VerifiedBots & verifiedBots) { DARABONBA_PTR_SET_VALUE(verifiedBots_, verifiedBots) };
      inline BotManagement& setVerifiedBots(BotManagement::VerifiedBots && verifiedBots) { DARABONBA_PTR_SET_RVALUE(verifiedBots_, verifiedBots) };


    protected:
      shared_ptr<BotManagement::DefiniteBots> definiteBots_ {};
      shared_ptr<BotManagement::EffectOnStatic> effectOnStatic_ {};
      shared_ptr<BotManagement::JSDetection> JSDetection_ {};
      shared_ptr<BotManagement::LikelyBots> likelyBots_ {};
      shared_ptr<BotManagement::VerifiedBots> verifiedBots_ {};
    };

    class BandwidthAbuseProtection : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BandwidthAbuseProtection& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, BandwidthAbuseProtection& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      BandwidthAbuseProtection() = default ;
      BandwidthAbuseProtection(const BandwidthAbuseProtection &) = default ;
      BandwidthAbuseProtection(BandwidthAbuseProtection &&) = default ;
      BandwidthAbuseProtection(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BandwidthAbuseProtection() = default ;
      BandwidthAbuseProtection& operator=(const BandwidthAbuseProtection &) = default ;
      BandwidthAbuseProtection& operator=(BandwidthAbuseProtection &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline BandwidthAbuseProtection& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BandwidthAbuseProtection& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BandwidthAbuseProtection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> status_ {};
    };

    class AddSecurityHeaders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddSecurityHeaders& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, AddSecurityHeaders& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      AddSecurityHeaders() = default ;
      AddSecurityHeaders(const AddSecurityHeaders &) = default ;
      AddSecurityHeaders(AddSecurityHeaders &&) = default ;
      AddSecurityHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddSecurityHeaders() = default ;
      AddSecurityHeaders& operator=(const AddSecurityHeaders &) = default ;
      AddSecurityHeaders& operator=(AddSecurityHeaders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AddSecurityHeaders& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      shared_ptr<bool> enable_ {};
    };

    class AddBotProtectionHeaders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddBotProtectionHeaders& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, AddBotProtectionHeaders& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      AddBotProtectionHeaders() = default ;
      AddBotProtectionHeaders(const AddBotProtectionHeaders &) = default ;
      AddBotProtectionHeaders(AddBotProtectionHeaders &&) = default ;
      AddBotProtectionHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddBotProtectionHeaders() = default ;
      AddBotProtectionHeaders& operator=(const AddBotProtectionHeaders &) = default ;
      AddBotProtectionHeaders& operator=(AddBotProtectionHeaders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AddBotProtectionHeaders& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->addBotProtectionHeaders_ == nullptr
        && this->addSecurityHeaders_ == nullptr && this->bandwidthAbuseProtection_ == nullptr && this->botManagement_ == nullptr && this->clientIpIdentifier_ == nullptr && this->disableSecurityModule_ == nullptr
        && this->securityLevel_ == nullptr; };
    // addBotProtectionHeaders Field Functions 
    bool hasAddBotProtectionHeaders() const { return this->addBotProtectionHeaders_ != nullptr;};
    void deleteAddBotProtectionHeaders() { this->addBotProtectionHeaders_ = nullptr;};
    inline const WafSiteSettings::AddBotProtectionHeaders & getAddBotProtectionHeaders() const { DARABONBA_PTR_GET_CONST(addBotProtectionHeaders_, WafSiteSettings::AddBotProtectionHeaders) };
    inline WafSiteSettings::AddBotProtectionHeaders getAddBotProtectionHeaders() { DARABONBA_PTR_GET(addBotProtectionHeaders_, WafSiteSettings::AddBotProtectionHeaders) };
    inline WafSiteSettings& setAddBotProtectionHeaders(const WafSiteSettings::AddBotProtectionHeaders & addBotProtectionHeaders) { DARABONBA_PTR_SET_VALUE(addBotProtectionHeaders_, addBotProtectionHeaders) };
    inline WafSiteSettings& setAddBotProtectionHeaders(WafSiteSettings::AddBotProtectionHeaders && addBotProtectionHeaders) { DARABONBA_PTR_SET_RVALUE(addBotProtectionHeaders_, addBotProtectionHeaders) };


    // addSecurityHeaders Field Functions 
    bool hasAddSecurityHeaders() const { return this->addSecurityHeaders_ != nullptr;};
    void deleteAddSecurityHeaders() { this->addSecurityHeaders_ = nullptr;};
    inline const WafSiteSettings::AddSecurityHeaders & getAddSecurityHeaders() const { DARABONBA_PTR_GET_CONST(addSecurityHeaders_, WafSiteSettings::AddSecurityHeaders) };
    inline WafSiteSettings::AddSecurityHeaders getAddSecurityHeaders() { DARABONBA_PTR_GET(addSecurityHeaders_, WafSiteSettings::AddSecurityHeaders) };
    inline WafSiteSettings& setAddSecurityHeaders(const WafSiteSettings::AddSecurityHeaders & addSecurityHeaders) { DARABONBA_PTR_SET_VALUE(addSecurityHeaders_, addSecurityHeaders) };
    inline WafSiteSettings& setAddSecurityHeaders(WafSiteSettings::AddSecurityHeaders && addSecurityHeaders) { DARABONBA_PTR_SET_RVALUE(addSecurityHeaders_, addSecurityHeaders) };


    // bandwidthAbuseProtection Field Functions 
    bool hasBandwidthAbuseProtection() const { return this->bandwidthAbuseProtection_ != nullptr;};
    void deleteBandwidthAbuseProtection() { this->bandwidthAbuseProtection_ = nullptr;};
    inline const WafSiteSettings::BandwidthAbuseProtection & getBandwidthAbuseProtection() const { DARABONBA_PTR_GET_CONST(bandwidthAbuseProtection_, WafSiteSettings::BandwidthAbuseProtection) };
    inline WafSiteSettings::BandwidthAbuseProtection getBandwidthAbuseProtection() { DARABONBA_PTR_GET(bandwidthAbuseProtection_, WafSiteSettings::BandwidthAbuseProtection) };
    inline WafSiteSettings& setBandwidthAbuseProtection(const WafSiteSettings::BandwidthAbuseProtection & bandwidthAbuseProtection) { DARABONBA_PTR_SET_VALUE(bandwidthAbuseProtection_, bandwidthAbuseProtection) };
    inline WafSiteSettings& setBandwidthAbuseProtection(WafSiteSettings::BandwidthAbuseProtection && bandwidthAbuseProtection) { DARABONBA_PTR_SET_RVALUE(bandwidthAbuseProtection_, bandwidthAbuseProtection) };


    // botManagement Field Functions 
    bool hasBotManagement() const { return this->botManagement_ != nullptr;};
    void deleteBotManagement() { this->botManagement_ = nullptr;};
    inline const WafSiteSettings::BotManagement & getBotManagement() const { DARABONBA_PTR_GET_CONST(botManagement_, WafSiteSettings::BotManagement) };
    inline WafSiteSettings::BotManagement getBotManagement() { DARABONBA_PTR_GET(botManagement_, WafSiteSettings::BotManagement) };
    inline WafSiteSettings& setBotManagement(const WafSiteSettings::BotManagement & botManagement) { DARABONBA_PTR_SET_VALUE(botManagement_, botManagement) };
    inline WafSiteSettings& setBotManagement(WafSiteSettings::BotManagement && botManagement) { DARABONBA_PTR_SET_RVALUE(botManagement_, botManagement) };


    // clientIpIdentifier Field Functions 
    bool hasClientIpIdentifier() const { return this->clientIpIdentifier_ != nullptr;};
    void deleteClientIpIdentifier() { this->clientIpIdentifier_ = nullptr;};
    inline const WafSiteSettings::ClientIpIdentifier & getClientIpIdentifier() const { DARABONBA_PTR_GET_CONST(clientIpIdentifier_, WafSiteSettings::ClientIpIdentifier) };
    inline WafSiteSettings::ClientIpIdentifier getClientIpIdentifier() { DARABONBA_PTR_GET(clientIpIdentifier_, WafSiteSettings::ClientIpIdentifier) };
    inline WafSiteSettings& setClientIpIdentifier(const WafSiteSettings::ClientIpIdentifier & clientIpIdentifier) { DARABONBA_PTR_SET_VALUE(clientIpIdentifier_, clientIpIdentifier) };
    inline WafSiteSettings& setClientIpIdentifier(WafSiteSettings::ClientIpIdentifier && clientIpIdentifier) { DARABONBA_PTR_SET_RVALUE(clientIpIdentifier_, clientIpIdentifier) };


    // disableSecurityModule Field Functions 
    bool hasDisableSecurityModule() const { return this->disableSecurityModule_ != nullptr;};
    void deleteDisableSecurityModule() { this->disableSecurityModule_ = nullptr;};
    inline const WafSiteSettings::DisableSecurityModule & getDisableSecurityModule() const { DARABONBA_PTR_GET_CONST(disableSecurityModule_, WafSiteSettings::DisableSecurityModule) };
    inline WafSiteSettings::DisableSecurityModule getDisableSecurityModule() { DARABONBA_PTR_GET(disableSecurityModule_, WafSiteSettings::DisableSecurityModule) };
    inline WafSiteSettings& setDisableSecurityModule(const WafSiteSettings::DisableSecurityModule & disableSecurityModule) { DARABONBA_PTR_SET_VALUE(disableSecurityModule_, disableSecurityModule) };
    inline WafSiteSettings& setDisableSecurityModule(WafSiteSettings::DisableSecurityModule && disableSecurityModule) { DARABONBA_PTR_SET_RVALUE(disableSecurityModule_, disableSecurityModule) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline const WafSiteSettings::SecurityLevel & getSecurityLevel() const { DARABONBA_PTR_GET_CONST(securityLevel_, WafSiteSettings::SecurityLevel) };
    inline WafSiteSettings::SecurityLevel getSecurityLevel() { DARABONBA_PTR_GET(securityLevel_, WafSiteSettings::SecurityLevel) };
    inline WafSiteSettings& setSecurityLevel(const WafSiteSettings::SecurityLevel & securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };
    inline WafSiteSettings& setSecurityLevel(WafSiteSettings::SecurityLevel && securityLevel) { DARABONBA_PTR_SET_RVALUE(securityLevel_, securityLevel) };


  protected:
    shared_ptr<WafSiteSettings::AddBotProtectionHeaders> addBotProtectionHeaders_ {};
    shared_ptr<WafSiteSettings::AddSecurityHeaders> addSecurityHeaders_ {};
    shared_ptr<WafSiteSettings::BandwidthAbuseProtection> bandwidthAbuseProtection_ {};
    shared_ptr<WafSiteSettings::BotManagement> botManagement_ {};
    shared_ptr<WafSiteSettings::ClientIpIdentifier> clientIpIdentifier_ {};
    shared_ptr<WafSiteSettings::DisableSecurityModule> disableSecurityModule_ {};
    shared_ptr<WafSiteSettings::SecurityLevel> securityLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
