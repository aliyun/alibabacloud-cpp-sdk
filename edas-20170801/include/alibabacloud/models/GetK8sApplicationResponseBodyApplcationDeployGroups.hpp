// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONDEPLOYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationDeployGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationDeployGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DeployGroup, deployGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationDeployGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployGroup, deployGroup_);
    };
    GetK8sApplicationResponseBodyApplcationDeployGroups() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroups(const GetK8sApplicationResponseBodyApplcationDeployGroups &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroups(GetK8sApplicationResponseBodyApplcationDeployGroups &&) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationDeployGroups() = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroups& operator=(const GetK8sApplicationResponseBodyApplcationDeployGroups &) = default ;
    GetK8sApplicationResponseBodyApplcationDeployGroups& operator=(GetK8sApplicationResponseBodyApplcationDeployGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployGroup_ == nullptr; };
    // deployGroup Field Functions 
    bool hasDeployGroup() const { return this->deployGroup_ != nullptr;};
    void deleteDeployGroup() { this->deployGroup_ = nullptr;};
    inline const vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup> & deployGroup() const { DARABONBA_PTR_GET_CONST(deployGroup_, vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup>) };
    inline vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup> deployGroup() { DARABONBA_PTR_GET(deployGroup_, vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup>) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroups& setDeployGroup(const vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup> & deployGroup) { DARABONBA_PTR_SET_VALUE(deployGroup_, deployGroup) };
    inline GetK8sApplicationResponseBodyApplcationDeployGroups& setDeployGroup(vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup> && deployGroup) { DARABONBA_PTR_SET_RVALUE(deployGroup_, deployGroup) };


  protected:
    std::shared_ptr<vector<Models::GetK8sApplicationResponseBodyApplcationDeployGroupsDeployGroup>> deployGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
