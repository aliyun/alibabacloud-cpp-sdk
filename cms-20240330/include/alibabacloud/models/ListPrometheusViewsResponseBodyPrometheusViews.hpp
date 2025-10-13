// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODYPROMETHEUSVIEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSVIEWSRESPONSEBODYPROMETHEUSVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusViewsResponseBodyPrometheusViewsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListPrometheusViewsResponseBodyPrometheusViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusViewsResponseBodyPrometheusViews& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceCount, prometheusInstanceCount_);
      DARABONBA_PTR_TO_JSON(prometheusViewId, prometheusViewId_);
      DARABONBA_PTR_TO_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusViewsResponseBodyPrometheusViews& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceCount, prometheusInstanceCount_);
      DARABONBA_PTR_FROM_JSON(prometheusViewId, prometheusViewId_);
      DARABONBA_PTR_FROM_JSON(prometheusViewName, prometheusViewName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListPrometheusViewsResponseBodyPrometheusViews() = default ;
    ListPrometheusViewsResponseBodyPrometheusViews(const ListPrometheusViewsResponseBodyPrometheusViews &) = default ;
    ListPrometheusViewsResponseBodyPrometheusViews(ListPrometheusViewsResponseBodyPrometheusViews &&) = default ;
    ListPrometheusViewsResponseBodyPrometheusViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusViewsResponseBodyPrometheusViews() = default ;
    ListPrometheusViewsResponseBodyPrometheusViews& operator=(const ListPrometheusViewsResponseBodyPrometheusViews &) = default ;
    ListPrometheusViewsResponseBodyPrometheusViews& operator=(ListPrometheusViewsResponseBodyPrometheusViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->instanceType_ == nullptr && return this->paymentType_ == nullptr && return this->product_ == nullptr && return this->prometheusInstanceCount_ == nullptr && return this->prometheusViewId_ == nullptr
        && return this->prometheusViewName_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceType_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->userId_ == nullptr && return this->version_ == nullptr && return this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // prometheusInstanceCount Field Functions 
    bool hasPrometheusInstanceCount() const { return this->prometheusInstanceCount_ != nullptr;};
    void deletePrometheusInstanceCount() { this->prometheusInstanceCount_ = nullptr;};
    inline int32_t prometheusInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceCount_, 0) };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setPrometheusInstanceCount(int32_t prometheusInstanceCount) { DARABONBA_PTR_SET_VALUE(prometheusInstanceCount_, prometheusInstanceCount) };


    // prometheusViewId Field Functions 
    bool hasPrometheusViewId() const { return this->prometheusViewId_ != nullptr;};
    void deletePrometheusViewId() { this->prometheusViewId_ = nullptr;};
    inline string prometheusViewId() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewId_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setPrometheusViewId(string prometheusViewId) { DARABONBA_PTR_SET_VALUE(prometheusViewId_, prometheusViewId) };


    // prometheusViewName Field Functions 
    bool hasPrometheusViewName() const { return this->prometheusViewName_ != nullptr;};
    void deletePrometheusViewName() { this->prometheusViewName_ = nullptr;};
    inline string prometheusViewName() const { DARABONBA_PTR_GET_DEFAULT(prometheusViewName_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setPrometheusViewName(string prometheusViewName) { DARABONBA_PTR_SET_VALUE(prometheusViewName_, prometheusViewName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags>) };
    inline vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags>) };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setTags(const vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setTags(vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListPrometheusViewsResponseBodyPrometheusViews& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<int32_t> prometheusInstanceCount_ = nullptr;
    std::shared_ptr<string> prometheusViewId_ = nullptr;
    std::shared_ptr<string> prometheusViewName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListPrometheusViewsResponseBodyPrometheusViewsTags>> tags_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
