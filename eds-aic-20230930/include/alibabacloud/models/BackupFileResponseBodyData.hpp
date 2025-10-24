// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKUPFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BACKUPFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BackupFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackupFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, BackupFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
      DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
      DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    BackupFileResponseBodyData() = default ;
    BackupFileResponseBodyData(const BackupFileResponseBodyData &) = default ;
    BackupFileResponseBodyData(BackupFileResponseBodyData &&) = default ;
    BackupFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackupFileResponseBodyData() = default ;
    BackupFileResponseBodyData& operator=(const BackupFileResponseBodyData &) = default ;
    BackupFileResponseBodyData& operator=(BackupFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->backupFileId_ == nullptr && return this->backupFileName_ == nullptr && return this->taskId_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline BackupFileResponseBodyData& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // backupFileId Field Functions 
    bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
    void deleteBackupFileId() { this->backupFileId_ = nullptr;};
    inline string backupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
    inline BackupFileResponseBodyData& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


    // backupFileName Field Functions 
    bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
    void deleteBackupFileName() { this->backupFileName_ = nullptr;};
    inline string backupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
    inline BackupFileResponseBodyData& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BackupFileResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the cloud phone instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    // The ID of the backup file.
    std::shared_ptr<string> backupFileId_ = nullptr;
    // The name of the backup file.
    std::shared_ptr<string> backupFileName_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
