// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScanResultResponseBodyDataItemsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetScanResultResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanResultResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ApiLabels, apiLabels_);
      DARABONBA_PTR_TO_JSON(ApiRequestTime, apiRequestTime_);
      DARABONBA_PTR_TO_JSON(ApiRiskLevel, apiRiskLevel_);
      DARABONBA_PTR_TO_JSON(ApiService, apiService_);
      DARABONBA_PTR_TO_JSON(ApiTaskId, apiTaskId_);
      DARABONBA_PTR_TO_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExtFeedback, extFeedback_);
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GuardFileUrls, guardFileUrls_);
      DARABONBA_PTR_TO_JSON(GuardImageUrls, guardImageUrls_);
      DARABONBA_PTR_TO_JSON(ImageLabels, imageLabels_);
      DARABONBA_PTR_TO_JSON(ImageService, imageService_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(MaliciousFileLevel, maliciousFileLevel_);
      DARABONBA_PTR_TO_JSON(MaliciousUrlLevel, maliciousUrlLevel_);
      DARABONBA_PTR_TO_JSON(ManualOnly, manualOnly_);
      DARABONBA_PTR_TO_JSON(NoLabels, noLabels_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(RequestFrom, requestFrom_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(ReviewLabels, reviewLabels_);
      DARABONBA_PTR_TO_JSON(ReviewRiskLevel, reviewRiskLevel_);
      DARABONBA_PTR_TO_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_TO_JSON(ReviewUid, reviewUid_);
      DARABONBA_PTR_TO_JSON(Reviewed, reviewed_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskTips, riskTips_);
      DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
      DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TextLabels, textLabels_);
      DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VoiceLabels, voiceLabels_);
      DARABONBA_PTR_TO_JSON(VoiceScanOpened, voiceScanOpened_);
      DARABONBA_PTR_TO_JSON(VoiceService, voiceService_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanResultResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ApiLabels, apiLabels_);
      DARABONBA_PTR_FROM_JSON(ApiRequestTime, apiRequestTime_);
      DARABONBA_PTR_FROM_JSON(ApiRiskLevel, apiRiskLevel_);
      DARABONBA_PTR_FROM_JSON(ApiService, apiService_);
      DARABONBA_PTR_FROM_JSON(ApiTaskId, apiTaskId_);
      DARABONBA_PTR_FROM_JSON(AttackLevel, attackLevel_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExtFeedback, extFeedback_);
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GuardFileUrls, guardFileUrls_);
      DARABONBA_PTR_FROM_JSON(GuardImageUrls, guardImageUrls_);
      DARABONBA_PTR_FROM_JSON(ImageLabels, imageLabels_);
      DARABONBA_PTR_FROM_JSON(ImageService, imageService_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(MaliciousFileLevel, maliciousFileLevel_);
      DARABONBA_PTR_FROM_JSON(MaliciousUrlLevel, maliciousUrlLevel_);
      DARABONBA_PTR_FROM_JSON(ManualOnly, manualOnly_);
      DARABONBA_PTR_FROM_JSON(NoLabels, noLabels_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(RequestFrom, requestFrom_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(ReviewLabels, reviewLabels_);
      DARABONBA_PTR_FROM_JSON(ReviewRiskLevel, reviewRiskLevel_);
      DARABONBA_PTR_FROM_JSON(ReviewTime, reviewTime_);
      DARABONBA_PTR_FROM_JSON(ReviewUid, reviewUid_);
      DARABONBA_PTR_FROM_JSON(Reviewed, reviewed_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskTips, riskTips_);
      DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
      DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TextLabels, textLabels_);
      DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VoiceLabels, voiceLabels_);
      DARABONBA_PTR_FROM_JSON(VoiceScanOpened, voiceScanOpened_);
      DARABONBA_PTR_FROM_JSON(VoiceService, voiceService_);
    };
    GetScanResultResponseBodyDataItems() = default ;
    GetScanResultResponseBodyDataItems(const GetScanResultResponseBodyDataItems &) = default ;
    GetScanResultResponseBodyDataItems(GetScanResultResponseBodyDataItems &&) = default ;
    GetScanResultResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanResultResponseBodyDataItems() = default ;
    GetScanResultResponseBodyDataItems& operator=(const GetScanResultResponseBodyDataItems &) = default ;
    GetScanResultResponseBodyDataItems& operator=(GetScanResultResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->apiLabels_ == nullptr && return this->apiRequestTime_ == nullptr && return this->apiRiskLevel_ == nullptr && return this->apiService_ == nullptr && return this->apiTaskId_ == nullptr
        && return this->attackLevel_ == nullptr && return this->content_ == nullptr && return this->dataId_ == nullptr && return this->endTime_ == nullptr && return this->extFeedback_ == nullptr
        && return this->extra_ == nullptr && return this->frameCount_ == nullptr && return this->gmtCreate_ == nullptr && return this->guardFileUrls_ == nullptr && return this->guardImageUrls_ == nullptr
        && return this->imageLabels_ == nullptr && return this->imageService_ == nullptr && return this->imageUrl_ == nullptr && return this->labels_ == nullptr && return this->liveId_ == nullptr
        && return this->maliciousFileLevel_ == nullptr && return this->maliciousUrlLevel_ == nullptr && return this->manualOnly_ == nullptr && return this->noLabels_ == nullptr && return this->offset_ == nullptr
        && return this->pageNum_ == nullptr && return this->requestFrom_ == nullptr && return this->requestId_ == nullptr && return this->requestTime_ == nullptr && return this->resourceType_ == nullptr
        && return this->result_ == nullptr && return this->reviewLabels_ == nullptr && return this->reviewRiskLevel_ == nullptr && return this->reviewTime_ == nullptr && return this->reviewUid_ == nullptr
        && return this->reviewed_ == nullptr && return this->riskLevel_ == nullptr && return this->riskTips_ == nullptr && return this->riskWords_ == nullptr && return this->scanResult_ == nullptr
        && return this->score_ == nullptr && return this->sensitiveLevel_ == nullptr && return this->serviceCode_ == nullptr && return this->startTime_ == nullptr && return this->suggestion_ == nullptr
        && return this->taskId_ == nullptr && return this->textLabels_ == nullptr && return this->thumbnail_ == nullptr && return this->timeStamp_ == nullptr && return this->url_ == nullptr
        && return this->voiceLabels_ == nullptr && return this->voiceScanOpened_ == nullptr && return this->voiceService_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetScanResultResponseBodyDataItems& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // apiLabels Field Functions 
    bool hasApiLabels() const { return this->apiLabels_ != nullptr;};
    void deleteApiLabels() { this->apiLabels_ = nullptr;};
    inline string apiLabels() const { DARABONBA_PTR_GET_DEFAULT(apiLabels_, "") };
    inline GetScanResultResponseBodyDataItems& setApiLabels(string apiLabels) { DARABONBA_PTR_SET_VALUE(apiLabels_, apiLabels) };


    // apiRequestTime Field Functions 
    bool hasApiRequestTime() const { return this->apiRequestTime_ != nullptr;};
    void deleteApiRequestTime() { this->apiRequestTime_ = nullptr;};
    inline string apiRequestTime() const { DARABONBA_PTR_GET_DEFAULT(apiRequestTime_, "") };
    inline GetScanResultResponseBodyDataItems& setApiRequestTime(string apiRequestTime) { DARABONBA_PTR_SET_VALUE(apiRequestTime_, apiRequestTime) };


    // apiRiskLevel Field Functions 
    bool hasApiRiskLevel() const { return this->apiRiskLevel_ != nullptr;};
    void deleteApiRiskLevel() { this->apiRiskLevel_ = nullptr;};
    inline string apiRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(apiRiskLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setApiRiskLevel(string apiRiskLevel) { DARABONBA_PTR_SET_VALUE(apiRiskLevel_, apiRiskLevel) };


    // apiService Field Functions 
    bool hasApiService() const { return this->apiService_ != nullptr;};
    void deleteApiService() { this->apiService_ = nullptr;};
    inline string apiService() const { DARABONBA_PTR_GET_DEFAULT(apiService_, "") };
    inline GetScanResultResponseBodyDataItems& setApiService(string apiService) { DARABONBA_PTR_SET_VALUE(apiService_, apiService) };


    // apiTaskId Field Functions 
    bool hasApiTaskId() const { return this->apiTaskId_ != nullptr;};
    void deleteApiTaskId() { this->apiTaskId_ = nullptr;};
    inline string apiTaskId() const { DARABONBA_PTR_GET_DEFAULT(apiTaskId_, "") };
    inline GetScanResultResponseBodyDataItems& setApiTaskId(string apiTaskId) { DARABONBA_PTR_SET_VALUE(apiTaskId_, apiTaskId) };


    // attackLevel Field Functions 
    bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
    void deleteAttackLevel() { this->attackLevel_ = nullptr;};
    inline string attackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetScanResultResponseBodyDataItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline GetScanResultResponseBodyDataItems& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetScanResultResponseBodyDataItems& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extFeedback Field Functions 
    bool hasExtFeedback() const { return this->extFeedback_ != nullptr;};
    void deleteExtFeedback() { this->extFeedback_ = nullptr;};
    inline string extFeedback() const { DARABONBA_PTR_GET_DEFAULT(extFeedback_, "") };
    inline GetScanResultResponseBodyDataItems& setExtFeedback(string extFeedback) { DARABONBA_PTR_SET_VALUE(extFeedback_, extFeedback) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline GetScanResultResponseBodyDataItems& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline GetScanResultResponseBodyDataItems& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // frameCount Field Functions 
    bool hasFrameCount() const { return this->frameCount_ != nullptr;};
    void deleteFrameCount() { this->frameCount_ = nullptr;};
    inline int64_t frameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0L) };
    inline GetScanResultResponseBodyDataItems& setFrameCount(int64_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetScanResultResponseBodyDataItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // guardFileUrls Field Functions 
    bool hasGuardFileUrls() const { return this->guardFileUrls_ != nullptr;};
    void deleteGuardFileUrls() { this->guardFileUrls_ = nullptr;};
    inline const vector<string> & guardFileUrls() const { DARABONBA_PTR_GET_CONST(guardFileUrls_, vector<string>) };
    inline vector<string> guardFileUrls() { DARABONBA_PTR_GET(guardFileUrls_, vector<string>) };
    inline GetScanResultResponseBodyDataItems& setGuardFileUrls(const vector<string> & guardFileUrls) { DARABONBA_PTR_SET_VALUE(guardFileUrls_, guardFileUrls) };
    inline GetScanResultResponseBodyDataItems& setGuardFileUrls(vector<string> && guardFileUrls) { DARABONBA_PTR_SET_RVALUE(guardFileUrls_, guardFileUrls) };


    // guardImageUrls Field Functions 
    bool hasGuardImageUrls() const { return this->guardImageUrls_ != nullptr;};
    void deleteGuardImageUrls() { this->guardImageUrls_ = nullptr;};
    inline const vector<string> & guardImageUrls() const { DARABONBA_PTR_GET_CONST(guardImageUrls_, vector<string>) };
    inline vector<string> guardImageUrls() { DARABONBA_PTR_GET(guardImageUrls_, vector<string>) };
    inline GetScanResultResponseBodyDataItems& setGuardImageUrls(const vector<string> & guardImageUrls) { DARABONBA_PTR_SET_VALUE(guardImageUrls_, guardImageUrls) };
    inline GetScanResultResponseBodyDataItems& setGuardImageUrls(vector<string> && guardImageUrls) { DARABONBA_PTR_SET_RVALUE(guardImageUrls_, guardImageUrls) };


    // imageLabels Field Functions 
    bool hasImageLabels() const { return this->imageLabels_ != nullptr;};
    void deleteImageLabels() { this->imageLabels_ = nullptr;};
    inline const vector<Darabonba::Json> & imageLabels() const { DARABONBA_PTR_GET_CONST(imageLabels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> imageLabels() { DARABONBA_PTR_GET(imageLabels_, vector<Darabonba::Json>) };
    inline GetScanResultResponseBodyDataItems& setImageLabels(const vector<Darabonba::Json> & imageLabels) { DARABONBA_PTR_SET_VALUE(imageLabels_, imageLabels) };
    inline GetScanResultResponseBodyDataItems& setImageLabels(vector<Darabonba::Json> && imageLabels) { DARABONBA_PTR_SET_RVALUE(imageLabels_, imageLabels) };


    // imageService Field Functions 
    bool hasImageService() const { return this->imageService_ != nullptr;};
    void deleteImageService() { this->imageService_ = nullptr;};
    inline string imageService() const { DARABONBA_PTR_GET_DEFAULT(imageService_, "") };
    inline GetScanResultResponseBodyDataItems& setImageService(string imageService) { DARABONBA_PTR_SET_VALUE(imageService_, imageService) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GetScanResultResponseBodyDataItems& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetScanResultResponseBodyDataItems& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline GetScanResultResponseBodyDataItems& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // maliciousFileLevel Field Functions 
    bool hasMaliciousFileLevel() const { return this->maliciousFileLevel_ != nullptr;};
    void deleteMaliciousFileLevel() { this->maliciousFileLevel_ = nullptr;};
    inline string maliciousFileLevel() const { DARABONBA_PTR_GET_DEFAULT(maliciousFileLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setMaliciousFileLevel(string maliciousFileLevel) { DARABONBA_PTR_SET_VALUE(maliciousFileLevel_, maliciousFileLevel) };


    // maliciousUrlLevel Field Functions 
    bool hasMaliciousUrlLevel() const { return this->maliciousUrlLevel_ != nullptr;};
    void deleteMaliciousUrlLevel() { this->maliciousUrlLevel_ = nullptr;};
    inline string maliciousUrlLevel() const { DARABONBA_PTR_GET_DEFAULT(maliciousUrlLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setMaliciousUrlLevel(string maliciousUrlLevel) { DARABONBA_PTR_SET_VALUE(maliciousUrlLevel_, maliciousUrlLevel) };


    // manualOnly Field Functions 
    bool hasManualOnly() const { return this->manualOnly_ != nullptr;};
    void deleteManualOnly() { this->manualOnly_ = nullptr;};
    inline bool manualOnly() const { DARABONBA_PTR_GET_DEFAULT(manualOnly_, false) };
    inline GetScanResultResponseBodyDataItems& setManualOnly(bool manualOnly) { DARABONBA_PTR_SET_VALUE(manualOnly_, manualOnly) };


    // noLabels Field Functions 
    bool hasNoLabels() const { return this->noLabels_ != nullptr;};
    void deleteNoLabels() { this->noLabels_ = nullptr;};
    inline const vector<string> & noLabels() const { DARABONBA_PTR_GET_CONST(noLabels_, vector<string>) };
    inline vector<string> noLabels() { DARABONBA_PTR_GET(noLabels_, vector<string>) };
    inline GetScanResultResponseBodyDataItems& setNoLabels(const vector<string> & noLabels) { DARABONBA_PTR_SET_VALUE(noLabels_, noLabels) };
    inline GetScanResultResponseBodyDataItems& setNoLabels(vector<string> && noLabels) { DARABONBA_PTR_SET_RVALUE(noLabels_, noLabels) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetScanResultResponseBodyDataItems& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline GetScanResultResponseBodyDataItems& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // requestFrom Field Functions 
    bool hasRequestFrom() const { return this->requestFrom_ != nullptr;};
    void deleteRequestFrom() { this->requestFrom_ = nullptr;};
    inline string requestFrom() const { DARABONBA_PTR_GET_DEFAULT(requestFrom_, "") };
    inline GetScanResultResponseBodyDataItems& setRequestFrom(string requestFrom) { DARABONBA_PTR_SET_VALUE(requestFrom_, requestFrom) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScanResultResponseBodyDataItems& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline GetScanResultResponseBodyDataItems& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetScanResultResponseBodyDataItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetScanResultResponseBodyDataItemsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetScanResultResponseBodyDataItemsResult>) };
    inline vector<Models::GetScanResultResponseBodyDataItemsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetScanResultResponseBodyDataItemsResult>) };
    inline GetScanResultResponseBodyDataItems& setResult(const vector<Models::GetScanResultResponseBodyDataItemsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetScanResultResponseBodyDataItems& setResult(vector<Models::GetScanResultResponseBodyDataItemsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // reviewLabels Field Functions 
    bool hasReviewLabels() const { return this->reviewLabels_ != nullptr;};
    void deleteReviewLabels() { this->reviewLabels_ = nullptr;};
    inline string reviewLabels() const { DARABONBA_PTR_GET_DEFAULT(reviewLabels_, "") };
    inline GetScanResultResponseBodyDataItems& setReviewLabels(string reviewLabels) { DARABONBA_PTR_SET_VALUE(reviewLabels_, reviewLabels) };


    // reviewRiskLevel Field Functions 
    bool hasReviewRiskLevel() const { return this->reviewRiskLevel_ != nullptr;};
    void deleteReviewRiskLevel() { this->reviewRiskLevel_ = nullptr;};
    inline string reviewRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(reviewRiskLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setReviewRiskLevel(string reviewRiskLevel) { DARABONBA_PTR_SET_VALUE(reviewRiskLevel_, reviewRiskLevel) };


    // reviewTime Field Functions 
    bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
    void deleteReviewTime() { this->reviewTime_ = nullptr;};
    inline string reviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
    inline GetScanResultResponseBodyDataItems& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


    // reviewUid Field Functions 
    bool hasReviewUid() const { return this->reviewUid_ != nullptr;};
    void deleteReviewUid() { this->reviewUid_ = nullptr;};
    inline string reviewUid() const { DARABONBA_PTR_GET_DEFAULT(reviewUid_, "") };
    inline GetScanResultResponseBodyDataItems& setReviewUid(string reviewUid) { DARABONBA_PTR_SET_VALUE(reviewUid_, reviewUid) };


    // reviewed Field Functions 
    bool hasReviewed() const { return this->reviewed_ != nullptr;};
    void deleteReviewed() { this->reviewed_ = nullptr;};
    inline bool reviewed() const { DARABONBA_PTR_GET_DEFAULT(reviewed_, false) };
    inline GetScanResultResponseBodyDataItems& setReviewed(bool reviewed) { DARABONBA_PTR_SET_VALUE(reviewed_, reviewed) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskTips Field Functions 
    bool hasRiskTips() const { return this->riskTips_ != nullptr;};
    void deleteRiskTips() { this->riskTips_ = nullptr;};
    inline string riskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
    inline GetScanResultResponseBodyDataItems& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


    // riskWords Field Functions 
    bool hasRiskWords() const { return this->riskWords_ != nullptr;};
    void deleteRiskWords() { this->riskWords_ = nullptr;};
    inline string riskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
    inline GetScanResultResponseBodyDataItems& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


    // scanResult Field Functions 
    bool hasScanResult() const { return this->scanResult_ != nullptr;};
    void deleteScanResult() { this->scanResult_ = nullptr;};
    inline string scanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
    inline GetScanResultResponseBodyDataItems& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline GetScanResultResponseBodyDataItems& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline GetScanResultResponseBodyDataItems& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetScanResultResponseBodyDataItems& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetScanResultResponseBodyDataItems& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetScanResultResponseBodyDataItems& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetScanResultResponseBodyDataItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // textLabels Field Functions 
    bool hasTextLabels() const { return this->textLabels_ != nullptr;};
    void deleteTextLabels() { this->textLabels_ = nullptr;};
    inline const vector<Darabonba::Json> & textLabels() const { DARABONBA_PTR_GET_CONST(textLabels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> textLabels() { DARABONBA_PTR_GET(textLabels_, vector<Darabonba::Json>) };
    inline GetScanResultResponseBodyDataItems& setTextLabels(const vector<Darabonba::Json> & textLabels) { DARABONBA_PTR_SET_VALUE(textLabels_, textLabels) };
    inline GetScanResultResponseBodyDataItems& setTextLabels(vector<Darabonba::Json> && textLabels) { DARABONBA_PTR_SET_RVALUE(textLabels_, textLabels) };


    // thumbnail Field Functions 
    bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
    void deleteThumbnail() { this->thumbnail_ = nullptr;};
    inline string thumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
    inline GetScanResultResponseBodyDataItems& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline GetScanResultResponseBodyDataItems& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetScanResultResponseBodyDataItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // voiceLabels Field Functions 
    bool hasVoiceLabels() const { return this->voiceLabels_ != nullptr;};
    void deleteVoiceLabels() { this->voiceLabels_ = nullptr;};
    inline const vector<Darabonba::Json> & voiceLabels() const { DARABONBA_PTR_GET_CONST(voiceLabels_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> voiceLabels() { DARABONBA_PTR_GET(voiceLabels_, vector<Darabonba::Json>) };
    inline GetScanResultResponseBodyDataItems& setVoiceLabels(const vector<Darabonba::Json> & voiceLabels) { DARABONBA_PTR_SET_VALUE(voiceLabels_, voiceLabels) };
    inline GetScanResultResponseBodyDataItems& setVoiceLabels(vector<Darabonba::Json> && voiceLabels) { DARABONBA_PTR_SET_RVALUE(voiceLabels_, voiceLabels) };


    // voiceScanOpened Field Functions 
    bool hasVoiceScanOpened() const { return this->voiceScanOpened_ != nullptr;};
    void deleteVoiceScanOpened() { this->voiceScanOpened_ = nullptr;};
    inline bool voiceScanOpened() const { DARABONBA_PTR_GET_DEFAULT(voiceScanOpened_, false) };
    inline GetScanResultResponseBodyDataItems& setVoiceScanOpened(bool voiceScanOpened) { DARABONBA_PTR_SET_VALUE(voiceScanOpened_, voiceScanOpened) };


    // voiceService Field Functions 
    bool hasVoiceService() const { return this->voiceService_ != nullptr;};
    void deleteVoiceService() { this->voiceService_ = nullptr;};
    inline string voiceService() const { DARABONBA_PTR_GET_DEFAULT(voiceService_, "") };
    inline GetScanResultResponseBodyDataItems& setVoiceService(string voiceService) { DARABONBA_PTR_SET_VALUE(voiceService_, voiceService) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    // Automated review labels.
    std::shared_ptr<string> apiLabels_ = nullptr;
    // Machine review time.
    std::shared_ptr<string> apiRequestTime_ = nullptr;
    // Automated review risk level.
    std::shared_ptr<string> apiRiskLevel_ = nullptr;
    // Automated review service
    std::shared_ptr<string> apiService_ = nullptr;
    // Automated review task ID.
    std::shared_ptr<string> apiTaskId_ = nullptr;
    // Attack level, returned based on the set high and low risk scores. The return values include:
    // 
    // - high: High risk
    // 
    // - medium: Medium risk
    // 
    // - low: Low risk
    // 
    // - none: No risk detected
    std::shared_ptr<string> attackLevel_ = nullptr;
    // Content.
    std::shared_ptr<string> content_ = nullptr;
    // Data Id
    std::shared_ptr<string> dataId_ = nullptr;
    // Segment end time (in seconds).
    std::shared_ptr<string> endTime_ = nullptr;
    // Feedback information.
    std::shared_ptr<string> extFeedback_ = nullptr;
    // Additional parameters.
    Darabonba::Json extra_ = nullptr;
    // Frame count.
    std::shared_ptr<int64_t> frameCount_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Multimodal file URLs.
    std::shared_ptr<vector<string>> guardFileUrls_ = nullptr;
    // Multimodal image URLs.
    std::shared_ptr<vector<string>> guardImageUrls_ = nullptr;
    // Image labels.
    std::shared_ptr<vector<Darabonba::Json>> imageLabels_ = nullptr;
    // Image service.
    std::shared_ptr<string> imageService_ = nullptr;
    // URL
    std::shared_ptr<string> imageUrl_ = nullptr;
    // Labels.
    std::shared_ptr<string> labels_ = nullptr;
    std::shared_ptr<string> liveId_ = nullptr;
    // Malicious file risk level.
    std::shared_ptr<string> maliciousFileLevel_ = nullptr;
    // Malicious URL risk level.
    std::shared_ptr<string> maliciousUrlLevel_ = nullptr;
    // Whether it is a pure manual review.
    std::shared_ptr<bool> manualOnly_ = nullptr;
    // No labels
    std::shared_ptr<vector<string>> noLabels_ = nullptr;
    // Frame offset value.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // Page number.
    std::shared_ptr<int64_t> pageNum_ = nullptr;
    // Request source.
    std::shared_ptr<string> requestFrom_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Request time.
    std::shared_ptr<string> requestTime_ = nullptr;
    // Resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Return collection.
    std::shared_ptr<vector<Models::GetScanResultResponseBodyDataItemsResult>> result_ = nullptr;
    // Review labels.
    std::shared_ptr<string> reviewLabels_ = nullptr;
    // Review status.
    std::shared_ptr<string> reviewRiskLevel_ = nullptr;
    // Review time.
    std::shared_ptr<string> reviewTime_ = nullptr;
    // Reviewer.
    std::shared_ptr<string> reviewUid_ = nullptr;
    // Whether it has been reviewed.
    std::shared_ptr<bool> reviewed_ = nullptr;
    // Risk level, returned based on the set high and low risk scores. The return values include:
    // 
    // - high: High risk
    // 
    // - medium: Medium risk
    // 
    // - low: Low risk
    // 
    // - none: No risk detected
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Details of the detected risk.
    std::shared_ptr<string> riskTips_ = nullptr;
    // Keywords of the detected risk.
    std::shared_ptr<string> riskWords_ = nullptr;
    // Details of the result.
    std::shared_ptr<string> scanResult_ = nullptr;
    // Score.
    std::shared_ptr<float> score_ = nullptr;
    // Sensitive level, returned based on the set high and low risk scores. The return values include:
    // - **S1**: Indicates low sensitivity.
    // - **S2**: Indicates medium sensitivity.
    // - **S3**: Indicates high sensitivity.
    // - **S4**: Indicates very high sensitivity.
    // - **S0**: Indicates no sensitivity.
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Segment start time (in seconds).
    std::shared_ptr<string> startTime_ = nullptr;
    // Suggestion.
    std::shared_ptr<string> suggestion_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // Text labels.
    std::shared_ptr<vector<Darabonba::Json>> textLabels_ = nullptr;
    // Thumbnail URL.
    std::shared_ptr<string> thumbnail_ = nullptr;
    // Timestamp.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // Task URL
    std::shared_ptr<string> url_ = nullptr;
    // Voice labels.
    std::shared_ptr<vector<Darabonba::Json>> voiceLabels_ = nullptr;
    // Whether audio detection is enabled.
    std::shared_ptr<bool> voiceScanOpened_ = nullptr;
    // Voice service.
    std::shared_ptr<string> voiceService_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
