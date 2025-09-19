// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSRESPONSEBODYCHECKWARNINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSRESPONSEBODYCHECKWARNINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningsResponseBodyCheckWarnings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningsResponseBodyCheckWarnings& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningsResponseBodyCheckWarnings& obj) { 
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
    DescribeCheckWarningsResponseBodyCheckWarnings() = default ;
    DescribeCheckWarningsResponseBodyCheckWarnings(const DescribeCheckWarningsResponseBodyCheckWarnings &) = default ;
    DescribeCheckWarningsResponseBodyCheckWarnings(DescribeCheckWarningsResponseBodyCheckWarnings &&) = default ;
    DescribeCheckWarningsResponseBodyCheckWarnings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningsResponseBodyCheckWarnings() = default ;
    DescribeCheckWarningsResponseBodyCheckWarnings& operator=(const DescribeCheckWarningsResponseBodyCheckWarnings &) = default ;
    DescribeCheckWarningsResponseBodyCheckWarnings& operator=(DescribeCheckWarningsResponseBodyCheckWarnings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->checkWarningId_ != nullptr && this->containerId_ != nullptr && this->containerName_ != nullptr && this->execErrorMessage_ != nullptr && this->fixStatus_ != nullptr
        && this->item_ != nullptr && this->lastHandleTime_ != nullptr && this->level_ != nullptr && this->reason_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr && this->uuid_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkWarningId Field Functions 
    bool hasCheckWarningId() const { return this->checkWarningId_ != nullptr;};
    void deleteCheckWarningId() { this->checkWarningId_ = nullptr;};
    inline int64_t checkWarningId() const { DARABONBA_PTR_GET_DEFAULT(checkWarningId_, 0L) };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setCheckWarningId(int64_t checkWarningId) { DARABONBA_PTR_SET_VALUE(checkWarningId_, checkWarningId) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // execErrorMessage Field Functions 
    bool hasExecErrorMessage() const { return this->execErrorMessage_ != nullptr;};
    void deleteExecErrorMessage() { this->execErrorMessage_ = nullptr;};
    inline string execErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(execErrorMessage_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setExecErrorMessage(string execErrorMessage) { DARABONBA_PTR_SET_VALUE(execErrorMessage_, execErrorMessage) };


    // fixStatus Field Functions 
    bool hasFixStatus() const { return this->fixStatus_ != nullptr;};
    void deleteFixStatus() { this->fixStatus_ = nullptr;};
    inline int32_t fixStatus() const { DARABONBA_PTR_GET_DEFAULT(fixStatus_, 0) };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setFixStatus(int32_t fixStatus) { DARABONBA_PTR_SET_VALUE(fixStatus_, fixStatus) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // lastHandleTime Field Functions 
    bool hasLastHandleTime() const { return this->lastHandleTime_ != nullptr;};
    void deleteLastHandleTime() { this->lastHandleTime_ = nullptr;};
    inline int64_t lastHandleTime() const { DARABONBA_PTR_GET_DEFAULT(lastHandleTime_, 0L) };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setLastHandleTime(int64_t lastHandleTime) { DARABONBA_PTR_SET_VALUE(lastHandleTime_, lastHandleTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCheckWarningsResponseBodyCheckWarnings& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The ID of the alert that is generated for the baseline check result.
    std::shared_ptr<int64_t> checkWarningId_ = nullptr;
    // The ID of the container.
    std::shared_ptr<string> containerId_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The error message in the check result.
    std::shared_ptr<string> execErrorMessage_ = nullptr;
    // Indicates whether fixing is supported. Valid values:
    // 
    // *   **0**: Fixing is not supported.
    // *   **1**: Fixing is supported.
    std::shared_ptr<int32_t> fixStatus_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> item_ = nullptr;
    // The timestamp of the latest processing of the check item risk of the machine. Unit: milliseconds.
    std::shared_ptr<int64_t> lastHandleTime_ = nullptr;
    // The risk level of the risk item. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> level_ = nullptr;
    // The description.
    std::shared_ptr<string> reason_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   **1**: failed.
    // *   **2**: verifying.
    // *   **3**: passed.
    // *   **5**: expired.
    // *   **6**: ignored.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the check item.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the server on which the baseline check is performed.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
