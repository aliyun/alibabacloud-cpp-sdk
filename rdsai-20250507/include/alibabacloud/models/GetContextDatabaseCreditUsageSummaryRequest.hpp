// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTDATABASECREDITUSAGESUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetContextDatabaseCreditUsageSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextDatabaseCreditUsageSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SubItem, subItem_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextDatabaseCreditUsageSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SubItem, subItem_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetContextDatabaseCreditUsageSummaryRequest() = default ;
    GetContextDatabaseCreditUsageSummaryRequest(const GetContextDatabaseCreditUsageSummaryRequest &) = default ;
    GetContextDatabaseCreditUsageSummaryRequest(GetContextDatabaseCreditUsageSummaryRequest &&) = default ;
    GetContextDatabaseCreditUsageSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextDatabaseCreditUsageSummaryRequest() = default ;
    GetContextDatabaseCreditUsageSummaryRequest& operator=(const GetContextDatabaseCreditUsageSummaryRequest &) = default ;
    GetContextDatabaseCreditUsageSummaryRequest& operator=(GetContextDatabaseCreditUsageSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->interval_ == nullptr && this->item_ == nullptr && this->memberId_ == nullptr && this->startTime_ == nullptr && this->subItem_ == nullptr
        && this->workspaceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subItem Field Functions 
    bool hasSubItem() const { return this->subItem_ != nullptr;};
    void deleteSubItem() { this->subItem_ = nullptr;};
    inline string getSubItem() const { DARABONBA_PTR_GET_DEFAULT(subItem_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setSubItem(string subItem) { DARABONBA_PTR_SET_VALUE(subItem_, subItem) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetContextDatabaseCreditUsageSummaryRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The end time of the query range, exclusive. This time must be later than StartTime. Use the ISO 8601 time format, such as 2026-10-15T00:00:00Z (UTC). The maximum time range is 7 days for hourly statistics and 31 days for daily statistics.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The bucketing granularity. Valid values: Hour (hourly) and Day (daily). The values are case-insensitive. If omitted, Hour is used by default for a time range of up to 7 days, and Day is used for a time range exceeding 7 days. The maximum time range is 7 days for Hour and 31 days for Day. If the limit is exceeded, InvalidParameter is returned.
    shared_ptr<string> interval_ {};
    // The billing item used to filter records. Supported values include KnowledgeBaseRead (knowledge base read), MemoryRead (memory read), MemoryWrite (memory write), KnowledgeBaseWriteToken (knowledge base write token), and ContextGrowth (context evolution). If omitted, all billing items that consume credits are included. Storage items or unlisted values return InvalidParameter.
    shared_ptr<string> item_ {};
    // The member ID used to filter records. If specified, WorkspaceId must also be provided. Otherwise, InvalidParameter is returned. A member ID is unique only within its workspace. This parameter only filters data and does not change the caller identity. Records without a member ID are not matched. Results are still bucketed by time and billing item, and are not split by member.
    shared_ptr<string> memberId_ {};
    // The start time of the query range, inclusive. Use the ISO 8601 time format, such as 2026-09-15T00:00:00Z (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The context evolution sub-item used to filter records. Supported values include KnowledgeOrganization (knowledge organization), MemoryPromotion (memory promotion), KnowledgeReview (knowledge review), KnowledgeEvolution (knowledge evolution), and MemoryEvolution (memory evolution). The values are case-sensitive. If only SubItem is provided, the billing item is automatically restricted to ContextGrowth. If other Item values are provided simultaneously or the sub-item is not in the list, InvalidParameter is returned.
    shared_ptr<string> subItem_ {};
    // The ID of the workspace to query. If specified, only the data of this workspace under the caller account is queried. Locked workspaces can also be queried. If omitted, all workspaces under the caller account are queried.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
