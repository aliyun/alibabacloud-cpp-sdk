// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESRESPONSEBODYPROMETHEUSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSINSTANCESRESPONSEBODYPROMETHEUSINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusInstancesResponseBodyPrometheusInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusInstancesResponseBodyPrometheusInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusInstancesResponseBodyPrometheusInstances& obj) { 
      DARABONBA_PTR_TO_JSON(accessType, accessType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusInstancesResponseBodyPrometheusInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(accessType, accessType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supportAuthTypes, supportAuthTypes_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListPrometheusInstancesResponseBodyPrometheusInstances() = default ;
    ListPrometheusInstancesResponseBodyPrometheusInstances(const ListPrometheusInstancesResponseBodyPrometheusInstances &) = default ;
    ListPrometheusInstancesResponseBodyPrometheusInstances(ListPrometheusInstancesResponseBodyPrometheusInstances &&) = default ;
    ListPrometheusInstancesResponseBodyPrometheusInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusInstancesResponseBodyPrometheusInstances() = default ;
    ListPrometheusInstancesResponseBodyPrometheusInstances& operator=(const ListPrometheusInstancesResponseBodyPrometheusInstances &) = default ;
    ListPrometheusInstancesResponseBodyPrometheusInstances& operator=(ListPrometheusInstancesResponseBodyPrometheusInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->createTime_ != nullptr && this->instanceType_ != nullptr && this->paymentType_ != nullptr && this->product_ != nullptr && this->prometheusInstanceId_ != nullptr
        && this->prometheusInstanceName_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr
        && this->supportAuthTypes_ != nullptr && this->tags_ != nullptr && this->userId_ != nullptr && this->version_ != nullptr && this->workspace_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportAuthTypes Field Functions 
    bool hasSupportAuthTypes() const { return this->supportAuthTypes_ != nullptr;};
    void deleteSupportAuthTypes() { this->supportAuthTypes_ = nullptr;};
    inline const vector<string> & supportAuthTypes() const { DARABONBA_PTR_GET_CONST(supportAuthTypes_, vector<string>) };
    inline vector<string> supportAuthTypes() { DARABONBA_PTR_GET(supportAuthTypes_, vector<string>) };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setSupportAuthTypes(const vector<string> & supportAuthTypes) { DARABONBA_PTR_SET_VALUE(supportAuthTypes_, supportAuthTypes) };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setSupportAuthTypes(vector<string> && supportAuthTypes) { DARABONBA_PTR_SET_RVALUE(supportAuthTypes_, supportAuthTypes) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags>) };
    inline vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags>) };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setTags(const vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setTags(vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListPrometheusInstancesResponseBodyPrometheusInstances& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportAuthTypes_ = nullptr;
    std::shared_ptr<vector<Models::ListPrometheusInstancesResponseBodyPrometheusInstancesTags>> tags_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
