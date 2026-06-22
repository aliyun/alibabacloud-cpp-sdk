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
        && this->currentPage_ == nullptr && this->fieldValue_ == nullptr && this->groupField_ == nullptr && this->logicalExp_ == nullptr && this->pageSize_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeGroupedContainerInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeGroupedContainerInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeGroupedContainerInstancesRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // groupField Field Functions 
    bool hasGroupField() const { return this->groupField_ != nullptr;};
    void deleteGroupField() { this->groupField_ = nullptr;};
    inline string getGroupField() const { DARABONBA_PTR_GET_DEFAULT(groupField_, "") };
    inline DescribeGroupedContainerInstancesRequest& setGroupField(string groupField) { DARABONBA_PTR_SET_VALUE(groupField_, groupField) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline DescribeGroupedContainerInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGroupedContainerInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The conditions for searching assets. This parameter is in JSON format. Separate multiple conditions with commas (,). Example: `[{"name":"riskStatus","value":"YES"},{"name":"riskLevel","value":"2"}]`.
    // > You can search for assets by instance ID, instance name, VPC ID, region, public IP address, and other conditions. Call [DescribeCriteria](~~DescribeCriteria~~) to query the supported search conditions.
    shared_ptr<string> criteria_ {};
    // The page number of the page to return. Default value: **1**, which indicates that the first page is returned.
    shared_ptr<int32_t> currentPage_ {};
    // The search condition for the specified group type. Set the search condition based on the type specified by GroupField:
    // - If **GroupField** is set to **pod**: specify the pod name to query.
    // - If **GroupField** is set to **appName**: specify the application name to query.
    // - If **GroupField** is set to **namespace**: specify the namespace to query.
    // - If **GroupField** is set to **clusterId**: specify the cluster ID to query.
    // - If **GroupField** is set to **image**: specify the image name to query.
    // > All the preceding search conditions support fuzzy match.
    shared_ptr<string> fieldValue_ {};
    // The group type to query. Valid values:
    // - **pod**: pod
    // - **appName**: application name
    // - **namespace**: namespace
    // - **clusterId**: cluster ID
    // - **image**: image.
    // 
    // This parameter is required.
    shared_ptr<string> groupField_ {};
    // The logical relationship among multiple search conditions. Valid values:
    // - **OR**: The search conditions are evaluated with a logical OR.
    // - **AND**: The search conditions are evaluated with a logical AND.
    shared_ptr<string> logicalExp_ {};
    // The number of container assets to display on each page when paging is used. Default value: **20**, which indicates that 20 container assets are displayed on each page.
    // > Do not leave PageSize empty.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
