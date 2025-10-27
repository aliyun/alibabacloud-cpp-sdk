// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBINARYSECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBINARYSECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBinarySecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBinarySecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clusters, clusters_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBinarySecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clusters, clusters_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateBinarySecurityPolicyRequest() = default ;
    CreateBinarySecurityPolicyRequest(const CreateBinarySecurityPolicyRequest &) = default ;
    CreateBinarySecurityPolicyRequest(CreateBinarySecurityPolicyRequest &&) = default ;
    CreateBinarySecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBinarySecurityPolicyRequest() = default ;
    CreateBinarySecurityPolicyRequest& operator=(const CreateBinarySecurityPolicyRequest &) = default ;
    CreateBinarySecurityPolicyRequest& operator=(CreateBinarySecurityPolicyRequest &&) = default ;
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
    inline CreateBinarySecurityPolicyRequest& setClusters(string clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBinarySecurityPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateBinarySecurityPolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateBinarySecurityPolicyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateBinarySecurityPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline CreateBinarySecurityPolicyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateBinarySecurityPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusters_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The content of the policy. Specify a value in the JSON format. You can specify the following keys:
    // 
    // *   **policyMode**: the type of the policy. Default value: requireAttestor.
    // *   **requiredAttestors**: the required witnesses.
    // 
    // This parameter is required.
    std::shared_ptr<string> policy_ = nullptr;
    // The description.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
