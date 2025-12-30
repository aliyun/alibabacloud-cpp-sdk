// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONZONEEFFECTIVESCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONZONEEFFECTIVESCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionZoneEffectiveScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionZoneEffectiveScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionZoneEffectiveScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EffectiveScopes, effectiveScopes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateRecursionZoneEffectiveScopeRequest() = default ;
    UpdateRecursionZoneEffectiveScopeRequest(const UpdateRecursionZoneEffectiveScopeRequest &) = default ;
    UpdateRecursionZoneEffectiveScopeRequest(UpdateRecursionZoneEffectiveScopeRequest &&) = default ;
    UpdateRecursionZoneEffectiveScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionZoneEffectiveScopeRequest() = default ;
    UpdateRecursionZoneEffectiveScopeRequest& operator=(const UpdateRecursionZoneEffectiveScopeRequest &) = default ;
    UpdateRecursionZoneEffectiveScopeRequest& operator=(UpdateRecursionZoneEffectiveScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EffectiveScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectiveScopes& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, EffectiveScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
      };
      EffectiveScopes() = default ;
      EffectiveScopes(const EffectiveScopes &) = default ;
      EffectiveScopes(EffectiveScopes &&) = default ;
      EffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectiveScopes() = default ;
      EffectiveScopes& operator=(const EffectiveScopes &) = default ;
      EffectiveScopes& operator=(EffectiveScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->effectiveType_ == nullptr
        && this->scope_ == nullptr; };
      // effectiveType Field Functions 
      bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
      void deleteEffectiveType() { this->effectiveType_ = nullptr;};
      inline string getEffectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
      inline EffectiveScopes& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline const vector<string> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
      inline vector<string> getScope() { DARABONBA_PTR_GET(scope_, vector<string>) };
      inline EffectiveScopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
      inline EffectiveScopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    protected:
      shared_ptr<string> effectiveType_ {};
      shared_ptr<vector<string>> scope_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->effectiveScopes_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionZoneEffectiveScopeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // effectiveScopes Field Functions 
    bool hasEffectiveScopes() const { return this->effectiveScopes_ != nullptr;};
    void deleteEffectiveScopes() { this->effectiveScopes_ = nullptr;};
    inline const vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes> & getEffectiveScopes() const { DARABONBA_PTR_GET_CONST(effectiveScopes_, vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes>) };
    inline vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes> getEffectiveScopes() { DARABONBA_PTR_GET(effectiveScopes_, vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes>) };
    inline UpdateRecursionZoneEffectiveScopeRequest& setEffectiveScopes(const vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes> & effectiveScopes) { DARABONBA_PTR_SET_VALUE(effectiveScopes_, effectiveScopes) };
    inline UpdateRecursionZoneEffectiveScopeRequest& setEffectiveScopes(vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes> && effectiveScopes) { DARABONBA_PTR_SET_RVALUE(effectiveScopes_, effectiveScopes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateRecursionZoneEffectiveScopeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<UpdateRecursionZoneEffectiveScopeRequest::EffectiveScopes>> effectiveScopes_ {};
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
