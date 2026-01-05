// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKUPFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BACKUPFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class BackupFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackupFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, BackupFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    BackupFileResponseBody() = default ;
    BackupFileResponseBody(const BackupFileResponseBody &) = default ;
    BackupFileResponseBody(BackupFileResponseBody &&) = default ;
    BackupFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackupFileResponseBody() = default ;
    BackupFileResponseBody& operator=(const BackupFileResponseBody &) = default ;
    BackupFileResponseBody& operator=(BackupFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
        DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
        DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->backupFileId_ == nullptr && this->backupFileName_ == nullptr && this->taskId_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline Data& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // backupFileId Field Functions 
      bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
      void deleteBackupFileId() { this->backupFileId_ = nullptr;};
      inline string getBackupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
      inline Data& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


      // backupFileName Field Functions 
      bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
      void deleteBackupFileName() { this->backupFileName_ = nullptr;};
      inline string getBackupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
      inline Data& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the cloud phone instance.
      shared_ptr<string> androidInstanceId_ {};
      // The ID of the backup file.
      shared_ptr<string> backupFileId_ {};
      // The name of the backup file.
      shared_ptr<string> backupFileName_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline BackupFileResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<BackupFileResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<BackupFileResponseBody::Data>) };
    inline vector<BackupFileResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<BackupFileResponseBody::Data>) };
    inline BackupFileResponseBody& setData(const vector<BackupFileResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BackupFileResponseBody& setData(vector<BackupFileResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BackupFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BackupFileResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The number of instances that are backed up.
    shared_ptr<int64_t> count_ {};
    // The object that is returned.
    shared_ptr<vector<BackupFileResponseBody::Data>> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the batch task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
