// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListObjectScanEventResponseBodyDataDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListObjectScanEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectScanEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DisplaySandboxResult, displaySandboxResult_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(HasSubEvent, hasSubEvent_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(MatchedWhiteListRuleI18nStr, matchedWhiteListRuleI18nStr_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(OperateResult, operateResult_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Sha1, sha1_);
      DARABONBA_PTR_TO_JSON(Sha256, sha256_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectScanEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DisplaySandboxResult, displaySandboxResult_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(HasSubEvent, hasSubEvent_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(MatchedWhiteListRuleI18nStr, matchedWhiteListRuleI18nStr_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(OperateResult, operateResult_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Sha1, sha1_);
      DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListObjectScanEventResponseBodyData() = default ;
    ListObjectScanEventResponseBodyData(const ListObjectScanEventResponseBodyData &) = default ;
    ListObjectScanEventResponseBodyData(ListObjectScanEventResponseBodyData &&) = default ;
    ListObjectScanEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectScanEventResponseBodyData() = default ;
    ListObjectScanEventResponseBodyData& operator=(const ListObjectScanEventResponseBodyData &) = default ;
    ListObjectScanEventResponseBodyData& operator=(ListObjectScanEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && return this->details_ == nullptr && return this->displaySandboxResult_ == nullptr && return this->errorMsg_ == nullptr && return this->eventId_ == nullptr && return this->eventName_ == nullptr
        && return this->filePath_ == nullptr && return this->firstTime_ == nullptr && return this->hasSubEvent_ == nullptr && return this->lastTime_ == nullptr && return this->matchedWhiteListRuleI18nStr_ == nullptr
        && return this->md5_ == nullptr && return this->operateResult_ == nullptr && return this->ossKey_ == nullptr && return this->remark_ == nullptr && return this->riskLevel_ == nullptr
        && return this->sha1_ == nullptr && return this->sha256_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListObjectScanEventResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ListObjectScanEventResponseBodyDataDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ListObjectScanEventResponseBodyDataDetails>) };
    inline vector<Models::ListObjectScanEventResponseBodyDataDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ListObjectScanEventResponseBodyDataDetails>) };
    inline ListObjectScanEventResponseBodyData& setDetails(const vector<Models::ListObjectScanEventResponseBodyDataDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ListObjectScanEventResponseBodyData& setDetails(vector<Models::ListObjectScanEventResponseBodyDataDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // displaySandboxResult Field Functions 
    bool hasDisplaySandboxResult() const { return this->displaySandboxResult_ != nullptr;};
    void deleteDisplaySandboxResult() { this->displaySandboxResult_ = nullptr;};
    inline string displaySandboxResult() const { DARABONBA_PTR_GET_DEFAULT(displaySandboxResult_, "") };
    inline ListObjectScanEventResponseBodyData& setDisplaySandboxResult(string displaySandboxResult) { DARABONBA_PTR_SET_VALUE(displaySandboxResult_, displaySandboxResult) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListObjectScanEventResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline ListObjectScanEventResponseBodyData& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListObjectScanEventResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListObjectScanEventResponseBodyData& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int64_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
    inline ListObjectScanEventResponseBodyData& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // hasSubEvent Field Functions 
    bool hasHasSubEvent() const { return this->hasSubEvent_ != nullptr;};
    void deleteHasSubEvent() { this->hasSubEvent_ = nullptr;};
    inline bool hasSubEvent() const { DARABONBA_PTR_GET_DEFAULT(hasSubEvent_, false) };
    inline ListObjectScanEventResponseBodyData& setHasSubEvent(bool hasSubEvent) { DARABONBA_PTR_SET_VALUE(hasSubEvent_, hasSubEvent) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int64_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
    inline ListObjectScanEventResponseBodyData& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // matchedWhiteListRuleI18nStr Field Functions 
    bool hasMatchedWhiteListRuleI18nStr() const { return this->matchedWhiteListRuleI18nStr_ != nullptr;};
    void deleteMatchedWhiteListRuleI18nStr() { this->matchedWhiteListRuleI18nStr_ = nullptr;};
    inline string matchedWhiteListRuleI18nStr() const { DARABONBA_PTR_GET_DEFAULT(matchedWhiteListRuleI18nStr_, "") };
    inline ListObjectScanEventResponseBodyData& setMatchedWhiteListRuleI18nStr(string matchedWhiteListRuleI18nStr) { DARABONBA_PTR_SET_VALUE(matchedWhiteListRuleI18nStr_, matchedWhiteListRuleI18nStr) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListObjectScanEventResponseBodyData& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // operateResult Field Functions 
    bool hasOperateResult() const { return this->operateResult_ != nullptr;};
    void deleteOperateResult() { this->operateResult_ = nullptr;};
    inline string operateResult() const { DARABONBA_PTR_GET_DEFAULT(operateResult_, "") };
    inline ListObjectScanEventResponseBodyData& setOperateResult(string operateResult) { DARABONBA_PTR_SET_VALUE(operateResult_, operateResult) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline ListObjectScanEventResponseBodyData& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListObjectScanEventResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListObjectScanEventResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sha1 Field Functions 
    bool hasSha1() const { return this->sha1_ != nullptr;};
    void deleteSha1() { this->sha1_ = nullptr;};
    inline string sha1() const { DARABONBA_PTR_GET_DEFAULT(sha1_, "") };
    inline ListObjectScanEventResponseBodyData& setSha1(string sha1) { DARABONBA_PTR_SET_VALUE(sha1_, sha1) };


    // sha256 Field Functions 
    bool hasSha256() const { return this->sha256_ != nullptr;};
    void deleteSha256() { this->sha256_ = nullptr;};
    inline string sha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
    inline ListObjectScanEventResponseBodyData& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListObjectScanEventResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListObjectScanEventResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the OSS bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The details of the file.
    std::shared_ptr<vector<Models::ListObjectScanEventResponseBodyDataDetails>> details_ = nullptr;
    // Indicates whether the file can be detected by cloud sandbox. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> displaySandboxResult_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // The ID of the alert.
    std::shared_ptr<int64_t> eventId_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> eventName_ = nullptr;
    // The path to the file.
    std::shared_ptr<string> filePath_ = nullptr;
    // The timestamp at which the alert was first detected.
    std::shared_ptr<int64_t> firstTime_ = nullptr;
    // Indicates whether an alert is generated for the file extracted from the package. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasSubEvent_ = nullptr;
    // The timestamp at which the alert was last detected.
    std::shared_ptr<int64_t> lastTime_ = nullptr;
    std::shared_ptr<string> matchedWhiteListRuleI18nStr_ = nullptr;
    // The MD5 hash value of the file.
    std::shared_ptr<string> md5_ = nullptr;
    std::shared_ptr<string> operateResult_ = nullptr;
    // The key of the file that is stored in the OSS bucket.
    std::shared_ptr<string> ossKey_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // The risk level of the alert. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The SHA-1 hash value of the file.
    std::shared_ptr<string> sha1_ = nullptr;
    // The SHA-256 hash value of the file.
    std::shared_ptr<string> sha256_ = nullptr;
    // The method that is used to detect the malicious file. Valid values:
    // 
    // *   **API**: uses API operations.
    // *   **OSS**: uses OSS file check.
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
