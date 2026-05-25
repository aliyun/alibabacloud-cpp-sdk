// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETISSUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetIssueResponseBody() = default ;
    GetIssueResponseBody(const GetIssueResponseBody &) = default ;
    GetIssueResponseBody(GetIssueResponseBody &&) = default ;
    GetIssueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueResponseBody() = default ;
    GetIssueResponseBody& operator=(const GetIssueResponseBody &) = default ;
    GetIssueResponseBody& operator=(GetIssueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AffectedVersions, affectedVersions_);
        DARABONBA_PTR_TO_JSON(AllocSizeMax, allocSizeMax_);
        DARABONBA_PTR_TO_JSON(AllocSizePct50, allocSizePct50_);
        DARABONBA_PTR_TO_JSON(AllocSizePct70, allocSizePct70_);
        DARABONBA_PTR_TO_JSON(AllocSizePct90, allocSizePct90_);
        DARABONBA_PTR_TO_JSON(CruxStack, cruxStack_);
        DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
        DARABONBA_PTR_TO_JSON(ErrorColumn, errorColumn_);
        DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_TO_JSON(ErrorCountGrowthRate, errorCountGrowthRate_);
        DARABONBA_PTR_TO_JSON(ErrorDeviceCount, errorDeviceCount_);
        DARABONBA_PTR_TO_JSON(ErrorDeviceCountGrowthRate, errorDeviceCountGrowthRate_);
        DARABONBA_PTR_TO_JSON(ErrorDeviceRate, errorDeviceRate_);
        DARABONBA_PTR_TO_JSON(ErrorDeviceRateGrowthRate, errorDeviceRateGrowthRate_);
        DARABONBA_PTR_TO_JSON(ErrorFileName, errorFileName_);
        DARABONBA_PTR_TO_JSON(ErrorLine, errorLine_);
        DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
        DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
        DARABONBA_PTR_TO_JSON(ErrorRateGrowthRate, errorRateGrowthRate_);
        DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
        DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
        DARABONBA_PTR_TO_JSON(FirstVersion, firstVersion_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtLatest, gmtLatest_);
        DARABONBA_PTR_TO_JSON(KeyLine, keyLine_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Stack, stack_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(SymbolicStatus, symbolicStatus_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectedVersions, affectedVersions_);
        DARABONBA_PTR_FROM_JSON(AllocSizeMax, allocSizeMax_);
        DARABONBA_PTR_FROM_JSON(AllocSizePct50, allocSizePct50_);
        DARABONBA_PTR_FROM_JSON(AllocSizePct70, allocSizePct70_);
        DARABONBA_PTR_FROM_JSON(AllocSizePct90, allocSizePct90_);
        DARABONBA_PTR_FROM_JSON(CruxStack, cruxStack_);
        DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
        DARABONBA_PTR_FROM_JSON(ErrorColumn, errorColumn_);
        DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_FROM_JSON(ErrorCountGrowthRate, errorCountGrowthRate_);
        DARABONBA_PTR_FROM_JSON(ErrorDeviceCount, errorDeviceCount_);
        DARABONBA_PTR_FROM_JSON(ErrorDeviceCountGrowthRate, errorDeviceCountGrowthRate_);
        DARABONBA_PTR_FROM_JSON(ErrorDeviceRate, errorDeviceRate_);
        DARABONBA_PTR_FROM_JSON(ErrorDeviceRateGrowthRate, errorDeviceRateGrowthRate_);
        DARABONBA_PTR_FROM_JSON(ErrorFileName, errorFileName_);
        DARABONBA_PTR_FROM_JSON(ErrorLine, errorLine_);
        DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
        DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
        DARABONBA_PTR_FROM_JSON(ErrorRateGrowthRate, errorRateGrowthRate_);
        DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
        DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
        DARABONBA_PTR_FROM_JSON(FirstVersion, firstVersion_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtLatest, gmtLatest_);
        DARABONBA_PTR_FROM_JSON(KeyLine, keyLine_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Stack, stack_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(SymbolicStatus, symbolicStatus_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectedVersions_ == nullptr
        && this->allocSizeMax_ == nullptr && this->allocSizePct50_ == nullptr && this->allocSizePct70_ == nullptr && this->allocSizePct90_ == nullptr && this->cruxStack_ == nullptr
        && this->digestHash_ == nullptr && this->errorColumn_ == nullptr && this->errorCount_ == nullptr && this->errorCountGrowthRate_ == nullptr && this->errorDeviceCount_ == nullptr
        && this->errorDeviceCountGrowthRate_ == nullptr && this->errorDeviceRate_ == nullptr && this->errorDeviceRateGrowthRate_ == nullptr && this->errorFileName_ == nullptr && this->errorLine_ == nullptr
        && this->errorName_ == nullptr && this->errorRate_ == nullptr && this->errorRateGrowthRate_ == nullptr && this->errorType_ == nullptr && this->eventTime_ == nullptr
        && this->firstVersion_ == nullptr && this->gmtCreate_ == nullptr && this->gmtLatest_ == nullptr && this->keyLine_ == nullptr && this->name_ == nullptr
        && this->reason_ == nullptr && this->stack_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->symbolicStatus_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr; };
      // affectedVersions Field Functions 
      bool hasAffectedVersions() const { return this->affectedVersions_ != nullptr;};
      void deleteAffectedVersions() { this->affectedVersions_ = nullptr;};
      inline const vector<string> & getAffectedVersions() const { DARABONBA_PTR_GET_CONST(affectedVersions_, vector<string>) };
      inline vector<string> getAffectedVersions() { DARABONBA_PTR_GET(affectedVersions_, vector<string>) };
      inline Model& setAffectedVersions(const vector<string> & affectedVersions) { DARABONBA_PTR_SET_VALUE(affectedVersions_, affectedVersions) };
      inline Model& setAffectedVersions(vector<string> && affectedVersions) { DARABONBA_PTR_SET_RVALUE(affectedVersions_, affectedVersions) };


      // allocSizeMax Field Functions 
      bool hasAllocSizeMax() const { return this->allocSizeMax_ != nullptr;};
      void deleteAllocSizeMax() { this->allocSizeMax_ = nullptr;};
      inline int64_t getAllocSizeMax() const { DARABONBA_PTR_GET_DEFAULT(allocSizeMax_, 0L) };
      inline Model& setAllocSizeMax(int64_t allocSizeMax) { DARABONBA_PTR_SET_VALUE(allocSizeMax_, allocSizeMax) };


      // allocSizePct50 Field Functions 
      bool hasAllocSizePct50() const { return this->allocSizePct50_ != nullptr;};
      void deleteAllocSizePct50() { this->allocSizePct50_ = nullptr;};
      inline int64_t getAllocSizePct50() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct50_, 0L) };
      inline Model& setAllocSizePct50(int64_t allocSizePct50) { DARABONBA_PTR_SET_VALUE(allocSizePct50_, allocSizePct50) };


      // allocSizePct70 Field Functions 
      bool hasAllocSizePct70() const { return this->allocSizePct70_ != nullptr;};
      void deleteAllocSizePct70() { this->allocSizePct70_ = nullptr;};
      inline int64_t getAllocSizePct70() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct70_, 0L) };
      inline Model& setAllocSizePct70(int64_t allocSizePct70) { DARABONBA_PTR_SET_VALUE(allocSizePct70_, allocSizePct70) };


      // allocSizePct90 Field Functions 
      bool hasAllocSizePct90() const { return this->allocSizePct90_ != nullptr;};
      void deleteAllocSizePct90() { this->allocSizePct90_ = nullptr;};
      inline int64_t getAllocSizePct90() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct90_, 0L) };
      inline Model& setAllocSizePct90(int64_t allocSizePct90) { DARABONBA_PTR_SET_VALUE(allocSizePct90_, allocSizePct90) };


      // cruxStack Field Functions 
      bool hasCruxStack() const { return this->cruxStack_ != nullptr;};
      void deleteCruxStack() { this->cruxStack_ = nullptr;};
      inline string getCruxStack() const { DARABONBA_PTR_GET_DEFAULT(cruxStack_, "") };
      inline Model& setCruxStack(string cruxStack) { DARABONBA_PTR_SET_VALUE(cruxStack_, cruxStack) };


      // digestHash Field Functions 
      bool hasDigestHash() const { return this->digestHash_ != nullptr;};
      void deleteDigestHash() { this->digestHash_ = nullptr;};
      inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
      inline Model& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


      // errorColumn Field Functions 
      bool hasErrorColumn() const { return this->errorColumn_ != nullptr;};
      void deleteErrorColumn() { this->errorColumn_ = nullptr;};
      inline int32_t getErrorColumn() const { DARABONBA_PTR_GET_DEFAULT(errorColumn_, 0) };
      inline Model& setErrorColumn(int32_t errorColumn) { DARABONBA_PTR_SET_VALUE(errorColumn_, errorColumn) };


      // errorCount Field Functions 
      bool hasErrorCount() const { return this->errorCount_ != nullptr;};
      void deleteErrorCount() { this->errorCount_ = nullptr;};
      inline int32_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
      inline Model& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      // errorCountGrowthRate Field Functions 
      bool hasErrorCountGrowthRate() const { return this->errorCountGrowthRate_ != nullptr;};
      void deleteErrorCountGrowthRate() { this->errorCountGrowthRate_ = nullptr;};
      inline double getErrorCountGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorCountGrowthRate_, 0.0) };
      inline Model& setErrorCountGrowthRate(double errorCountGrowthRate) { DARABONBA_PTR_SET_VALUE(errorCountGrowthRate_, errorCountGrowthRate) };


      // errorDeviceCount Field Functions 
      bool hasErrorDeviceCount() const { return this->errorDeviceCount_ != nullptr;};
      void deleteErrorDeviceCount() { this->errorDeviceCount_ = nullptr;};
      inline int32_t getErrorDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCount_, 0) };
      inline Model& setErrorDeviceCount(int32_t errorDeviceCount) { DARABONBA_PTR_SET_VALUE(errorDeviceCount_, errorDeviceCount) };


      // errorDeviceCountGrowthRate Field Functions 
      bool hasErrorDeviceCountGrowthRate() const { return this->errorDeviceCountGrowthRate_ != nullptr;};
      void deleteErrorDeviceCountGrowthRate() { this->errorDeviceCountGrowthRate_ = nullptr;};
      inline double getErrorDeviceCountGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCountGrowthRate_, 0.0) };
      inline Model& setErrorDeviceCountGrowthRate(double errorDeviceCountGrowthRate) { DARABONBA_PTR_SET_VALUE(errorDeviceCountGrowthRate_, errorDeviceCountGrowthRate) };


      // errorDeviceRate Field Functions 
      bool hasErrorDeviceRate() const { return this->errorDeviceRate_ != nullptr;};
      void deleteErrorDeviceRate() { this->errorDeviceRate_ = nullptr;};
      inline double getErrorDeviceRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRate_, 0.0) };
      inline Model& setErrorDeviceRate(double errorDeviceRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRate_, errorDeviceRate) };


      // errorDeviceRateGrowthRate Field Functions 
      bool hasErrorDeviceRateGrowthRate() const { return this->errorDeviceRateGrowthRate_ != nullptr;};
      void deleteErrorDeviceRateGrowthRate() { this->errorDeviceRateGrowthRate_ = nullptr;};
      inline double getErrorDeviceRateGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRateGrowthRate_, 0.0) };
      inline Model& setErrorDeviceRateGrowthRate(double errorDeviceRateGrowthRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRateGrowthRate_, errorDeviceRateGrowthRate) };


      // errorFileName Field Functions 
      bool hasErrorFileName() const { return this->errorFileName_ != nullptr;};
      void deleteErrorFileName() { this->errorFileName_ = nullptr;};
      inline string getErrorFileName() const { DARABONBA_PTR_GET_DEFAULT(errorFileName_, "") };
      inline Model& setErrorFileName(string errorFileName) { DARABONBA_PTR_SET_VALUE(errorFileName_, errorFileName) };


      // errorLine Field Functions 
      bool hasErrorLine() const { return this->errorLine_ != nullptr;};
      void deleteErrorLine() { this->errorLine_ = nullptr;};
      inline string getErrorLine() const { DARABONBA_PTR_GET_DEFAULT(errorLine_, "") };
      inline Model& setErrorLine(string errorLine) { DARABONBA_PTR_SET_VALUE(errorLine_, errorLine) };


      // errorName Field Functions 
      bool hasErrorName() const { return this->errorName_ != nullptr;};
      void deleteErrorName() { this->errorName_ = nullptr;};
      inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
      inline Model& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


      // errorRate Field Functions 
      bool hasErrorRate() const { return this->errorRate_ != nullptr;};
      void deleteErrorRate() { this->errorRate_ = nullptr;};
      inline double getErrorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
      inline Model& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


      // errorRateGrowthRate Field Functions 
      bool hasErrorRateGrowthRate() const { return this->errorRateGrowthRate_ != nullptr;};
      void deleteErrorRateGrowthRate() { this->errorRateGrowthRate_ = nullptr;};
      inline double getErrorRateGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorRateGrowthRate_, 0.0) };
      inline Model& setErrorRateGrowthRate(double errorRateGrowthRate) { DARABONBA_PTR_SET_VALUE(errorRateGrowthRate_, errorRateGrowthRate) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline Model& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // eventTime Field Functions 
      bool hasEventTime() const { return this->eventTime_ != nullptr;};
      void deleteEventTime() { this->eventTime_ = nullptr;};
      inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
      inline Model& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


      // firstVersion Field Functions 
      bool hasFirstVersion() const { return this->firstVersion_ != nullptr;};
      void deleteFirstVersion() { this->firstVersion_ = nullptr;};
      inline string getFirstVersion() const { DARABONBA_PTR_GET_DEFAULT(firstVersion_, "") };
      inline Model& setFirstVersion(string firstVersion) { DARABONBA_PTR_SET_VALUE(firstVersion_, firstVersion) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Model& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtLatest Field Functions 
      bool hasGmtLatest() const { return this->gmtLatest_ != nullptr;};
      void deleteGmtLatest() { this->gmtLatest_ = nullptr;};
      inline int64_t getGmtLatest() const { DARABONBA_PTR_GET_DEFAULT(gmtLatest_, 0L) };
      inline Model& setGmtLatest(int64_t gmtLatest) { DARABONBA_PTR_SET_VALUE(gmtLatest_, gmtLatest) };


      // keyLine Field Functions 
      bool hasKeyLine() const { return this->keyLine_ != nullptr;};
      void deleteKeyLine() { this->keyLine_ = nullptr;};
      inline int32_t getKeyLine() const { DARABONBA_PTR_GET_DEFAULT(keyLine_, 0) };
      inline Model& setKeyLine(int32_t keyLine) { DARABONBA_PTR_SET_VALUE(keyLine_, keyLine) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Model& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Model& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // stack Field Functions 
      bool hasStack() const { return this->stack_ != nullptr;};
      void deleteStack() { this->stack_ = nullptr;};
      inline string getStack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
      inline Model& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Model& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Model& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // symbolicStatus Field Functions 
      bool hasSymbolicStatus() const { return this->symbolicStatus_ != nullptr;};
      void deleteSymbolicStatus() { this->symbolicStatus_ = nullptr;};
      inline bool getSymbolicStatus() const { DARABONBA_PTR_GET_DEFAULT(symbolicStatus_, false) };
      inline Model& setSymbolicStatus(bool symbolicStatus) { DARABONBA_PTR_SET_VALUE(symbolicStatus_, symbolicStatus) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
      inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
      inline Model& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Model& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Model& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<string>> affectedVersions_ {};
      shared_ptr<int64_t> allocSizeMax_ {};
      shared_ptr<int64_t> allocSizePct50_ {};
      shared_ptr<int64_t> allocSizePct70_ {};
      shared_ptr<int64_t> allocSizePct90_ {};
      shared_ptr<string> cruxStack_ {};
      shared_ptr<string> digestHash_ {};
      shared_ptr<int32_t> errorColumn_ {};
      shared_ptr<int32_t> errorCount_ {};
      shared_ptr<double> errorCountGrowthRate_ {};
      shared_ptr<int32_t> errorDeviceCount_ {};
      shared_ptr<double> errorDeviceCountGrowthRate_ {};
      shared_ptr<double> errorDeviceRate_ {};
      shared_ptr<double> errorDeviceRateGrowthRate_ {};
      shared_ptr<string> errorFileName_ {};
      shared_ptr<string> errorLine_ {};
      shared_ptr<string> errorName_ {};
      shared_ptr<double> errorRate_ {};
      shared_ptr<double> errorRateGrowthRate_ {};
      shared_ptr<string> errorType_ {};
      shared_ptr<int64_t> eventTime_ {};
      shared_ptr<string> firstVersion_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<int64_t> gmtLatest_ {};
      shared_ptr<int32_t> keyLine_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> stack_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<bool> symbolicStatus_ {};
      shared_ptr<vector<string>> tags_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->args_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
    Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
    inline GetIssueResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline GetIssueResponseBody& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetIssueResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetIssueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetIssueResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetIssueResponseBody::Model) };
    inline GetIssueResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetIssueResponseBody::Model) };
    inline GetIssueResponseBody& setModel(const GetIssueResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetIssueResponseBody& setModel(GetIssueResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIssueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetIssueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Args
    Darabonba::Json args_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetIssueResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
