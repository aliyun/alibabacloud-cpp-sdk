// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMANAGEDSCALINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMANAGEDSCALINGPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ManagedScalingConstraints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class PutManagedScalingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutManagedScalingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutManagedScalingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutManagedScalingPolicyRequest() = default ;
    PutManagedScalingPolicyRequest(const PutManagedScalingPolicyRequest &) = default ;
    PutManagedScalingPolicyRequest(PutManagedScalingPolicyRequest &&) = default ;
    PutManagedScalingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutManagedScalingPolicyRequest() = default ;
    PutManagedScalingPolicyRequest& operator=(const PutManagedScalingPolicyRequest &) = default ;
    PutManagedScalingPolicyRequest& operator=(PutManagedScalingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->constraints_ != nullptr && this->regionId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline PutManagedScalingPolicyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const ManagedScalingConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, ManagedScalingConstraints) };
    inline ManagedScalingConstraints constraints() { DARABONBA_PTR_GET(constraints_, ManagedScalingConstraints) };
    inline PutManagedScalingPolicyRequest& setConstraints(const ManagedScalingConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline PutManagedScalingPolicyRequest& setConstraints(ManagedScalingConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutManagedScalingPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The constrains on the maximum and minimum numbers of nodes in a node group.
    std::shared_ptr<ManagedScalingConstraints> constraints_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
