// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPLOYMENTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPLOYMENTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestDeploymentPolicyNetwork.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestDeploymentPolicyTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestDeploymentPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestDeploymentPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Pool, pool_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestDeploymentPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Pool, pool_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateJobRequestDeploymentPolicy() = default ;
    CreateJobRequestDeploymentPolicy(const CreateJobRequestDeploymentPolicy &) = default ;
    CreateJobRequestDeploymentPolicy(CreateJobRequestDeploymentPolicy &&) = default ;
    CreateJobRequestDeploymentPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestDeploymentPolicy() = default ;
    CreateJobRequestDeploymentPolicy& operator=(const CreateJobRequestDeploymentPolicy &) = default ;
    CreateJobRequestDeploymentPolicy& operator=(CreateJobRequestDeploymentPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationSpec_ == nullptr
        && return this->level_ == nullptr && return this->network_ == nullptr && return this->pool_ == nullptr && return this->priority_ == nullptr && return this->tag_ == nullptr; };
    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string allocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline CreateJobRequestDeploymentPolicy& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateJobRequestDeploymentPolicy& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::CreateJobRequestDeploymentPolicyNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::CreateJobRequestDeploymentPolicyNetwork) };
    inline Models::CreateJobRequestDeploymentPolicyNetwork network() { DARABONBA_PTR_GET(network_, Models::CreateJobRequestDeploymentPolicyNetwork) };
    inline CreateJobRequestDeploymentPolicy& setNetwork(const Models::CreateJobRequestDeploymentPolicyNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline CreateJobRequestDeploymentPolicy& setNetwork(Models::CreateJobRequestDeploymentPolicyNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // pool Field Functions 
    bool hasPool() const { return this->pool_ != nullptr;};
    void deletePool() { this->pool_ = nullptr;};
    inline string pool() const { DARABONBA_PTR_GET_DEFAULT(pool_, "") };
    inline CreateJobRequestDeploymentPolicy& setPool(string pool) { DARABONBA_PTR_SET_VALUE(pool_, pool) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateJobRequestDeploymentPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::CreateJobRequestDeploymentPolicyTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::CreateJobRequestDeploymentPolicyTag>) };
    inline vector<Models::CreateJobRequestDeploymentPolicyTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::CreateJobRequestDeploymentPolicyTag>) };
    inline CreateJobRequestDeploymentPolicy& setTag(const vector<Models::CreateJobRequestDeploymentPolicyTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateJobRequestDeploymentPolicy& setTag(vector<Models::CreateJobRequestDeploymentPolicyTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The resource type,
    // 
    // *   Standard
    // *   Dedicated: You must enable a whitelist for use.
    // *   Economic: You must enable a whitelist for use.
    std::shared_ptr<string> allocationSpec_ = nullptr;
    // The computing power level. This value is valid only when the resource type is Economic. The following disk categories are supported:
    // 
    // *   General
    // *   Performance
    // 
    // Default value: General.
    std::shared_ptr<string> level_ = nullptr;
    // The network configuration information.
    std::shared_ptr<Models::CreateJobRequestDeploymentPolicyNetwork> network_ = nullptr;
    // The resource pool of the job.
    std::shared_ptr<string> pool_ = nullptr;
    // The priorities of the jobs. A larger value indicates a higher job scheduling priority. Valid values: 1 to 100.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The tag information of the job. A maximum of 20 groups.
    std::shared_ptr<vector<Models::CreateJobRequestDeploymentPolicyTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
