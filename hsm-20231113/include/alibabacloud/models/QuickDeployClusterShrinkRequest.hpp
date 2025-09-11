// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUICKDEPLOYCLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUICKDEPLOYCLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class QuickDeployClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuickDeployClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertManaged, certManaged_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdListShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QuickDeployClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertManaged, certManaged_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdListShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteListShrink_);
    };
    QuickDeployClusterShrinkRequest() = default ;
    QuickDeployClusterShrinkRequest(const QuickDeployClusterShrinkRequest &) = default ;
    QuickDeployClusterShrinkRequest(QuickDeployClusterShrinkRequest &&) = default ;
    QuickDeployClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuickDeployClusterShrinkRequest() = default ;
    QuickDeployClusterShrinkRequest& operator=(const QuickDeployClusterShrinkRequest &) = default ;
    QuickDeployClusterShrinkRequest& operator=(QuickDeployClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certManaged_ != nullptr
        && this->clusterName_ != nullptr && this->instanceListShrink_ != nullptr && this->regionId_ != nullptr && this->vSwitchIdListShrink_ != nullptr && this->vpcId_ != nullptr
        && this->whiteListShrink_ != nullptr; };
    // certManaged Field Functions 
    bool hasCertManaged() const { return this->certManaged_ != nullptr;};
    void deleteCertManaged() { this->certManaged_ = nullptr;};
    inline bool certManaged() const { DARABONBA_PTR_GET_DEFAULT(certManaged_, false) };
    inline QuickDeployClusterShrinkRequest& setCertManaged(bool certManaged) { DARABONBA_PTR_SET_VALUE(certManaged_, certManaged) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline QuickDeployClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // instanceListShrink Field Functions 
    bool hasInstanceListShrink() const { return this->instanceListShrink_ != nullptr;};
    void deleteInstanceListShrink() { this->instanceListShrink_ = nullptr;};
    inline string instanceListShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceListShrink_, "") };
    inline QuickDeployClusterShrinkRequest& setInstanceListShrink(string instanceListShrink) { DARABONBA_PTR_SET_VALUE(instanceListShrink_, instanceListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QuickDeployClusterShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchIdListShrink Field Functions 
    bool hasVSwitchIdListShrink() const { return this->vSwitchIdListShrink_ != nullptr;};
    void deleteVSwitchIdListShrink() { this->vSwitchIdListShrink_ = nullptr;};
    inline string vSwitchIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIdListShrink_, "") };
    inline QuickDeployClusterShrinkRequest& setVSwitchIdListShrink(string vSwitchIdListShrink) { DARABONBA_PTR_SET_VALUE(vSwitchIdListShrink_, vSwitchIdListShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline QuickDeployClusterShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // whiteListShrink Field Functions 
    bool hasWhiteListShrink() const { return this->whiteListShrink_ != nullptr;};
    void deleteWhiteListShrink() { this->whiteListShrink_ = nullptr;};
    inline string whiteListShrink() const { DARABONBA_PTR_GET_DEFAULT(whiteListShrink_, "") };
    inline QuickDeployClusterShrinkRequest& setWhiteListShrink(string whiteListShrink) { DARABONBA_PTR_SET_VALUE(whiteListShrink_, whiteListShrink) };


  protected:
    std::shared_ptr<bool> certManaged_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchIdListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> whiteListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
