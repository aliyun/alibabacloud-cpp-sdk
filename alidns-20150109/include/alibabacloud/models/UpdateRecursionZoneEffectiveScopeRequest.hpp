// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONZONEEFFECTIVESCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONZONEEFFECTIVESCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes.hpp>
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
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->effectiveScopes_ != nullptr && this->zoneId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionZoneEffectiveScopeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // effectiveScopes Field Functions 
    bool hasEffectiveScopes() const { return this->effectiveScopes_ != nullptr;};
    void deleteEffectiveScopes() { this->effectiveScopes_ = nullptr;};
    inline const vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes> & effectiveScopes() const { DARABONBA_PTR_GET_CONST(effectiveScopes_, vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes>) };
    inline vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes> effectiveScopes() { DARABONBA_PTR_GET(effectiveScopes_, vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes>) };
    inline UpdateRecursionZoneEffectiveScopeRequest& setEffectiveScopes(const vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes> & effectiveScopes) { DARABONBA_PTR_SET_VALUE(effectiveScopes_, effectiveScopes) };
    inline UpdateRecursionZoneEffectiveScopeRequest& setEffectiveScopes(vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes> && effectiveScopes) { DARABONBA_PTR_SET_RVALUE(effectiveScopes_, effectiveScopes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateRecursionZoneEffectiveScopeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<UpdateRecursionZoneEffectiveScopeRequestEffectiveScopes>> effectiveScopes_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
