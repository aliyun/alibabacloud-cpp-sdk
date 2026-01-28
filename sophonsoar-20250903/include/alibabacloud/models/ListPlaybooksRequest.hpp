// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYBOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYBOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListPlaybooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaybooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlaybookExecutionEndTime, playbookExecutionEndTime_);
      DARABONBA_PTR_TO_JSON(PlaybookExecutionStartTime, playbookExecutionStartTime_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(PlaybookParamTypes, playbookParamTypes_);
      DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuids, playbookUuids_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaybooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlaybookExecutionEndTime, playbookExecutionEndTime_);
      DARABONBA_PTR_FROM_JSON(PlaybookExecutionStartTime, playbookExecutionStartTime_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(PlaybookParamTypes, playbookParamTypes_);
      DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuids, playbookUuids_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListPlaybooksRequest() = default ;
    ListPlaybooksRequest(const ListPlaybooksRequest &) = default ;
    ListPlaybooksRequest(ListPlaybooksRequest &&) = default ;
    ListPlaybooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaybooksRequest() = default ;
    ListPlaybooksRequest& operator=(const ListPlaybooksRequest &) = default ;
    ListPlaybooksRequest& operator=(ListPlaybooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->orderField_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->playbookExecutionEndTime_ == nullptr && this->playbookExecutionStartTime_ == nullptr && this->playbookName_ == nullptr && this->playbookParamTypes_ == nullptr
        && this->playbookStatus_ == nullptr && this->playbookType_ == nullptr && this->playbookUuids_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListPlaybooksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPlaybooksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPlaybooksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListPlaybooksRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListPlaybooksRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPlaybooksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPlaybooksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbookExecutionEndTime Field Functions 
    bool hasPlaybookExecutionEndTime() const { return this->playbookExecutionEndTime_ != nullptr;};
    void deletePlaybookExecutionEndTime() { this->playbookExecutionEndTime_ = nullptr;};
    inline int64_t getPlaybookExecutionEndTime() const { DARABONBA_PTR_GET_DEFAULT(playbookExecutionEndTime_, 0L) };
    inline ListPlaybooksRequest& setPlaybookExecutionEndTime(int64_t playbookExecutionEndTime) { DARABONBA_PTR_SET_VALUE(playbookExecutionEndTime_, playbookExecutionEndTime) };


    // playbookExecutionStartTime Field Functions 
    bool hasPlaybookExecutionStartTime() const { return this->playbookExecutionStartTime_ != nullptr;};
    void deletePlaybookExecutionStartTime() { this->playbookExecutionStartTime_ = nullptr;};
    inline int64_t getPlaybookExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(playbookExecutionStartTime_, 0L) };
    inline ListPlaybooksRequest& setPlaybookExecutionStartTime(int64_t playbookExecutionStartTime) { DARABONBA_PTR_SET_VALUE(playbookExecutionStartTime_, playbookExecutionStartTime) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListPlaybooksRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookParamTypes Field Functions 
    bool hasPlaybookParamTypes() const { return this->playbookParamTypes_ != nullptr;};
    void deletePlaybookParamTypes() { this->playbookParamTypes_ = nullptr;};
    inline const vector<string> & getPlaybookParamTypes() const { DARABONBA_PTR_GET_CONST(playbookParamTypes_, vector<string>) };
    inline vector<string> getPlaybookParamTypes() { DARABONBA_PTR_GET(playbookParamTypes_, vector<string>) };
    inline ListPlaybooksRequest& setPlaybookParamTypes(const vector<string> & playbookParamTypes) { DARABONBA_PTR_SET_VALUE(playbookParamTypes_, playbookParamTypes) };
    inline ListPlaybooksRequest& setPlaybookParamTypes(vector<string> && playbookParamTypes) { DARABONBA_PTR_SET_RVALUE(playbookParamTypes_, playbookParamTypes) };


    // playbookStatus Field Functions 
    bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
    void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
    inline int32_t getPlaybookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
    inline ListPlaybooksRequest& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


    // playbookType Field Functions 
    bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
    void deletePlaybookType() { this->playbookType_ = nullptr;};
    inline string getPlaybookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
    inline ListPlaybooksRequest& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


    // playbookUuids Field Functions 
    bool hasPlaybookUuids() const { return this->playbookUuids_ != nullptr;};
    void deletePlaybookUuids() { this->playbookUuids_ = nullptr;};
    inline const vector<string> & getPlaybookUuids() const { DARABONBA_PTR_GET_CONST(playbookUuids_, vector<string>) };
    inline vector<string> getPlaybookUuids() { DARABONBA_PTR_GET(playbookUuids_, vector<string>) };
    inline ListPlaybooksRequest& setPlaybookUuids(const vector<string> & playbookUuids) { DARABONBA_PTR_SET_VALUE(playbookUuids_, playbookUuids) };
    inline ListPlaybooksRequest& setPlaybookUuids(vector<string> && playbookUuids) { DARABONBA_PTR_SET_RVALUE(playbookUuids_, playbookUuids) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListPlaybooksRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // Language type for request and response messages.
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Maximum number of results returned in a single request. Range: 1~100.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the next query start.
    shared_ptr<string> nextToken_ {};
    // Sorting logic, default is **desc**, with values as follows:
    // - **desc**: Descending order.
    // - **asc**: Ascending order.
    shared_ptr<string> order_ {};
    // Sorting field. Values:
    // 
    // - **UpdateTime**: Sort by update time.
    // - **ExecutionTime**: Sort by the latest execution time.
    shared_ptr<string> orderField_ {};
    // Page number for pagination, default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of items per page for pagination. Range: 1~100.
    shared_ptr<int32_t> pageSize_ {};
    // End time of the latest execution of the playbook.
    shared_ptr<int64_t> playbookExecutionEndTime_ {};
    // Start time of the latest execution of the playbook.
    shared_ptr<int64_t> playbookExecutionStartTime_ {};
    // Name of the playbook, supports fuzzy search.
    shared_ptr<string> playbookName_ {};
    // Collection of input parameter types for the playbook.
    shared_ptr<vector<string>> playbookParamTypes_ {};
    // Publication status of the playbook, with values as follows:
    // 
    // - **0**: Unpublished.
    // - **1**: Published.
    shared_ptr<int32_t> playbookStatus_ {};
    // Type of the playbook, with values as follows:
    // 
    // - **preset**: Predefined playbook.
    // - **user**: Custom playbook.
    // - **component**: Security response component.
    shared_ptr<string> playbookType_ {};
    // Collection of UUIDs of playbooks.
    shared_ptr<vector<string>> playbookUuids_ {};
    // User ID for the administrator to switch to another member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
