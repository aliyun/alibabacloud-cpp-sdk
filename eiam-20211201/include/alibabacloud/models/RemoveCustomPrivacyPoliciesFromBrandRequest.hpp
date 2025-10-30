// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECUSTOMPRIVACYPOLICIESFROMBRANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECUSTOMPRIVACYPOLICIESFROMBRANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveCustomPrivacyPoliciesFromBrandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveCustomPrivacyPoliciesFromBrandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandId, brandId_);
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyIds, customPrivacyPolicyIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveCustomPrivacyPoliciesFromBrandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyIds, customPrivacyPolicyIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RemoveCustomPrivacyPoliciesFromBrandRequest() = default ;
    RemoveCustomPrivacyPoliciesFromBrandRequest(const RemoveCustomPrivacyPoliciesFromBrandRequest &) = default ;
    RemoveCustomPrivacyPoliciesFromBrandRequest(RemoveCustomPrivacyPoliciesFromBrandRequest &&) = default ;
    RemoveCustomPrivacyPoliciesFromBrandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveCustomPrivacyPoliciesFromBrandRequest() = default ;
    RemoveCustomPrivacyPoliciesFromBrandRequest& operator=(const RemoveCustomPrivacyPoliciesFromBrandRequest &) = default ;
    RemoveCustomPrivacyPoliciesFromBrandRequest& operator=(RemoveCustomPrivacyPoliciesFromBrandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandId_ == nullptr
        && return this->customPrivacyPolicyIds_ == nullptr && return this->instanceId_ == nullptr; };
    // brandId Field Functions 
    bool hasBrandId() const { return this->brandId_ != nullptr;};
    void deleteBrandId() { this->brandId_ = nullptr;};
    inline string brandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
    inline RemoveCustomPrivacyPoliciesFromBrandRequest& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


    // customPrivacyPolicyIds Field Functions 
    bool hasCustomPrivacyPolicyIds() const { return this->customPrivacyPolicyIds_ != nullptr;};
    void deleteCustomPrivacyPolicyIds() { this->customPrivacyPolicyIds_ = nullptr;};
    inline const vector<string> & customPrivacyPolicyIds() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicyIds_, vector<string>) };
    inline vector<string> customPrivacyPolicyIds() { DARABONBA_PTR_GET(customPrivacyPolicyIds_, vector<string>) };
    inline RemoveCustomPrivacyPoliciesFromBrandRequest& setCustomPrivacyPolicyIds(const vector<string> & customPrivacyPolicyIds) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyIds_, customPrivacyPolicyIds) };
    inline RemoveCustomPrivacyPoliciesFromBrandRequest& setCustomPrivacyPolicyIds(vector<string> && customPrivacyPolicyIds) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicyIds_, customPrivacyPolicyIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveCustomPrivacyPoliciesFromBrandRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 品牌化Id
    // 
    // This parameter is required.
    std::shared_ptr<string> brandId_ = nullptr;
    // 条款ID列表
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> customPrivacyPolicyIds_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
