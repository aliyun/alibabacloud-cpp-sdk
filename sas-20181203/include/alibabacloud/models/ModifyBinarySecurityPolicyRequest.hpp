// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBINARYSECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBINARYSECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyBinarySecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBinarySecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBinarySecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ModifyBinarySecurityPolicyRequest() = default ;
    ModifyBinarySecurityPolicyRequest(const ModifyBinarySecurityPolicyRequest &) = default ;
    ModifyBinarySecurityPolicyRequest(ModifyBinarySecurityPolicyRequest &&) = default ;
    ModifyBinarySecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBinarySecurityPolicyRequest() = default ;
    ModifyBinarySecurityPolicyRequest& operator=(const ModifyBinarySecurityPolicyRequest &) = default ;
    ModifyBinarySecurityPolicyRequest& operator=(ModifyBinarySecurityPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusters_ == nullptr
        && return this->name_ == nullptr && return this->policy_ == nullptr && return this->remark_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr
        && return this->status_ == nullptr; };
    // clusters Field Functions 
    bool hasClusters() const { return this->clusters_ != nullptr;};
    void deleteClusters() { this->clusters_ = nullptr;};
    inline string clusters() const { DARABONBA_PTR_GET_DEFAULT(clusters_, "") };
    inline ModifyBinarySecurityPolicyRequest& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyBinarySecurityPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline ModifyBinarySecurityPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyBinarySecurityPolicyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBinarySecurityPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyBinarySecurityPolicyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyBinarySecurityPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Cluster information.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusters_ = nullptr;
    // Policy name.
    std::shared_ptr<string> name_ = nullptr;
    // Policy content. JSON format, Key values:
    // - **policyMode**: Type of policy, default is requireAttestor.
    // - **requiredAttestors**: Required attestors.
    // 
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    // Remark.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The IP address of the access source.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // Set to enable or disable the policy. Values:
    // 
    // - **enabled**: Enable the protection policy.
    // - **disabled**: Disable the protection policy.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
