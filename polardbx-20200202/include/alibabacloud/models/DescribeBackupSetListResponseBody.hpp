// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupSetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupSetListResponseBody() = default ;
    DescribeBackupSetListResponseBody(const DescribeBackupSetListResponseBody &) = default ;
    DescribeBackupSetListResponseBody(DescribeBackupSetListResponseBody &&) = default ;
    DescribeBackupSetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetListResponseBody() = default ;
    DescribeBackupSetListResponseBody& operator=(const DescribeBackupSetListResponseBody &) = default ;
    DescribeBackupSetListResponseBody& operator=(DescribeBackupSetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupModel, backupModel_);
        DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupModel, backupModel_);
        DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
        DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->backupModel_ == nullptr
        && this->backupSetId_ == nullptr && this->backupSetSize_ == nullptr && this->backupType_ == nullptr && this->beginTime_ == nullptr && this->endTime_ == nullptr
        && this->status_ == nullptr; };
      // backupModel Field Functions 
      bool hasBackupModel() const { return this->backupModel_ != nullptr;};
      void deleteBackupModel() { this->backupModel_ = nullptr;};
      inline int32_t getBackupModel() const { DARABONBA_PTR_GET_DEFAULT(backupModel_, 0) };
      inline Data& setBackupModel(int32_t backupModel) { DARABONBA_PTR_SET_VALUE(backupModel_, backupModel) };


      // backupSetId Field Functions 
      bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
      void deleteBackupSetId() { this->backupSetId_ = nullptr;};
      inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
      inline Data& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


      // backupSetSize Field Functions 
      bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
      void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
      inline int64_t getBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, 0L) };
      inline Data& setBackupSetSize(int64_t backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline int32_t getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, 0) };
      inline Data& setBackupType(int32_t backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int32_t> backupModel_ {};
      shared_ptr<string> backupSetId_ {};
      shared_ptr<int64_t> backupSetSize_ {};
      shared_ptr<int32_t> backupType_ {};
      shared_ptr<int64_t> beginTime_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBackupSetListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBackupSetListResponseBody::Data>) };
    inline vector<DescribeBackupSetListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeBackupSetListResponseBody::Data>) };
    inline DescribeBackupSetListResponseBody& setData(const vector<DescribeBackupSetListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupSetListResponseBody& setData(vector<DescribeBackupSetListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupSetListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupSetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupSetListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeBackupSetListResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
