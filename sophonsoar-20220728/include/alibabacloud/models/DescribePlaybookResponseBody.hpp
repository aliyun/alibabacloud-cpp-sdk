// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Playbook, playbook_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Playbook, playbook_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookResponseBody() = default ;
    DescribePlaybookResponseBody(const DescribePlaybookResponseBody &) = default ;
    DescribePlaybookResponseBody(DescribePlaybookResponseBody &&) = default ;
    DescribePlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookResponseBody() = default ;
    DescribePlaybookResponseBody& operator=(const DescribePlaybookResponseBody &) = default ;
    DescribePlaybookResponseBody& operator=(DescribePlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Playbook : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Playbook& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Playbook& obj) { 
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
      Playbook() = default ;
      Playbook(const Playbook &) = default ;
      Playbook(Playbook &&) = default ;
      Playbook(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Playbook() = default ;
      Playbook& operator=(const Playbook &) = default ;
      Playbook& operator=(Playbook &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->failExeNum_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->inputParams_ == nullptr
        && this->lastExeTime_ == nullptr && this->onlineActive_ == nullptr && this->onlineReleaseTaskflowMd5_ == nullptr && this->ownType_ == nullptr && this->playbookUuid_ == nullptr
        && this->successExeNum_ == nullptr && this->taskflow_ == nullptr && this->taskflowType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Playbook& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Playbook& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // failExeNum Field Functions 
      bool hasFailExeNum() const { return this->failExeNum_ != nullptr;};
      void deleteFailExeNum() { this->failExeNum_ = nullptr;};
      inline int32_t getFailExeNum() const { DARABONBA_PTR_GET_DEFAULT(failExeNum_, 0) };
      inline Playbook& setFailExeNum(int32_t failExeNum) { DARABONBA_PTR_SET_VALUE(failExeNum_, failExeNum) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Playbook& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Playbook& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline Playbook& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // lastExeTime Field Functions 
      bool hasLastExeTime() const { return this->lastExeTime_ != nullptr;};
      void deleteLastExeTime() { this->lastExeTime_ = nullptr;};
      inline int64_t getLastExeTime() const { DARABONBA_PTR_GET_DEFAULT(lastExeTime_, 0L) };
      inline Playbook& setLastExeTime(int64_t lastExeTime) { DARABONBA_PTR_SET_VALUE(lastExeTime_, lastExeTime) };


      // onlineActive Field Functions 
      bool hasOnlineActive() const { return this->onlineActive_ != nullptr;};
      void deleteOnlineActive() { this->onlineActive_ = nullptr;};
      inline bool getOnlineActive() const { DARABONBA_PTR_GET_DEFAULT(onlineActive_, false) };
      inline Playbook& setOnlineActive(bool onlineActive) { DARABONBA_PTR_SET_VALUE(onlineActive_, onlineActive) };


      // onlineReleaseTaskflowMd5 Field Functions 
      bool hasOnlineReleaseTaskflowMd5() const { return this->onlineReleaseTaskflowMd5_ != nullptr;};
      void deleteOnlineReleaseTaskflowMd5() { this->onlineReleaseTaskflowMd5_ = nullptr;};
      inline string getOnlineReleaseTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(onlineReleaseTaskflowMd5_, "") };
      inline Playbook& setOnlineReleaseTaskflowMd5(string onlineReleaseTaskflowMd5) { DARABONBA_PTR_SET_VALUE(onlineReleaseTaskflowMd5_, onlineReleaseTaskflowMd5) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline string getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, "") };
      inline Playbook& setOwnType(string ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Playbook& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // successExeNum Field Functions 
      bool hasSuccessExeNum() const { return this->successExeNum_ != nullptr;};
      void deleteSuccessExeNum() { this->successExeNum_ = nullptr;};
      inline int32_t getSuccessExeNum() const { DARABONBA_PTR_GET_DEFAULT(successExeNum_, 0) };
      inline Playbook& setSuccessExeNum(int32_t successExeNum) { DARABONBA_PTR_SET_VALUE(successExeNum_, successExeNum) };


      // taskflow Field Functions 
      bool hasTaskflow() const { return this->taskflow_ != nullptr;};
      void deleteTaskflow() { this->taskflow_ = nullptr;};
      inline string getTaskflow() const { DARABONBA_PTR_GET_DEFAULT(taskflow_, "") };
      inline Playbook& setTaskflow(string taskflow) { DARABONBA_PTR_SET_VALUE(taskflow_, taskflow) };


      // taskflowType Field Functions 
      bool hasTaskflowType() const { return this->taskflowType_ != nullptr;};
      void deleteTaskflowType() { this->taskflowType_ = nullptr;};
      inline string getTaskflowType() const { DARABONBA_PTR_GET_DEFAULT(taskflowType_, "") };
      inline Playbook& setTaskflowType(string taskflowType) { DARABONBA_PTR_SET_VALUE(taskflowType_, taskflowType) };


    protected:
      // The description of the playbook.
      shared_ptr<string> description_ {};
      // The display name of the playbook.
      shared_ptr<string> displayName_ {};
      // The number of times that the playbook failed to be run.
      shared_ptr<int32_t> failExeNum_ {};
      // The creation time of the playbook. The value is a 13-digit timestamp.
      shared_ptr<string> gmtCreate_ {};
      // The modification time of the playbook. The value is a 13-digit timestamp.
      shared_ptr<string> gmtModified_ {};
      // The input parameter configuration of the playbook. The value is a JSON array.
      // 
      // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
      shared_ptr<string> inputParams_ {};
      // The time when the playbook was last run. The value is a 13-digit timestamp.
      shared_ptr<int64_t> lastExeTime_ {};
      // The status of the playbook. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      shared_ptr<bool> onlineActive_ {};
      // The MD5 hash value in the latest published version of the playbook.
      shared_ptr<string> onlineReleaseTaskflowMd5_ {};
      // The type of the playbook. Valid values:
      // 
      // *   **preset**: predefined playbook
      // *   **user**: custom playbook
      shared_ptr<string> ownType_ {};
      // The UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
      // The number of times that the playbook was successfully run.
      shared_ptr<int32_t> successExeNum_ {};
      // The XML configuration of the playbook.
      shared_ptr<string> taskflow_ {};
      // The playbook configuration type.
      // *   **xml**: XML format.
      // *   **x6**: JSON format.
      shared_ptr<string> taskflowType_ {};
    };

    virtual bool empty() const override { return this->playbook_ == nullptr
        && this->requestId_ == nullptr; };
    // playbook Field Functions 
    bool hasPlaybook() const { return this->playbook_ != nullptr;};
    void deletePlaybook() { this->playbook_ = nullptr;};
    inline const DescribePlaybookResponseBody::Playbook & getPlaybook() const { DARABONBA_PTR_GET_CONST(playbook_, DescribePlaybookResponseBody::Playbook) };
    inline DescribePlaybookResponseBody::Playbook getPlaybook() { DARABONBA_PTR_GET(playbook_, DescribePlaybookResponseBody::Playbook) };
    inline DescribePlaybookResponseBody& setPlaybook(const DescribePlaybookResponseBody::Playbook & playbook) { DARABONBA_PTR_SET_VALUE(playbook_, playbook) };
    inline DescribePlaybookResponseBody& setPlaybook(DescribePlaybookResponseBody::Playbook && playbook) { DARABONBA_PTR_SET_RVALUE(playbook_, playbook) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the playbook.
    shared_ptr<DescribePlaybookResponseBody::Playbook> playbook_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
