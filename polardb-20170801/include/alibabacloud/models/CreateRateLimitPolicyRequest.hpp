// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERATELIMITPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERATELIMITPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateRateLimitPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRateLimitPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RateLimitRpm, rateLimitRpm_);
      DARABONBA_PTR_TO_JSON(RateLimitTpm, rateLimitTpm_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScopeRefId, scopeRefId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRateLimitPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RateLimitRpm, rateLimitRpm_);
      DARABONBA_PTR_FROM_JSON(RateLimitTpm, rateLimitTpm_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScopeRefId, scopeRefId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    CreateRateLimitPolicyRequest() = default ;
    CreateRateLimitPolicyRequest(const CreateRateLimitPolicyRequest &) = default ;
    CreateRateLimitPolicyRequest(CreateRateLimitPolicyRequest &&) = default ;
    CreateRateLimitPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRateLimitPolicyRequest() = default ;
    CreateRateLimitPolicyRequest& operator=(const CreateRateLimitPolicyRequest &) = default ;
    CreateRateLimitPolicyRequest& operator=(CreateRateLimitPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gwClusterId_ == nullptr
        && this->rateLimitRpm_ == nullptr && this->rateLimitTpm_ == nullptr && this->regionId_ == nullptr && this->scopeRefId_ == nullptr && this->scopeType_ == nullptr; };
    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateRateLimitPolicyRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // rateLimitRpm Field Functions 
    bool hasRateLimitRpm() const { return this->rateLimitRpm_ != nullptr;};
    void deleteRateLimitRpm() { this->rateLimitRpm_ = nullptr;};
    inline string getRateLimitRpm() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRpm_, "") };
    inline CreateRateLimitPolicyRequest& setRateLimitRpm(string rateLimitRpm) { DARABONBA_PTR_SET_VALUE(rateLimitRpm_, rateLimitRpm) };


    // rateLimitTpm Field Functions 
    bool hasRateLimitTpm() const { return this->rateLimitTpm_ != nullptr;};
    void deleteRateLimitTpm() { this->rateLimitTpm_ = nullptr;};
    inline string getRateLimitTpm() const { DARABONBA_PTR_GET_DEFAULT(rateLimitTpm_, "") };
    inline CreateRateLimitPolicyRequest& setRateLimitTpm(string rateLimitTpm) { DARABONBA_PTR_SET_VALUE(rateLimitTpm_, rateLimitTpm) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRateLimitPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scopeRefId Field Functions 
    bool hasScopeRefId() const { return this->scopeRefId_ != nullptr;};
    void deleteScopeRefId() { this->scopeRefId_ = nullptr;};
    inline string getScopeRefId() const { DARABONBA_PTR_GET_DEFAULT(scopeRefId_, "") };
    inline CreateRateLimitPolicyRequest& setScopeRefId(string scopeRefId) { DARABONBA_PTR_SET_VALUE(scopeRefId_, scopeRefId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline CreateRateLimitPolicyRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // This parameter is required.
    shared_ptr<string> rateLimitRpm_ {};
    // This parameter is required.
    shared_ptr<string> rateLimitTpm_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> scopeRefId_ {};
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
