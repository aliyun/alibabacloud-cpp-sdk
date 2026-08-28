// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPATROLREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPATROLREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListPatrolReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPatrolReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPatrolReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    ListPatrolReportsRequest() = default ;
    ListPatrolReportsRequest(const ListPatrolReportsRequest &) = default ;
    ListPatrolReportsRequest(ListPatrolReportsRequest &&) = default ;
    ListPatrolReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPatrolReportsRequest() = default ;
    ListPatrolReportsRequest& operator=(const ListPatrolReportsRequest &) = default ;
    ListPatrolReportsRequest& operator=(ListPatrolReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->page_ == nullptr && this->scopeType_ == nullptr && this->size_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr
        && this->triggerType_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListPatrolReportsRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListPatrolReportsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ListPatrolReportsRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPatrolReportsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListPatrolReportsRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPatrolReportsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListPatrolReportsRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // The end time of the query. Unit: milliseconds (UNIX timestamp).
    shared_ptr<int64_t> endDate_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // Filters reports by inspection scope type. Valid values:
    // 
    // - ALL
    // - TAGS
    // - DEPLOYMENTS
    shared_ptr<string> scopeType_ {};
    // The number of entries per page. Default value: 20. Maximum value: 200.
    shared_ptr<int32_t> size_ {};
    // The start time of the query. Unit: milliseconds (UNIX timestamp).
    shared_ptr<int64_t> startDate_ {};
    // Filters reports by status. Valid values:
    // 
    // - PENDING
    // - IN_PROGRESS
    // - COMPLETED
    // - FAILED
    shared_ptr<string> status_ {};
    // Filters reports by trigger type. Valid values:
    // 
    // - CRON
    // - MANUAL
    // - INNER_API
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
