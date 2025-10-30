// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicDisposalProcessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DisposalAction, disposalAction_);
      DARABONBA_PTR_TO_JSON(DisposalProcessId, disposalProcessId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoveryType, recoveryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DisposalAction, disposalAction_);
      DARABONBA_PTR_FROM_JSON(DisposalProcessId, disposalProcessId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoveryType, recoveryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListDynamicDisposalProcessesRequest() = default ;
    ListDynamicDisposalProcessesRequest(const ListDynamicDisposalProcessesRequest &) = default ;
    ListDynamicDisposalProcessesRequest(ListDynamicDisposalProcessesRequest &&) = default ;
    ListDynamicDisposalProcessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesRequest() = default ;
    ListDynamicDisposalProcessesRequest& operator=(const ListDynamicDisposalProcessesRequest &) = default ;
    ListDynamicDisposalProcessesRequest& operator=(ListDynamicDisposalProcessesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->devTag_ == nullptr && return this->disposalAction_ == nullptr && return this->disposalProcessId_ == nullptr && return this->endTime_ == nullptr && return this->pageSize_ == nullptr
        && return this->recoveryType_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->userName_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListDynamicDisposalProcessesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListDynamicDisposalProcessesRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // disposalAction Field Functions 
    bool hasDisposalAction() const { return this->disposalAction_ != nullptr;};
    void deleteDisposalAction() { this->disposalAction_ = nullptr;};
    inline string disposalAction() const { DARABONBA_PTR_GET_DEFAULT(disposalAction_, "") };
    inline ListDynamicDisposalProcessesRequest& setDisposalAction(string disposalAction) { DARABONBA_PTR_SET_VALUE(disposalAction_, disposalAction) };


    // disposalProcessId Field Functions 
    bool hasDisposalProcessId() const { return this->disposalProcessId_ != nullptr;};
    void deleteDisposalProcessId() { this->disposalProcessId_ = nullptr;};
    inline string disposalProcessId() const { DARABONBA_PTR_GET_DEFAULT(disposalProcessId_, "") };
    inline ListDynamicDisposalProcessesRequest& setDisposalProcessId(string disposalProcessId) { DARABONBA_PTR_SET_VALUE(disposalProcessId_, disposalProcessId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDynamicDisposalProcessesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDynamicDisposalProcessesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoveryType Field Functions 
    bool hasRecoveryType() const { return this->recoveryType_ != nullptr;};
    void deleteRecoveryType() { this->recoveryType_ = nullptr;};
    inline string recoveryType() const { DARABONBA_PTR_GET_DEFAULT(recoveryType_, "") };
    inline ListDynamicDisposalProcessesRequest& setRecoveryType(string recoveryType) { DARABONBA_PTR_SET_VALUE(recoveryType_, recoveryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDynamicDisposalProcessesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDynamicDisposalProcessesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListDynamicDisposalProcessesRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The page number to display in the paginated query. Range: 1~10000.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Terminal device ID.
    std::shared_ptr<string> devTag_ = nullptr;
    // Disposal action.
    // - **ztna_connect**: Prohibit connection to the zero-trust intranet.
    // - **nac_connect**: Prohibit connection to the office network access.
    // - **none**: No disposal action.
    std::shared_ptr<string> disposalAction_ = nullptr;
    // Disposal process ID.
    std::shared_ptr<string> disposalProcessId_ = nullptr;
    // The end time for querying dynamic disposal processes. Format: Unix timestamp (in seconds).
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of items per page in the paginated query. Range: 1~1000.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Recovery type.
    // - **auto**: Automatic recovery.
    // - **console**: Console recovery.
    // - **auth**: Recovery by authentication and reporting.
    std::shared_ptr<string> recoveryType_ = nullptr;
    // The start time for querying dynamic disposal processes. Format: Unix timestamp (in seconds).
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // Disposal status. Values:
    // - **disposal**: In the disposal state.
    // - **finished**: Already automatically recovered.
    // - **recovery**: Recovered by authentication and reporting or console recovery.
    std::shared_ptr<string> status_ = nullptr;
    // Username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
