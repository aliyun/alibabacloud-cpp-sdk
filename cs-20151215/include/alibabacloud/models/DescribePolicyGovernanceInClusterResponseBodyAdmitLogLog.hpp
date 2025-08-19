// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOGLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGOVERNANCEINCLUSTERRESPONSEBODYADMITLOGLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(constraint_kind, constraintKind_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(resource_kind, resourceKind_);
      DARABONBA_PTR_TO_JSON(resource_name, resourceName_);
      DARABONBA_PTR_TO_JSON(resource_namespace, resourceNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(constraint_kind, constraintKind_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(resource_kind, resourceKind_);
      DARABONBA_PTR_FROM_JSON(resource_name, resourceName_);
      DARABONBA_PTR_FROM_JSON(resource_namespace, resourceNamespace_);
    };
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog(const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog(DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog &&) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog() = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& operator=(const DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog &) = default ;
    DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& operator=(DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->constraintKind_ != nullptr && this->msg_ != nullptr && this->resourceKind_ != nullptr && this->resourceName_ != nullptr && this->resourceNamespace_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraintKind Field Functions 
    bool hasConstraintKind() const { return this->constraintKind_ != nullptr;};
    void deleteConstraintKind() { this->constraintKind_ = nullptr;};
    inline string constraintKind() const { DARABONBA_PTR_GET_DEFAULT(constraintKind_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setConstraintKind(string constraintKind) { DARABONBA_PTR_SET_VALUE(constraintKind_, constraintKind) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // resourceKind Field Functions 
    bool hasResourceKind() const { return this->resourceKind_ != nullptr;};
    void deleteResourceKind() { this->resourceKind_ = nullptr;};
    inline string resourceKind() const { DARABONBA_PTR_GET_DEFAULT(resourceKind_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setResourceKind(string resourceKind) { DARABONBA_PTR_SET_VALUE(resourceKind_, resourceKind) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceNamespace Field Functions 
    bool hasResourceNamespace() const { return this->resourceNamespace_ != nullptr;};
    void deleteResourceNamespace() { this->resourceNamespace_ = nullptr;};
    inline string resourceNamespace() const { DARABONBA_PTR_GET_DEFAULT(resourceNamespace_, "") };
    inline DescribePolicyGovernanceInClusterResponseBodyAdmitLogLog& setResourceNamespace(string resourceNamespace) { DARABONBA_PTR_SET_VALUE(resourceNamespace_, resourceNamespace) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The policy type.
    std::shared_ptr<string> constraintKind_ = nullptr;
    // The message that appears when an event is generated by a policy.
    std::shared_ptr<string> msg_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceKind_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The namespace to which the resource belongs.
    std::shared_ptr<string> resourceNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
