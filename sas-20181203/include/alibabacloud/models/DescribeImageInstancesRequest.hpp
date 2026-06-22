// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Scanned, scanned_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Scanned, scanned_);
    };
    DescribeImageInstancesRequest() = default ;
    DescribeImageInstancesRequest(const DescribeImageInstancesRequest &) = default ;
    DescribeImageInstancesRequest(DescribeImageInstancesRequest &&) = default ;
    DescribeImageInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstancesRequest() = default ;
    DescribeImageInstancesRequest& operator=(const DescribeImageInstancesRequest &) = default ;
    DescribeImageInstancesRequest& operator=(DescribeImageInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->currentPage_ == nullptr && this->logicalExp_ == nullptr && this->pageSize_ == nullptr && this->scanned_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline DescribeImageInstancesRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline DescribeImageInstancesRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scanned Field Functions 
    bool hasScanned() const { return this->scanned_ != nullptr;};
    void deleteScanned() { this->scanned_ = nullptr;};
    inline bool getScanned() const { DARABONBA_PTR_GET_DEFAULT(scanned_, false) };
    inline DescribeImageInstancesRequest& setScanned(bool scanned) { DARABONBA_PTR_SET_VALUE(scanned_, scanned) };


  protected:
    // Sets the conditions for searching assets. This parameter is in JSON format and contains the following fields:
    // - **name**: The search item.
    // - **value**: The value of the search item.
    // - **logicalExp**: The logical relationship between multiple search item values. Valid values:
    //     - **OR**: The multiple search item values are in an **OR** relationship.
    //     - **AND**: The multiple search item values are in an **AND** relationship.
    // > You can call the [DescribeImageRepoCriteria](~~DescribeImageRepoCriteria~~) operation to query supported search conditions.
    shared_ptr<string> criteria_ {};
    // The page number of the returned results to start displaying. The starting value is **1**. Default value: **1**, which indicates that page 1 is displayed.
    shared_ptr<int32_t> currentPage_ {};
    // Sets the logical relationship between multiple search conditions. Valid values:
    // 
    // - **OR**: The multiple search conditions are in an **OR** relationship.
    // - **AND**: The multiple search conditions are in an **AND** relationship.
    shared_ptr<string> logicalExp_ {};
    // The maximum number of entries to return on each page during a paged query. The default number of entries per page is 20. If the PageSize parameter is left empty, 20 entries are returned by default.
    // > We recommend that you do not leave the PageSize parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the image has been scanned. Valid values:
    // - **true**: processed.
    // - **false**: not processed.
    shared_ptr<bool> scanned_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
