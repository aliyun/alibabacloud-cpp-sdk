// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSasContainerWebDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSasContainerWebDefenseRuleRequest() = default ;
    ListSasContainerWebDefenseRuleRequest(const ListSasContainerWebDefenseRuleRequest &) = default ;
    ListSasContainerWebDefenseRuleRequest(ListSasContainerWebDefenseRuleRequest &&) = default ;
    ListSasContainerWebDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSasContainerWebDefenseRuleRequest() = default ;
    ListSasContainerWebDefenseRuleRequest& operator=(const ListSasContainerWebDefenseRuleRequest &) = default ;
    ListSasContainerWebDefenseRuleRequest& operator=(ListSasContainerWebDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && this->currentPage_ == nullptr && this->logicalExp_ == nullptr && this->pageSize_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListSasContainerWebDefenseRuleRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSasContainerWebDefenseRuleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline ListSasContainerWebDefenseRuleRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSasContainerWebDefenseRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The conditions for searching assets. This parameter is in JSON format and contains the following fields:
    // - **name**: The search item.
    // - **value**: The value of the search item.
    // - **logicalExp**: The logical relationship among multiple search item values. Valid values:
    //     - **OR**: The search item values are evaluated by using the OR operator.
    //     - **AND**: The search item values are evaluated by using the AND operator.
    shared_ptr<string> criteria_ {};
    // The page number of the current page in a paged query. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The logical relationship among multiple search conditions. Valid values:
    // 
    // - **OR**: The search conditions are evaluated by using the OR operator.
    // - **AND**: The search conditions are evaluated by using the AND operator.
    shared_ptr<string> logicalExp_ {};
    // The number of entries per page in a paged query. Default value: **20**, which indicates that 20 entries are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
