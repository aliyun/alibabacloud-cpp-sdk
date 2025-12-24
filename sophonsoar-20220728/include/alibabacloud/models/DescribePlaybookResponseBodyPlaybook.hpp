// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRESPONSEBODYPLAYBOOK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRESPONSEBODYPLAYBOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookResponseBodyPlaybook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookResponseBodyPlaybook& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(FailExeNum, failExeNum_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(LastExeTime, lastExeTime_);
      DARABONBA_PTR_TO_JSON(OnlineActive, onlineActive_);
      DARABONBA_PTR_TO_JSON(OnlineReleaseTaskflowMd5, onlineReleaseTaskflowMd5_);
      DARABONBA_PTR_TO_JSON(OwnType, ownType_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(SuccessExeNum, successExeNum_);
      DARABONBA_PTR_TO_JSON(Taskflow, taskflow_);
      DARABONBA_PTR_TO_JSON(TaskflowType, taskflowType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookResponseBodyPlaybook& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(FailExeNum, failExeNum_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(LastExeTime, lastExeTime_);
      DARABONBA_PTR_FROM_JSON(OnlineActive, onlineActive_);
      DARABONBA_PTR_FROM_JSON(OnlineReleaseTaskflowMd5, onlineReleaseTaskflowMd5_);
      DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(SuccessExeNum, successExeNum_);
      DARABONBA_PTR_FROM_JSON(Taskflow, taskflow_);
      DARABONBA_PTR_FROM_JSON(TaskflowType, taskflowType_);
    };
    DescribePlaybookResponseBodyPlaybook() = default ;
    DescribePlaybookResponseBodyPlaybook(const DescribePlaybookResponseBodyPlaybook &) = default ;
    DescribePlaybookResponseBodyPlaybook(DescribePlaybookResponseBodyPlaybook &&) = default ;
    DescribePlaybookResponseBodyPlaybook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookResponseBodyPlaybook() = default ;
    DescribePlaybookResponseBodyPlaybook& operator=(const DescribePlaybookResponseBodyPlaybook &) = default ;
    DescribePlaybookResponseBodyPlaybook& operator=(DescribePlaybookResponseBodyPlaybook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->failExeNum_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->inputParams_ == nullptr
        && return this->lastExeTime_ == nullptr && return this->onlineActive_ == nullptr && return this->onlineReleaseTaskflowMd5_ == nullptr && return this->ownType_ == nullptr && return this->playbookUuid_ == nullptr
        && return this->successExeNum_ == nullptr && return this->taskflow_ == nullptr && return this->taskflowType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // failExeNum Field Functions 
    bool hasFailExeNum() const { return this->failExeNum_ != nullptr;};
    void deleteFailExeNum() { this->failExeNum_ = nullptr;};
    inline int32_t failExeNum() const { DARABONBA_PTR_GET_DEFAULT(failExeNum_, 0) };
    inline DescribePlaybookResponseBodyPlaybook& setFailExeNum(int32_t failExeNum) { DARABONBA_PTR_SET_VALUE(failExeNum_, failExeNum) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // lastExeTime Field Functions 
    bool hasLastExeTime() const { return this->lastExeTime_ != nullptr;};
    void deleteLastExeTime() { this->lastExeTime_ = nullptr;};
    inline int64_t lastExeTime() const { DARABONBA_PTR_GET_DEFAULT(lastExeTime_, 0L) };
    inline DescribePlaybookResponseBodyPlaybook& setLastExeTime(int64_t lastExeTime) { DARABONBA_PTR_SET_VALUE(lastExeTime_, lastExeTime) };


    // onlineActive Field Functions 
    bool hasOnlineActive() const { return this->onlineActive_ != nullptr;};
    void deleteOnlineActive() { this->onlineActive_ = nullptr;};
    inline bool onlineActive() const { DARABONBA_PTR_GET_DEFAULT(onlineActive_, false) };
    inline DescribePlaybookResponseBodyPlaybook& setOnlineActive(bool onlineActive) { DARABONBA_PTR_SET_VALUE(onlineActive_, onlineActive) };


    // onlineReleaseTaskflowMd5 Field Functions 
    bool hasOnlineReleaseTaskflowMd5() const { return this->onlineReleaseTaskflowMd5_ != nullptr;};
    void deleteOnlineReleaseTaskflowMd5() { this->onlineReleaseTaskflowMd5_ = nullptr;};
    inline string onlineReleaseTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(onlineReleaseTaskflowMd5_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setOnlineReleaseTaskflowMd5(string onlineReleaseTaskflowMd5) { DARABONBA_PTR_SET_VALUE(onlineReleaseTaskflowMd5_, onlineReleaseTaskflowMd5) };


    // ownType Field Functions 
    bool hasOwnType() const { return this->ownType_ != nullptr;};
    void deleteOwnType() { this->ownType_ = nullptr;};
    inline string ownType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // successExeNum Field Functions 
    bool hasSuccessExeNum() const { return this->successExeNum_ != nullptr;};
    void deleteSuccessExeNum() { this->successExeNum_ = nullptr;};
    inline int32_t successExeNum() const { DARABONBA_PTR_GET_DEFAULT(successExeNum_, 0) };
    inline DescribePlaybookResponseBodyPlaybook& setSuccessExeNum(int32_t successExeNum) { DARABONBA_PTR_SET_VALUE(successExeNum_, successExeNum) };


    // taskflow Field Functions 
    bool hasTaskflow() const { return this->taskflow_ != nullptr;};
    void deleteTaskflow() { this->taskflow_ = nullptr;};
    inline string taskflow() const { DARABONBA_PTR_GET_DEFAULT(taskflow_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setTaskflow(string taskflow) { DARABONBA_PTR_SET_VALUE(taskflow_, taskflow) };


    // taskflowType Field Functions 
    bool hasTaskflowType() const { return this->taskflowType_ != nullptr;};
    void deleteTaskflowType() { this->taskflowType_ = nullptr;};
    inline string taskflowType() const { DARABONBA_PTR_GET_DEFAULT(taskflowType_, "") };
    inline DescribePlaybookResponseBodyPlaybook& setTaskflowType(string taskflowType) { DARABONBA_PTR_SET_VALUE(taskflowType_, taskflowType) };


  protected:
    // The description of the playbook.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the playbook.
    std::shared_ptr<string> displayName_ = nullptr;
    // The number of times that the playbook failed to be run.
    std::shared_ptr<int32_t> failExeNum_ = nullptr;
    // The creation time of the playbook. The value is a 13-digit timestamp.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time of the playbook. The value is a 13-digit timestamp.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The input parameter configuration of the playbook. The value is a JSON array.
    // 
    // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
    std::shared_ptr<string> inputParams_ = nullptr;
    // The time when the playbook was last run. The value is a 13-digit timestamp.
    std::shared_ptr<int64_t> lastExeTime_ = nullptr;
    // The status of the playbook. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<bool> onlineActive_ = nullptr;
    // The MD5 hash value in the latest published version of the playbook.
    std::shared_ptr<string> onlineReleaseTaskflowMd5_ = nullptr;
    // The type of the playbook. Valid values:
    // 
    // *   **preset**: predefined playbook
    // *   **user**: custom playbook
    std::shared_ptr<string> ownType_ = nullptr;
    // The UUID of the playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The number of times that the playbook was successfully run.
    std::shared_ptr<int32_t> successExeNum_ = nullptr;
    // The XML configuration of the playbook.
    std::shared_ptr<string> taskflow_ = nullptr;
    // The playbook configuration type.
    // *   **xml**: XML format.
    // *   **x6**: JSON format.
    std::shared_ptr<string> taskflowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
