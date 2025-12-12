// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataDialogues.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoList.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataManualScoreInfoList.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewHistoryList.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewTypeIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioScheme, audioScheme_);
      DARABONBA_PTR_TO_JSON(AudioURL, audioURL_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileMergeName, fileMergeName_);
      DARABONBA_PTR_TO_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
      DARABONBA_PTR_TO_JSON(ManualScoreInfoList, manualScoreInfoList_);
      DARABONBA_PTR_TO_JSON(ReviewHistoryList, reviewHistoryList_);
      DARABONBA_PTR_TO_JSON(ReviewTypeIdList, reviewTypeIdList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalScore, totalScore_);
      DARABONBA_PTR_TO_JSON(Vid, vid_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioScheme, audioScheme_);
      DARABONBA_PTR_FROM_JSON(AudioURL, audioURL_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileMergeName, fileMergeName_);
      DARABONBA_PTR_FROM_JSON(HitRuleReviewInfoList, hitRuleReviewInfoList_);
      DARABONBA_PTR_FROM_JSON(ManualScoreInfoList, manualScoreInfoList_);
      DARABONBA_PTR_FROM_JSON(ReviewHistoryList, reviewHistoryList_);
      DARABONBA_PTR_FROM_JSON(ReviewTypeIdList, reviewTypeIdList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalScore, totalScore_);
      DARABONBA_PTR_FROM_JSON(Vid, vid_);
    };
    GetResultToReviewResponseBodyData() = default ;
    GetResultToReviewResponseBodyData(const GetResultToReviewResponseBodyData &) = default ;
    GetResultToReviewResponseBodyData(GetResultToReviewResponseBodyData &&) = default ;
    GetResultToReviewResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyData() = default ;
    GetResultToReviewResponseBodyData& operator=(const GetResultToReviewResponseBodyData &) = default ;
    GetResultToReviewResponseBodyData& operator=(GetResultToReviewResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioScheme_ == nullptr
        && return this->audioURL_ == nullptr && return this->comments_ == nullptr && return this->dialogues_ == nullptr && return this->fileId_ == nullptr && return this->fileMergeName_ == nullptr
        && return this->hitRuleReviewInfoList_ == nullptr && return this->manualScoreInfoList_ == nullptr && return this->reviewHistoryList_ == nullptr && return this->reviewTypeIdList_ == nullptr && return this->status_ == nullptr
        && return this->totalScore_ == nullptr && return this->vid_ == nullptr; };
    // audioScheme Field Functions 
    bool hasAudioScheme() const { return this->audioScheme_ != nullptr;};
    void deleteAudioScheme() { this->audioScheme_ = nullptr;};
    inline string audioScheme() const { DARABONBA_PTR_GET_DEFAULT(audioScheme_, "") };
    inline GetResultToReviewResponseBodyData& setAudioScheme(string audioScheme) { DARABONBA_PTR_SET_VALUE(audioScheme_, audioScheme) };


    // audioURL Field Functions 
    bool hasAudioURL() const { return this->audioURL_ != nullptr;};
    void deleteAudioURL() { this->audioURL_ = nullptr;};
    inline string audioURL() const { DARABONBA_PTR_GET_DEFAULT(audioURL_, "") };
    inline GetResultToReviewResponseBodyData& setAudioURL(string audioURL) { DARABONBA_PTR_SET_VALUE(audioURL_, audioURL) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetResultToReviewResponseBodyData& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataDialogues & dialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, Models::GetResultToReviewResponseBodyDataDialogues) };
    inline Models::GetResultToReviewResponseBodyDataDialogues dialogues() { DARABONBA_PTR_GET(dialogues_, Models::GetResultToReviewResponseBodyDataDialogues) };
    inline GetResultToReviewResponseBodyData& setDialogues(const Models::GetResultToReviewResponseBodyDataDialogues & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline GetResultToReviewResponseBodyData& setDialogues(Models::GetResultToReviewResponseBodyDataDialogues && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline GetResultToReviewResponseBodyData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileMergeName Field Functions 
    bool hasFileMergeName() const { return this->fileMergeName_ != nullptr;};
    void deleteFileMergeName() { this->fileMergeName_ = nullptr;};
    inline string fileMergeName() const { DARABONBA_PTR_GET_DEFAULT(fileMergeName_, "") };
    inline GetResultToReviewResponseBodyData& setFileMergeName(string fileMergeName) { DARABONBA_PTR_SET_VALUE(fileMergeName_, fileMergeName) };


    // hitRuleReviewInfoList Field Functions 
    bool hasHitRuleReviewInfoList() const { return this->hitRuleReviewInfoList_ != nullptr;};
    void deleteHitRuleReviewInfoList() { this->hitRuleReviewInfoList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList & hitRuleReviewInfoList() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfoList_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList hitRuleReviewInfoList() { DARABONBA_PTR_GET(hitRuleReviewInfoList_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList) };
    inline GetResultToReviewResponseBodyData& setHitRuleReviewInfoList(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList & hitRuleReviewInfoList) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };
    inline GetResultToReviewResponseBodyData& setHitRuleReviewInfoList(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList && hitRuleReviewInfoList) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfoList_, hitRuleReviewInfoList) };


    // manualScoreInfoList Field Functions 
    bool hasManualScoreInfoList() const { return this->manualScoreInfoList_ != nullptr;};
    void deleteManualScoreInfoList() { this->manualScoreInfoList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataManualScoreInfoList & manualScoreInfoList() const { DARABONBA_PTR_GET_CONST(manualScoreInfoList_, Models::GetResultToReviewResponseBodyDataManualScoreInfoList) };
    inline Models::GetResultToReviewResponseBodyDataManualScoreInfoList manualScoreInfoList() { DARABONBA_PTR_GET(manualScoreInfoList_, Models::GetResultToReviewResponseBodyDataManualScoreInfoList) };
    inline GetResultToReviewResponseBodyData& setManualScoreInfoList(const Models::GetResultToReviewResponseBodyDataManualScoreInfoList & manualScoreInfoList) { DARABONBA_PTR_SET_VALUE(manualScoreInfoList_, manualScoreInfoList) };
    inline GetResultToReviewResponseBodyData& setManualScoreInfoList(Models::GetResultToReviewResponseBodyDataManualScoreInfoList && manualScoreInfoList) { DARABONBA_PTR_SET_RVALUE(manualScoreInfoList_, manualScoreInfoList) };


    // reviewHistoryList Field Functions 
    bool hasReviewHistoryList() const { return this->reviewHistoryList_ != nullptr;};
    void deleteReviewHistoryList() { this->reviewHistoryList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataReviewHistoryList & reviewHistoryList() const { DARABONBA_PTR_GET_CONST(reviewHistoryList_, Models::GetResultToReviewResponseBodyDataReviewHistoryList) };
    inline Models::GetResultToReviewResponseBodyDataReviewHistoryList reviewHistoryList() { DARABONBA_PTR_GET(reviewHistoryList_, Models::GetResultToReviewResponseBodyDataReviewHistoryList) };
    inline GetResultToReviewResponseBodyData& setReviewHistoryList(const Models::GetResultToReviewResponseBodyDataReviewHistoryList & reviewHistoryList) { DARABONBA_PTR_SET_VALUE(reviewHistoryList_, reviewHistoryList) };
    inline GetResultToReviewResponseBodyData& setReviewHistoryList(Models::GetResultToReviewResponseBodyDataReviewHistoryList && reviewHistoryList) { DARABONBA_PTR_SET_RVALUE(reviewHistoryList_, reviewHistoryList) };


    // reviewTypeIdList Field Functions 
    bool hasReviewTypeIdList() const { return this->reviewTypeIdList_ != nullptr;};
    void deleteReviewTypeIdList() { this->reviewTypeIdList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataReviewTypeIdList & reviewTypeIdList() const { DARABONBA_PTR_GET_CONST(reviewTypeIdList_, Models::GetResultToReviewResponseBodyDataReviewTypeIdList) };
    inline Models::GetResultToReviewResponseBodyDataReviewTypeIdList reviewTypeIdList() { DARABONBA_PTR_GET(reviewTypeIdList_, Models::GetResultToReviewResponseBodyDataReviewTypeIdList) };
    inline GetResultToReviewResponseBodyData& setReviewTypeIdList(const Models::GetResultToReviewResponseBodyDataReviewTypeIdList & reviewTypeIdList) { DARABONBA_PTR_SET_VALUE(reviewTypeIdList_, reviewTypeIdList) };
    inline GetResultToReviewResponseBodyData& setReviewTypeIdList(Models::GetResultToReviewResponseBodyDataReviewTypeIdList && reviewTypeIdList) { DARABONBA_PTR_SET_RVALUE(reviewTypeIdList_, reviewTypeIdList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetResultToReviewResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline int32_t totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, 0) };
    inline GetResultToReviewResponseBodyData& setTotalScore(int32_t totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


    // vid Field Functions 
    bool hasVid() const { return this->vid_ != nullptr;};
    void deleteVid() { this->vid_ = nullptr;};
    inline string vid() const { DARABONBA_PTR_GET_DEFAULT(vid_, "") };
    inline GetResultToReviewResponseBodyData& setVid(string vid) { DARABONBA_PTR_SET_VALUE(vid_, vid) };


  protected:
    std::shared_ptr<string> audioScheme_ = nullptr;
    std::shared_ptr<string> audioURL_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataDialogues> dialogues_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileMergeName_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoList> hitRuleReviewInfoList_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataManualScoreInfoList> manualScoreInfoList_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataReviewHistoryList> reviewHistoryList_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataReviewTypeIdList> reviewTypeIdList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> totalScore_ = nullptr;
    std::shared_ptr<string> vid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
