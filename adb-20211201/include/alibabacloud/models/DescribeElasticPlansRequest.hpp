// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ElasticPlanName, elasticPlanName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeElasticPlansRequest() = default ;
    DescribeElasticPlansRequest(const DescribeElasticPlansRequest &) = default ;
    DescribeElasticPlansRequest(DescribeElasticPlansRequest &&) = default ;
    DescribeElasticPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlansRequest() = default ;
    DescribeElasticPlansRequest& operator=(const DescribeElasticPlansRequest &) = default ;
    DescribeElasticPlansRequest& operator=(DescribeElasticPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->elasticPlanName_ != nullptr && this->enabled_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupName_ != nullptr
        && this->type_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeElasticPlansRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // elasticPlanName Field Functions 
    bool hasElasticPlanName() const { return this->elasticPlanName_ != nullptr;};
    void deleteElasticPlanName() { this->elasticPlanName_ = nullptr;};
    inline string elasticPlanName() const { DARABONBA_PTR_GET_DEFAULT(elasticPlanName_, "") };
    inline DescribeElasticPlansRequest& setElasticPlanName(string elasticPlanName) { DARABONBA_PTR_SET_VALUE(elasticPlanName_, elasticPlanName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeElasticPlansRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeElasticPlansRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeElasticPlansRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeElasticPlansRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeElasticPlansRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the scaling plan.
    // 
    // > If you do not specify this parameter, all scaling plans are queried.
    std::shared_ptr<string> elasticPlanName_ = nullptr;
    // Specifies whether to query the scaling plans that are immediately enabled after the plans are created. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enabled_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the resource group.
    // 
    // > *   If you do not specify this parameter, the scaling plans of all resource groups are queried, covering the interactive resource group type and the elastic I/O unit (EIU) type.
    // >*   You can call the [DescribeDBResourceGroup](https://help.aliyun.com/document_detail/459446.html) operation to query the name of a resource group within a cluster.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    // The type of the scaling plan. Valid values:
    // 
    // *   **EXECUTOR**: the interactive resource group type, which specifies the computing resource type.
    // *   **WORKER**: the EIU type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
