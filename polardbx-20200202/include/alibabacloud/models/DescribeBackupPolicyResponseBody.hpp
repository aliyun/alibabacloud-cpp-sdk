// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
        DARABONBA_PTR_TO_JSON(BackupPlanBegin, backupPlanBegin_);
        DARABONBA_PTR_TO_JSON(BackupSetRetention, backupSetRetention_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BackupWay, backupWay_);
        DARABONBA_PTR_TO_JSON(ColdDataBackupInterval, coldDataBackupInterval_);
        DARABONBA_PTR_TO_JSON(ColdDataBackupRetention, coldDataBackupRetention_);
        DARABONBA_PTR_TO_JSON(CrossRegionDataBackupRetention, crossRegionDataBackupRetention_);
        DARABONBA_PTR_TO_JSON(CrossRegionFilterValue, crossRegionFilterValue_);
        DARABONBA_PTR_TO_JSON(CrossRegionLogBackupRetention, crossRegionLogBackupRetention_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DestCrossRegion, destCrossRegion_);
        DARABONBA_PTR_TO_JSON(ForceCleanOnHighSpaceUsage, forceCleanOnHighSpaceUsage_);
        DARABONBA_PTR_TO_JSON(IsCrossRegionDataBackupEnabled, isCrossRegionDataBackupEnabled_);
        DARABONBA_PTR_TO_JSON(IsCrossRegionLogBackupEnabled, isCrossRegionLogBackupEnabled_);
        DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
        DARABONBA_PTR_TO_JSON(LocalLogRetention, localLogRetention_);
        DARABONBA_PTR_TO_JSON(LocalLogRetentionNumber, localLogRetentionNumber_);
        DARABONBA_PTR_TO_JSON(LogLocalRetentionSpace, logLocalRetentionSpace_);
        DARABONBA_PTR_TO_JSON(RemoveLogRetention, removeLogRetention_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
        DARABONBA_PTR_FROM_JSON(BackupPlanBegin, backupPlanBegin_);
        DARABONBA_PTR_FROM_JSON(BackupSetRetention, backupSetRetention_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BackupWay, backupWay_);
        DARABONBA_PTR_FROM_JSON(ColdDataBackupInterval, coldDataBackupInterval_);
        DARABONBA_PTR_FROM_JSON(ColdDataBackupRetention, coldDataBackupRetention_);
        DARABONBA_PTR_FROM_JSON(CrossRegionDataBackupRetention, crossRegionDataBackupRetention_);
        DARABONBA_PTR_FROM_JSON(CrossRegionFilterValue, crossRegionFilterValue_);
        DARABONBA_PTR_FROM_JSON(CrossRegionLogBackupRetention, crossRegionLogBackupRetention_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DestCrossRegion, destCrossRegion_);
        DARABONBA_PTR_FROM_JSON(ForceCleanOnHighSpaceUsage, forceCleanOnHighSpaceUsage_);
        DARABONBA_PTR_FROM_JSON(IsCrossRegionDataBackupEnabled, isCrossRegionDataBackupEnabled_);
        DARABONBA_PTR_FROM_JSON(IsCrossRegionLogBackupEnabled, isCrossRegionLogBackupEnabled_);
        DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
        DARABONBA_PTR_FROM_JSON(LocalLogRetention, localLogRetention_);
        DARABONBA_PTR_FROM_JSON(LocalLogRetentionNumber, localLogRetentionNumber_);
        DARABONBA_PTR_FROM_JSON(LogLocalRetentionSpace, logLocalRetentionSpace_);
        DARABONBA_PTR_FROM_JSON(RemoveLogRetention, removeLogRetention_);
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
      virtual bool empty() const override { return this->backupPeriod_ == nullptr
        && this->backupPlanBegin_ == nullptr && this->backupSetRetention_ == nullptr && this->backupType_ == nullptr && this->backupWay_ == nullptr && this->coldDataBackupInterval_ == nullptr
        && this->coldDataBackupRetention_ == nullptr && this->crossRegionDataBackupRetention_ == nullptr && this->crossRegionFilterValue_ == nullptr && this->crossRegionLogBackupRetention_ == nullptr && this->DBInstanceName_ == nullptr
        && this->destCrossRegion_ == nullptr && this->forceCleanOnHighSpaceUsage_ == nullptr && this->isCrossRegionDataBackupEnabled_ == nullptr && this->isCrossRegionLogBackupEnabled_ == nullptr && this->isEnabled_ == nullptr
        && this->localLogRetention_ == nullptr && this->localLogRetentionNumber_ == nullptr && this->logLocalRetentionSpace_ == nullptr && this->removeLogRetention_ == nullptr; };
      // backupPeriod Field Functions 
      bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
      void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
      inline string getBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
      inline Data& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


      // backupPlanBegin Field Functions 
      bool hasBackupPlanBegin() const { return this->backupPlanBegin_ != nullptr;};
      void deleteBackupPlanBegin() { this->backupPlanBegin_ = nullptr;};
      inline string getBackupPlanBegin() const { DARABONBA_PTR_GET_DEFAULT(backupPlanBegin_, "") };
      inline Data& setBackupPlanBegin(string backupPlanBegin) { DARABONBA_PTR_SET_VALUE(backupPlanBegin_, backupPlanBegin) };


      // backupSetRetention Field Functions 
      bool hasBackupSetRetention() const { return this->backupSetRetention_ != nullptr;};
      void deleteBackupSetRetention() { this->backupSetRetention_ = nullptr;};
      inline int32_t getBackupSetRetention() const { DARABONBA_PTR_GET_DEFAULT(backupSetRetention_, 0) };
      inline Data& setBackupSetRetention(int32_t backupSetRetention) { DARABONBA_PTR_SET_VALUE(backupSetRetention_, backupSetRetention) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Data& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // backupWay Field Functions 
      bool hasBackupWay() const { return this->backupWay_ != nullptr;};
      void deleteBackupWay() { this->backupWay_ = nullptr;};
      inline string getBackupWay() const { DARABONBA_PTR_GET_DEFAULT(backupWay_, "") };
      inline Data& setBackupWay(string backupWay) { DARABONBA_PTR_SET_VALUE(backupWay_, backupWay) };


      // coldDataBackupInterval Field Functions 
      bool hasColdDataBackupInterval() const { return this->coldDataBackupInterval_ != nullptr;};
      void deleteColdDataBackupInterval() { this->coldDataBackupInterval_ = nullptr;};
      inline int32_t getColdDataBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(coldDataBackupInterval_, 0) };
      inline Data& setColdDataBackupInterval(int32_t coldDataBackupInterval) { DARABONBA_PTR_SET_VALUE(coldDataBackupInterval_, coldDataBackupInterval) };


      // coldDataBackupRetention Field Functions 
      bool hasColdDataBackupRetention() const { return this->coldDataBackupRetention_ != nullptr;};
      void deleteColdDataBackupRetention() { this->coldDataBackupRetention_ = nullptr;};
      inline int32_t getColdDataBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(coldDataBackupRetention_, 0) };
      inline Data& setColdDataBackupRetention(int32_t coldDataBackupRetention) { DARABONBA_PTR_SET_VALUE(coldDataBackupRetention_, coldDataBackupRetention) };


      // crossRegionDataBackupRetention Field Functions 
      bool hasCrossRegionDataBackupRetention() const { return this->crossRegionDataBackupRetention_ != nullptr;};
      void deleteCrossRegionDataBackupRetention() { this->crossRegionDataBackupRetention_ = nullptr;};
      inline int32_t getCrossRegionDataBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(crossRegionDataBackupRetention_, 0) };
      inline Data& setCrossRegionDataBackupRetention(int32_t crossRegionDataBackupRetention) { DARABONBA_PTR_SET_VALUE(crossRegionDataBackupRetention_, crossRegionDataBackupRetention) };


      // crossRegionFilterValue Field Functions 
      bool hasCrossRegionFilterValue() const { return this->crossRegionFilterValue_ != nullptr;};
      void deleteCrossRegionFilterValue() { this->crossRegionFilterValue_ = nullptr;};
      inline string getCrossRegionFilterValue() const { DARABONBA_PTR_GET_DEFAULT(crossRegionFilterValue_, "") };
      inline Data& setCrossRegionFilterValue(string crossRegionFilterValue) { DARABONBA_PTR_SET_VALUE(crossRegionFilterValue_, crossRegionFilterValue) };


      // crossRegionLogBackupRetention Field Functions 
      bool hasCrossRegionLogBackupRetention() const { return this->crossRegionLogBackupRetention_ != nullptr;};
      void deleteCrossRegionLogBackupRetention() { this->crossRegionLogBackupRetention_ = nullptr;};
      inline int32_t getCrossRegionLogBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(crossRegionLogBackupRetention_, 0) };
      inline Data& setCrossRegionLogBackupRetention(int32_t crossRegionLogBackupRetention) { DARABONBA_PTR_SET_VALUE(crossRegionLogBackupRetention_, crossRegionLogBackupRetention) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // destCrossRegion Field Functions 
      bool hasDestCrossRegion() const { return this->destCrossRegion_ != nullptr;};
      void deleteDestCrossRegion() { this->destCrossRegion_ = nullptr;};
      inline string getDestCrossRegion() const { DARABONBA_PTR_GET_DEFAULT(destCrossRegion_, "") };
      inline Data& setDestCrossRegion(string destCrossRegion) { DARABONBA_PTR_SET_VALUE(destCrossRegion_, destCrossRegion) };


      // forceCleanOnHighSpaceUsage Field Functions 
      bool hasForceCleanOnHighSpaceUsage() const { return this->forceCleanOnHighSpaceUsage_ != nullptr;};
      void deleteForceCleanOnHighSpaceUsage() { this->forceCleanOnHighSpaceUsage_ = nullptr;};
      inline int32_t getForceCleanOnHighSpaceUsage() const { DARABONBA_PTR_GET_DEFAULT(forceCleanOnHighSpaceUsage_, 0) };
      inline Data& setForceCleanOnHighSpaceUsage(int32_t forceCleanOnHighSpaceUsage) { DARABONBA_PTR_SET_VALUE(forceCleanOnHighSpaceUsage_, forceCleanOnHighSpaceUsage) };


      // isCrossRegionDataBackupEnabled Field Functions 
      bool hasIsCrossRegionDataBackupEnabled() const { return this->isCrossRegionDataBackupEnabled_ != nullptr;};
      void deleteIsCrossRegionDataBackupEnabled() { this->isCrossRegionDataBackupEnabled_ = nullptr;};
      inline bool getIsCrossRegionDataBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCrossRegionDataBackupEnabled_, false) };
      inline Data& setIsCrossRegionDataBackupEnabled(bool isCrossRegionDataBackupEnabled) { DARABONBA_PTR_SET_VALUE(isCrossRegionDataBackupEnabled_, isCrossRegionDataBackupEnabled) };


      // isCrossRegionLogBackupEnabled Field Functions 
      bool hasIsCrossRegionLogBackupEnabled() const { return this->isCrossRegionLogBackupEnabled_ != nullptr;};
      void deleteIsCrossRegionLogBackupEnabled() { this->isCrossRegionLogBackupEnabled_ = nullptr;};
      inline bool getIsCrossRegionLogBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(isCrossRegionLogBackupEnabled_, false) };
      inline Data& setIsCrossRegionLogBackupEnabled(bool isCrossRegionLogBackupEnabled) { DARABONBA_PTR_SET_VALUE(isCrossRegionLogBackupEnabled_, isCrossRegionLogBackupEnabled) };


      // isEnabled Field Functions 
      bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
      void deleteIsEnabled() { this->isEnabled_ = nullptr;};
      inline int32_t getIsEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
      inline Data& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


      // localLogRetention Field Functions 
      bool hasLocalLogRetention() const { return this->localLogRetention_ != nullptr;};
      void deleteLocalLogRetention() { this->localLogRetention_ = nullptr;};
      inline int32_t getLocalLogRetention() const { DARABONBA_PTR_GET_DEFAULT(localLogRetention_, 0) };
      inline Data& setLocalLogRetention(int32_t localLogRetention) { DARABONBA_PTR_SET_VALUE(localLogRetention_, localLogRetention) };


      // localLogRetentionNumber Field Functions 
      bool hasLocalLogRetentionNumber() const { return this->localLogRetentionNumber_ != nullptr;};
      void deleteLocalLogRetentionNumber() { this->localLogRetentionNumber_ = nullptr;};
      inline int32_t getLocalLogRetentionNumber() const { DARABONBA_PTR_GET_DEFAULT(localLogRetentionNumber_, 0) };
      inline Data& setLocalLogRetentionNumber(int32_t localLogRetentionNumber) { DARABONBA_PTR_SET_VALUE(localLogRetentionNumber_, localLogRetentionNumber) };


      // logLocalRetentionSpace Field Functions 
      bool hasLogLocalRetentionSpace() const { return this->logLocalRetentionSpace_ != nullptr;};
      void deleteLogLocalRetentionSpace() { this->logLocalRetentionSpace_ = nullptr;};
      inline int32_t getLogLocalRetentionSpace() const { DARABONBA_PTR_GET_DEFAULT(logLocalRetentionSpace_, 0) };
      inline Data& setLogLocalRetentionSpace(int32_t logLocalRetentionSpace) { DARABONBA_PTR_SET_VALUE(logLocalRetentionSpace_, logLocalRetentionSpace) };


      // removeLogRetention Field Functions 
      bool hasRemoveLogRetention() const { return this->removeLogRetention_ != nullptr;};
      void deleteRemoveLogRetention() { this->removeLogRetention_ = nullptr;};
      inline int32_t getRemoveLogRetention() const { DARABONBA_PTR_GET_DEFAULT(removeLogRetention_, 0) };
      inline Data& setRemoveLogRetention(int32_t removeLogRetention) { DARABONBA_PTR_SET_VALUE(removeLogRetention_, removeLogRetention) };


    protected:
      shared_ptr<string> backupPeriod_ {};
      shared_ptr<string> backupPlanBegin_ {};
      shared_ptr<int32_t> backupSetRetention_ {};
      shared_ptr<string> backupType_ {};
      shared_ptr<string> backupWay_ {};
      shared_ptr<int32_t> coldDataBackupInterval_ {};
      shared_ptr<int32_t> coldDataBackupRetention_ {};
      shared_ptr<int32_t> crossRegionDataBackupRetention_ {};
      shared_ptr<string> crossRegionFilterValue_ {};
      shared_ptr<int32_t> crossRegionLogBackupRetention_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> destCrossRegion_ {};
      shared_ptr<int32_t> forceCleanOnHighSpaceUsage_ {};
      shared_ptr<bool> isCrossRegionDataBackupEnabled_ {};
      shared_ptr<bool> isCrossRegionLogBackupEnabled_ {};
      shared_ptr<int32_t> isEnabled_ {};
      shared_ptr<int32_t> localLogRetention_ {};
      shared_ptr<int32_t> localLogRetentionNumber_ {};
      shared_ptr<int32_t> logLocalRetentionSpace_ {};
      shared_ptr<int32_t> removeLogRetention_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeBackupPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeBackupPolicyResponseBody::Data) };
    inline DescribeBackupPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeBackupPolicyResponseBody::Data) };
    inline DescribeBackupPolicyResponseBody& setData(const DescribeBackupPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupPolicyResponseBody& setData(DescribeBackupPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeBackupPolicyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
