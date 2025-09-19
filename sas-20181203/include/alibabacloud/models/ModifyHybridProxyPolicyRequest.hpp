// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDPROXYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyHybridProxyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridProxyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(PolicyInfo, policyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridProxyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(PolicyInfo, policyInfo_);
    };
    ModifyHybridProxyPolicyRequest() = default ;
    ModifyHybridProxyPolicyRequest(const ModifyHybridProxyPolicyRequest &) = default ;
    ModifyHybridProxyPolicyRequest(ModifyHybridProxyPolicyRequest &&) = default ;
    ModifyHybridProxyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridProxyPolicyRequest() = default ;
    ModifyHybridProxyPolicyRequest& operator=(const ModifyHybridProxyPolicyRequest &) = default ;
    ModifyHybridProxyPolicyRequest& operator=(ModifyHybridProxyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->policyInfo_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyHybridProxyPolicyRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // policyInfo Field Functions 
    bool hasPolicyInfo() const { return this->policyInfo_ != nullptr;};
    void deletePolicyInfo() { this->policyInfo_ = nullptr;};
    inline string policyInfo() const { DARABONBA_PTR_GET_DEFAULT(policyInfo_, "") };
    inline ModifyHybridProxyPolicyRequest& setPolicyInfo(string policyInfo) { DARABONBA_PTR_SET_VALUE(policyInfo_, policyInfo) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The policy of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
