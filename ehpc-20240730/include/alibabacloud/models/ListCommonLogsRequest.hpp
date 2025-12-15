// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMONLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMONLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListCommonLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommonLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionName, actionName_);
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
    friend void from_json(const Darabonba::Json& j, ListCommonLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
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
    ListCommonLogsRequest() = default ;
    ListCommonLogsRequest(const ListCommonLogsRequest &) = default ;
    ListCommonLogsRequest(ListCommonLogsRequest &&) = default ;
    ListCommonLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommonLogsRequest() = default ;
    ListCommonLogsRequest& operator=(const ListCommonLogsRequest &) = default ;
    ListCommonLogsRequest& operator=(ListCommonLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionName_ == nullptr
        && return this->actionStatus_ == nullptr && return this->clusterId_ == nullptr && return this->from_ == nullptr && return this->isReverse_ == nullptr && return this->logRequestId_ == nullptr
        && return this->logType_ == nullptr && return this->operatorUid_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->resource_ == nullptr
        && return this->to_ == nullptr; };
    // actionName Field Functions 
    bool hasActionName() const { return this->actionName_ != nullptr;};
    void deleteActionName() { this->actionName_ = nullptr;};
    inline const vector<string> & actionName() const { DARABONBA_PTR_GET_CONST(actionName_, vector<string>) };
    inline vector<string> actionName() { DARABONBA_PTR_GET(actionName_, vector<string>) };
    inline ListCommonLogsRequest& setActionName(const vector<string> & actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };
    inline ListCommonLogsRequest& setActionName(vector<string> && actionName) { DARABONBA_PTR_SET_RVALUE(actionName_, actionName) };


    // actionStatus Field Functions 
    bool hasActionStatus() const { return this->actionStatus_ != nullptr;};
    void deleteActionStatus() { this->actionStatus_ = nullptr;};
    inline string actionStatus() const { DARABONBA_PTR_GET_DEFAULT(actionStatus_, "") };
    inline ListCommonLogsRequest& setActionStatus(string actionStatus) { DARABONBA_PTR_SET_VALUE(actionStatus_, actionStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListCommonLogsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline ListCommonLogsRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // isReverse Field Functions 
    bool hasIsReverse() const { return this->isReverse_ != nullptr;};
    void deleteIsReverse() { this->isReverse_ = nullptr;};
    inline bool isReverse() const { DARABONBA_PTR_GET_DEFAULT(isReverse_, false) };
    inline ListCommonLogsRequest& setIsReverse(bool isReverse) { DARABONBA_PTR_SET_VALUE(isReverse_, isReverse) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline ListCommonLogsRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListCommonLogsRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // operatorUid Field Functions 
    bool hasOperatorUid() const { return this->operatorUid_ != nullptr;};
    void deleteOperatorUid() { this->operatorUid_ = nullptr;};
    inline string operatorUid() const { DARABONBA_PTR_GET_DEFAULT(operatorUid_, "") };
    inline ListCommonLogsRequest& setOperatorUid(string operatorUid) { DARABONBA_PTR_SET_VALUE(operatorUid_, operatorUid) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommonLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommonLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListCommonLogsRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline ListCommonLogsRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The action types.
    std::shared_ptr<vector<string>> actionName_ = nullptr;
    // The action status. Logs associated with the specific action status are returned.
    // 
    // Valid values:
    // 
    // *   Finished: The action is completed.
    // *   Failed: The action failed.
    // *   InProgress: The action is being performed.
    std::shared_ptr<string> actionStatus_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The start time of the time range. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> from_ = nullptr;
    // Specifies whether to display results in reverse order.
    // 
    // Default value: true
    std::shared_ptr<bool> isReverse_ = nullptr;
    // The request ID of the action. Logs associated with the specific request ID are returned.
    std::shared_ptr<string> logRequestId_ = nullptr;
    // The log type. Logs of the specific type are returned.
    std::shared_ptr<string> logType_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> operatorUid_ = nullptr;
    // The page number of the page to return.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the resource involved in the action. Logs associated with the specific resource are returned. This parameter is not recommended.
    std::shared_ptr<string> resource_ = nullptr;
    // The end time of the time range. The time is a timestamp. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
