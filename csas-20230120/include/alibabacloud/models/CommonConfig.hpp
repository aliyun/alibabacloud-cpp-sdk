// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Idp, idp_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Idp, idp_);
    };
    CommonConfig() = default ;
    CommonConfig(const CommonConfig &) = default ;
    CommonConfig(CommonConfig &&) = default ;
    CommonConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfig() = default ;
    CommonConfig& operator=(const CommonConfig &) = default ;
    CommonConfig& operator=(CommonConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Idp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Idp& obj) { 
        DARABONBA_PTR_TO_JSON(ApOidcCallbackUrl, apOidcCallbackUrl_);
        DARABONBA_PTR_TO_JSON(Dingtalk, dingtalk_);
        DARABONBA_PTR_TO_JSON(Feishu, feishu_);
        DARABONBA_PTR_TO_JSON(Idaas2, idaas2_);
        DARABONBA_PTR_TO_JSON(Saml, saml_);
      };
      friend void from_json(const Darabonba::Json& j, Idp& obj) { 
        DARABONBA_PTR_FROM_JSON(ApOidcCallbackUrl, apOidcCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(Dingtalk, dingtalk_);
        DARABONBA_PTR_FROM_JSON(Feishu, feishu_);
        DARABONBA_PTR_FROM_JSON(Idaas2, idaas2_);
        DARABONBA_PTR_FROM_JSON(Saml, saml_);
      };
      Idp() = default ;
      Idp(const Idp &) = default ;
      Idp(Idp &&) = default ;
      Idp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Idp() = default ;
      Idp& operator=(const Idp &) = default ;
      Idp& operator=(Idp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Saml : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Saml& obj) { 
          DARABONBA_PTR_TO_JSON(Acs, acs_);
          DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        };
        friend void from_json(const Darabonba::Json& j, Saml& obj) { 
          DARABONBA_PTR_FROM_JSON(Acs, acs_);
          DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        };
        Saml() = default ;
        Saml(const Saml &) = default ;
        Saml(Saml &&) = default ;
        Saml(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Saml() = default ;
        Saml& operator=(const Saml &) = default ;
        Saml& operator=(Saml &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acs_ == nullptr
        && this->metadata_ == nullptr; };
        // acs Field Functions 
        bool hasAcs() const { return this->acs_ != nullptr;};
        void deleteAcs() { this->acs_ = nullptr;};
        inline string getAcs() const { DARABONBA_PTR_GET_DEFAULT(acs_, "") };
        inline Saml& setAcs(string acs) { DARABONBA_PTR_SET_VALUE(acs_, acs) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
        inline Saml& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


      protected:
        shared_ptr<string> acs_ {};
        shared_ptr<string> metadata_ {};
      };

      class Idaas2 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Idaas2& obj) { 
          DARABONBA_PTR_TO_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
        };
        friend void from_json(const Darabonba::Json& j, Idaas2& obj) { 
          DARABONBA_PTR_FROM_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
        };
        Idaas2() = default ;
        Idaas2(const Idaas2 &) = default ;
        Idaas2(Idaas2 &&) = default ;
        Idaas2(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Idaas2() = default ;
        Idaas2& operator=(const Idaas2 &) = default ;
        Idaas2& operator=(Idaas2 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCallbackBase_ == nullptr
        && this->eventLabel_ == nullptr; };
        // eventCallbackBase Field Functions 
        bool hasEventCallbackBase() const { return this->eventCallbackBase_ != nullptr;};
        void deleteEventCallbackBase() { this->eventCallbackBase_ = nullptr;};
        inline string getEventCallbackBase() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackBase_, "") };
        inline Idaas2& setEventCallbackBase(string eventCallbackBase) { DARABONBA_PTR_SET_VALUE(eventCallbackBase_, eventCallbackBase) };


        // eventLabel Field Functions 
        bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
        void deleteEventLabel() { this->eventLabel_ = nullptr;};
        inline string getEventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
        inline Idaas2& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


      protected:
        shared_ptr<string> eventCallbackBase_ {};
        shared_ptr<string> eventLabel_ {};
      };

      class Feishu : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Feishu& obj) { 
          DARABONBA_PTR_TO_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
          DARABONBA_PTR_TO_JSON(HomePage, homePage_);
          DARABONBA_PTR_TO_JSON(LoginRedirect, loginRedirect_);
        };
        friend void from_json(const Darabonba::Json& j, Feishu& obj) { 
          DARABONBA_PTR_FROM_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
          DARABONBA_PTR_FROM_JSON(HomePage, homePage_);
          DARABONBA_PTR_FROM_JSON(LoginRedirect, loginRedirect_);
        };
        Feishu() = default ;
        Feishu(const Feishu &) = default ;
        Feishu(Feishu &&) = default ;
        Feishu(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Feishu() = default ;
        Feishu& operator=(const Feishu &) = default ;
        Feishu& operator=(Feishu &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCallbackBase_ == nullptr
        && this->eventLabel_ == nullptr && this->homePage_ == nullptr && this->loginRedirect_ == nullptr; };
        // eventCallbackBase Field Functions 
        bool hasEventCallbackBase() const { return this->eventCallbackBase_ != nullptr;};
        void deleteEventCallbackBase() { this->eventCallbackBase_ = nullptr;};
        inline string getEventCallbackBase() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackBase_, "") };
        inline Feishu& setEventCallbackBase(string eventCallbackBase) { DARABONBA_PTR_SET_VALUE(eventCallbackBase_, eventCallbackBase) };


        // eventLabel Field Functions 
        bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
        void deleteEventLabel() { this->eventLabel_ = nullptr;};
        inline string getEventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
        inline Feishu& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


        // homePage Field Functions 
        bool hasHomePage() const { return this->homePage_ != nullptr;};
        void deleteHomePage() { this->homePage_ = nullptr;};
        inline string getHomePage() const { DARABONBA_PTR_GET_DEFAULT(homePage_, "") };
        inline Feishu& setHomePage(string homePage) { DARABONBA_PTR_SET_VALUE(homePage_, homePage) };


        // loginRedirect Field Functions 
        bool hasLoginRedirect() const { return this->loginRedirect_ != nullptr;};
        void deleteLoginRedirect() { this->loginRedirect_ = nullptr;};
        inline string getLoginRedirect() const { DARABONBA_PTR_GET_DEFAULT(loginRedirect_, "") };
        inline Feishu& setLoginRedirect(string loginRedirect) { DARABONBA_PTR_SET_VALUE(loginRedirect_, loginRedirect) };


      protected:
        shared_ptr<string> eventCallbackBase_ {};
        shared_ptr<string> eventLabel_ {};
        shared_ptr<string> homePage_ {};
        shared_ptr<string> loginRedirect_ {};
      };

      class Dingtalk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dingtalk& obj) { 
          DARABONBA_PTR_TO_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_TO_JSON(EventLabel, eventLabel_);
          DARABONBA_PTR_TO_JSON(HomePage, homePage_);
          DARABONBA_PTR_TO_JSON(LoginRedirect, loginRedirect_);
        };
        friend void from_json(const Darabonba::Json& j, Dingtalk& obj) { 
          DARABONBA_PTR_FROM_JSON(EventCallbackBase, eventCallbackBase_);
          DARABONBA_PTR_FROM_JSON(EventLabel, eventLabel_);
          DARABONBA_PTR_FROM_JSON(HomePage, homePage_);
          DARABONBA_PTR_FROM_JSON(LoginRedirect, loginRedirect_);
        };
        Dingtalk() = default ;
        Dingtalk(const Dingtalk &) = default ;
        Dingtalk(Dingtalk &&) = default ;
        Dingtalk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dingtalk() = default ;
        Dingtalk& operator=(const Dingtalk &) = default ;
        Dingtalk& operator=(Dingtalk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventCallbackBase_ == nullptr
        && this->eventLabel_ == nullptr && this->homePage_ == nullptr && this->loginRedirect_ == nullptr; };
        // eventCallbackBase Field Functions 
        bool hasEventCallbackBase() const { return this->eventCallbackBase_ != nullptr;};
        void deleteEventCallbackBase() { this->eventCallbackBase_ = nullptr;};
        inline string getEventCallbackBase() const { DARABONBA_PTR_GET_DEFAULT(eventCallbackBase_, "") };
        inline Dingtalk& setEventCallbackBase(string eventCallbackBase) { DARABONBA_PTR_SET_VALUE(eventCallbackBase_, eventCallbackBase) };


        // eventLabel Field Functions 
        bool hasEventLabel() const { return this->eventLabel_ != nullptr;};
        void deleteEventLabel() { this->eventLabel_ = nullptr;};
        inline string getEventLabel() const { DARABONBA_PTR_GET_DEFAULT(eventLabel_, "") };
        inline Dingtalk& setEventLabel(string eventLabel) { DARABONBA_PTR_SET_VALUE(eventLabel_, eventLabel) };


        // homePage Field Functions 
        bool hasHomePage() const { return this->homePage_ != nullptr;};
        void deleteHomePage() { this->homePage_ = nullptr;};
        inline string getHomePage() const { DARABONBA_PTR_GET_DEFAULT(homePage_, "") };
        inline Dingtalk& setHomePage(string homePage) { DARABONBA_PTR_SET_VALUE(homePage_, homePage) };


        // loginRedirect Field Functions 
        bool hasLoginRedirect() const { return this->loginRedirect_ != nullptr;};
        void deleteLoginRedirect() { this->loginRedirect_ = nullptr;};
        inline string getLoginRedirect() const { DARABONBA_PTR_GET_DEFAULT(loginRedirect_, "") };
        inline Dingtalk& setLoginRedirect(string loginRedirect) { DARABONBA_PTR_SET_VALUE(loginRedirect_, loginRedirect) };


      protected:
        shared_ptr<string> eventCallbackBase_ {};
        shared_ptr<string> eventLabel_ {};
        shared_ptr<string> homePage_ {};
        shared_ptr<string> loginRedirect_ {};
      };

      virtual bool empty() const override { return this->apOidcCallbackUrl_ == nullptr
        && this->dingtalk_ == nullptr && this->feishu_ == nullptr && this->idaas2_ == nullptr && this->saml_ == nullptr; };
      // apOidcCallbackUrl Field Functions 
      bool hasApOidcCallbackUrl() const { return this->apOidcCallbackUrl_ != nullptr;};
      void deleteApOidcCallbackUrl() { this->apOidcCallbackUrl_ = nullptr;};
      inline string getApOidcCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(apOidcCallbackUrl_, "") };
      inline Idp& setApOidcCallbackUrl(string apOidcCallbackUrl) { DARABONBA_PTR_SET_VALUE(apOidcCallbackUrl_, apOidcCallbackUrl) };


      // dingtalk Field Functions 
      bool hasDingtalk() const { return this->dingtalk_ != nullptr;};
      void deleteDingtalk() { this->dingtalk_ = nullptr;};
      inline const Idp::Dingtalk & getDingtalk() const { DARABONBA_PTR_GET_CONST(dingtalk_, Idp::Dingtalk) };
      inline Idp::Dingtalk getDingtalk() { DARABONBA_PTR_GET(dingtalk_, Idp::Dingtalk) };
      inline Idp& setDingtalk(const Idp::Dingtalk & dingtalk) { DARABONBA_PTR_SET_VALUE(dingtalk_, dingtalk) };
      inline Idp& setDingtalk(Idp::Dingtalk && dingtalk) { DARABONBA_PTR_SET_RVALUE(dingtalk_, dingtalk) };


      // feishu Field Functions 
      bool hasFeishu() const { return this->feishu_ != nullptr;};
      void deleteFeishu() { this->feishu_ = nullptr;};
      inline const Idp::Feishu & getFeishu() const { DARABONBA_PTR_GET_CONST(feishu_, Idp::Feishu) };
      inline Idp::Feishu getFeishu() { DARABONBA_PTR_GET(feishu_, Idp::Feishu) };
      inline Idp& setFeishu(const Idp::Feishu & feishu) { DARABONBA_PTR_SET_VALUE(feishu_, feishu) };
      inline Idp& setFeishu(Idp::Feishu && feishu) { DARABONBA_PTR_SET_RVALUE(feishu_, feishu) };


      // idaas2 Field Functions 
      bool hasIdaas2() const { return this->idaas2_ != nullptr;};
      void deleteIdaas2() { this->idaas2_ = nullptr;};
      inline const Idp::Idaas2 & getIdaas2() const { DARABONBA_PTR_GET_CONST(idaas2_, Idp::Idaas2) };
      inline Idp::Idaas2 getIdaas2() { DARABONBA_PTR_GET(idaas2_, Idp::Idaas2) };
      inline Idp& setIdaas2(const Idp::Idaas2 & idaas2) { DARABONBA_PTR_SET_VALUE(idaas2_, idaas2) };
      inline Idp& setIdaas2(Idp::Idaas2 && idaas2) { DARABONBA_PTR_SET_RVALUE(idaas2_, idaas2) };


      // saml Field Functions 
      bool hasSaml() const { return this->saml_ != nullptr;};
      void deleteSaml() { this->saml_ = nullptr;};
      inline const Idp::Saml & getSaml() const { DARABONBA_PTR_GET_CONST(saml_, Idp::Saml) };
      inline Idp::Saml getSaml() { DARABONBA_PTR_GET(saml_, Idp::Saml) };
      inline Idp& setSaml(const Idp::Saml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
      inline Idp& setSaml(Idp::Saml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


    protected:
      shared_ptr<string> apOidcCallbackUrl_ {};
      shared_ptr<Idp::Dingtalk> dingtalk_ {};
      shared_ptr<Idp::Feishu> feishu_ {};
      shared_ptr<Idp::Idaas2> idaas2_ {};
      shared_ptr<Idp::Saml> saml_ {};
    };

    virtual bool empty() const override { return this->idp_ == nullptr; };
    // idp Field Functions 
    bool hasIdp() const { return this->idp_ != nullptr;};
    void deleteIdp() { this->idp_ = nullptr;};
    inline const CommonConfig::Idp & getIdp() const { DARABONBA_PTR_GET_CONST(idp_, CommonConfig::Idp) };
    inline CommonConfig::Idp getIdp() { DARABONBA_PTR_GET(idp_, CommonConfig::Idp) };
    inline CommonConfig& setIdp(const CommonConfig::Idp & idp) { DARABONBA_PTR_SET_VALUE(idp_, idp) };
    inline CommonConfig& setIdp(CommonConfig::Idp && idp) { DARABONBA_PTR_SET_RVALUE(idp_, idp) };


  protected:
    shared_ptr<CommonConfig::Idp> idp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
