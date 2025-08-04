// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITNOTEPROCESSINGSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITNOTEPROCESSINGSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetAuditNoteProcessingStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditNoteProcessingStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(NoteName, noteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditNoteProcessingStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(NoteName, noteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAuditNoteProcessingStatusResponseBodyData() = default ;
    GetAuditNoteProcessingStatusResponseBodyData(const GetAuditNoteProcessingStatusResponseBodyData &) = default ;
    GetAuditNoteProcessingStatusResponseBodyData(GetAuditNoteProcessingStatusResponseBodyData &&) = default ;
    GetAuditNoteProcessingStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditNoteProcessingStatusResponseBodyData() = default ;
    GetAuditNoteProcessingStatusResponseBodyData& operator=(const GetAuditNoteProcessingStatusResponseBodyData &) = default ;
    GetAuditNoteProcessingStatusResponseBodyData& operator=(GetAuditNoteProcessingStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileKey_ != nullptr
        && this->fileSize_ != nullptr && this->noteName_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->updateTime_ != nullptr; };
    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline GetAuditNoteProcessingStatusResponseBodyData& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetAuditNoteProcessingStatusResponseBodyData& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // noteName Field Functions 
    bool hasNoteName() const { return this->noteName_ != nullptr;};
    void deleteNoteName() { this->noteName_ = nullptr;};
    inline string noteName() const { DARABONBA_PTR_GET_DEFAULT(noteName_, "") };
    inline GetAuditNoteProcessingStatusResponseBodyData& setNoteName(string noteName) { DARABONBA_PTR_SET_VALUE(noteName_, noteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAuditNoteProcessingStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAuditNoteProcessingStatusResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetAuditNoteProcessingStatusResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> noteName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
