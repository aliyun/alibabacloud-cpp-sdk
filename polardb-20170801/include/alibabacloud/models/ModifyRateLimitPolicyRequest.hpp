// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRATELIMITPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRATELIMITPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyRateLimitPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRateLimitPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RateLimitRpm, rateLimitRpm_);
      DARABONBA_PTR_TO_JSON(RateLimitTpm, rateLimitTpm_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRateLimitPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RateLimitRpm, rateLimitRpm_);
      DARABONBA_PTR_FROM_JSON(RateLimitTpm, rateLimitTpm_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyRateLimitPolicyRequest() = default ;
    ModifyRateLimitPolicyRequest(const ModifyRateLimitPolicyRequest &) = default ;
    ModifyRateLimitPolicyRequest(ModifyRateLimitPolicyRequest &&) = default ;
    ModifyRateLimitPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRateLimitPolicyRequest() = default ;
    ModifyRateLimitPolicyRequest& operator=(const ModifyRateLimitPolicyRequest &) = default ;
    ModifyRateLimitPolicyRequest& operator=(ModifyRateLimitPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gwClusterId_ == nullptr
        && this->policyId_ == nullptr && this->rateLimitRpm_ == nullptr && this->rateLimitTpm_ == nullptr && this->regionId_ == nullptr; };
    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline ModifyRateLimitPolicyRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ModifyRateLimitPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // rateLimitRpm Field Functions 
    bool hasRateLimitRpm() const { return this->rateLimitRpm_ != nullptr;};
    void deleteRateLimitRpm() { this->rateLimitRpm_ = nullptr;};
    inline string getRateLimitRpm() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRpm_, "") };
    inline ModifyRateLimitPolicyRequest& setRateLimitRpm(string rateLimitRpm) { DARABONBA_PTR_SET_VALUE(rateLimitRpm_, rateLimitRpm) };


    // rateLimitTpm Field Functions 
    bool hasRateLimitTpm() const { return this->rateLimitTpm_ != nullptr;};
    void deleteRateLimitTpm() { this->rateLimitTpm_ = nullptr;};
    inline string getRateLimitTpm() const { DARABONBA_PTR_GET_DEFAULT(rateLimitTpm_, "") };
    inline ModifyRateLimitPolicyRequest& setRateLimitTpm(string rateLimitTpm) { DARABONBA_PTR_SET_VALUE(rateLimitTpm_, rateLimitTpm) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRateLimitPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    shared_ptr<string> rateLimitRpm_ {};
    shared_ptr<string> rateLimitTpm_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
