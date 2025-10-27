// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDCONTAINERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedContainerInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedContainerInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(GroupField, groupField_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedContainerInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(GroupField, groupField_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeGroupedContainerInstancesRequest() = default ;
    DescribeGroupedContainerInstancesRequest(const DescribeGroupedContainerInstancesRequest &) = default ;
    DescribeGroupedContainerInstancesRequest(DescribeGroupedContainerInstancesRequest &&) = default ;
    DescribeGroupedContainerInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedContainerInstancesRequest() = default ;
    DescribeGroupedContainerInstancesRequest& operator=(const DescribeGroupedContainerInstancesRequest &) = default ;
    DescribeGroupedContainerInstancesRequest& operator=(DescribeGroupedContainerInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->currentPage_ == nullptr && return this->fieldValue_ == nullptr && return this->groupField_ == nullptr && return this->logicalExp_ == nullptr && return this->pageSize_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeGroupedContainerInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedContainerInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeGroupedContainerInstancesRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string groupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeGroupedContainerInstancesRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline DescribeGroupedContainerInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedContainerInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The search conditions for assets. Specify the value in the JSON format. Separate multiple search conditions with commas (,). Example: `[{"name":"riskStatus","value":"YES"},{"name":"riskLevel","value":"2"}]`.
    // 
    // >  Supported search conditions include the instance ID, instance name, virtual private cloud (VPC) ID, region, and public IP address. You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The keyword that you want to use to query containers. This parameter depends on the value of the GroupField parameter.
    // 
    // *   If the **GroupField** parameter is set to **pod**, set this parameter to the name of the pod that you want to query.
    // *   If the **GroupField** parameter is set to **appName**, set this parameter to the name of the application that you want to query.
    // *   If the **GroupField** parameter is set to **namespace**, set this parameter to the namespace that you want to query.
    // *   If the **GroupField** parameter is set to **clusterId**, set this parameter to the ID of the cluster that you want to query.
    // *   If the **GroupField** parameter is set to **image**, set this parameter to the name of the image that you want to query.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The group type that you want to use to query containers. Valid values:
    // 
    // *   **pod**
    // *   **appName**
    // *   **namespace**
    // *   **clusterId**
    // *   **image**
    // 
    // This parameter is required.
    std::shared_ptr<string> groupField_ = nullptr;
    // The logical relationship that you want to use to evaluate multiple search conditions. Valid values:
    // 
    // *   **OR**: Search conditions are evaluated by using a logical **OR**.
    // *   **AND**: Search conditions are evaluated by using a logical **AND**.
    std::shared_ptr<string> logicalExp_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
