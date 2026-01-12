// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCANRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetScanResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScanResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetScanResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetScanResultResponseBody() = default ;
    GetScanResultResponseBody(const GetScanResultResponseBody &) = default ;
    GetScanResultResponseBody(GetScanResultResponseBody &&) = default ;
    GetScanResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScanResultResponseBody() = default ;
    GetScanResultResponseBody& operator=(const GetScanResultResponseBody &) = default ;
    GetScanResultResponseBody& operator=(GetScanResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(ApiLabels, apiLabels_);
          DARABONBA_PTR_TO_JSON(ApiRequestTime, apiRequestTime_);
          DARABONBA_PTR_TO_JSON(ApiRiskLevel, apiRiskLevel_);
          DARABONBA_PTR_TO_JSON(ApiService, apiService_);
          DARABONBA_PTR_TO_JSON(ApiTaskId, apiTaskId_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
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
          DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
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
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(ApiLabels, apiLabels_);
          DARABONBA_PTR_FROM_JSON(ApiRequestTime, apiRequestTime_);
          DARABONBA_PTR_FROM_JSON(ApiRiskLevel, apiRiskLevel_);
          DARABONBA_PTR_FROM_JSON(ApiService, apiService_);
          DARABONBA_PTR_FROM_JSON(ApiTaskId, apiTaskId_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
          DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
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
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline string getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
          inline Result& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // Confidence score, ranging from 0 to 100, with two decimal places.
          shared_ptr<string> confidence_ {};
          // Description of the Label field.
          shared_ptr<string> description_ {};
          // Label.
          shared_ptr<string> label_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->apiLabels_ == nullptr && this->apiRequestTime_ == nullptr && this->apiRiskLevel_ == nullptr && this->apiService_ == nullptr && this->apiTaskId_ == nullptr
        && this->appId_ == nullptr && this->attackLevel_ == nullptr && this->content_ == nullptr && this->dataId_ == nullptr && this->endTime_ == nullptr
        && this->extFeedback_ == nullptr && this->extra_ == nullptr && this->frameCount_ == nullptr && this->gmtCreate_ == nullptr && this->guardFileUrls_ == nullptr
        && this->guardImageUrls_ == nullptr && this->imageLabels_ == nullptr && this->imageService_ == nullptr && this->imageUrl_ == nullptr && this->imageUrls_ == nullptr
        && this->labels_ == nullptr && this->liveId_ == nullptr && this->maliciousFileLevel_ == nullptr && this->maliciousUrlLevel_ == nullptr && this->manualOnly_ == nullptr
        && this->noLabels_ == nullptr && this->offset_ == nullptr && this->pageNum_ == nullptr && this->requestFrom_ == nullptr && this->requestId_ == nullptr
        && this->requestTime_ == nullptr && this->resourceType_ == nullptr && this->result_ == nullptr && this->reviewLabels_ == nullptr && this->reviewRiskLevel_ == nullptr
        && this->reviewTime_ == nullptr && this->reviewUid_ == nullptr && this->reviewed_ == nullptr && this->riskLevel_ == nullptr && this->riskTips_ == nullptr
        && this->riskWords_ == nullptr && this->scanResult_ == nullptr && this->score_ == nullptr && this->sensitiveLevel_ == nullptr && this->serviceCode_ == nullptr
        && this->startTime_ == nullptr && this->suggestion_ == nullptr && this->taskId_ == nullptr && this->textLabels_ == nullptr && this->thumbnail_ == nullptr
        && this->timeStamp_ == nullptr && this->url_ == nullptr && this->voiceLabels_ == nullptr && this->voiceScanOpened_ == nullptr && this->voiceService_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline Items& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // apiLabels Field Functions 
        bool hasApiLabels() const { return this->apiLabels_ != nullptr;};
        void deleteApiLabels() { this->apiLabels_ = nullptr;};
        inline string getApiLabels() const { DARABONBA_PTR_GET_DEFAULT(apiLabels_, "") };
        inline Items& setApiLabels(string apiLabels) { DARABONBA_PTR_SET_VALUE(apiLabels_, apiLabels) };


        // apiRequestTime Field Functions 
        bool hasApiRequestTime() const { return this->apiRequestTime_ != nullptr;};
        void deleteApiRequestTime() { this->apiRequestTime_ = nullptr;};
        inline string getApiRequestTime() const { DARABONBA_PTR_GET_DEFAULT(apiRequestTime_, "") };
        inline Items& setApiRequestTime(string apiRequestTime) { DARABONBA_PTR_SET_VALUE(apiRequestTime_, apiRequestTime) };


        // apiRiskLevel Field Functions 
        bool hasApiRiskLevel() const { return this->apiRiskLevel_ != nullptr;};
        void deleteApiRiskLevel() { this->apiRiskLevel_ = nullptr;};
        inline string getApiRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(apiRiskLevel_, "") };
        inline Items& setApiRiskLevel(string apiRiskLevel) { DARABONBA_PTR_SET_VALUE(apiRiskLevel_, apiRiskLevel) };


        // apiService Field Functions 
        bool hasApiService() const { return this->apiService_ != nullptr;};
        void deleteApiService() { this->apiService_ = nullptr;};
        inline string getApiService() const { DARABONBA_PTR_GET_DEFAULT(apiService_, "") };
        inline Items& setApiService(string apiService) { DARABONBA_PTR_SET_VALUE(apiService_, apiService) };


        // apiTaskId Field Functions 
        bool hasApiTaskId() const { return this->apiTaskId_ != nullptr;};
        void deleteApiTaskId() { this->apiTaskId_ = nullptr;};
        inline string getApiTaskId() const { DARABONBA_PTR_GET_DEFAULT(apiTaskId_, "") };
        inline Items& setApiTaskId(string apiTaskId) { DARABONBA_PTR_SET_VALUE(apiTaskId_, apiTaskId) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // attackLevel Field Functions 
        bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
        void deleteAttackLevel() { this->attackLevel_ = nullptr;};
        inline string getAttackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
        inline Items& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline Items& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline Items& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // extFeedback Field Functions 
        bool hasExtFeedback() const { return this->extFeedback_ != nullptr;};
        void deleteExtFeedback() { this->extFeedback_ = nullptr;};
        inline string getExtFeedback() const { DARABONBA_PTR_GET_DEFAULT(extFeedback_, "") };
        inline Items& setExtFeedback(string extFeedback) { DARABONBA_PTR_SET_VALUE(extFeedback_, extFeedback) };


        // extra Field Functions 
        bool hasExtra() const { return this->extra_ != nullptr;};
        void deleteExtra() { this->extra_ = nullptr;};
        inline         const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
        Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
        inline Items& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
        inline Items& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


        // frameCount Field Functions 
        bool hasFrameCount() const { return this->frameCount_ != nullptr;};
        void deleteFrameCount() { this->frameCount_ = nullptr;};
        inline int64_t getFrameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0L) };
        inline Items& setFrameCount(int64_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // guardFileUrls Field Functions 
        bool hasGuardFileUrls() const { return this->guardFileUrls_ != nullptr;};
        void deleteGuardFileUrls() { this->guardFileUrls_ = nullptr;};
        inline const vector<string> & getGuardFileUrls() const { DARABONBA_PTR_GET_CONST(guardFileUrls_, vector<string>) };
        inline vector<string> getGuardFileUrls() { DARABONBA_PTR_GET(guardFileUrls_, vector<string>) };
        inline Items& setGuardFileUrls(const vector<string> & guardFileUrls) { DARABONBA_PTR_SET_VALUE(guardFileUrls_, guardFileUrls) };
        inline Items& setGuardFileUrls(vector<string> && guardFileUrls) { DARABONBA_PTR_SET_RVALUE(guardFileUrls_, guardFileUrls) };


        // guardImageUrls Field Functions 
        bool hasGuardImageUrls() const { return this->guardImageUrls_ != nullptr;};
        void deleteGuardImageUrls() { this->guardImageUrls_ = nullptr;};
        inline const vector<string> & getGuardImageUrls() const { DARABONBA_PTR_GET_CONST(guardImageUrls_, vector<string>) };
        inline vector<string> getGuardImageUrls() { DARABONBA_PTR_GET(guardImageUrls_, vector<string>) };
        inline Items& setGuardImageUrls(const vector<string> & guardImageUrls) { DARABONBA_PTR_SET_VALUE(guardImageUrls_, guardImageUrls) };
        inline Items& setGuardImageUrls(vector<string> && guardImageUrls) { DARABONBA_PTR_SET_RVALUE(guardImageUrls_, guardImageUrls) };


        // imageLabels Field Functions 
        bool hasImageLabels() const { return this->imageLabels_ != nullptr;};
        void deleteImageLabels() { this->imageLabels_ = nullptr;};
        inline const vector<Darabonba::Json> & getImageLabels() const { DARABONBA_PTR_GET_CONST(imageLabels_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getImageLabels() { DARABONBA_PTR_GET(imageLabels_, vector<Darabonba::Json>) };
        inline Items& setImageLabels(const vector<Darabonba::Json> & imageLabels) { DARABONBA_PTR_SET_VALUE(imageLabels_, imageLabels) };
        inline Items& setImageLabels(vector<Darabonba::Json> && imageLabels) { DARABONBA_PTR_SET_RVALUE(imageLabels_, imageLabels) };


        // imageService Field Functions 
        bool hasImageService() const { return this->imageService_ != nullptr;};
        void deleteImageService() { this->imageService_ = nullptr;};
        inline string getImageService() const { DARABONBA_PTR_GET_DEFAULT(imageService_, "") };
        inline Items& setImageService(string imageService) { DARABONBA_PTR_SET_VALUE(imageService_, imageService) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Items& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // imageUrls Field Functions 
        bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
        void deleteImageUrls() { this->imageUrls_ = nullptr;};
        inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
        inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
        inline Items& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
        inline Items& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline Items& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // liveId Field Functions 
        bool hasLiveId() const { return this->liveId_ != nullptr;};
        void deleteLiveId() { this->liveId_ = nullptr;};
        inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
        inline Items& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


        // maliciousFileLevel Field Functions 
        bool hasMaliciousFileLevel() const { return this->maliciousFileLevel_ != nullptr;};
        void deleteMaliciousFileLevel() { this->maliciousFileLevel_ = nullptr;};
        inline string getMaliciousFileLevel() const { DARABONBA_PTR_GET_DEFAULT(maliciousFileLevel_, "") };
        inline Items& setMaliciousFileLevel(string maliciousFileLevel) { DARABONBA_PTR_SET_VALUE(maliciousFileLevel_, maliciousFileLevel) };


        // maliciousUrlLevel Field Functions 
        bool hasMaliciousUrlLevel() const { return this->maliciousUrlLevel_ != nullptr;};
        void deleteMaliciousUrlLevel() { this->maliciousUrlLevel_ = nullptr;};
        inline string getMaliciousUrlLevel() const { DARABONBA_PTR_GET_DEFAULT(maliciousUrlLevel_, "") };
        inline Items& setMaliciousUrlLevel(string maliciousUrlLevel) { DARABONBA_PTR_SET_VALUE(maliciousUrlLevel_, maliciousUrlLevel) };


        // manualOnly Field Functions 
        bool hasManualOnly() const { return this->manualOnly_ != nullptr;};
        void deleteManualOnly() { this->manualOnly_ = nullptr;};
        inline bool getManualOnly() const { DARABONBA_PTR_GET_DEFAULT(manualOnly_, false) };
        inline Items& setManualOnly(bool manualOnly) { DARABONBA_PTR_SET_VALUE(manualOnly_, manualOnly) };


        // noLabels Field Functions 
        bool hasNoLabels() const { return this->noLabels_ != nullptr;};
        void deleteNoLabels() { this->noLabels_ = nullptr;};
        inline const vector<string> & getNoLabels() const { DARABONBA_PTR_GET_CONST(noLabels_, vector<string>) };
        inline vector<string> getNoLabels() { DARABONBA_PTR_GET(noLabels_, vector<string>) };
        inline Items& setNoLabels(const vector<string> & noLabels) { DARABONBA_PTR_SET_VALUE(noLabels_, noLabels) };
        inline Items& setNoLabels(vector<string> && noLabels) { DARABONBA_PTR_SET_RVALUE(noLabels_, noLabels) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
        inline Items& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // pageNum Field Functions 
        bool hasPageNum() const { return this->pageNum_ != nullptr;};
        void deletePageNum() { this->pageNum_ = nullptr;};
        inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
        inline Items& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


        // requestFrom Field Functions 
        bool hasRequestFrom() const { return this->requestFrom_ != nullptr;};
        void deleteRequestFrom() { this->requestFrom_ = nullptr;};
        inline string getRequestFrom() const { DARABONBA_PTR_GET_DEFAULT(requestFrom_, "") };
        inline Items& setRequestFrom(string requestFrom) { DARABONBA_PTR_SET_VALUE(requestFrom_, requestFrom) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Items& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // requestTime Field Functions 
        bool hasRequestTime() const { return this->requestTime_ != nullptr;};
        void deleteRequestTime() { this->requestTime_ = nullptr;};
        inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
        inline Items& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Items::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Items::Result>) };
        inline vector<Items::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Items::Result>) };
        inline Items& setResult(const vector<Items::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Items& setResult(vector<Items::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // reviewLabels Field Functions 
        bool hasReviewLabels() const { return this->reviewLabels_ != nullptr;};
        void deleteReviewLabels() { this->reviewLabels_ = nullptr;};
        inline string getReviewLabels() const { DARABONBA_PTR_GET_DEFAULT(reviewLabels_, "") };
        inline Items& setReviewLabels(string reviewLabels) { DARABONBA_PTR_SET_VALUE(reviewLabels_, reviewLabels) };


        // reviewRiskLevel Field Functions 
        bool hasReviewRiskLevel() const { return this->reviewRiskLevel_ != nullptr;};
        void deleteReviewRiskLevel() { this->reviewRiskLevel_ = nullptr;};
        inline string getReviewRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(reviewRiskLevel_, "") };
        inline Items& setReviewRiskLevel(string reviewRiskLevel) { DARABONBA_PTR_SET_VALUE(reviewRiskLevel_, reviewRiskLevel) };


        // reviewTime Field Functions 
        bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
        void deleteReviewTime() { this->reviewTime_ = nullptr;};
        inline string getReviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
        inline Items& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


        // reviewUid Field Functions 
        bool hasReviewUid() const { return this->reviewUid_ != nullptr;};
        void deleteReviewUid() { this->reviewUid_ = nullptr;};
        inline string getReviewUid() const { DARABONBA_PTR_GET_DEFAULT(reviewUid_, "") };
        inline Items& setReviewUid(string reviewUid) { DARABONBA_PTR_SET_VALUE(reviewUid_, reviewUid) };


        // reviewed Field Functions 
        bool hasReviewed() const { return this->reviewed_ != nullptr;};
        void deleteReviewed() { this->reviewed_ = nullptr;};
        inline bool getReviewed() const { DARABONBA_PTR_GET_DEFAULT(reviewed_, false) };
        inline Items& setReviewed(bool reviewed) { DARABONBA_PTR_SET_VALUE(reviewed_, reviewed) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // riskTips Field Functions 
        bool hasRiskTips() const { return this->riskTips_ != nullptr;};
        void deleteRiskTips() { this->riskTips_ = nullptr;};
        inline string getRiskTips() const { DARABONBA_PTR_GET_DEFAULT(riskTips_, "") };
        inline Items& setRiskTips(string riskTips) { DARABONBA_PTR_SET_VALUE(riskTips_, riskTips) };


        // riskWords Field Functions 
        bool hasRiskWords() const { return this->riskWords_ != nullptr;};
        void deleteRiskWords() { this->riskWords_ = nullptr;};
        inline string getRiskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
        inline Items& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


        // scanResult Field Functions 
        bool hasScanResult() const { return this->scanResult_ != nullptr;};
        void deleteScanResult() { this->scanResult_ = nullptr;};
        inline string getScanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
        inline Items& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Items& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // sensitiveLevel Field Functions 
        bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
        void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
        inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
        inline Items& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


        // serviceCode Field Functions 
        bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
        void deleteServiceCode() { this->serviceCode_ = nullptr;};
        inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
        inline Items& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Items& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Items& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // textLabels Field Functions 
        bool hasTextLabels() const { return this->textLabels_ != nullptr;};
        void deleteTextLabels() { this->textLabels_ = nullptr;};
        inline const vector<Darabonba::Json> & getTextLabels() const { DARABONBA_PTR_GET_CONST(textLabels_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getTextLabels() { DARABONBA_PTR_GET(textLabels_, vector<Darabonba::Json>) };
        inline Items& setTextLabels(const vector<Darabonba::Json> & textLabels) { DARABONBA_PTR_SET_VALUE(textLabels_, textLabels) };
        inline Items& setTextLabels(vector<Darabonba::Json> && textLabels) { DARABONBA_PTR_SET_RVALUE(textLabels_, textLabels) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline Items& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline Items& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Items& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // voiceLabels Field Functions 
        bool hasVoiceLabels() const { return this->voiceLabels_ != nullptr;};
        void deleteVoiceLabels() { this->voiceLabels_ = nullptr;};
        inline const vector<Darabonba::Json> & getVoiceLabels() const { DARABONBA_PTR_GET_CONST(voiceLabels_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getVoiceLabels() { DARABONBA_PTR_GET(voiceLabels_, vector<Darabonba::Json>) };
        inline Items& setVoiceLabels(const vector<Darabonba::Json> & voiceLabels) { DARABONBA_PTR_SET_VALUE(voiceLabels_, voiceLabels) };
        inline Items& setVoiceLabels(vector<Darabonba::Json> && voiceLabels) { DARABONBA_PTR_SET_RVALUE(voiceLabels_, voiceLabels) };


        // voiceScanOpened Field Functions 
        bool hasVoiceScanOpened() const { return this->voiceScanOpened_ != nullptr;};
        void deleteVoiceScanOpened() { this->voiceScanOpened_ = nullptr;};
        inline bool getVoiceScanOpened() const { DARABONBA_PTR_GET_DEFAULT(voiceScanOpened_, false) };
        inline Items& setVoiceScanOpened(bool voiceScanOpened) { DARABONBA_PTR_SET_VALUE(voiceScanOpened_, voiceScanOpened) };


        // voiceService Field Functions 
        bool hasVoiceService() const { return this->voiceService_ != nullptr;};
        void deleteVoiceService() { this->voiceService_ = nullptr;};
        inline string getVoiceService() const { DARABONBA_PTR_GET_DEFAULT(voiceService_, "") };
        inline Items& setVoiceService(string voiceService) { DARABONBA_PTR_SET_VALUE(voiceService_, voiceService) };


      protected:
        shared_ptr<string> accountId_ {};
        // Automated review labels.
        shared_ptr<string> apiLabels_ {};
        // Machine review time.
        shared_ptr<string> apiRequestTime_ {};
        // Automated review risk level.
        shared_ptr<string> apiRiskLevel_ {};
        // Automated review service
        shared_ptr<string> apiService_ {};
        // Automated review task ID.
        shared_ptr<string> apiTaskId_ {};
        shared_ptr<string> appId_ {};
        // Attack level, returned based on the set high and low risk scores. The return values include:
        // 
        // - high: High risk
        // 
        // - medium: Medium risk
        // 
        // - low: Low risk
        // 
        // - none: No risk detected
        shared_ptr<string> attackLevel_ {};
        // Content.
        shared_ptr<string> content_ {};
        // Data Id
        shared_ptr<string> dataId_ {};
        // Segment end time (in seconds).
        shared_ptr<string> endTime_ {};
        // Feedback information.
        shared_ptr<string> extFeedback_ {};
        // Additional parameters.
        Darabonba::Json extra_ {};
        // Frame count.
        shared_ptr<int64_t> frameCount_ {};
        // Creation time.
        shared_ptr<string> gmtCreate_ {};
        // Multimodal file URLs.
        shared_ptr<vector<string>> guardFileUrls_ {};
        // Multimodal image URLs.
        shared_ptr<vector<string>> guardImageUrls_ {};
        // Image labels.
        shared_ptr<vector<Darabonba::Json>> imageLabels_ {};
        // Image service.
        shared_ptr<string> imageService_ {};
        // URL
        shared_ptr<string> imageUrl_ {};
        shared_ptr<vector<string>> imageUrls_ {};
        // Labels.
        shared_ptr<string> labels_ {};
        shared_ptr<string> liveId_ {};
        // Malicious file risk level.
        shared_ptr<string> maliciousFileLevel_ {};
        // Malicious URL risk level.
        shared_ptr<string> maliciousUrlLevel_ {};
        // Whether it is a pure manual review.
        shared_ptr<bool> manualOnly_ {};
        // No labels
        shared_ptr<vector<string>> noLabels_ {};
        // Frame offset value.
        shared_ptr<int64_t> offset_ {};
        // Page number.
        shared_ptr<int64_t> pageNum_ {};
        // Request source.
        shared_ptr<string> requestFrom_ {};
        // Request ID.
        shared_ptr<string> requestId_ {};
        // Request time.
        shared_ptr<string> requestTime_ {};
        // Resource type.
        shared_ptr<string> resourceType_ {};
        // Return collection.
        shared_ptr<vector<Items::Result>> result_ {};
        // Review labels.
        shared_ptr<string> reviewLabels_ {};
        // Review status.
        shared_ptr<string> reviewRiskLevel_ {};
        // Review time.
        shared_ptr<string> reviewTime_ {};
        // Reviewer.
        shared_ptr<string> reviewUid_ {};
        // Whether it has been reviewed.
        shared_ptr<bool> reviewed_ {};
        // Risk level, returned based on the set high and low risk scores. The return values include:
        // 
        // - high: High risk
        // 
        // - medium: Medium risk
        // 
        // - low: Low risk
        // 
        // - none: No risk detected
        shared_ptr<string> riskLevel_ {};
        // Details of the detected risk.
        shared_ptr<string> riskTips_ {};
        // Keywords of the detected risk.
        shared_ptr<string> riskWords_ {};
        // Details of the result.
        shared_ptr<string> scanResult_ {};
        // Score.
        shared_ptr<float> score_ {};
        // Sensitive level, returned based on the set high and low risk scores. The return values include:
        // - **S1**: Indicates low sensitivity.
        // - **S2**: Indicates medium sensitivity.
        // - **S3**: Indicates high sensitivity.
        // - **S4**: Indicates very high sensitivity.
        // - **S0**: Indicates no sensitivity.
        shared_ptr<string> sensitiveLevel_ {};
        // Service code.
        shared_ptr<string> serviceCode_ {};
        // Segment start time (in seconds).
        shared_ptr<string> startTime_ {};
        // Suggestion.
        shared_ptr<string> suggestion_ {};
        // Task ID.
        shared_ptr<string> taskId_ {};
        // Text labels.
        shared_ptr<vector<Darabonba::Json>> textLabels_ {};
        // Thumbnail URL.
        shared_ptr<string> thumbnail_ {};
        // Timestamp.
        shared_ptr<string> timeStamp_ {};
        // Task URL
        shared_ptr<string> url_ {};
        // Voice labels.
        shared_ptr<vector<Darabonba::Json>> voiceLabels_ {};
        // Whether audio detection is enabled.
        shared_ptr<bool> voiceScanOpened_ {};
        // Voice service.
        shared_ptr<string> voiceService_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Current page.
      shared_ptr<int32_t> currentPage_ {};
      // Data for the current page.
      shared_ptr<vector<Data::Items>> items_ {};
      // Number of items per page.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of records.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetScanResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetScanResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetScanResultResponseBody::Data) };
    inline GetScanResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetScanResultResponseBody::Data) };
    inline GetScanResultResponseBody& setData(const GetScanResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetScanResultResponseBody& setData(GetScanResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetScanResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetScanResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScanResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetScanResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code, consistent with HTTP status.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<GetScanResultResponseBody::Data> data_ {};
    // HTTP status code
    shared_ptr<int32_t> httpStatusCode_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
