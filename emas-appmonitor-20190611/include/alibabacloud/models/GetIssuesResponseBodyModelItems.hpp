// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESRESPONSEBODYMODELITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESRESPONSEBODYMODELITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssuesResponseBodyModelItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssuesResponseBodyModelItems& obj) { 
      DARABONBA_PTR_TO_JSON(AffectedUserCount, affectedUserCount_);
      DARABONBA_PTR_TO_JSON(AllocSizeMax, allocSizeMax_);
      DARABONBA_PTR_TO_JSON(AllocSizePct50, allocSizePct50_);
      DARABONBA_PTR_TO_JSON(AllocSizePct70, allocSizePct70_);
      DARABONBA_PTR_TO_JSON(AllocSizePct90, allocSizePct90_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(DomScore, domScore_);
      DARABONBA_PTR_TO_JSON(ErrorColumn, errorColumn_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ErrorDeviceCount, errorDeviceCount_);
      DARABONBA_PTR_TO_JSON(ErrorDeviceRate, errorDeviceRate_);
      DARABONBA_PTR_TO_JSON(ErrorFileName, errorFileName_);
      DARABONBA_PTR_TO_JSON(ErrorLine, errorLine_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(FirstVersion, firstVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Stack, stack_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssuesResponseBodyModelItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectedUserCount, affectedUserCount_);
      DARABONBA_PTR_FROM_JSON(AllocSizeMax, allocSizeMax_);
      DARABONBA_PTR_FROM_JSON(AllocSizePct50, allocSizePct50_);
      DARABONBA_PTR_FROM_JSON(AllocSizePct70, allocSizePct70_);
      DARABONBA_PTR_FROM_JSON(AllocSizePct90, allocSizePct90_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(DomScore, domScore_);
      DARABONBA_PTR_FROM_JSON(ErrorColumn, errorColumn_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ErrorDeviceCount, errorDeviceCount_);
      DARABONBA_PTR_FROM_JSON(ErrorDeviceRate, errorDeviceRate_);
      DARABONBA_PTR_FROM_JSON(ErrorFileName, errorFileName_);
      DARABONBA_PTR_FROM_JSON(ErrorLine, errorLine_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(FirstVersion, firstVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Stack, stack_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetIssuesResponseBodyModelItems() = default ;
    GetIssuesResponseBodyModelItems(const GetIssuesResponseBodyModelItems &) = default ;
    GetIssuesResponseBodyModelItems(GetIssuesResponseBodyModelItems &&) = default ;
    GetIssuesResponseBodyModelItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssuesResponseBodyModelItems() = default ;
    GetIssuesResponseBodyModelItems& operator=(const GetIssuesResponseBodyModelItems &) = default ;
    GetIssuesResponseBodyModelItems& operator=(GetIssuesResponseBodyModelItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectedUserCount_ != nullptr
        && this->allocSizeMax_ != nullptr && this->allocSizePct50_ != nullptr && this->allocSizePct70_ != nullptr && this->allocSizePct90_ != nullptr && this->digestHash_ != nullptr
        && this->domScore_ != nullptr && this->errorColumn_ != nullptr && this->errorCount_ != nullptr && this->errorDeviceCount_ != nullptr && this->errorDeviceRate_ != nullptr
        && this->errorFileName_ != nullptr && this->errorLine_ != nullptr && this->errorName_ != nullptr && this->errorRate_ != nullptr && this->errorType_ != nullptr
        && this->eventTime_ != nullptr && this->firstVersion_ != nullptr && this->name_ != nullptr && this->stack_ != nullptr && this->status_ != nullptr; };
    // affectedUserCount Field Functions 
    bool hasAffectedUserCount() const { return this->affectedUserCount_ != nullptr;};
    void deleteAffectedUserCount() { this->affectedUserCount_ = nullptr;};
    inline int32_t affectedUserCount() const { DARABONBA_PTR_GET_DEFAULT(affectedUserCount_, 0) };
    inline GetIssuesResponseBodyModelItems& setAffectedUserCount(int32_t affectedUserCount) { DARABONBA_PTR_SET_VALUE(affectedUserCount_, affectedUserCount) };


    // allocSizeMax Field Functions 
    bool hasAllocSizeMax() const { return this->allocSizeMax_ != nullptr;};
    void deleteAllocSizeMax() { this->allocSizeMax_ = nullptr;};
    inline int64_t allocSizeMax() const { DARABONBA_PTR_GET_DEFAULT(allocSizeMax_, 0L) };
    inline GetIssuesResponseBodyModelItems& setAllocSizeMax(int64_t allocSizeMax) { DARABONBA_PTR_SET_VALUE(allocSizeMax_, allocSizeMax) };


    // allocSizePct50 Field Functions 
    bool hasAllocSizePct50() const { return this->allocSizePct50_ != nullptr;};
    void deleteAllocSizePct50() { this->allocSizePct50_ = nullptr;};
    inline int64_t allocSizePct50() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct50_, 0L) };
    inline GetIssuesResponseBodyModelItems& setAllocSizePct50(int64_t allocSizePct50) { DARABONBA_PTR_SET_VALUE(allocSizePct50_, allocSizePct50) };


    // allocSizePct70 Field Functions 
    bool hasAllocSizePct70() const { return this->allocSizePct70_ != nullptr;};
    void deleteAllocSizePct70() { this->allocSizePct70_ = nullptr;};
    inline int64_t allocSizePct70() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct70_, 0L) };
    inline GetIssuesResponseBodyModelItems& setAllocSizePct70(int64_t allocSizePct70) { DARABONBA_PTR_SET_VALUE(allocSizePct70_, allocSizePct70) };


    // allocSizePct90 Field Functions 
    bool hasAllocSizePct90() const { return this->allocSizePct90_ != nullptr;};
    void deleteAllocSizePct90() { this->allocSizePct90_ = nullptr;};
    inline int64_t allocSizePct90() const { DARABONBA_PTR_GET_DEFAULT(allocSizePct90_, 0L) };
    inline GetIssuesResponseBodyModelItems& setAllocSizePct90(int64_t allocSizePct90) { DARABONBA_PTR_SET_VALUE(allocSizePct90_, allocSizePct90) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetIssuesResponseBodyModelItems& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // domScore Field Functions 
    bool hasDomScore() const { return this->domScore_ != nullptr;};
    void deleteDomScore() { this->domScore_ = nullptr;};
    inline string domScore() const { DARABONBA_PTR_GET_DEFAULT(domScore_, "") };
    inline GetIssuesResponseBodyModelItems& setDomScore(string domScore) { DARABONBA_PTR_SET_VALUE(domScore_, domScore) };


    // errorColumn Field Functions 
    bool hasErrorColumn() const { return this->errorColumn_ != nullptr;};
    void deleteErrorColumn() { this->errorColumn_ = nullptr;};
    inline int32_t errorColumn() const { DARABONBA_PTR_GET_DEFAULT(errorColumn_, 0) };
    inline GetIssuesResponseBodyModelItems& setErrorColumn(int32_t errorColumn) { DARABONBA_PTR_SET_VALUE(errorColumn_, errorColumn) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int32_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0) };
    inline GetIssuesResponseBodyModelItems& setErrorCount(int32_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorDeviceCount Field Functions 
    bool hasErrorDeviceCount() const { return this->errorDeviceCount_ != nullptr;};
    void deleteErrorDeviceCount() { this->errorDeviceCount_ = nullptr;};
    inline int32_t errorDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceCount_, 0) };
    inline GetIssuesResponseBodyModelItems& setErrorDeviceCount(int32_t errorDeviceCount) { DARABONBA_PTR_SET_VALUE(errorDeviceCount_, errorDeviceCount) };


    // errorDeviceRate Field Functions 
    bool hasErrorDeviceRate() const { return this->errorDeviceRate_ != nullptr;};
    void deleteErrorDeviceRate() { this->errorDeviceRate_ = nullptr;};
    inline double errorDeviceRate() const { DARABONBA_PTR_GET_DEFAULT(errorDeviceRate_, 0.0) };
    inline GetIssuesResponseBodyModelItems& setErrorDeviceRate(double errorDeviceRate) { DARABONBA_PTR_SET_VALUE(errorDeviceRate_, errorDeviceRate) };


    // errorFileName Field Functions 
    bool hasErrorFileName() const { return this->errorFileName_ != nullptr;};
    void deleteErrorFileName() { this->errorFileName_ = nullptr;};
    inline string errorFileName() const { DARABONBA_PTR_GET_DEFAULT(errorFileName_, "") };
    inline GetIssuesResponseBodyModelItems& setErrorFileName(string errorFileName) { DARABONBA_PTR_SET_VALUE(errorFileName_, errorFileName) };


    // errorLine Field Functions 
    bool hasErrorLine() const { return this->errorLine_ != nullptr;};
    void deleteErrorLine() { this->errorLine_ = nullptr;};
    inline int32_t errorLine() const { DARABONBA_PTR_GET_DEFAULT(errorLine_, 0) };
    inline GetIssuesResponseBodyModelItems& setErrorLine(int32_t errorLine) { DARABONBA_PTR_SET_VALUE(errorLine_, errorLine) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string errorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline GetIssuesResponseBodyModelItems& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // errorRate Field Functions 
    bool hasErrorRate() const { return this->errorRate_ != nullptr;};
    void deleteErrorRate() { this->errorRate_ = nullptr;};
    inline double errorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
    inline GetIssuesResponseBodyModelItems& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline GetIssuesResponseBodyModelItems& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline GetIssuesResponseBodyModelItems& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // firstVersion Field Functions 
    bool hasFirstVersion() const { return this->firstVersion_ != nullptr;};
    void deleteFirstVersion() { this->firstVersion_ = nullptr;};
    inline string firstVersion() const { DARABONBA_PTR_GET_DEFAULT(firstVersion_, "") };
    inline GetIssuesResponseBodyModelItems& setFirstVersion(string firstVersion) { DARABONBA_PTR_SET_VALUE(firstVersion_, firstVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIssuesResponseBodyModelItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline string stack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
    inline GetIssuesResponseBodyModelItems& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetIssuesResponseBodyModelItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> affectedUserCount_ = nullptr;
    std::shared_ptr<int64_t> allocSizeMax_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct50_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct70_ = nullptr;
    std::shared_ptr<int64_t> allocSizePct90_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<string> domScore_ = nullptr;
    std::shared_ptr<int32_t> errorColumn_ = nullptr;
    std::shared_ptr<int32_t> errorCount_ = nullptr;
    std::shared_ptr<int32_t> errorDeviceCount_ = nullptr;
    std::shared_ptr<double> errorDeviceRate_ = nullptr;
    std::shared_ptr<string> errorFileName_ = nullptr;
    std::shared_ptr<int32_t> errorLine_ = nullptr;
    std::shared_ptr<string> errorName_ = nullptr;
    std::shared_ptr<double> errorRate_ = nullptr;
    std::shared_ptr<string> errorType_ = nullptr;
    std::shared_ptr<string> eventTime_ = nullptr;
    std::shared_ptr<string> firstVersion_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> stack_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
