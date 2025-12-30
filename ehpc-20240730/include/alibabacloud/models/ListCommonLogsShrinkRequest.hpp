// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONLOGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONLOGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListCommonLogsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonLogsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionNameShrink_);
      DARABONBA_PTR_TO_JSON(ActionStatus, actionStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IsReverse, isReverse_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommonLogsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionNameShrink_);
      DARABONBA_PTR_FROM_JSON(ActionStatus, actionStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IsReverse, isReverse_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(OperatorUid, operatorUid_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    ListCommonLogsShrinkRequest() = default ;
    ListCommonLogsShrinkRequest(const ListCommonLogsShrinkRequest &) = default ;
    ListCommonLogsShrinkRequest(ListCommonLogsShrinkRequest &&) = default ;
    ListCommonLogsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonLogsShrinkRequest() = default ;
    ListCommonLogsShrinkRequest& operator=(const ListCommonLogsShrinkRequest &) = default ;
    ListCommonLogsShrinkRequest& operator=(ListCommonLogsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionNameShrink_ == nullptr
        && this->actionStatus_ == nullptr && this->clusterId_ == nullptr && this->from_ == nullptr && this->isReverse_ == nullptr && this->logRequestId_ == nullptr
        && this->logType_ == nullptr && this->operatorUid_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resource_ == nullptr
        && this->to_ == nullptr; };
    // actionNameShrink Field Functions 
    bool hasActionNameShrink() const { return this->actionNameShrink_ != nullptr;};
    void deleteActionNameShrink() { this->actionNameShrink_ = nullptr;};
    inline string getActionNameShrink() const { DARABONBA_PTR_GET_DEFAULT(actionNameShrink_, "") };
    inline ListCommonLogsShrinkRequest& setActionNameShrink(string actionNameShrink) { DARABONBA_PTR_SET_VALUE(actionNameShrink_, actionNameShrink) };


    // actionStatus Field Functions 
    bool hasActionStatus() const { return this->actionStatus_ != nullptr;};
    void deleteActionStatus() { this->actionStatus_ = nullptr;};
    inline string getActionStatus() const { DARABONBA_PTR_GET_DEFAULT(actionStatus_, "") };
    inline ListCommonLogsShrinkRequest& setActionStatus(string actionStatus) { DARABONBA_PTR_SET_VALUE(actionStatus_, actionStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCommonLogsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListCommonLogsShrinkRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isReverse Field Functions 
    bool hasIsReverse() const { return this->isReverse_ != nullptr;};
    void deleteIsReverse() { this->isReverse_ = nullptr;};
    inline bool getIsReverse() const { DARABONBA_PTR_GET_DEFAULT(isReverse_, false) };
    inline ListCommonLogsShrinkRequest& setIsReverse(bool isReverse) { DARABONBA_PTR_SET_VALUE(isReverse_, isReverse) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline ListCommonLogsShrinkRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListCommonLogsShrinkRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string getOperatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline ListCommonLogsShrinkRequest& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommonLogsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommonLogsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListCommonLogsShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListCommonLogsShrinkRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The action types.
    shared_ptr<string> actionNameShrink_ {};
    // The action status. Logs associated with the specific action status are returned.
    // 
    // Valid values:
    // 
    // *   Finished: The action is completed.
    // *   Failed: The action failed.
    // *   InProgress: The action is being performed.
    shared_ptr<string> actionStatus_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The start time of the time range. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    // Specifies whether to display results in reverse order.
    // 
    // Default value: true
    shared_ptr<bool> isReverse_ {};
    // The request ID of the action. Logs associated with the specific request ID are returned.
    shared_ptr<string> logRequestId_ {};
    // The log type. Logs of the specific type are returned.
    shared_ptr<string> logType_ {};
    // The account ID of the operator.
    shared_ptr<string> operatorUid_ {};
    // The page number of the page to return.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the resource involved in the action. Logs associated with the specific resource are returned. This parameter is not recommended.
    shared_ptr<string> resource_ {};
    // The end time of the time range. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
