// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckWarnings, checkWarnings_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckWarnings, checkWarnings_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCheckWarningsResponseBody() = default ;
    DescribeCheckWarningsResponseBody(const DescribeCheckWarningsResponseBody &) = default ;
    DescribeCheckWarningsResponseBody(DescribeCheckWarningsResponseBody &&) = default ;
    DescribeCheckWarningsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningsResponseBody() = default ;
    DescribeCheckWarningsResponseBody& operator=(const DescribeCheckWarningsResponseBody &) = default ;
    DescribeCheckWarningsResponseBody& operator=(DescribeCheckWarningsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckWarnings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckWarnings& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckWarningId, checkWarningId_);
        DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
        DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
        DARABONBA_PTR_TO_JSON(ExecErrorMessage, execErrorMessage_);
        DARABONBA_PTR_TO_JSON(FixStatus, fixStatus_);
        DARABONBA_PTR_TO_JSON(Item, item_);
        DARABONBA_PTR_TO_JSON(LastHandleTime, lastHandleTime_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, CheckWarnings& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckWarningId, checkWarningId_);
        DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
        DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
        DARABONBA_PTR_FROM_JSON(ExecErrorMessage, execErrorMessage_);
        DARABONBA_PTR_FROM_JSON(FixStatus, fixStatus_);
        DARABONBA_PTR_FROM_JSON(Item, item_);
        DARABONBA_PTR_FROM_JSON(LastHandleTime, lastHandleTime_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      CheckWarnings() = default ;
      CheckWarnings(const CheckWarnings &) = default ;
      CheckWarnings(CheckWarnings &&) = default ;
      CheckWarnings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckWarnings() = default ;
      CheckWarnings& operator=(const CheckWarnings &) = default ;
      CheckWarnings& operator=(CheckWarnings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkWarningId_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->execErrorMessage_ == nullptr && this->fixStatus_ == nullptr
        && this->item_ == nullptr && this->lastHandleTime_ == nullptr && this->level_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr && this->uuid_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckWarnings& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkWarningId Field Functions 
      bool hasCheckWarningId() const { return this->checkWarningId_ != nullptr;};
      void deleteCheckWarningId() { this->checkWarningId_ = nullptr;};
      inline int64_t getCheckWarningId() const { DARABONBA_PTR_GET_DEFAULT(checkWarningId_, 0L) };
      inline CheckWarnings& setCheckWarningId(int64_t checkWarningId) { DARABONBA_PTR_SET_VALUE(checkWarningId_, checkWarningId) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline CheckWarnings& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline CheckWarnings& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // execErrorMessage Field Functions 
      bool hasExecErrorMessage() const { return this->execErrorMessage_ != nullptr;};
      void deleteExecErrorMessage() { this->execErrorMessage_ = nullptr;};
      inline string getExecErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(execErrorMessage_, "") };
      inline CheckWarnings& setExecErrorMessage(string execErrorMessage) { DARABONBA_PTR_SET_VALUE(execErrorMessage_, execErrorMessage) };


      // fixStatus Field Functions 
      bool hasFixStatus() const { return this->fixStatus_ != nullptr;};
      void deleteFixStatus() { this->fixStatus_ = nullptr;};
      inline int32_t getFixStatus() const { DARABONBA_PTR_GET_DEFAULT(fixStatus_, 0) };
      inline CheckWarnings& setFixStatus(int32_t fixStatus) { DARABONBA_PTR_SET_VALUE(fixStatus_, fixStatus) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline CheckWarnings& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // lastHandleTime Field Functions 
      bool hasLastHandleTime() const { return this->lastHandleTime_ != nullptr;};
      void deleteLastHandleTime() { this->lastHandleTime_ = nullptr;};
      inline int64_t getLastHandleTime() const { DARABONBA_PTR_GET_DEFAULT(lastHandleTime_, 0L) };
      inline CheckWarnings& setLastHandleTime(int64_t lastHandleTime) { DARABONBA_PTR_SET_VALUE(lastHandleTime_, lastHandleTime) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline CheckWarnings& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline CheckWarnings& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline CheckWarnings& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckWarnings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline CheckWarnings& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The ID of the alert that is generated for the baseline check result.
      shared_ptr<int64_t> checkWarningId_ {};
      // The ID of the container.
      shared_ptr<string> containerId_ {};
      // The name of the container.
      shared_ptr<string> containerName_ {};
      // The error message in the check result.
      shared_ptr<string> execErrorMessage_ {};
      // Indicates whether fixing is supported. Valid values:
      // 
      // *   **0**: Fixing is not supported.
      // *   **1**: Fixing is supported.
      shared_ptr<int32_t> fixStatus_ {};
      // The name of the check item.
      shared_ptr<string> item_ {};
      // The timestamp of the latest processing of the check item risk of the machine. Unit: milliseconds.
      shared_ptr<int64_t> lastHandleTime_ {};
      // The risk level of the risk item. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> level_ {};
      // The description.
      shared_ptr<string> reason_ {};
      // The status of the check item. Valid values:
      // 
      // *   **1**: failed.
      // *   **2**: verifying.
      // *   **3**: passed.
      // *   **5**: expired.
      // *   **6**: ignored.
      shared_ptr<int32_t> status_ {};
      // The type of the check item.
      shared_ptr<string> type_ {};
      // The ID of the server on which the baseline check is performed.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->checkWarnings_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // checkWarnings Field Functions 
    bool hasCheckWarnings() const { return this->checkWarnings_ != nullptr;};
    void deleteCheckWarnings() { this->checkWarnings_ = nullptr;};
    inline const vector<DescribeCheckWarningsResponseBody::CheckWarnings> & getCheckWarnings() const { DARABONBA_PTR_GET_CONST(checkWarnings_, vector<DescribeCheckWarningsResponseBody::CheckWarnings>) };
    inline vector<DescribeCheckWarningsResponseBody::CheckWarnings> getCheckWarnings() { DARABONBA_PTR_GET(checkWarnings_, vector<DescribeCheckWarningsResponseBody::CheckWarnings>) };
    inline DescribeCheckWarningsResponseBody& setCheckWarnings(const vector<DescribeCheckWarningsResponseBody::CheckWarnings> & checkWarnings) { DARABONBA_PTR_SET_VALUE(checkWarnings_, checkWarnings) };
    inline DescribeCheckWarningsResponseBody& setCheckWarnings(vector<DescribeCheckWarningsResponseBody::CheckWarnings> && checkWarnings) { DARABONBA_PTR_SET_RVALUE(checkWarnings_, checkWarnings) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCheckWarningsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCheckWarningsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCheckWarningsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the check item.
    shared_ptr<vector<DescribeCheckWarningsResponseBody::CheckWarnings>> checkWarnings_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
