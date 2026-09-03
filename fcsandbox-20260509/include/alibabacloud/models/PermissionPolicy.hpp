// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_PERMISSIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PermissionPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PermissionPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(allow, allow_);
      DARABONBA_PTR_TO_JSON(catalogVersion, catalogVersion_);
      DARABONBA_PTR_TO_JSON(deny, deny_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
    };
    friend void from_json(const Darabonba::Json& j, PermissionPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(allow, allow_);
      DARABONBA_PTR_FROM_JSON(catalogVersion, catalogVersion_);
      DARABONBA_PTR_FROM_JSON(deny, deny_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
    };
    PermissionPolicy() = default ;
    PermissionPolicy(const PermissionPolicy &) = default ;
    PermissionPolicy(PermissionPolicy &&) = default ;
    PermissionPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PermissionPolicy() = default ;
    PermissionPolicy& operator=(const PermissionPolicy &) = default ;
    PermissionPolicy& operator=(PermissionPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Deny : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Deny& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
      };
      friend void from_json(const Darabonba::Json& j, Deny& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
      };
      Deny() = default ;
      Deny(const Deny &) = default ;
      Deny(Deny &&) = default ;
      Deny(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Deny() = default ;
      Deny& operator=(const Deny &) = default ;
      Deny& operator=(Deny &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actions_ == nullptr
        && this->capabilities_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
      inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
      inline Deny& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Deny& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
      inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
      inline Deny& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Deny& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    protected:
      // The actions.
      shared_ptr<vector<string>> actions_ {};
      // The capabilities.
      shared_ptr<vector<string>> capabilities_ {};
    };

    class Allow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Allow& obj) { 
        DARABONBA_PTR_TO_JSON(actions, actions_);
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
      };
      friend void from_json(const Darabonba::Json& j, Allow& obj) { 
        DARABONBA_PTR_FROM_JSON(actions, actions_);
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
      };
      Allow() = default ;
      Allow(const Allow &) = default ;
      Allow(Allow &&) = default ;
      Allow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Allow() = default ;
      Allow& operator=(const Allow &) = default ;
      Allow& operator=(Allow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actions_ == nullptr
        && this->capabilities_ == nullptr; };
      // actions Field Functions 
      bool hasActions() const { return this->actions_ != nullptr;};
      void deleteActions() { this->actions_ = nullptr;};
      inline const vector<string> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<string>) };
      inline vector<string> getActions() { DARABONBA_PTR_GET(actions_, vector<string>) };
      inline Allow& setActions(const vector<string> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
      inline Allow& setActions(vector<string> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
      inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
      inline Allow& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Allow& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    protected:
      // The actions.
      shared_ptr<vector<string>> actions_ {};
      // The capabilities.
      shared_ptr<vector<string>> capabilities_ {};
    };

    virtual bool empty() const override { return this->allow_ == nullptr
        && this->catalogVersion_ == nullptr && this->deny_ == nullptr && this->schemaVersion_ == nullptr; };
    // allow Field Functions 
    bool hasAllow() const { return this->allow_ != nullptr;};
    void deleteAllow() { this->allow_ = nullptr;};
    inline const PermissionPolicy::Allow & getAllow() const { DARABONBA_PTR_GET_CONST(allow_, PermissionPolicy::Allow) };
    inline PermissionPolicy::Allow getAllow() { DARABONBA_PTR_GET(allow_, PermissionPolicy::Allow) };
    inline PermissionPolicy& setAllow(const PermissionPolicy::Allow & allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };
    inline PermissionPolicy& setAllow(PermissionPolicy::Allow && allow) { DARABONBA_PTR_SET_RVALUE(allow_, allow) };


    // catalogVersion Field Functions 
    bool hasCatalogVersion() const { return this->catalogVersion_ != nullptr;};
    void deleteCatalogVersion() { this->catalogVersion_ = nullptr;};
    inline int64_t getCatalogVersion() const { DARABONBA_PTR_GET_DEFAULT(catalogVersion_, 0L) };
    inline PermissionPolicy& setCatalogVersion(int64_t catalogVersion) { DARABONBA_PTR_SET_VALUE(catalogVersion_, catalogVersion) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline const PermissionPolicy::Deny & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, PermissionPolicy::Deny) };
    inline PermissionPolicy::Deny getDeny() { DARABONBA_PTR_GET(deny_, PermissionPolicy::Deny) };
    inline PermissionPolicy& setDeny(const PermissionPolicy::Deny & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
    inline PermissionPolicy& setDeny(PermissionPolicy::Deny && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline int64_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0L) };
    inline PermissionPolicy& setSchemaVersion(int64_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


  protected:
    // The allow policy.
    shared_ptr<PermissionPolicy::Allow> allow_ {};
    // catalog version
    shared_ptr<int64_t> catalogVersion_ {};
    // The deny policy.
    shared_ptr<PermissionPolicy::Deny> deny_ {};
    // schema version
    shared_ptr<int64_t> schemaVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
