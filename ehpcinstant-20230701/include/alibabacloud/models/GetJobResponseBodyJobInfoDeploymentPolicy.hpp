// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPLOYMENTPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPLOYMENTPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoDeploymentPolicyNetwork.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoDeploymentPolicyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoDeploymentPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoDeploymentPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoDeploymentPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationSpec, allocationSpec_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetJobResponseBodyJobInfoDeploymentPolicy() = default ;
    GetJobResponseBodyJobInfoDeploymentPolicy(const GetJobResponseBodyJobInfoDeploymentPolicy &) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicy(GetJobResponseBodyJobInfoDeploymentPolicy &&) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoDeploymentPolicy() = default ;
    GetJobResponseBodyJobInfoDeploymentPolicy& operator=(const GetJobResponseBodyJobInfoDeploymentPolicy &) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicy& operator=(GetJobResponseBodyJobInfoDeploymentPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationSpec_ != nullptr
        && this->level_ != nullptr && this->network_ != nullptr && this->tags_ != nullptr; };
    // allocationSpec Field Functions 
    bool hasAllocationSpec() const { return this->allocationSpec_ != nullptr;};
    void deleteAllocationSpec() { this->allocationSpec_ = nullptr;};
    inline string allocationSpec() const { DARABONBA_PTR_GET_DEFAULT(allocationSpec_, "") };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setAllocationSpec(string allocationSpec) { DARABONBA_PTR_SET_VALUE(allocationSpec_, allocationSpec) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork) };
    inline Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork network() { DARABONBA_PTR_GET(network_, Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork) };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setNetwork(const Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setNetwork(Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags>) };
    inline vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags>) };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setTags(const vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetJobResponseBodyJobInfoDeploymentPolicy& setTags(vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> allocationSpec_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobInfoDeploymentPolicyNetwork> network_ = nullptr;
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoDeploymentPolicyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
