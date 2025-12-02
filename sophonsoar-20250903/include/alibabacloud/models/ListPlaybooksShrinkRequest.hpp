// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYBOOKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYBOOKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListPlaybooksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaybooksShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(PlaybookParamTypes, playbookParamTypesShrink_);
      DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuids, playbookUuidsShrink_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaybooksShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(PlaybookParamTypes, playbookParamTypesShrink_);
      DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
      DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuids, playbookUuidsShrink_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListPlaybooksShrinkRequest() = default ;
    ListPlaybooksShrinkRequest(const ListPlaybooksShrinkRequest &) = default ;
    ListPlaybooksShrinkRequest(ListPlaybooksShrinkRequest &&) = default ;
    ListPlaybooksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaybooksShrinkRequest() = default ;
    ListPlaybooksShrinkRequest& operator=(const ListPlaybooksShrinkRequest &) = default ;
    ListPlaybooksShrinkRequest& operator=(ListPlaybooksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->orderField_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->playbookExecutionEndTime_ == nullptr && return this->playbookExecutionStartTime_ == nullptr && return this->playbookName_ == nullptr && return this->playbookParamTypesShrink_ == nullptr
        && return this->playbookStatus_ == nullptr && return this->playbookType_ == nullptr && return this->playbookUuidsShrink_ == nullptr && return this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListPlaybooksShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPlaybooksShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPlaybooksShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListPlaybooksShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListPlaybooksShrinkRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPlaybooksShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPlaybooksShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbookExecutionEndTime Field Functions 
    bool hasPlaybookExecutionEndTime() const { return this->playbookExecutionEndTime_ != nullptr;};
    void deletePlaybookExecutionEndTime() { this->playbookExecutionEndTime_ = nullptr;};
    inline int64_t playbookExecutionEndTime() const { DARABONBA_PTR_GET_DEFAULT(playbookExecutionEndTime_, 0L) };
    inline ListPlaybooksShrinkRequest& setPlaybookExecutionEndTime(int64_t playbookExecutionEndTime) { DARABONBA_PTR_SET_VALUE(playbookExecutionEndTime_, playbookExecutionEndTime) };


    // playbookExecutionStartTime Field Functions 
    bool hasPlaybookExecutionStartTime() const { return this->playbookExecutionStartTime_ != nullptr;};
    void deletePlaybookExecutionStartTime() { this->playbookExecutionStartTime_ = nullptr;};
    inline int64_t playbookExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(playbookExecutionStartTime_, 0L) };
    inline ListPlaybooksShrinkRequest& setPlaybookExecutionStartTime(int64_t playbookExecutionStartTime) { DARABONBA_PTR_SET_VALUE(playbookExecutionStartTime_, playbookExecutionStartTime) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline ListPlaybooksShrinkRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // playbookParamTypesShrink Field Functions 
    bool hasPlaybookParamTypesShrink() const { return this->playbookParamTypesShrink_ != nullptr;};
    void deletePlaybookParamTypesShrink() { this->playbookParamTypesShrink_ = nullptr;};
    inline string playbookParamTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(playbookParamTypesShrink_, "") };
    inline ListPlaybooksShrinkRequest& setPlaybookParamTypesShrink(string playbookParamTypesShrink) { DARABONBA_PTR_SET_VALUE(playbookParamTypesShrink_, playbookParamTypesShrink) };


    // playbookStatus Field Functions 
    bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
    void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
    inline int32_t playbookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
    inline ListPlaybooksShrinkRequest& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


    // playbookType Field Functions 
    bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
    void deletePlaybookType() { this->playbookType_ = nullptr;};
    inline string playbookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
    inline ListPlaybooksShrinkRequest& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


    // playbookUuidsShrink Field Functions 
    bool hasPlaybookUuidsShrink() const { return this->playbookUuidsShrink_ != nullptr;};
    void deletePlaybookUuidsShrink() { this->playbookUuidsShrink_ = nullptr;};
    inline string playbookUuidsShrink() const { DARABONBA_PTR_GET_DEFAULT(playbookUuidsShrink_, "") };
    inline ListPlaybooksShrinkRequest& setPlaybookUuidsShrink(string playbookUuidsShrink) { DARABONBA_PTR_SET_VALUE(playbookUuidsShrink_, playbookUuidsShrink) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListPlaybooksShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // Language type for request and response messages.
    // - **zh** (default): Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Maximum number of results returned in a single request. Range: 1~100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Token for the next query start.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Sorting logic, default is **desc**, with values as follows:
    // - **desc**: Descending order.
    // - **asc**: Ascending order.
    std::shared_ptr<string> order_ = nullptr;
    // Sorting field. Values:
    // 
    // - **UpdateTime**: Sort by update time.
    // - **ExecutionTime**: Sort by the latest execution time.
    std::shared_ptr<string> orderField_ = nullptr;
    // Page number for pagination, default value is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Number of items per page for pagination. Range: 1~100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // End time of the latest execution of the playbook.
    std::shared_ptr<int64_t> playbookExecutionEndTime_ = nullptr;
    // Start time of the latest execution of the playbook.
    std::shared_ptr<int64_t> playbookExecutionStartTime_ = nullptr;
    // Name of the playbook, supports fuzzy search.
    std::shared_ptr<string> playbookName_ = nullptr;
    // Collection of input parameter types for the playbook.
    std::shared_ptr<string> playbookParamTypesShrink_ = nullptr;
    // Publication status of the playbook, with values as follows:
    // 
    // - **0**: Unpublished.
    // - **1**: Published.
    std::shared_ptr<int32_t> playbookStatus_ = nullptr;
    // Type of the playbook, with values as follows:
    // 
    // - **preset**: Predefined playbook.
    // - **user**: Custom playbook.
    // - **component**: Security response component.
    std::shared_ptr<string> playbookType_ = nullptr;
    // Collection of UUIDs of playbooks.
    std::shared_ptr<string> playbookUuidsShrink_ = nullptr;
    // User ID for the administrator to switch to another member\\"s perspective.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
