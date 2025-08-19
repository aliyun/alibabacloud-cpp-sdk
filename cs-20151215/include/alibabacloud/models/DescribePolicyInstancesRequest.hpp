// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instance_name, instanceName_);
      DARABONBA_PTR_TO_JSON(policy_name, policyName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instance_name, instanceName_);
      DARABONBA_PTR_FROM_JSON(policy_name, policyName_);
    };
    DescribePolicyInstancesRequest() = default ;
    DescribePolicyInstancesRequest(const DescribePolicyInstancesRequest &) = default ;
    DescribePolicyInstancesRequest(DescribePolicyInstancesRequest &&) = default ;
    DescribePolicyInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyInstancesRequest() = default ;
    DescribePolicyInstancesRequest& operator=(const DescribePolicyInstancesRequest &) = default ;
    DescribePolicyInstancesRequest& operator=(DescribePolicyInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr
        && this->policyName_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribePolicyInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribePolicyInstancesRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


  protected:
    // The name of the policy instance that you want to query.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The name of the policy that you want to query.
    std::shared_ptr<string> policyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
