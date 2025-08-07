// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUERESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETISSUERESPONSEBODYMODEL_HPP_
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
  class GetIssueResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssueResponseBodyModel& obj) { 
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
      DARABONBA_PTR_TO_JSON(Stack, stack_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(SymbolicStatus, symbolicStatus_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssueResponseBodyModel& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Stack, stack_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(SymbolicStatus, symbolicStatus_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetIssueResponseBodyModel() = default ;
    GetIssueResponseBodyModel(const GetIssueResponseBodyModel &) = default ;
    GetIssueResponseBodyModel(GetIssueResponseBodyModel &&) = default ;
    GetIssueResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssueResponseBodyModel() = default ;
    GetIssueResponseBodyModel& operator=(const GetIssueResponseBodyModel &) = default ;
    GetIssueResponseBodyModel& operator=(GetIssueResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectedVersions_ != nullptr
        && this->allocSizeMax_ != nullptr && this->allocSizePct50_ != nullptr && this->allocSizePct70_ != nullptr && this->allocSizePct90_ != nullptr && this->cruxStack_ != nullptr
        && this->digestHash_ != nullptr && this->errorColumn_ != nullptr && this->errorCount_ != nullptr && this->errorCountGrowthRate_ != nullptr && this->errorDeviceCount_ != nullptr
        && this->errorDeviceCountGrowthRate_ != nullptr && this->errorDeviceRate_ != nullptr && this->errorDeviceRateGrowthRate_ != nullptr && this->errorFileName_ != nullptr && this->errorLine_ != nullptr
        && this->errorName_ != nullptr && this->errorRate_ != nullptr && this->errorRateGrowthRate_ != nullptr && this->errorType_ != nullptr && this->eventTime_ != nullptr
        && this->firstVersion_ != nullptr && this->gmtCreate_ != nullptr && this->gmtLatest_ != nullptr && this->keyLine_ != nullptr && this->name_ != nullptr
        && this->stack_ != nullptr && this->status_ != nullptr && this->summary_ != nullptr && this->symbolicStatus_ != nullptr && this->tags_ != nullptr; };
    // affectedVersions Field Functions 
    bool hasAffectedVersions() const { return this->affectedVersions_ != nullptr;};
    void deleteAffectedVersions() { this->affectedVersions_ = nullptr;};
    inline const vector<string> & affectedVersions() const { DARABONBA_PTR_GET_CONST(affectedVersions_, vector<string>) };
    inline vector<string> affectedVersions() { DARABONBA_PTR_GET(affectedVersions_, vector<string>) };
    inline GetIssueResponseBodyModel& setAffectedVersions(const vector<string> & affectedVersions) { DARABONBA_PTR_SET_VALUE(affectedVersions_, affectedVersions) };
    inline GetIssueResponseBodyModel& setAffectedVersions(vector<string> && affectedVersions) { DARABONBA_PTR_SET_RVALUE(affectedVersions_, affectedVersions) };


    // allocSizeMax Field Functions 
    bool hasAllocSizeMax() const { return this->allocSizeMax_ != nullptr;};
    void deleteAllocSizeMax() { this->allocSizeMax_ = nullptr;};
    inline int64_t allocSizeMax() const { DARABONBA_PTR_GET_DEFAULT(allocSizeMax_, 0L) };
    inline GetIssueResponseBodyModel& setAllocSizeMax(int64_t allocSizeMax) { DARABONBA_PTR_SET_VALUE(allocSizeMax_, allocSizeMax) };


    // allocSizePct50 Field Functions 
    bool hasAllocSizePct50() const { return this->allocSizePct50_ != nullptr;};
    void deleteAllocSizePct50() { this->allocSizePct50_ = nullptr;};
    inline int64_t allocSizePct50() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct50_, 0L) };
    inline GetIssueResponseBodyModel& setAllocSizePct50(int64_t allocSizePct50) { DARABONBA_PTR_SET_VALUE(allocSizePct50_, allocSizePct50) };


    // allocSizePct70 Field Functions 
    bool hasAllocSizePct70() const { return this->allocSizePct70_ != nullptr;};
    void deleteAllocSizePct70() { this->allocSizePct70_ = nullptr;};
    inline int64_t allocSizePct70() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct70_, 0L) };
    inline GetIssueResponseBodyModel& setAllocSizePct70(int64_t allocSizePct70) { DARABONBA_PTR_SET_VALUE(allocSizePct70_, allocSizePct70) };


    // allocSizePct90 Field Functions 
    bool hasAllocSizePct90() const { return this->allocSizePct90_ != nullptr;};
    void deleteAllocSizePct90() { this->allocSizePct90_ = nullptr;};
    inline int64_t allocSizePct90() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct90_, 0L) };
    inline GetIssueResponseBodyModel& setAllocSizePct90(int64_t allocSizePct90) { DARABONBA_PTR_SET_VALUE(allocSizePct90_, allocSizePct90) };


    // cruxStack Field Functions 
    bool hasCruxStack() const { return this->cruxStack_ != nullptr;};
    void deleteCruxStack() { this->cruxStack_ = nullptr;};
    inline string cruxStack() const { DARABONBA_PTR_GET_DEFAULT(cruxStack_, "") };
    inline GetIssueResponseBodyModel& setCruxStack(string cruxStack) { DARABONBA_PTR_SET_VALUE(cruxStack_, cruxStack) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssueResponseBodyModel& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // errorColumn Field Functions 
    bool hasErrorColumn() const { return this->errorColumn_ != nullptr;};
    void deleteErrorColumn() { this->errorColumn_ = nullptr;};
    inline int32_t errorColumn() const { DARABONBA_PTR_GET_DEFAULT(errorColumn_, 0) };
    inline GetIssueResponseBodyModel& setErrorColumn(int32_t errorColumn) { DARABONBA_PTR_SET_VALUE(errorColumn_, errorColumn) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int32_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
    inline GetIssueResponseBodyModel& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorCountGrowthRate Field Functions 
    bool hasErrorCountGrowthRate() const { return this->errorCountGrowthRate_ != nullptr;};
    void deleteErrorCountGrowthRate() { this->errorCountGrowthRate_ = nullptr;};
    inline double errorCountGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorCountGrowthRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorCountGrowthRate(double errorCountGrowthRate) { DARABONBA_PTR_SET_VALUE(errorCountGrowthRate_, errorCountGrowthRate) };


    // errorDeviceCount Field Functions 
    bool hasErrorDeviceCount() const { return this->errorDeviceCount_ != nullptr;};
    void deleteErrorDeviceCount() { this->errorDeviceCount_ = nullptr;};
    inline int32_t errorDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCount_, 0) };
    inline GetIssueResponseBodyModel& setErrorDeviceCount(int32_t errorDeviceCount) { DARABONBA_PTR_SET_VALUE(errorDeviceCount_, errorDeviceCount) };


    // errorDeviceCountGrowthRate Field Functions 
    bool hasErrorDeviceCountGrowthRate() const { return this->errorDeviceCountGrowthRate_ != nullptr;};
    void deleteErrorDeviceCountGrowthRate() { this->errorDeviceCountGrowthRate_ = nullptr;};
    inline double errorDeviceCountGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCountGrowthRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorDeviceCountGrowthRate(double errorDeviceCountGrowthRate) { DARABONBA_PTR_SET_VALUE(errorDeviceCountGrowthRate_, errorDeviceCountGrowthRate) };


    // errorDeviceRate Field Functions 
    bool hasErrorDeviceRate() const { return this->errorDeviceRate_ != nullptr;};
    void deleteErrorDeviceRate() { this->errorDeviceRate_ = nullptr;};
    inline double errorDeviceRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorDeviceRate(double errorDeviceRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRate_, errorDeviceRate) };


    // errorDeviceRateGrowthRate Field Functions 
    bool hasErrorDeviceRateGrowthRate() const { return this->errorDeviceRateGrowthRate_ != nullptr;};
    void deleteErrorDeviceRateGrowthRate() { this->errorDeviceRateGrowthRate_ = nullptr;};
    inline double errorDeviceRateGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRateGrowthRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorDeviceRateGrowthRate(double errorDeviceRateGrowthRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRateGrowthRate_, errorDeviceRateGrowthRate) };


    // errorFileName Field Functions 
    bool hasErrorFileName() const { return this->errorFileName_ != nullptr;};
    void deleteErrorFileName() { this->errorFileName_ = nullptr;};
    inline string errorFileName() const { DARABONBA_PTR_GET_DEFAULT(errorFileName_, "") };
    inline GetIssueResponseBodyModel& setErrorFileName(string errorFileName) { DARABONBA_PTR_SET_VALUE(errorFileName_, errorFileName) };


    // errorLine Field Functions 
    bool hasErrorLine() const { return this->errorLine_ != nullptr;};
    void deleteErrorLine() { this->errorLine_ = nullptr;};
    inline string errorLine() const { DARABONBA_PTR_GET_DEFAULT(errorLine_, "") };
    inline GetIssueResponseBodyModel& setErrorLine(string errorLine) { DARABONBA_PTR_SET_VALUE(errorLine_, errorLine) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string errorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline GetIssueResponseBodyModel& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // errorRate Field Functions 
    bool hasErrorRate() const { return this->errorRate_ != nullptr;};
    void deleteErrorRate() { this->errorRate_ = nullptr;};
    inline double errorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


    // errorRateGrowthRate Field Functions 
    bool hasErrorRateGrowthRate() const { return this->errorRateGrowthRate_ != nullptr;};
    void deleteErrorRateGrowthRate() { this->errorRateGrowthRate_ = nullptr;};
    inline double errorRateGrowthRate() const { DARABONBA_PTR_GET_DEFAULT(errorRateGrowthRate_, 0.0) };
    inline GetIssueResponseBodyModel& setErrorRateGrowthRate(double errorRateGrowthRate) { DARABONBA_PTR_SET_VALUE(errorRateGrowthRate_, errorRateGrowthRate) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline GetIssueResponseBodyModel& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline GetIssueResponseBodyModel& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // firstVersion Field Functions 
    bool hasFirstVersion() const { return this->firstVersion_ != nullptr;};
    void deleteFirstVersion() { this->firstVersion_ = nullptr;};
    inline string firstVersion() const { DARABONBA_PTR_GET_DEFAULT(firstVersion_, "") };
    inline GetIssueResponseBodyModel& setFirstVersion(string firstVersion) { DARABONBA_PTR_SET_VALUE(firstVersion_, firstVersion) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetIssueResponseBodyModel& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtLatest Field Functions 
    bool hasGmtLatest() const { return this->gmtLatest_ != nullptr;};
    void deleteGmtLatest() { this->gmtLatest_ = nullptr;};
    inline int64_t gmtLatest() const { DARABONBA_PTR_GET_DEFAULT(gmtLatest_, 0L) };
    inline GetIssueResponseBodyModel& setGmtLatest(int64_t gmtLatest) { DARABONBA_PTR_SET_VALUE(gmtLatest_, gmtLatest) };


    // keyLine Field Functions 
    bool hasKeyLine() const { return this->keyLine_ != nullptr;};
    void deleteKeyLine() { this->keyLine_ = nullptr;};
    inline int32_t keyLine() const { DARABONBA_PTR_GET_DEFAULT(keyLine_, 0) };
    inline GetIssueResponseBodyModel& setKeyLine(int32_t keyLine) { DARABONBA_PTR_SET_VALUE(keyLine_, keyLine) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIssueResponseBodyModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline string stack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
    inline GetIssueResponseBodyModel& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetIssueResponseBodyModel& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetIssueResponseBodyModel& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // symbolicStatus Field Functions 
    bool hasSymbolicStatus() const { return this->symbolicStatus_ != nullptr;};
    void deleteSymbolicStatus() { this->symbolicStatus_ = nullptr;};
    inline bool symbolicStatus() const { DARABONBA_PTR_GET_DEFAULT(symbolicStatus_, false) };
    inline GetIssueResponseBodyModel& setSymbolicStatus(bool symbolicStatus) { DARABONBA_PTR_SET_VALUE(symbolicStatus_, symbolicStatus) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetIssueResponseBodyModel& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetIssueResponseBodyModel& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<string>> affectedVersions_ = nullptr;
    std::shared_ptr<int64_t> allocSizeMax_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct50_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct70_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct90_ = nullptr;
    std::shared_ptr<string> cruxStack_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<int32_t> errorColumn_ = nullptr;
    std::shared_ptr<int32_t> errorCount_ = nullptr;
    std::shared_ptr<double> errorCountGrowthRate_ = nullptr;
    std::shared_ptr<int32_t> errorDeviceCount_ = nullptr;
    std::shared_ptr<double> errorDeviceCountGrowthRate_ = nullptr;
    std::shared_ptr<double> errorDeviceRate_ = nullptr;
    std::shared_ptr<double> errorDeviceRateGrowthRate_ = nullptr;
    std::shared_ptr<string> errorFileName_ = nullptr;
    std::shared_ptr<string> errorLine_ = nullptr;
    std::shared_ptr<string> errorName_ = nullptr;
    std::shared_ptr<double> errorRate_ = nullptr;
    std::shared_ptr<double> errorRateGrowthRate_ = nullptr;
    std::shared_ptr<string> errorType_ = nullptr;
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    std::shared_ptr<string> firstVersion_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtLatest_ = nullptr;
    std::shared_ptr<int32_t> keyLine_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> stack_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<bool> symbolicStatus_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
