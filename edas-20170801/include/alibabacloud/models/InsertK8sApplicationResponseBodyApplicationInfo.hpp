// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODYAPPLICATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_INSERTK8SAPPLICATIONRESPONSEBODYAPPLICATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertK8sApplicationResponseBodyApplicationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertK8sApplicationResponseBodyApplicationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_TO_JSON(EdasId, edasId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertK8sApplicationResponseBodyApplicationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_FROM_JSON(EdasId, edasId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InsertK8sApplicationResponseBodyApplicationInfo() = default ;
    InsertK8sApplicationResponseBodyApplicationInfo(const InsertK8sApplicationResponseBodyApplicationInfo &) = default ;
    InsertK8sApplicationResponseBodyApplicationInfo(InsertK8sApplicationResponseBodyApplicationInfo &&) = default ;
    InsertK8sApplicationResponseBodyApplicationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertK8sApplicationResponseBodyApplicationInfo() = default ;
    InsertK8sApplicationResponseBodyApplicationInfo& operator=(const InsertK8sApplicationResponseBodyApplicationInfo &) = default ;
    InsertK8sApplicationResponseBodyApplicationInfo& operator=(InsertK8sApplicationResponseBodyApplicationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->changeOrderId_ == nullptr && return this->clusterType_ == nullptr && return this->dockerize_ == nullptr && return this->edasId_ == nullptr
        && return this->owner_ == nullptr && return this->regionId_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // dockerize Field Functions 
    bool hasDockerize() const { return this->dockerize_ != nullptr;};
    void deleteDockerize() { this->dockerize_ = nullptr;};
    inline bool dockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


    // edasId Field Functions 
    bool hasEdasId() const { return this->edasId_ != nullptr;};
    void deleteEdasId() { this->edasId_ = nullptr;};
    inline string edasId() const { DARABONBA_PTR_GET_DEFAULT(edasId_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setEdasId(string edasId) { DARABONBA_PTR_SET_VALUE(edasId_, edasId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InsertK8sApplicationResponseBodyApplicationInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the change process. You can call the GetChangeOrderInfo operation to query the change process ID. For more information, see [GetChangeOrderInfo](https://help.aliyun.com/document_detail/62072.html).
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The type of the cluster. Valid values:
    // 
    // *   0: regular Docker cluster
    // *   1: Swarm cluster (discontinued)
    // *   2: Elastic Compute Service (ECS) cluster
    // *   3: self-managed Kubernetes cluster in EDAS (discontinued)
    // *   4: cluster in which Pandora automatically registers applications
    // *   5: ACK cluster and serverless Kubernetes cluster
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // Indicates whether the application is a Docker application.
    // 
    // *   true: The application is a Docker application.
    // *   false: The application is not a Docker application.
    std::shared_ptr<bool> dockerize_ = nullptr;
    // The ID of the user to which the application belongs. This ID is generated by EDAS.
    std::shared_ptr<string> edasId_ = nullptr;
    // The owner of the application.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the application belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
