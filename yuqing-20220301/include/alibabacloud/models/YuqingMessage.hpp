// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_YUQINGMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_YUQINGMESSAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/YuqingFinanceEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class YuqingMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const YuqingMessage& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(appScore, appScore_);
      DARABONBA_PTR_TO_JSON(appStoreName, appStoreName_);
      DARABONBA_PTR_TO_JSON(atAuthorNames, atAuthorNames_);
      DARABONBA_PTR_TO_JSON(audioCount, audioCount_);
      DARABONBA_PTR_TO_JSON(authorAvatarUrl, authorAvatarUrl_);
      DARABONBA_PTR_TO_JSON(authorFollowersCount, authorFollowersCount_);
      DARABONBA_PTR_TO_JSON(authorFriendsCount, authorFriendsCount_);
      DARABONBA_PTR_TO_JSON(authorGender, authorGender_);
      DARABONBA_PTR_TO_JSON(authorId, authorId_);
      DARABONBA_PTR_TO_JSON(authorLikesCount, authorLikesCount_);
      DARABONBA_PTR_TO_JSON(authorName, authorName_);
      DARABONBA_PTR_TO_JSON(authorProfileUrl, authorProfileUrl_);
      DARABONBA_PTR_TO_JSON(authorStatusesCount, authorStatusesCount_);
      DARABONBA_PTR_TO_JSON(authorVerified, authorVerified_);
      DARABONBA_PTR_TO_JSON(authorVerifyType, authorVerifyType_);
      DARABONBA_PTR_TO_JSON(contentAudioText, contentAudioText_);
      DARABONBA_PTR_TO_JSON(contentAudioUrls, contentAudioUrls_);
      DARABONBA_PTR_TO_JSON(contentImageText, contentImageText_);
      DARABONBA_PTR_TO_JSON(contentImageUrls, contentImageUrls_);
      DARABONBA_PTR_TO_JSON(contentLang, contentLang_);
      DARABONBA_PTR_TO_JSON(contentLen, contentLen_);
      DARABONBA_PTR_TO_JSON(contentVideoText, contentVideoText_);
      DARABONBA_PTR_TO_JSON(contentVideoUrls, contentVideoUrls_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(docAnswersCount, docAnswersCount_);
      DARABONBA_PTR_TO_JSON(docAreas, docAreas_);
      DARABONBA_PTR_TO_JSON(docCoinCount, docCoinCount_);
      DARABONBA_PTR_TO_JSON(docCommentsCount, docCommentsCount_);
      DARABONBA_PTR_TO_JSON(docContent, docContent_);
      DARABONBA_PTR_TO_JSON(docContentBrief, docContentBrief_);
      DARABONBA_PTR_TO_JSON(docContentSign, docContentSign_);
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(docLikesCount, docLikesCount_);
      DARABONBA_PTR_TO_JSON(docPlayCount, docPlayCount_);
      DARABONBA_PTR_TO_JSON(docReadingCount, docReadingCount_);
      DARABONBA_PTR_TO_JSON(docReadsCount, docReadsCount_);
      DARABONBA_PTR_TO_JSON(docRepostsCount, docRepostsCount_);
      DARABONBA_PTR_TO_JSON(docReprintName, docReprintName_);
      DARABONBA_PTR_TO_JSON(docSelfContentSign, docSelfContentSign_);
      DARABONBA_PTR_TO_JSON(docTitle, docTitle_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(emotionScore, emotionScore_);
      DARABONBA_PTR_TO_JSON(emotionType, emotionType_);
      DARABONBA_PTR_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(finEventCount, finEventCount_);
      DARABONBA_PTR_TO_JSON(financeEventList, financeEventList_);
      DARABONBA_PTR_TO_JSON(highlightKeywords, highlightKeywords_);
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(influenceScore, influenceScore_);
      DARABONBA_PTR_TO_JSON(mediaHosts, mediaHosts_);
      DARABONBA_PTR_TO_JSON(mediaInfluenceLevel, mediaInfluenceLevel_);
      DARABONBA_PTR_TO_JSON(mediaName, mediaName_);
      DARABONBA_PTR_TO_JSON(mediaPropagationLevel, mediaPropagationLevel_);
      DARABONBA_PTR_TO_JSON(mediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(parentDocId, parentDocId_);
      DARABONBA_PTR_TO_JSON(propagationScore, propagationScore_);
      DARABONBA_PTR_TO_JSON(publishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(relevanceScore, relevanceScore_);
      DARABONBA_PTR_TO_JSON(reportMaterialTags, reportMaterialTags_);
      DARABONBA_PTR_TO_JSON(repostList, repostList_);
      DARABONBA_PTR_TO_JSON(similarNumber, similarNumber_);
      DARABONBA_PTR_TO_JSON(topics, topics_);
      DARABONBA_PTR_TO_JSON(videoCount, videoCount_);
      DARABONBA_PTR_TO_JSON(weiboCommentId, weiboCommentId_);
      DARABONBA_PTR_TO_JSON(weiboMid, weiboMid_);
    };
    friend void from_json(const Darabonba::Json& j, YuqingMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(appScore, appScore_);
      DARABONBA_PTR_FROM_JSON(appStoreName, appStoreName_);
      DARABONBA_PTR_FROM_JSON(atAuthorNames, atAuthorNames_);
      DARABONBA_PTR_FROM_JSON(audioCount, audioCount_);
      DARABONBA_PTR_FROM_JSON(authorAvatarUrl, authorAvatarUrl_);
      DARABONBA_PTR_FROM_JSON(authorFollowersCount, authorFollowersCount_);
      DARABONBA_PTR_FROM_JSON(authorFriendsCount, authorFriendsCount_);
      DARABONBA_PTR_FROM_JSON(authorGender, authorGender_);
      DARABONBA_PTR_FROM_JSON(authorId, authorId_);
      DARABONBA_PTR_FROM_JSON(authorLikesCount, authorLikesCount_);
      DARABONBA_PTR_FROM_JSON(authorName, authorName_);
      DARABONBA_PTR_FROM_JSON(authorProfileUrl, authorProfileUrl_);
      DARABONBA_PTR_FROM_JSON(authorStatusesCount, authorStatusesCount_);
      DARABONBA_PTR_FROM_JSON(authorVerified, authorVerified_);
      DARABONBA_PTR_FROM_JSON(authorVerifyType, authorVerifyType_);
      DARABONBA_PTR_FROM_JSON(contentAudioText, contentAudioText_);
      DARABONBA_PTR_FROM_JSON(contentAudioUrls, contentAudioUrls_);
      DARABONBA_PTR_FROM_JSON(contentImageText, contentImageText_);
      DARABONBA_PTR_FROM_JSON(contentImageUrls, contentImageUrls_);
      DARABONBA_PTR_FROM_JSON(contentLang, contentLang_);
      DARABONBA_PTR_FROM_JSON(contentLen, contentLen_);
      DARABONBA_PTR_FROM_JSON(contentVideoText, contentVideoText_);
      DARABONBA_PTR_FROM_JSON(contentVideoUrls, contentVideoUrls_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(docAnswersCount, docAnswersCount_);
      DARABONBA_PTR_FROM_JSON(docAreas, docAreas_);
      DARABONBA_PTR_FROM_JSON(docCoinCount, docCoinCount_);
      DARABONBA_PTR_FROM_JSON(docCommentsCount, docCommentsCount_);
      DARABONBA_PTR_FROM_JSON(docContent, docContent_);
      DARABONBA_PTR_FROM_JSON(docContentBrief, docContentBrief_);
      DARABONBA_PTR_FROM_JSON(docContentSign, docContentSign_);
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(docLikesCount, docLikesCount_);
      DARABONBA_PTR_FROM_JSON(docPlayCount, docPlayCount_);
      DARABONBA_PTR_FROM_JSON(docReadingCount, docReadingCount_);
      DARABONBA_PTR_FROM_JSON(docReadsCount, docReadsCount_);
      DARABONBA_PTR_FROM_JSON(docRepostsCount, docRepostsCount_);
      DARABONBA_PTR_FROM_JSON(docReprintName, docReprintName_);
      DARABONBA_PTR_FROM_JSON(docSelfContentSign, docSelfContentSign_);
      DARABONBA_PTR_FROM_JSON(docTitle, docTitle_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(emotionScore, emotionScore_);
      DARABONBA_PTR_FROM_JSON(emotionType, emotionType_);
      DARABONBA_PTR_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(finEventCount, finEventCount_);
      DARABONBA_PTR_FROM_JSON(financeEventList, financeEventList_);
      DARABONBA_PTR_FROM_JSON(highlightKeywords, highlightKeywords_);
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(influenceScore, influenceScore_);
      DARABONBA_PTR_FROM_JSON(mediaHosts, mediaHosts_);
      DARABONBA_PTR_FROM_JSON(mediaInfluenceLevel, mediaInfluenceLevel_);
      DARABONBA_PTR_FROM_JSON(mediaName, mediaName_);
      DARABONBA_PTR_FROM_JSON(mediaPropagationLevel, mediaPropagationLevel_);
      DARABONBA_PTR_FROM_JSON(mediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(parentDocId, parentDocId_);
      DARABONBA_PTR_FROM_JSON(propagationScore, propagationScore_);
      DARABONBA_PTR_FROM_JSON(publishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(relevanceScore, relevanceScore_);
      DARABONBA_PTR_FROM_JSON(reportMaterialTags, reportMaterialTags_);
      DARABONBA_PTR_FROM_JSON(repostList, repostList_);
      DARABONBA_PTR_FROM_JSON(similarNumber, similarNumber_);
      DARABONBA_PTR_FROM_JSON(topics, topics_);
      DARABONBA_PTR_FROM_JSON(videoCount, videoCount_);
      DARABONBA_PTR_FROM_JSON(weiboCommentId, weiboCommentId_);
      DARABONBA_PTR_FROM_JSON(weiboMid, weiboMid_);
    };
    YuqingMessage() = default ;
    YuqingMessage(const YuqingMessage &) = default ;
    YuqingMessage(YuqingMessage &&) = default ;
    YuqingMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~YuqingMessage() = default ;
    YuqingMessage& operator=(const YuqingMessage &) = default ;
    YuqingMessage& operator=(YuqingMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appScore_ == nullptr && return this->appStoreName_ == nullptr && return this->atAuthorNames_ == nullptr && return this->audioCount_ == nullptr && return this->authorAvatarUrl_ == nullptr
        && return this->authorFollowersCount_ == nullptr && return this->authorFriendsCount_ == nullptr && return this->authorGender_ == nullptr && return this->authorId_ == nullptr && return this->authorLikesCount_ == nullptr
        && return this->authorName_ == nullptr && return this->authorProfileUrl_ == nullptr && return this->authorStatusesCount_ == nullptr && return this->authorVerified_ == nullptr && return this->authorVerifyType_ == nullptr
        && return this->contentAudioText_ == nullptr && return this->contentAudioUrls_ == nullptr && return this->contentImageText_ == nullptr && return this->contentImageUrls_ == nullptr && return this->contentLang_ == nullptr
        && return this->contentLen_ == nullptr && return this->contentVideoText_ == nullptr && return this->contentVideoUrls_ == nullptr && return this->createTime_ == nullptr && return this->docAnswersCount_ == nullptr
        && return this->docAreas_ == nullptr && return this->docCoinCount_ == nullptr && return this->docCommentsCount_ == nullptr && return this->docContent_ == nullptr && return this->docContentBrief_ == nullptr
        && return this->docContentSign_ == nullptr && return this->docId_ == nullptr && return this->docLikesCount_ == nullptr && return this->docPlayCount_ == nullptr && return this->docReadingCount_ == nullptr
        && return this->docReadsCount_ == nullptr && return this->docRepostsCount_ == nullptr && return this->docReprintName_ == nullptr && return this->docSelfContentSign_ == nullptr && return this->docTitle_ == nullptr
        && return this->docUrl_ == nullptr && return this->emotionScore_ == nullptr && return this->emotionType_ == nullptr && return this->extInfo_ == nullptr && return this->finEventCount_ == nullptr
        && return this->financeEventList_ == nullptr && return this->highlightKeywords_ == nullptr && return this->imageCount_ == nullptr && return this->influenceScore_ == nullptr && return this->mediaHosts_ == nullptr
        && return this->mediaInfluenceLevel_ == nullptr && return this->mediaName_ == nullptr && return this->mediaPropagationLevel_ == nullptr && return this->mediaType_ == nullptr && return this->messageType_ == nullptr
        && return this->parentDocId_ == nullptr && return this->propagationScore_ == nullptr && return this->publishTime_ == nullptr && return this->relevanceScore_ == nullptr && return this->reportMaterialTags_ == nullptr
        && return this->repostList_ == nullptr && return this->similarNumber_ == nullptr && return this->topics_ == nullptr && return this->videoCount_ == nullptr && return this->weiboCommentId_ == nullptr
        && return this->weiboMid_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline YuqingMessage& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appScore Field Functions 
    bool hasAppScore() const { return this->appScore_ != nullptr;};
    void deleteAppScore() { this->appScore_ = nullptr;};
    inline int64_t appScore() const { DARABONBA_PTR_GET_DEFAULT(appScore_, 0L) };
    inline YuqingMessage& setAppScore(int64_t appScore) { DARABONBA_PTR_SET_VALUE(appScore_, appScore) };


    // appStoreName Field Functions 
    bool hasAppStoreName() const { return this->appStoreName_ != nullptr;};
    void deleteAppStoreName() { this->appStoreName_ = nullptr;};
    inline string appStoreName() const { DARABONBA_PTR_GET_DEFAULT(appStoreName_, "") };
    inline YuqingMessage& setAppStoreName(string appStoreName) { DARABONBA_PTR_SET_VALUE(appStoreName_, appStoreName) };


    // atAuthorNames Field Functions 
    bool hasAtAuthorNames() const { return this->atAuthorNames_ != nullptr;};
    void deleteAtAuthorNames() { this->atAuthorNames_ = nullptr;};
    inline const vector<string> & atAuthorNames() const { DARABONBA_PTR_GET_CONST(atAuthorNames_, vector<string>) };
    inline vector<string> atAuthorNames() { DARABONBA_PTR_GET(atAuthorNames_, vector<string>) };
    inline YuqingMessage& setAtAuthorNames(const vector<string> & atAuthorNames) { DARABONBA_PTR_SET_VALUE(atAuthorNames_, atAuthorNames) };
    inline YuqingMessage& setAtAuthorNames(vector<string> && atAuthorNames) { DARABONBA_PTR_SET_RVALUE(atAuthorNames_, atAuthorNames) };


    // audioCount Field Functions 
    bool hasAudioCount() const { return this->audioCount_ != nullptr;};
    void deleteAudioCount() { this->audioCount_ = nullptr;};
    inline int32_t audioCount() const { DARABONBA_PTR_GET_DEFAULT(audioCount_, 0) };
    inline YuqingMessage& setAudioCount(int32_t audioCount) { DARABONBA_PTR_SET_VALUE(audioCount_, audioCount) };


    // authorAvatarUrl Field Functions 
    bool hasAuthorAvatarUrl() const { return this->authorAvatarUrl_ != nullptr;};
    void deleteAuthorAvatarUrl() { this->authorAvatarUrl_ = nullptr;};
    inline string authorAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(authorAvatarUrl_, "") };
    inline YuqingMessage& setAuthorAvatarUrl(string authorAvatarUrl) { DARABONBA_PTR_SET_VALUE(authorAvatarUrl_, authorAvatarUrl) };


    // authorFollowersCount Field Functions 
    bool hasAuthorFollowersCount() const { return this->authorFollowersCount_ != nullptr;};
    void deleteAuthorFollowersCount() { this->authorFollowersCount_ = nullptr;};
    inline int64_t authorFollowersCount() const { DARABONBA_PTR_GET_DEFAULT(authorFollowersCount_, 0L) };
    inline YuqingMessage& setAuthorFollowersCount(int64_t authorFollowersCount) { DARABONBA_PTR_SET_VALUE(authorFollowersCount_, authorFollowersCount) };


    // authorFriendsCount Field Functions 
    bool hasAuthorFriendsCount() const { return this->authorFriendsCount_ != nullptr;};
    void deleteAuthorFriendsCount() { this->authorFriendsCount_ = nullptr;};
    inline int64_t authorFriendsCount() const { DARABONBA_PTR_GET_DEFAULT(authorFriendsCount_, 0L) };
    inline YuqingMessage& setAuthorFriendsCount(int64_t authorFriendsCount) { DARABONBA_PTR_SET_VALUE(authorFriendsCount_, authorFriendsCount) };


    // authorGender Field Functions 
    bool hasAuthorGender() const { return this->authorGender_ != nullptr;};
    void deleteAuthorGender() { this->authorGender_ = nullptr;};
    inline string authorGender() const { DARABONBA_PTR_GET_DEFAULT(authorGender_, "") };
    inline YuqingMessage& setAuthorGender(string authorGender) { DARABONBA_PTR_SET_VALUE(authorGender_, authorGender) };


    // authorId Field Functions 
    bool hasAuthorId() const { return this->authorId_ != nullptr;};
    void deleteAuthorId() { this->authorId_ = nullptr;};
    inline string authorId() const { DARABONBA_PTR_GET_DEFAULT(authorId_, "") };
    inline YuqingMessage& setAuthorId(string authorId) { DARABONBA_PTR_SET_VALUE(authorId_, authorId) };


    // authorLikesCount Field Functions 
    bool hasAuthorLikesCount() const { return this->authorLikesCount_ != nullptr;};
    void deleteAuthorLikesCount() { this->authorLikesCount_ = nullptr;};
    inline int64_t authorLikesCount() const { DARABONBA_PTR_GET_DEFAULT(authorLikesCount_, 0L) };
    inline YuqingMessage& setAuthorLikesCount(int64_t authorLikesCount) { DARABONBA_PTR_SET_VALUE(authorLikesCount_, authorLikesCount) };


    // authorName Field Functions 
    bool hasAuthorName() const { return this->authorName_ != nullptr;};
    void deleteAuthorName() { this->authorName_ = nullptr;};
    inline string authorName() const { DARABONBA_PTR_GET_DEFAULT(authorName_, "") };
    inline YuqingMessage& setAuthorName(string authorName) { DARABONBA_PTR_SET_VALUE(authorName_, authorName) };


    // authorProfileUrl Field Functions 
    bool hasAuthorProfileUrl() const { return this->authorProfileUrl_ != nullptr;};
    void deleteAuthorProfileUrl() { this->authorProfileUrl_ = nullptr;};
    inline string authorProfileUrl() const { DARABONBA_PTR_GET_DEFAULT(authorProfileUrl_, "") };
    inline YuqingMessage& setAuthorProfileUrl(string authorProfileUrl) { DARABONBA_PTR_SET_VALUE(authorProfileUrl_, authorProfileUrl) };


    // authorStatusesCount Field Functions 
    bool hasAuthorStatusesCount() const { return this->authorStatusesCount_ != nullptr;};
    void deleteAuthorStatusesCount() { this->authorStatusesCount_ = nullptr;};
    inline int64_t authorStatusesCount() const { DARABONBA_PTR_GET_DEFAULT(authorStatusesCount_, 0L) };
    inline YuqingMessage& setAuthorStatusesCount(int64_t authorStatusesCount) { DARABONBA_PTR_SET_VALUE(authorStatusesCount_, authorStatusesCount) };


    // authorVerified Field Functions 
    bool hasAuthorVerified() const { return this->authorVerified_ != nullptr;};
    void deleteAuthorVerified() { this->authorVerified_ = nullptr;};
    inline bool authorVerified() const { DARABONBA_PTR_GET_DEFAULT(authorVerified_, false) };
    inline YuqingMessage& setAuthorVerified(bool authorVerified) { DARABONBA_PTR_SET_VALUE(authorVerified_, authorVerified) };


    // authorVerifyType Field Functions 
    bool hasAuthorVerifyType() const { return this->authorVerifyType_ != nullptr;};
    void deleteAuthorVerifyType() { this->authorVerifyType_ = nullptr;};
    inline int32_t authorVerifyType() const { DARABONBA_PTR_GET_DEFAULT(authorVerifyType_, 0) };
    inline YuqingMessage& setAuthorVerifyType(int32_t authorVerifyType) { DARABONBA_PTR_SET_VALUE(authorVerifyType_, authorVerifyType) };


    // contentAudioText Field Functions 
    bool hasContentAudioText() const { return this->contentAudioText_ != nullptr;};
    void deleteContentAudioText() { this->contentAudioText_ = nullptr;};
    inline string contentAudioText() const { DARABONBA_PTR_GET_DEFAULT(contentAudioText_, "") };
    inline YuqingMessage& setContentAudioText(string contentAudioText) { DARABONBA_PTR_SET_VALUE(contentAudioText_, contentAudioText) };


    // contentAudioUrls Field Functions 
    bool hasContentAudioUrls() const { return this->contentAudioUrls_ != nullptr;};
    void deleteContentAudioUrls() { this->contentAudioUrls_ = nullptr;};
    inline string contentAudioUrls() const { DARABONBA_PTR_GET_DEFAULT(contentAudioUrls_, "") };
    inline YuqingMessage& setContentAudioUrls(string contentAudioUrls) { DARABONBA_PTR_SET_VALUE(contentAudioUrls_, contentAudioUrls) };


    // contentImageText Field Functions 
    bool hasContentImageText() const { return this->contentImageText_ != nullptr;};
    void deleteContentImageText() { this->contentImageText_ = nullptr;};
    inline string contentImageText() const { DARABONBA_PTR_GET_DEFAULT(contentImageText_, "") };
    inline YuqingMessage& setContentImageText(string contentImageText) { DARABONBA_PTR_SET_VALUE(contentImageText_, contentImageText) };


    // contentImageUrls Field Functions 
    bool hasContentImageUrls() const { return this->contentImageUrls_ != nullptr;};
    void deleteContentImageUrls() { this->contentImageUrls_ = nullptr;};
    inline string contentImageUrls() const { DARABONBA_PTR_GET_DEFAULT(contentImageUrls_, "") };
    inline YuqingMessage& setContentImageUrls(string contentImageUrls) { DARABONBA_PTR_SET_VALUE(contentImageUrls_, contentImageUrls) };


    // contentLang Field Functions 
    bool hasContentLang() const { return this->contentLang_ != nullptr;};
    void deleteContentLang() { this->contentLang_ = nullptr;};
    inline string contentLang() const { DARABONBA_PTR_GET_DEFAULT(contentLang_, "") };
    inline YuqingMessage& setContentLang(string contentLang) { DARABONBA_PTR_SET_VALUE(contentLang_, contentLang) };


    // contentLen Field Functions 
    bool hasContentLen() const { return this->contentLen_ != nullptr;};
    void deleteContentLen() { this->contentLen_ = nullptr;};
    inline int64_t contentLen() const { DARABONBA_PTR_GET_DEFAULT(contentLen_, 0L) };
    inline YuqingMessage& setContentLen(int64_t contentLen) { DARABONBA_PTR_SET_VALUE(contentLen_, contentLen) };


    // contentVideoText Field Functions 
    bool hasContentVideoText() const { return this->contentVideoText_ != nullptr;};
    void deleteContentVideoText() { this->contentVideoText_ = nullptr;};
    inline string contentVideoText() const { DARABONBA_PTR_GET_DEFAULT(contentVideoText_, "") };
    inline YuqingMessage& setContentVideoText(string contentVideoText) { DARABONBA_PTR_SET_VALUE(contentVideoText_, contentVideoText) };


    // contentVideoUrls Field Functions 
    bool hasContentVideoUrls() const { return this->contentVideoUrls_ != nullptr;};
    void deleteContentVideoUrls() { this->contentVideoUrls_ = nullptr;};
    inline string contentVideoUrls() const { DARABONBA_PTR_GET_DEFAULT(contentVideoUrls_, "") };
    inline YuqingMessage& setContentVideoUrls(string contentVideoUrls) { DARABONBA_PTR_SET_VALUE(contentVideoUrls_, contentVideoUrls) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline YuqingMessage& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // docAnswersCount Field Functions 
    bool hasDocAnswersCount() const { return this->docAnswersCount_ != nullptr;};
    void deleteDocAnswersCount() { this->docAnswersCount_ = nullptr;};
    inline int64_t docAnswersCount() const { DARABONBA_PTR_GET_DEFAULT(docAnswersCount_, 0L) };
    inline YuqingMessage& setDocAnswersCount(int64_t docAnswersCount) { DARABONBA_PTR_SET_VALUE(docAnswersCount_, docAnswersCount) };


    // docAreas Field Functions 
    bool hasDocAreas() const { return this->docAreas_ != nullptr;};
    void deleteDocAreas() { this->docAreas_ = nullptr;};
    inline const vector<string> & docAreas() const { DARABONBA_PTR_GET_CONST(docAreas_, vector<string>) };
    inline vector<string> docAreas() { DARABONBA_PTR_GET(docAreas_, vector<string>) };
    inline YuqingMessage& setDocAreas(const vector<string> & docAreas) { DARABONBA_PTR_SET_VALUE(docAreas_, docAreas) };
    inline YuqingMessage& setDocAreas(vector<string> && docAreas) { DARABONBA_PTR_SET_RVALUE(docAreas_, docAreas) };


    // docCoinCount Field Functions 
    bool hasDocCoinCount() const { return this->docCoinCount_ != nullptr;};
    void deleteDocCoinCount() { this->docCoinCount_ = nullptr;};
    inline int64_t docCoinCount() const { DARABONBA_PTR_GET_DEFAULT(docCoinCount_, 0L) };
    inline YuqingMessage& setDocCoinCount(int64_t docCoinCount) { DARABONBA_PTR_SET_VALUE(docCoinCount_, docCoinCount) };


    // docCommentsCount Field Functions 
    bool hasDocCommentsCount() const { return this->docCommentsCount_ != nullptr;};
    void deleteDocCommentsCount() { this->docCommentsCount_ = nullptr;};
    inline int64_t docCommentsCount() const { DARABONBA_PTR_GET_DEFAULT(docCommentsCount_, 0L) };
    inline YuqingMessage& setDocCommentsCount(int64_t docCommentsCount) { DARABONBA_PTR_SET_VALUE(docCommentsCount_, docCommentsCount) };


    // docContent Field Functions 
    bool hasDocContent() const { return this->docContent_ != nullptr;};
    void deleteDocContent() { this->docContent_ = nullptr;};
    inline string docContent() const { DARABONBA_PTR_GET_DEFAULT(docContent_, "") };
    inline YuqingMessage& setDocContent(string docContent) { DARABONBA_PTR_SET_VALUE(docContent_, docContent) };


    // docContentBrief Field Functions 
    bool hasDocContentBrief() const { return this->docContentBrief_ != nullptr;};
    void deleteDocContentBrief() { this->docContentBrief_ = nullptr;};
    inline string docContentBrief() const { DARABONBA_PTR_GET_DEFAULT(docContentBrief_, "") };
    inline YuqingMessage& setDocContentBrief(string docContentBrief) { DARABONBA_PTR_SET_VALUE(docContentBrief_, docContentBrief) };


    // docContentSign Field Functions 
    bool hasDocContentSign() const { return this->docContentSign_ != nullptr;};
    void deleteDocContentSign() { this->docContentSign_ = nullptr;};
    inline string docContentSign() const { DARABONBA_PTR_GET_DEFAULT(docContentSign_, "") };
    inline YuqingMessage& setDocContentSign(string docContentSign) { DARABONBA_PTR_SET_VALUE(docContentSign_, docContentSign) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline YuqingMessage& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docLikesCount Field Functions 
    bool hasDocLikesCount() const { return this->docLikesCount_ != nullptr;};
    void deleteDocLikesCount() { this->docLikesCount_ = nullptr;};
    inline int64_t docLikesCount() const { DARABONBA_PTR_GET_DEFAULT(docLikesCount_, 0L) };
    inline YuqingMessage& setDocLikesCount(int64_t docLikesCount) { DARABONBA_PTR_SET_VALUE(docLikesCount_, docLikesCount) };


    // docPlayCount Field Functions 
    bool hasDocPlayCount() const { return this->docPlayCount_ != nullptr;};
    void deleteDocPlayCount() { this->docPlayCount_ = nullptr;};
    inline int64_t docPlayCount() const { DARABONBA_PTR_GET_DEFAULT(docPlayCount_, 0L) };
    inline YuqingMessage& setDocPlayCount(int64_t docPlayCount) { DARABONBA_PTR_SET_VALUE(docPlayCount_, docPlayCount) };


    // docReadingCount Field Functions 
    bool hasDocReadingCount() const { return this->docReadingCount_ != nullptr;};
    void deleteDocReadingCount() { this->docReadingCount_ = nullptr;};
    inline int64_t docReadingCount() const { DARABONBA_PTR_GET_DEFAULT(docReadingCount_, 0L) };
    inline YuqingMessage& setDocReadingCount(int64_t docReadingCount) { DARABONBA_PTR_SET_VALUE(docReadingCount_, docReadingCount) };


    // docReadsCount Field Functions 
    bool hasDocReadsCount() const { return this->docReadsCount_ != nullptr;};
    void deleteDocReadsCount() { this->docReadsCount_ = nullptr;};
    inline int64_t docReadsCount() const { DARABONBA_PTR_GET_DEFAULT(docReadsCount_, 0L) };
    inline YuqingMessage& setDocReadsCount(int64_t docReadsCount) { DARABONBA_PTR_SET_VALUE(docReadsCount_, docReadsCount) };


    // docRepostsCount Field Functions 
    bool hasDocRepostsCount() const { return this->docRepostsCount_ != nullptr;};
    void deleteDocRepostsCount() { this->docRepostsCount_ = nullptr;};
    inline int64_t docRepostsCount() const { DARABONBA_PTR_GET_DEFAULT(docRepostsCount_, 0L) };
    inline YuqingMessage& setDocRepostsCount(int64_t docRepostsCount) { DARABONBA_PTR_SET_VALUE(docRepostsCount_, docRepostsCount) };


    // docReprintName Field Functions 
    bool hasDocReprintName() const { return this->docReprintName_ != nullptr;};
    void deleteDocReprintName() { this->docReprintName_ = nullptr;};
    inline string docReprintName() const { DARABONBA_PTR_GET_DEFAULT(docReprintName_, "") };
    inline YuqingMessage& setDocReprintName(string docReprintName) { DARABONBA_PTR_SET_VALUE(docReprintName_, docReprintName) };


    // docSelfContentSign Field Functions 
    bool hasDocSelfContentSign() const { return this->docSelfContentSign_ != nullptr;};
    void deleteDocSelfContentSign() { this->docSelfContentSign_ = nullptr;};
    inline string docSelfContentSign() const { DARABONBA_PTR_GET_DEFAULT(docSelfContentSign_, "") };
    inline YuqingMessage& setDocSelfContentSign(string docSelfContentSign) { DARABONBA_PTR_SET_VALUE(docSelfContentSign_, docSelfContentSign) };


    // docTitle Field Functions 
    bool hasDocTitle() const { return this->docTitle_ != nullptr;};
    void deleteDocTitle() { this->docTitle_ = nullptr;};
    inline string docTitle() const { DARABONBA_PTR_GET_DEFAULT(docTitle_, "") };
    inline YuqingMessage& setDocTitle(string docTitle) { DARABONBA_PTR_SET_VALUE(docTitle_, docTitle) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string docUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline YuqingMessage& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // emotionScore Field Functions 
    bool hasEmotionScore() const { return this->emotionScore_ != nullptr;};
    void deleteEmotionScore() { this->emotionScore_ = nullptr;};
    inline double emotionScore() const { DARABONBA_PTR_GET_DEFAULT(emotionScore_, 0.0) };
    inline YuqingMessage& setEmotionScore(double emotionScore) { DARABONBA_PTR_SET_VALUE(emotionScore_, emotionScore) };


    // emotionType Field Functions 
    bool hasEmotionType() const { return this->emotionType_ != nullptr;};
    void deleteEmotionType() { this->emotionType_ = nullptr;};
    inline int32_t emotionType() const { DARABONBA_PTR_GET_DEFAULT(emotionType_, 0) };
    inline YuqingMessage& setEmotionType(int32_t emotionType) { DARABONBA_PTR_SET_VALUE(emotionType_, emotionType) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline const map<string, string> & extInfo() const { DARABONBA_PTR_GET_CONST(extInfo_, map<string, string>) };
    inline map<string, string> extInfo() { DARABONBA_PTR_GET(extInfo_, map<string, string>) };
    inline YuqingMessage& setExtInfo(const map<string, string> & extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };
    inline YuqingMessage& setExtInfo(map<string, string> && extInfo) { DARABONBA_PTR_SET_RVALUE(extInfo_, extInfo) };


    // finEventCount Field Functions 
    bool hasFinEventCount() const { return this->finEventCount_ != nullptr;};
    void deleteFinEventCount() { this->finEventCount_ = nullptr;};
    inline int32_t finEventCount() const { DARABONBA_PTR_GET_DEFAULT(finEventCount_, 0) };
    inline YuqingMessage& setFinEventCount(int32_t finEventCount) { DARABONBA_PTR_SET_VALUE(finEventCount_, finEventCount) };


    // financeEventList Field Functions 
    bool hasFinanceEventList() const { return this->financeEventList_ != nullptr;};
    void deleteFinanceEventList() { this->financeEventList_ = nullptr;};
    inline const vector<YuqingFinanceEvent> & financeEventList() const { DARABONBA_PTR_GET_CONST(financeEventList_, vector<YuqingFinanceEvent>) };
    inline vector<YuqingFinanceEvent> financeEventList() { DARABONBA_PTR_GET(financeEventList_, vector<YuqingFinanceEvent>) };
    inline YuqingMessage& setFinanceEventList(const vector<YuqingFinanceEvent> & financeEventList) { DARABONBA_PTR_SET_VALUE(financeEventList_, financeEventList) };
    inline YuqingMessage& setFinanceEventList(vector<YuqingFinanceEvent> && financeEventList) { DARABONBA_PTR_SET_RVALUE(financeEventList_, financeEventList) };


    // highlightKeywords Field Functions 
    bool hasHighlightKeywords() const { return this->highlightKeywords_ != nullptr;};
    void deleteHighlightKeywords() { this->highlightKeywords_ = nullptr;};
    inline const vector<string> & highlightKeywords() const { DARABONBA_PTR_GET_CONST(highlightKeywords_, vector<string>) };
    inline vector<string> highlightKeywords() { DARABONBA_PTR_GET(highlightKeywords_, vector<string>) };
    inline YuqingMessage& setHighlightKeywords(const vector<string> & highlightKeywords) { DARABONBA_PTR_SET_VALUE(highlightKeywords_, highlightKeywords) };
    inline YuqingMessage& setHighlightKeywords(vector<string> && highlightKeywords) { DARABONBA_PTR_SET_RVALUE(highlightKeywords_, highlightKeywords) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline YuqingMessage& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // influenceScore Field Functions 
    bool hasInfluenceScore() const { return this->influenceScore_ != nullptr;};
    void deleteInfluenceScore() { this->influenceScore_ = nullptr;};
    inline double influenceScore() const { DARABONBA_PTR_GET_DEFAULT(influenceScore_, 0.0) };
    inline YuqingMessage& setInfluenceScore(double influenceScore) { DARABONBA_PTR_SET_VALUE(influenceScore_, influenceScore) };


    // mediaHosts Field Functions 
    bool hasMediaHosts() const { return this->mediaHosts_ != nullptr;};
    void deleteMediaHosts() { this->mediaHosts_ = nullptr;};
    inline const vector<string> & mediaHosts() const { DARABONBA_PTR_GET_CONST(mediaHosts_, vector<string>) };
    inline vector<string> mediaHosts() { DARABONBA_PTR_GET(mediaHosts_, vector<string>) };
    inline YuqingMessage& setMediaHosts(const vector<string> & mediaHosts) { DARABONBA_PTR_SET_VALUE(mediaHosts_, mediaHosts) };
    inline YuqingMessage& setMediaHosts(vector<string> && mediaHosts) { DARABONBA_PTR_SET_RVALUE(mediaHosts_, mediaHosts) };


    // mediaInfluenceLevel Field Functions 
    bool hasMediaInfluenceLevel() const { return this->mediaInfluenceLevel_ != nullptr;};
    void deleteMediaInfluenceLevel() { this->mediaInfluenceLevel_ = nullptr;};
    inline int32_t mediaInfluenceLevel() const { DARABONBA_PTR_GET_DEFAULT(mediaInfluenceLevel_, 0) };
    inline YuqingMessage& setMediaInfluenceLevel(int32_t mediaInfluenceLevel) { DARABONBA_PTR_SET_VALUE(mediaInfluenceLevel_, mediaInfluenceLevel) };


    // mediaName Field Functions 
    bool hasMediaName() const { return this->mediaName_ != nullptr;};
    void deleteMediaName() { this->mediaName_ = nullptr;};
    inline string mediaName() const { DARABONBA_PTR_GET_DEFAULT(mediaName_, "") };
    inline YuqingMessage& setMediaName(string mediaName) { DARABONBA_PTR_SET_VALUE(mediaName_, mediaName) };


    // mediaPropagationLevel Field Functions 
    bool hasMediaPropagationLevel() const { return this->mediaPropagationLevel_ != nullptr;};
    void deleteMediaPropagationLevel() { this->mediaPropagationLevel_ = nullptr;};
    inline int32_t mediaPropagationLevel() const { DARABONBA_PTR_GET_DEFAULT(mediaPropagationLevel_, 0) };
    inline YuqingMessage& setMediaPropagationLevel(int32_t mediaPropagationLevel) { DARABONBA_PTR_SET_VALUE(mediaPropagationLevel_, mediaPropagationLevel) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline YuqingMessage& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline YuqingMessage& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // parentDocId Field Functions 
    bool hasParentDocId() const { return this->parentDocId_ != nullptr;};
    void deleteParentDocId() { this->parentDocId_ = nullptr;};
    inline string parentDocId() const { DARABONBA_PTR_GET_DEFAULT(parentDocId_, "") };
    inline YuqingMessage& setParentDocId(string parentDocId) { DARABONBA_PTR_SET_VALUE(parentDocId_, parentDocId) };


    // propagationScore Field Functions 
    bool hasPropagationScore() const { return this->propagationScore_ != nullptr;};
    void deletePropagationScore() { this->propagationScore_ = nullptr;};
    inline double propagationScore() const { DARABONBA_PTR_GET_DEFAULT(propagationScore_, 0.0) };
    inline YuqingMessage& setPropagationScore(double propagationScore) { DARABONBA_PTR_SET_VALUE(propagationScore_, propagationScore) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline YuqingMessage& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // relevanceScore Field Functions 
    bool hasRelevanceScore() const { return this->relevanceScore_ != nullptr;};
    void deleteRelevanceScore() { this->relevanceScore_ = nullptr;};
    inline double relevanceScore() const { DARABONBA_PTR_GET_DEFAULT(relevanceScore_, 0.0) };
    inline YuqingMessage& setRelevanceScore(double relevanceScore) { DARABONBA_PTR_SET_VALUE(relevanceScore_, relevanceScore) };


    // reportMaterialTags Field Functions 
    bool hasReportMaterialTags() const { return this->reportMaterialTags_ != nullptr;};
    void deleteReportMaterialTags() { this->reportMaterialTags_ = nullptr;};
    inline const vector<string> & reportMaterialTags() const { DARABONBA_PTR_GET_CONST(reportMaterialTags_, vector<string>) };
    inline vector<string> reportMaterialTags() { DARABONBA_PTR_GET(reportMaterialTags_, vector<string>) };
    inline YuqingMessage& setReportMaterialTags(const vector<string> & reportMaterialTags) { DARABONBA_PTR_SET_VALUE(reportMaterialTags_, reportMaterialTags) };
    inline YuqingMessage& setReportMaterialTags(vector<string> && reportMaterialTags) { DARABONBA_PTR_SET_RVALUE(reportMaterialTags_, reportMaterialTags) };


    // repostList Field Functions 
    bool hasRepostList() const { return this->repostList_ != nullptr;};
    void deleteRepostList() { this->repostList_ = nullptr;};
    inline const vector<string> & repostList() const { DARABONBA_PTR_GET_CONST(repostList_, vector<string>) };
    inline vector<string> repostList() { DARABONBA_PTR_GET(repostList_, vector<string>) };
    inline YuqingMessage& setRepostList(const vector<string> & repostList) { DARABONBA_PTR_SET_VALUE(repostList_, repostList) };
    inline YuqingMessage& setRepostList(vector<string> && repostList) { DARABONBA_PTR_SET_RVALUE(repostList_, repostList) };


    // similarNumber Field Functions 
    bool hasSimilarNumber() const { return this->similarNumber_ != nullptr;};
    void deleteSimilarNumber() { this->similarNumber_ = nullptr;};
    inline int32_t similarNumber() const { DARABONBA_PTR_GET_DEFAULT(similarNumber_, 0) };
    inline YuqingMessage& setSimilarNumber(int32_t similarNumber) { DARABONBA_PTR_SET_VALUE(similarNumber_, similarNumber) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline YuqingMessage& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline YuqingMessage& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // videoCount Field Functions 
    bool hasVideoCount() const { return this->videoCount_ != nullptr;};
    void deleteVideoCount() { this->videoCount_ = nullptr;};
    inline int32_t videoCount() const { DARABONBA_PTR_GET_DEFAULT(videoCount_, 0) };
    inline YuqingMessage& setVideoCount(int32_t videoCount) { DARABONBA_PTR_SET_VALUE(videoCount_, videoCount) };


    // weiboCommentId Field Functions 
    bool hasWeiboCommentId() const { return this->weiboCommentId_ != nullptr;};
    void deleteWeiboCommentId() { this->weiboCommentId_ = nullptr;};
    inline string weiboCommentId() const { DARABONBA_PTR_GET_DEFAULT(weiboCommentId_, "") };
    inline YuqingMessage& setWeiboCommentId(string weiboCommentId) { DARABONBA_PTR_SET_VALUE(weiboCommentId_, weiboCommentId) };


    // weiboMid Field Functions 
    bool hasWeiboMid() const { return this->weiboMid_ != nullptr;};
    void deleteWeiboMid() { this->weiboMid_ = nullptr;};
    inline string weiboMid() const { DARABONBA_PTR_GET_DEFAULT(weiboMid_, "") };
    inline YuqingMessage& setWeiboMid(string weiboMid) { DARABONBA_PTR_SET_VALUE(weiboMid_, weiboMid) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int64_t> appScore_ = nullptr;
    std::shared_ptr<string> appStoreName_ = nullptr;
    std::shared_ptr<vector<string>> atAuthorNames_ = nullptr;
    std::shared_ptr<int32_t> audioCount_ = nullptr;
    std::shared_ptr<string> authorAvatarUrl_ = nullptr;
    std::shared_ptr<int64_t> authorFollowersCount_ = nullptr;
    std::shared_ptr<int64_t> authorFriendsCount_ = nullptr;
    std::shared_ptr<string> authorGender_ = nullptr;
    std::shared_ptr<string> authorId_ = nullptr;
    std::shared_ptr<int64_t> authorLikesCount_ = nullptr;
    std::shared_ptr<string> authorName_ = nullptr;
    std::shared_ptr<string> authorProfileUrl_ = nullptr;
    std::shared_ptr<int64_t> authorStatusesCount_ = nullptr;
    std::shared_ptr<bool> authorVerified_ = nullptr;
    std::shared_ptr<int32_t> authorVerifyType_ = nullptr;
    std::shared_ptr<string> contentAudioText_ = nullptr;
    std::shared_ptr<string> contentAudioUrls_ = nullptr;
    std::shared_ptr<string> contentImageText_ = nullptr;
    std::shared_ptr<string> contentImageUrls_ = nullptr;
    std::shared_ptr<string> contentLang_ = nullptr;
    std::shared_ptr<int64_t> contentLen_ = nullptr;
    std::shared_ptr<string> contentVideoText_ = nullptr;
    std::shared_ptr<string> contentVideoUrls_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> docAnswersCount_ = nullptr;
    std::shared_ptr<vector<string>> docAreas_ = nullptr;
    std::shared_ptr<int64_t> docCoinCount_ = nullptr;
    std::shared_ptr<int64_t> docCommentsCount_ = nullptr;
    std::shared_ptr<string> docContent_ = nullptr;
    std::shared_ptr<string> docContentBrief_ = nullptr;
    std::shared_ptr<string> docContentSign_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<int64_t> docLikesCount_ = nullptr;
    std::shared_ptr<int64_t> docPlayCount_ = nullptr;
    std::shared_ptr<int64_t> docReadingCount_ = nullptr;
    std::shared_ptr<int64_t> docReadsCount_ = nullptr;
    std::shared_ptr<int64_t> docRepostsCount_ = nullptr;
    std::shared_ptr<string> docReprintName_ = nullptr;
    std::shared_ptr<string> docSelfContentSign_ = nullptr;
    std::shared_ptr<string> docTitle_ = nullptr;
    std::shared_ptr<string> docUrl_ = nullptr;
    std::shared_ptr<double> emotionScore_ = nullptr;
    std::shared_ptr<int32_t> emotionType_ = nullptr;
    std::shared_ptr<map<string, string>> extInfo_ = nullptr;
    std::shared_ptr<int32_t> finEventCount_ = nullptr;
    std::shared_ptr<vector<YuqingFinanceEvent>> financeEventList_ = nullptr;
    std::shared_ptr<vector<string>> highlightKeywords_ = nullptr;
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<double> influenceScore_ = nullptr;
    std::shared_ptr<vector<string>> mediaHosts_ = nullptr;
    std::shared_ptr<int32_t> mediaInfluenceLevel_ = nullptr;
    std::shared_ptr<string> mediaName_ = nullptr;
    std::shared_ptr<int32_t> mediaPropagationLevel_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> messageType_ = nullptr;
    std::shared_ptr<string> parentDocId_ = nullptr;
    std::shared_ptr<double> propagationScore_ = nullptr;
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<double> relevanceScore_ = nullptr;
    std::shared_ptr<vector<string>> reportMaterialTags_ = nullptr;
    std::shared_ptr<vector<string>> repostList_ = nullptr;
    std::shared_ptr<int32_t> similarNumber_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
    std::shared_ptr<int32_t> videoCount_ = nullptr;
    std::shared_ptr<string> weiboCommentId_ = nullptr;
    std::shared_ptr<string> weiboMid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
