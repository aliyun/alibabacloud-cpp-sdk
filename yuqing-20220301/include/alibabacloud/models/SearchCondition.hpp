// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONDITION_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONDITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class SearchCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCondition& obj) { 
      DARABONBA_PTR_TO_JSON(assKeywordList, assKeywordList_);
      DARABONBA_PTR_TO_JSON(atAuthorNameList, atAuthorNameList_);
      DARABONBA_PTR_TO_JSON(authorNameList, authorNameList_);
      DARABONBA_PTR_TO_JSON(commentsLevel, commentsLevel_);
      DARABONBA_PTR_TO_JSON(contentLenLevel, contentLenLevel_);
      DARABONBA_PTR_TO_JSON(createTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(createTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(docContentSign, docContentSign_);
      DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
      DARABONBA_PTR_TO_JSON(duplicateRemoval, duplicateRemoval_);
      DARABONBA_PTR_TO_JSON(emotionType, emotionType_);
      DARABONBA_PTR_TO_JSON(enableKeywordHighlight, enableKeywordHighlight_);
      DARABONBA_PTR_TO_JSON(excludeAtAuthorNameList, excludeAtAuthorNameList_);
      DARABONBA_PTR_TO_JSON(excludeAuthorNameList, excludeAuthorNameList_);
      DARABONBA_PTR_TO_JSON(excludeHostNameList, excludeHostNameList_);
      DARABONBA_PTR_TO_JSON(excludeKeywordList, excludeKeywordList_);
      DARABONBA_PTR_TO_JSON(excludeKeywordListInTitle, excludeKeywordListInTitle_);
      DARABONBA_PTR_TO_JSON(excludeKeywordTagIds, excludeKeywordTagIds_);
      DARABONBA_PTR_TO_JSON(excludeMaterialTagList, excludeMaterialTagList_);
      DARABONBA_PTR_TO_JSON(excludeMediaLibraryIdList, excludeMediaLibraryIdList_);
      DARABONBA_PTR_TO_JSON(excludeMediaNameList, excludeMediaNameList_);
      DARABONBA_PTR_TO_JSON(excludeMediaTypeList, excludeMediaTypeList_);
      DARABONBA_PTR_TO_JSON(excludeMessageTypeList, excludeMessageTypeList_);
      DARABONBA_PTR_TO_JSON(fieldConditions, fieldConditions_);
      DARABONBA_PTR_TO_JSON(filterId, filterId_);
      DARABONBA_PTR_TO_JSON(hasAudio, hasAudio_);
      DARABONBA_PTR_TO_JSON(hasImage, hasImage_);
      DARABONBA_PTR_TO_JSON(hasMultiModeContent, hasMultiModeContent_);
      DARABONBA_PTR_TO_JSON(hasVideo, hasVideo_);
      DARABONBA_PTR_TO_JSON(hostNameList, hostNameList_);
      DARABONBA_PTR_TO_JSON(influenceLevel, influenceLevel_);
      DARABONBA_PTR_TO_JSON(keywordTagIds, keywordTagIds_);
      DARABONBA_PTR_TO_JSON(likesLevel, likesLevel_);
      DARABONBA_PTR_TO_JSON(materialTagList, materialTagList_);
      DARABONBA_PTR_TO_JSON(mediaLibraryIdList, mediaLibraryIdList_);
      DARABONBA_PTR_TO_JSON(mediaNameList, mediaNameList_);
      DARABONBA_PTR_TO_JSON(mediaTypeList, mediaTypeList_);
      DARABONBA_PTR_TO_JSON(messageTypeList, messageTypeList_);
      DARABONBA_PTR_TO_JSON(pageNow, pageNow_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(parentDocId, parentDocId_);
      DARABONBA_PTR_TO_JSON(posKeywordList, posKeywordList_);
      DARABONBA_PTR_TO_JSON(posKeywordListInTitle, posKeywordListInTitle_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(propagationLevel, propagationLevel_);
      DARABONBA_PTR_TO_JSON(publishTimeEnd, publishTimeEnd_);
      DARABONBA_PTR_TO_JSON(publishTimeStart, publishTimeStart_);
      DARABONBA_PTR_TO_JSON(readsLevel, readsLevel_);
      DARABONBA_PTR_TO_JSON(relevanceLevel, relevanceLevel_);
      DARABONBA_PTR_TO_JSON(repostLevel, repostLevel_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(sortByDirection, sortByDirection_);
      DARABONBA_PTR_TO_JSON(topicList, topicList_);
      DARABONBA_PTR_TO_JSON(updateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_TO_JSON(updateTimeStart, updateTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(assKeywordList, assKeywordList_);
      DARABONBA_PTR_FROM_JSON(atAuthorNameList, atAuthorNameList_);
      DARABONBA_PTR_FROM_JSON(authorNameList, authorNameList_);
      DARABONBA_PTR_FROM_JSON(commentsLevel, commentsLevel_);
      DARABONBA_PTR_FROM_JSON(contentLenLevel, contentLenLevel_);
      DARABONBA_PTR_FROM_JSON(createTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(createTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(docContentSign, docContentSign_);
      DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
      DARABONBA_PTR_FROM_JSON(duplicateRemoval, duplicateRemoval_);
      DARABONBA_PTR_FROM_JSON(emotionType, emotionType_);
      DARABONBA_PTR_FROM_JSON(enableKeywordHighlight, enableKeywordHighlight_);
      DARABONBA_PTR_FROM_JSON(excludeAtAuthorNameList, excludeAtAuthorNameList_);
      DARABONBA_PTR_FROM_JSON(excludeAuthorNameList, excludeAuthorNameList_);
      DARABONBA_PTR_FROM_JSON(excludeHostNameList, excludeHostNameList_);
      DARABONBA_PTR_FROM_JSON(excludeKeywordList, excludeKeywordList_);
      DARABONBA_PTR_FROM_JSON(excludeKeywordListInTitle, excludeKeywordListInTitle_);
      DARABONBA_PTR_FROM_JSON(excludeKeywordTagIds, excludeKeywordTagIds_);
      DARABONBA_PTR_FROM_JSON(excludeMaterialTagList, excludeMaterialTagList_);
      DARABONBA_PTR_FROM_JSON(excludeMediaLibraryIdList, excludeMediaLibraryIdList_);
      DARABONBA_PTR_FROM_JSON(excludeMediaNameList, excludeMediaNameList_);
      DARABONBA_PTR_FROM_JSON(excludeMediaTypeList, excludeMediaTypeList_);
      DARABONBA_PTR_FROM_JSON(excludeMessageTypeList, excludeMessageTypeList_);
      DARABONBA_PTR_FROM_JSON(fieldConditions, fieldConditions_);
      DARABONBA_PTR_FROM_JSON(filterId, filterId_);
      DARABONBA_PTR_FROM_JSON(hasAudio, hasAudio_);
      DARABONBA_PTR_FROM_JSON(hasImage, hasImage_);
      DARABONBA_PTR_FROM_JSON(hasMultiModeContent, hasMultiModeContent_);
      DARABONBA_PTR_FROM_JSON(hasVideo, hasVideo_);
      DARABONBA_PTR_FROM_JSON(hostNameList, hostNameList_);
      DARABONBA_PTR_FROM_JSON(influenceLevel, influenceLevel_);
      DARABONBA_PTR_FROM_JSON(keywordTagIds, keywordTagIds_);
      DARABONBA_PTR_FROM_JSON(likesLevel, likesLevel_);
      DARABONBA_PTR_FROM_JSON(materialTagList, materialTagList_);
      DARABONBA_PTR_FROM_JSON(mediaLibraryIdList, mediaLibraryIdList_);
      DARABONBA_PTR_FROM_JSON(mediaNameList, mediaNameList_);
      DARABONBA_PTR_FROM_JSON(mediaTypeList, mediaTypeList_);
      DARABONBA_PTR_FROM_JSON(messageTypeList, messageTypeList_);
      DARABONBA_PTR_FROM_JSON(pageNow, pageNow_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(parentDocId, parentDocId_);
      DARABONBA_PTR_FROM_JSON(posKeywordList, posKeywordList_);
      DARABONBA_PTR_FROM_JSON(posKeywordListInTitle, posKeywordListInTitle_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(propagationLevel, propagationLevel_);
      DARABONBA_PTR_FROM_JSON(publishTimeEnd, publishTimeEnd_);
      DARABONBA_PTR_FROM_JSON(publishTimeStart, publishTimeStart_);
      DARABONBA_PTR_FROM_JSON(readsLevel, readsLevel_);
      DARABONBA_PTR_FROM_JSON(relevanceLevel, relevanceLevel_);
      DARABONBA_PTR_FROM_JSON(repostLevel, repostLevel_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(sortByDirection, sortByDirection_);
      DARABONBA_PTR_FROM_JSON(topicList, topicList_);
      DARABONBA_PTR_FROM_JSON(updateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_FROM_JSON(updateTimeStart, updateTimeStart_);
    };
    SearchCondition() = default ;
    SearchCondition(const SearchCondition &) = default ;
    SearchCondition(SearchCondition &&) = default ;
    SearchCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCondition() = default ;
    SearchCondition& operator=(const SearchCondition &) = default ;
    SearchCondition& operator=(SearchCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assKeywordList_ == nullptr
        && return this->atAuthorNameList_ == nullptr && return this->authorNameList_ == nullptr && return this->commentsLevel_ == nullptr && return this->contentLenLevel_ == nullptr && return this->createTimeEnd_ == nullptr
        && return this->createTimeStart_ == nullptr && return this->docContentSign_ == nullptr && return this->docIdList_ == nullptr && return this->duplicateRemoval_ == nullptr && return this->emotionType_ == nullptr
        && return this->enableKeywordHighlight_ == nullptr && return this->excludeAtAuthorNameList_ == nullptr && return this->excludeAuthorNameList_ == nullptr && return this->excludeHostNameList_ == nullptr && return this->excludeKeywordList_ == nullptr
        && return this->excludeKeywordListInTitle_ == nullptr && return this->excludeKeywordTagIds_ == nullptr && return this->excludeMaterialTagList_ == nullptr && return this->excludeMediaLibraryIdList_ == nullptr && return this->excludeMediaNameList_ == nullptr
        && return this->excludeMediaTypeList_ == nullptr && return this->excludeMessageTypeList_ == nullptr && return this->fieldConditions_ == nullptr && return this->filterId_ == nullptr && return this->hasAudio_ == nullptr
        && return this->hasImage_ == nullptr && return this->hasMultiModeContent_ == nullptr && return this->hasVideo_ == nullptr && return this->hostNameList_ == nullptr && return this->influenceLevel_ == nullptr
        && return this->keywordTagIds_ == nullptr && return this->likesLevel_ == nullptr && return this->materialTagList_ == nullptr && return this->mediaLibraryIdList_ == nullptr && return this->mediaNameList_ == nullptr
        && return this->mediaTypeList_ == nullptr && return this->messageTypeList_ == nullptr && return this->pageNow_ == nullptr && return this->pageSize_ == nullptr && return this->parentDocId_ == nullptr
        && return this->posKeywordList_ == nullptr && return this->posKeywordListInTitle_ == nullptr && return this->projectId_ == nullptr && return this->propagationLevel_ == nullptr && return this->publishTimeEnd_ == nullptr
        && return this->publishTimeStart_ == nullptr && return this->readsLevel_ == nullptr && return this->relevanceLevel_ == nullptr && return this->repostLevel_ == nullptr && return this->sortBy_ == nullptr
        && return this->sortByDirection_ == nullptr && return this->topicList_ == nullptr && return this->updateTimeEnd_ == nullptr && return this->updateTimeStart_ == nullptr; };
    // assKeywordList Field Functions 
    bool hasAssKeywordList() const { return this->assKeywordList_ != nullptr;};
    void deleteAssKeywordList() { this->assKeywordList_ = nullptr;};
    inline const vector<string> & assKeywordList() const { DARABONBA_PTR_GET_CONST(assKeywordList_, vector<string>) };
    inline vector<string> assKeywordList() { DARABONBA_PTR_GET(assKeywordList_, vector<string>) };
    inline SearchCondition& setAssKeywordList(const vector<string> & assKeywordList) { DARABONBA_PTR_SET_VALUE(assKeywordList_, assKeywordList) };
    inline SearchCondition& setAssKeywordList(vector<string> && assKeywordList) { DARABONBA_PTR_SET_RVALUE(assKeywordList_, assKeywordList) };


    // atAuthorNameList Field Functions 
    bool hasAtAuthorNameList() const { return this->atAuthorNameList_ != nullptr;};
    void deleteAtAuthorNameList() { this->atAuthorNameList_ = nullptr;};
    inline const vector<string> & atAuthorNameList() const { DARABONBA_PTR_GET_CONST(atAuthorNameList_, vector<string>) };
    inline vector<string> atAuthorNameList() { DARABONBA_PTR_GET(atAuthorNameList_, vector<string>) };
    inline SearchCondition& setAtAuthorNameList(const vector<string> & atAuthorNameList) { DARABONBA_PTR_SET_VALUE(atAuthorNameList_, atAuthorNameList) };
    inline SearchCondition& setAtAuthorNameList(vector<string> && atAuthorNameList) { DARABONBA_PTR_SET_RVALUE(atAuthorNameList_, atAuthorNameList) };


    // authorNameList Field Functions 
    bool hasAuthorNameList() const { return this->authorNameList_ != nullptr;};
    void deleteAuthorNameList() { this->authorNameList_ = nullptr;};
    inline const vector<string> & authorNameList() const { DARABONBA_PTR_GET_CONST(authorNameList_, vector<string>) };
    inline vector<string> authorNameList() { DARABONBA_PTR_GET(authorNameList_, vector<string>) };
    inline SearchCondition& setAuthorNameList(const vector<string> & authorNameList) { DARABONBA_PTR_SET_VALUE(authorNameList_, authorNameList) };
    inline SearchCondition& setAuthorNameList(vector<string> && authorNameList) { DARABONBA_PTR_SET_RVALUE(authorNameList_, authorNameList) };


    // commentsLevel Field Functions 
    bool hasCommentsLevel() const { return this->commentsLevel_ != nullptr;};
    void deleteCommentsLevel() { this->commentsLevel_ = nullptr;};
    inline int32_t commentsLevel() const { DARABONBA_PTR_GET_DEFAULT(commentsLevel_, 0) };
    inline SearchCondition& setCommentsLevel(int32_t commentsLevel) { DARABONBA_PTR_SET_VALUE(commentsLevel_, commentsLevel) };


    // contentLenLevel Field Functions 
    bool hasContentLenLevel() const { return this->contentLenLevel_ != nullptr;};
    void deleteContentLenLevel() { this->contentLenLevel_ = nullptr;};
    inline int32_t contentLenLevel() const { DARABONBA_PTR_GET_DEFAULT(contentLenLevel_, 0) };
    inline SearchCondition& setContentLenLevel(int32_t contentLenLevel) { DARABONBA_PTR_SET_VALUE(contentLenLevel_, contentLenLevel) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline int64_t createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
    inline SearchCondition& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline int64_t createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
    inline SearchCondition& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // docContentSign Field Functions 
    bool hasDocContentSign() const { return this->docContentSign_ != nullptr;};
    void deleteDocContentSign() { this->docContentSign_ = nullptr;};
    inline string docContentSign() const { DARABONBA_PTR_GET_DEFAULT(docContentSign_, "") };
    inline SearchCondition& setDocContentSign(string docContentSign) { DARABONBA_PTR_SET_VALUE(docContentSign_, docContentSign) };


    // docIdList Field Functions 
    bool hasDocIdList() const { return this->docIdList_ != nullptr;};
    void deleteDocIdList() { this->docIdList_ = nullptr;};
    inline const vector<string> & docIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
    inline vector<string> docIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
    inline SearchCondition& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
    inline SearchCondition& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


    // duplicateRemoval Field Functions 
    bool hasDuplicateRemoval() const { return this->duplicateRemoval_ != nullptr;};
    void deleteDuplicateRemoval() { this->duplicateRemoval_ = nullptr;};
    inline bool duplicateRemoval() const { DARABONBA_PTR_GET_DEFAULT(duplicateRemoval_, false) };
    inline SearchCondition& setDuplicateRemoval(bool duplicateRemoval) { DARABONBA_PTR_SET_VALUE(duplicateRemoval_, duplicateRemoval) };


    // emotionType Field Functions 
    bool hasEmotionType() const { return this->emotionType_ != nullptr;};
    void deleteEmotionType() { this->emotionType_ = nullptr;};
    inline int32_t emotionType() const { DARABONBA_PTR_GET_DEFAULT(emotionType_, 0) };
    inline SearchCondition& setEmotionType(int32_t emotionType) { DARABONBA_PTR_SET_VALUE(emotionType_, emotionType) };


    // enableKeywordHighlight Field Functions 
    bool hasEnableKeywordHighlight() const { return this->enableKeywordHighlight_ != nullptr;};
    void deleteEnableKeywordHighlight() { this->enableKeywordHighlight_ = nullptr;};
    inline bool enableKeywordHighlight() const { DARABONBA_PTR_GET_DEFAULT(enableKeywordHighlight_, false) };
    inline SearchCondition& setEnableKeywordHighlight(bool enableKeywordHighlight) { DARABONBA_PTR_SET_VALUE(enableKeywordHighlight_, enableKeywordHighlight) };


    // excludeAtAuthorNameList Field Functions 
    bool hasExcludeAtAuthorNameList() const { return this->excludeAtAuthorNameList_ != nullptr;};
    void deleteExcludeAtAuthorNameList() { this->excludeAtAuthorNameList_ = nullptr;};
    inline const vector<string> & excludeAtAuthorNameList() const { DARABONBA_PTR_GET_CONST(excludeAtAuthorNameList_, vector<string>) };
    inline vector<string> excludeAtAuthorNameList() { DARABONBA_PTR_GET(excludeAtAuthorNameList_, vector<string>) };
    inline SearchCondition& setExcludeAtAuthorNameList(const vector<string> & excludeAtAuthorNameList) { DARABONBA_PTR_SET_VALUE(excludeAtAuthorNameList_, excludeAtAuthorNameList) };
    inline SearchCondition& setExcludeAtAuthorNameList(vector<string> && excludeAtAuthorNameList) { DARABONBA_PTR_SET_RVALUE(excludeAtAuthorNameList_, excludeAtAuthorNameList) };


    // excludeAuthorNameList Field Functions 
    bool hasExcludeAuthorNameList() const { return this->excludeAuthorNameList_ != nullptr;};
    void deleteExcludeAuthorNameList() { this->excludeAuthorNameList_ = nullptr;};
    inline const vector<string> & excludeAuthorNameList() const { DARABONBA_PTR_GET_CONST(excludeAuthorNameList_, vector<string>) };
    inline vector<string> excludeAuthorNameList() { DARABONBA_PTR_GET(excludeAuthorNameList_, vector<string>) };
    inline SearchCondition& setExcludeAuthorNameList(const vector<string> & excludeAuthorNameList) { DARABONBA_PTR_SET_VALUE(excludeAuthorNameList_, excludeAuthorNameList) };
    inline SearchCondition& setExcludeAuthorNameList(vector<string> && excludeAuthorNameList) { DARABONBA_PTR_SET_RVALUE(excludeAuthorNameList_, excludeAuthorNameList) };


    // excludeHostNameList Field Functions 
    bool hasExcludeHostNameList() const { return this->excludeHostNameList_ != nullptr;};
    void deleteExcludeHostNameList() { this->excludeHostNameList_ = nullptr;};
    inline const vector<string> & excludeHostNameList() const { DARABONBA_PTR_GET_CONST(excludeHostNameList_, vector<string>) };
    inline vector<string> excludeHostNameList() { DARABONBA_PTR_GET(excludeHostNameList_, vector<string>) };
    inline SearchCondition& setExcludeHostNameList(const vector<string> & excludeHostNameList) { DARABONBA_PTR_SET_VALUE(excludeHostNameList_, excludeHostNameList) };
    inline SearchCondition& setExcludeHostNameList(vector<string> && excludeHostNameList) { DARABONBA_PTR_SET_RVALUE(excludeHostNameList_, excludeHostNameList) };


    // excludeKeywordList Field Functions 
    bool hasExcludeKeywordList() const { return this->excludeKeywordList_ != nullptr;};
    void deleteExcludeKeywordList() { this->excludeKeywordList_ = nullptr;};
    inline const vector<string> & excludeKeywordList() const { DARABONBA_PTR_GET_CONST(excludeKeywordList_, vector<string>) };
    inline vector<string> excludeKeywordList() { DARABONBA_PTR_GET(excludeKeywordList_, vector<string>) };
    inline SearchCondition& setExcludeKeywordList(const vector<string> & excludeKeywordList) { DARABONBA_PTR_SET_VALUE(excludeKeywordList_, excludeKeywordList) };
    inline SearchCondition& setExcludeKeywordList(vector<string> && excludeKeywordList) { DARABONBA_PTR_SET_RVALUE(excludeKeywordList_, excludeKeywordList) };


    // excludeKeywordListInTitle Field Functions 
    bool hasExcludeKeywordListInTitle() const { return this->excludeKeywordListInTitle_ != nullptr;};
    void deleteExcludeKeywordListInTitle() { this->excludeKeywordListInTitle_ = nullptr;};
    inline const vector<string> & excludeKeywordListInTitle() const { DARABONBA_PTR_GET_CONST(excludeKeywordListInTitle_, vector<string>) };
    inline vector<string> excludeKeywordListInTitle() { DARABONBA_PTR_GET(excludeKeywordListInTitle_, vector<string>) };
    inline SearchCondition& setExcludeKeywordListInTitle(const vector<string> & excludeKeywordListInTitle) { DARABONBA_PTR_SET_VALUE(excludeKeywordListInTitle_, excludeKeywordListInTitle) };
    inline SearchCondition& setExcludeKeywordListInTitle(vector<string> && excludeKeywordListInTitle) { DARABONBA_PTR_SET_RVALUE(excludeKeywordListInTitle_, excludeKeywordListInTitle) };


    // excludeKeywordTagIds Field Functions 
    bool hasExcludeKeywordTagIds() const { return this->excludeKeywordTagIds_ != nullptr;};
    void deleteExcludeKeywordTagIds() { this->excludeKeywordTagIds_ = nullptr;};
    inline const vector<int64_t> & excludeKeywordTagIds() const { DARABONBA_PTR_GET_CONST(excludeKeywordTagIds_, vector<int64_t>) };
    inline vector<int64_t> excludeKeywordTagIds() { DARABONBA_PTR_GET(excludeKeywordTagIds_, vector<int64_t>) };
    inline SearchCondition& setExcludeKeywordTagIds(const vector<int64_t> & excludeKeywordTagIds) { DARABONBA_PTR_SET_VALUE(excludeKeywordTagIds_, excludeKeywordTagIds) };
    inline SearchCondition& setExcludeKeywordTagIds(vector<int64_t> && excludeKeywordTagIds) { DARABONBA_PTR_SET_RVALUE(excludeKeywordTagIds_, excludeKeywordTagIds) };


    // excludeMaterialTagList Field Functions 
    bool hasExcludeMaterialTagList() const { return this->excludeMaterialTagList_ != nullptr;};
    void deleteExcludeMaterialTagList() { this->excludeMaterialTagList_ = nullptr;};
    inline const vector<string> & excludeMaterialTagList() const { DARABONBA_PTR_GET_CONST(excludeMaterialTagList_, vector<string>) };
    inline vector<string> excludeMaterialTagList() { DARABONBA_PTR_GET(excludeMaterialTagList_, vector<string>) };
    inline SearchCondition& setExcludeMaterialTagList(const vector<string> & excludeMaterialTagList) { DARABONBA_PTR_SET_VALUE(excludeMaterialTagList_, excludeMaterialTagList) };
    inline SearchCondition& setExcludeMaterialTagList(vector<string> && excludeMaterialTagList) { DARABONBA_PTR_SET_RVALUE(excludeMaterialTagList_, excludeMaterialTagList) };


    // excludeMediaLibraryIdList Field Functions 
    bool hasExcludeMediaLibraryIdList() const { return this->excludeMediaLibraryIdList_ != nullptr;};
    void deleteExcludeMediaLibraryIdList() { this->excludeMediaLibraryIdList_ = nullptr;};
    inline const vector<string> & excludeMediaLibraryIdList() const { DARABONBA_PTR_GET_CONST(excludeMediaLibraryIdList_, vector<string>) };
    inline vector<string> excludeMediaLibraryIdList() { DARABONBA_PTR_GET(excludeMediaLibraryIdList_, vector<string>) };
    inline SearchCondition& setExcludeMediaLibraryIdList(const vector<string> & excludeMediaLibraryIdList) { DARABONBA_PTR_SET_VALUE(excludeMediaLibraryIdList_, excludeMediaLibraryIdList) };
    inline SearchCondition& setExcludeMediaLibraryIdList(vector<string> && excludeMediaLibraryIdList) { DARABONBA_PTR_SET_RVALUE(excludeMediaLibraryIdList_, excludeMediaLibraryIdList) };


    // excludeMediaNameList Field Functions 
    bool hasExcludeMediaNameList() const { return this->excludeMediaNameList_ != nullptr;};
    void deleteExcludeMediaNameList() { this->excludeMediaNameList_ = nullptr;};
    inline const vector<string> & excludeMediaNameList() const { DARABONBA_PTR_GET_CONST(excludeMediaNameList_, vector<string>) };
    inline vector<string> excludeMediaNameList() { DARABONBA_PTR_GET(excludeMediaNameList_, vector<string>) };
    inline SearchCondition& setExcludeMediaNameList(const vector<string> & excludeMediaNameList) { DARABONBA_PTR_SET_VALUE(excludeMediaNameList_, excludeMediaNameList) };
    inline SearchCondition& setExcludeMediaNameList(vector<string> && excludeMediaNameList) { DARABONBA_PTR_SET_RVALUE(excludeMediaNameList_, excludeMediaNameList) };


    // excludeMediaTypeList Field Functions 
    bool hasExcludeMediaTypeList() const { return this->excludeMediaTypeList_ != nullptr;};
    void deleteExcludeMediaTypeList() { this->excludeMediaTypeList_ = nullptr;};
    inline const vector<string> & excludeMediaTypeList() const { DARABONBA_PTR_GET_CONST(excludeMediaTypeList_, vector<string>) };
    inline vector<string> excludeMediaTypeList() { DARABONBA_PTR_GET(excludeMediaTypeList_, vector<string>) };
    inline SearchCondition& setExcludeMediaTypeList(const vector<string> & excludeMediaTypeList) { DARABONBA_PTR_SET_VALUE(excludeMediaTypeList_, excludeMediaTypeList) };
    inline SearchCondition& setExcludeMediaTypeList(vector<string> && excludeMediaTypeList) { DARABONBA_PTR_SET_RVALUE(excludeMediaTypeList_, excludeMediaTypeList) };


    // excludeMessageTypeList Field Functions 
    bool hasExcludeMessageTypeList() const { return this->excludeMessageTypeList_ != nullptr;};
    void deleteExcludeMessageTypeList() { this->excludeMessageTypeList_ = nullptr;};
    inline const vector<string> & excludeMessageTypeList() const { DARABONBA_PTR_GET_CONST(excludeMessageTypeList_, vector<string>) };
    inline vector<string> excludeMessageTypeList() { DARABONBA_PTR_GET(excludeMessageTypeList_, vector<string>) };
    inline SearchCondition& setExcludeMessageTypeList(const vector<string> & excludeMessageTypeList) { DARABONBA_PTR_SET_VALUE(excludeMessageTypeList_, excludeMessageTypeList) };
    inline SearchCondition& setExcludeMessageTypeList(vector<string> && excludeMessageTypeList) { DARABONBA_PTR_SET_RVALUE(excludeMessageTypeList_, excludeMessageTypeList) };


    // fieldConditions Field Functions 
    bool hasFieldConditions() const { return this->fieldConditions_ != nullptr;};
    void deleteFieldConditions() { this->fieldConditions_ = nullptr;};
    inline const vector<FieldCondition> & fieldConditions() const { DARABONBA_PTR_GET_CONST(fieldConditions_, vector<FieldCondition>) };
    inline vector<FieldCondition> fieldConditions() { DARABONBA_PTR_GET(fieldConditions_, vector<FieldCondition>) };
    inline SearchCondition& setFieldConditions(const vector<FieldCondition> & fieldConditions) { DARABONBA_PTR_SET_VALUE(fieldConditions_, fieldConditions) };
    inline SearchCondition& setFieldConditions(vector<FieldCondition> && fieldConditions) { DARABONBA_PTR_SET_RVALUE(fieldConditions_, fieldConditions) };


    // filterId Field Functions 
    bool hasFilterId() const { return this->filterId_ != nullptr;};
    void deleteFilterId() { this->filterId_ = nullptr;};
    inline int64_t filterId() const { DARABONBA_PTR_GET_DEFAULT(filterId_, 0L) };
    inline SearchCondition& setFilterId(int64_t filterId) { DARABONBA_PTR_SET_VALUE(filterId_, filterId) };


    // hasAudio Field Functions 
    bool hasHasAudio() const { return this->hasAudio_ != nullptr;};
    void deleteHasAudio() { this->hasAudio_ = nullptr;};
    inline bool hasAudio() const { DARABONBA_PTR_GET_DEFAULT(hasAudio_, false) };
    inline SearchCondition& setHasAudio(bool hasAudio) { DARABONBA_PTR_SET_VALUE(hasAudio_, hasAudio) };


    // hasImage Field Functions 
    bool hasHasImage() const { return this->hasImage_ != nullptr;};
    void deleteHasImage() { this->hasImage_ = nullptr;};
    inline bool hasImage() const { DARABONBA_PTR_GET_DEFAULT(hasImage_, false) };
    inline SearchCondition& setHasImage(bool hasImage) { DARABONBA_PTR_SET_VALUE(hasImage_, hasImage) };


    // hasMultiModeContent Field Functions 
    bool hasHasMultiModeContent() const { return this->hasMultiModeContent_ != nullptr;};
    void deleteHasMultiModeContent() { this->hasMultiModeContent_ = nullptr;};
    inline bool hasMultiModeContent() const { DARABONBA_PTR_GET_DEFAULT(hasMultiModeContent_, false) };
    inline SearchCondition& setHasMultiModeContent(bool hasMultiModeContent) { DARABONBA_PTR_SET_VALUE(hasMultiModeContent_, hasMultiModeContent) };


    // hasVideo Field Functions 
    bool hasHasVideo() const { return this->hasVideo_ != nullptr;};
    void deleteHasVideo() { this->hasVideo_ = nullptr;};
    inline bool hasVideo() const { DARABONBA_PTR_GET_DEFAULT(hasVideo_, false) };
    inline SearchCondition& setHasVideo(bool hasVideo) { DARABONBA_PTR_SET_VALUE(hasVideo_, hasVideo) };


    // hostNameList Field Functions 
    bool hasHostNameList() const { return this->hostNameList_ != nullptr;};
    void deleteHostNameList() { this->hostNameList_ = nullptr;};
    inline const vector<string> & hostNameList() const { DARABONBA_PTR_GET_CONST(hostNameList_, vector<string>) };
    inline vector<string> hostNameList() { DARABONBA_PTR_GET(hostNameList_, vector<string>) };
    inline SearchCondition& setHostNameList(const vector<string> & hostNameList) { DARABONBA_PTR_SET_VALUE(hostNameList_, hostNameList) };
    inline SearchCondition& setHostNameList(vector<string> && hostNameList) { DARABONBA_PTR_SET_RVALUE(hostNameList_, hostNameList) };


    // influenceLevel Field Functions 
    bool hasInfluenceLevel() const { return this->influenceLevel_ != nullptr;};
    void deleteInfluenceLevel() { this->influenceLevel_ = nullptr;};
    inline int64_t influenceLevel() const { DARABONBA_PTR_GET_DEFAULT(influenceLevel_, 0L) };
    inline SearchCondition& setInfluenceLevel(int64_t influenceLevel) { DARABONBA_PTR_SET_VALUE(influenceLevel_, influenceLevel) };


    // keywordTagIds Field Functions 
    bool hasKeywordTagIds() const { return this->keywordTagIds_ != nullptr;};
    void deleteKeywordTagIds() { this->keywordTagIds_ = nullptr;};
    inline const vector<int64_t> & keywordTagIds() const { DARABONBA_PTR_GET_CONST(keywordTagIds_, vector<int64_t>) };
    inline vector<int64_t> keywordTagIds() { DARABONBA_PTR_GET(keywordTagIds_, vector<int64_t>) };
    inline SearchCondition& setKeywordTagIds(const vector<int64_t> & keywordTagIds) { DARABONBA_PTR_SET_VALUE(keywordTagIds_, keywordTagIds) };
    inline SearchCondition& setKeywordTagIds(vector<int64_t> && keywordTagIds) { DARABONBA_PTR_SET_RVALUE(keywordTagIds_, keywordTagIds) };


    // likesLevel Field Functions 
    bool hasLikesLevel() const { return this->likesLevel_ != nullptr;};
    void deleteLikesLevel() { this->likesLevel_ = nullptr;};
    inline int32_t likesLevel() const { DARABONBA_PTR_GET_DEFAULT(likesLevel_, 0) };
    inline SearchCondition& setLikesLevel(int32_t likesLevel) { DARABONBA_PTR_SET_VALUE(likesLevel_, likesLevel) };


    // materialTagList Field Functions 
    bool hasMaterialTagList() const { return this->materialTagList_ != nullptr;};
    void deleteMaterialTagList() { this->materialTagList_ = nullptr;};
    inline const vector<string> & materialTagList() const { DARABONBA_PTR_GET_CONST(materialTagList_, vector<string>) };
    inline vector<string> materialTagList() { DARABONBA_PTR_GET(materialTagList_, vector<string>) };
    inline SearchCondition& setMaterialTagList(const vector<string> & materialTagList) { DARABONBA_PTR_SET_VALUE(materialTagList_, materialTagList) };
    inline SearchCondition& setMaterialTagList(vector<string> && materialTagList) { DARABONBA_PTR_SET_RVALUE(materialTagList_, materialTagList) };


    // mediaLibraryIdList Field Functions 
    bool hasMediaLibraryIdList() const { return this->mediaLibraryIdList_ != nullptr;};
    void deleteMediaLibraryIdList() { this->mediaLibraryIdList_ = nullptr;};
    inline const vector<string> & mediaLibraryIdList() const { DARABONBA_PTR_GET_CONST(mediaLibraryIdList_, vector<string>) };
    inline vector<string> mediaLibraryIdList() { DARABONBA_PTR_GET(mediaLibraryIdList_, vector<string>) };
    inline SearchCondition& setMediaLibraryIdList(const vector<string> & mediaLibraryIdList) { DARABONBA_PTR_SET_VALUE(mediaLibraryIdList_, mediaLibraryIdList) };
    inline SearchCondition& setMediaLibraryIdList(vector<string> && mediaLibraryIdList) { DARABONBA_PTR_SET_RVALUE(mediaLibraryIdList_, mediaLibraryIdList) };


    // mediaNameList Field Functions 
    bool hasMediaNameList() const { return this->mediaNameList_ != nullptr;};
    void deleteMediaNameList() { this->mediaNameList_ = nullptr;};
    inline const vector<string> & mediaNameList() const { DARABONBA_PTR_GET_CONST(mediaNameList_, vector<string>) };
    inline vector<string> mediaNameList() { DARABONBA_PTR_GET(mediaNameList_, vector<string>) };
    inline SearchCondition& setMediaNameList(const vector<string> & mediaNameList) { DARABONBA_PTR_SET_VALUE(mediaNameList_, mediaNameList) };
    inline SearchCondition& setMediaNameList(vector<string> && mediaNameList) { DARABONBA_PTR_SET_RVALUE(mediaNameList_, mediaNameList) };


    // mediaTypeList Field Functions 
    bool hasMediaTypeList() const { return this->mediaTypeList_ != nullptr;};
    void deleteMediaTypeList() { this->mediaTypeList_ = nullptr;};
    inline const vector<string> & mediaTypeList() const { DARABONBA_PTR_GET_CONST(mediaTypeList_, vector<string>) };
    inline vector<string> mediaTypeList() { DARABONBA_PTR_GET(mediaTypeList_, vector<string>) };
    inline SearchCondition& setMediaTypeList(const vector<string> & mediaTypeList) { DARABONBA_PTR_SET_VALUE(mediaTypeList_, mediaTypeList) };
    inline SearchCondition& setMediaTypeList(vector<string> && mediaTypeList) { DARABONBA_PTR_SET_RVALUE(mediaTypeList_, mediaTypeList) };


    // messageTypeList Field Functions 
    bool hasMessageTypeList() const { return this->messageTypeList_ != nullptr;};
    void deleteMessageTypeList() { this->messageTypeList_ = nullptr;};
    inline const vector<string> & messageTypeList() const { DARABONBA_PTR_GET_CONST(messageTypeList_, vector<string>) };
    inline vector<string> messageTypeList() { DARABONBA_PTR_GET(messageTypeList_, vector<string>) };
    inline SearchCondition& setMessageTypeList(const vector<string> & messageTypeList) { DARABONBA_PTR_SET_VALUE(messageTypeList_, messageTypeList) };
    inline SearchCondition& setMessageTypeList(vector<string> && messageTypeList) { DARABONBA_PTR_SET_RVALUE(messageTypeList_, messageTypeList) };


    // pageNow Field Functions 
    bool hasPageNow() const { return this->pageNow_ != nullptr;};
    void deletePageNow() { this->pageNow_ = nullptr;};
    inline int32_t pageNow() const { DARABONBA_PTR_GET_DEFAULT(pageNow_, 0) };
    inline SearchCondition& setPageNow(int32_t pageNow) { DARABONBA_PTR_SET_VALUE(pageNow_, pageNow) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchCondition& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentDocId Field Functions 
    bool hasParentDocId() const { return this->parentDocId_ != nullptr;};
    void deleteParentDocId() { this->parentDocId_ = nullptr;};
    inline string parentDocId() const { DARABONBA_PTR_GET_DEFAULT(parentDocId_, "") };
    inline SearchCondition& setParentDocId(string parentDocId) { DARABONBA_PTR_SET_VALUE(parentDocId_, parentDocId) };


    // posKeywordList Field Functions 
    bool hasPosKeywordList() const { return this->posKeywordList_ != nullptr;};
    void deletePosKeywordList() { this->posKeywordList_ = nullptr;};
    inline const vector<string> & posKeywordList() const { DARABONBA_PTR_GET_CONST(posKeywordList_, vector<string>) };
    inline vector<string> posKeywordList() { DARABONBA_PTR_GET(posKeywordList_, vector<string>) };
    inline SearchCondition& setPosKeywordList(const vector<string> & posKeywordList) { DARABONBA_PTR_SET_VALUE(posKeywordList_, posKeywordList) };
    inline SearchCondition& setPosKeywordList(vector<string> && posKeywordList) { DARABONBA_PTR_SET_RVALUE(posKeywordList_, posKeywordList) };


    // posKeywordListInTitle Field Functions 
    bool hasPosKeywordListInTitle() const { return this->posKeywordListInTitle_ != nullptr;};
    void deletePosKeywordListInTitle() { this->posKeywordListInTitle_ = nullptr;};
    inline const vector<string> & posKeywordListInTitle() const { DARABONBA_PTR_GET_CONST(posKeywordListInTitle_, vector<string>) };
    inline vector<string> posKeywordListInTitle() { DARABONBA_PTR_GET(posKeywordListInTitle_, vector<string>) };
    inline SearchCondition& setPosKeywordListInTitle(const vector<string> & posKeywordListInTitle) { DARABONBA_PTR_SET_VALUE(posKeywordListInTitle_, posKeywordListInTitle) };
    inline SearchCondition& setPosKeywordListInTitle(vector<string> && posKeywordListInTitle) { DARABONBA_PTR_SET_RVALUE(posKeywordListInTitle_, posKeywordListInTitle) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline SearchCondition& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // propagationLevel Field Functions 
    bool hasPropagationLevel() const { return this->propagationLevel_ != nullptr;};
    void deletePropagationLevel() { this->propagationLevel_ = nullptr;};
    inline int64_t propagationLevel() const { DARABONBA_PTR_GET_DEFAULT(propagationLevel_, 0L) };
    inline SearchCondition& setPropagationLevel(int64_t propagationLevel) { DARABONBA_PTR_SET_VALUE(propagationLevel_, propagationLevel) };


    // publishTimeEnd Field Functions 
    bool hasPublishTimeEnd() const { return this->publishTimeEnd_ != nullptr;};
    void deletePublishTimeEnd() { this->publishTimeEnd_ = nullptr;};
    inline int64_t publishTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(publishTimeEnd_, 0L) };
    inline SearchCondition& setPublishTimeEnd(int64_t publishTimeEnd) { DARABONBA_PTR_SET_VALUE(publishTimeEnd_, publishTimeEnd) };


    // publishTimeStart Field Functions 
    bool hasPublishTimeStart() const { return this->publishTimeStart_ != nullptr;};
    void deletePublishTimeStart() { this->publishTimeStart_ = nullptr;};
    inline int64_t publishTimeStart() const { DARABONBA_PTR_GET_DEFAULT(publishTimeStart_, 0L) };
    inline SearchCondition& setPublishTimeStart(int64_t publishTimeStart) { DARABONBA_PTR_SET_VALUE(publishTimeStart_, publishTimeStart) };


    // readsLevel Field Functions 
    bool hasReadsLevel() const { return this->readsLevel_ != nullptr;};
    void deleteReadsLevel() { this->readsLevel_ = nullptr;};
    inline int32_t readsLevel() const { DARABONBA_PTR_GET_DEFAULT(readsLevel_, 0) };
    inline SearchCondition& setReadsLevel(int32_t readsLevel) { DARABONBA_PTR_SET_VALUE(readsLevel_, readsLevel) };


    // relevanceLevel Field Functions 
    bool hasRelevanceLevel() const { return this->relevanceLevel_ != nullptr;};
    void deleteRelevanceLevel() { this->relevanceLevel_ = nullptr;};
    inline int32_t relevanceLevel() const { DARABONBA_PTR_GET_DEFAULT(relevanceLevel_, 0) };
    inline SearchCondition& setRelevanceLevel(int32_t relevanceLevel) { DARABONBA_PTR_SET_VALUE(relevanceLevel_, relevanceLevel) };


    // repostLevel Field Functions 
    bool hasRepostLevel() const { return this->repostLevel_ != nullptr;};
    void deleteRepostLevel() { this->repostLevel_ = nullptr;};
    inline int32_t repostLevel() const { DARABONBA_PTR_GET_DEFAULT(repostLevel_, 0) };
    inline SearchCondition& setRepostLevel(int32_t repostLevel) { DARABONBA_PTR_SET_VALUE(repostLevel_, repostLevel) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchCondition& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortByDirection Field Functions 
    bool hasSortByDirection() const { return this->sortByDirection_ != nullptr;};
    void deleteSortByDirection() { this->sortByDirection_ = nullptr;};
    inline string sortByDirection() const { DARABONBA_PTR_GET_DEFAULT(sortByDirection_, "") };
    inline SearchCondition& setSortByDirection(string sortByDirection) { DARABONBA_PTR_SET_VALUE(sortByDirection_, sortByDirection) };


    // topicList Field Functions 
    bool hasTopicList() const { return this->topicList_ != nullptr;};
    void deleteTopicList() { this->topicList_ = nullptr;};
    inline const vector<string> & topicList() const { DARABONBA_PTR_GET_CONST(topicList_, vector<string>) };
    inline vector<string> topicList() { DARABONBA_PTR_GET(topicList_, vector<string>) };
    inline SearchCondition& setTopicList(const vector<string> & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
    inline SearchCondition& setTopicList(vector<string> && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


    // updateTimeEnd Field Functions 
    bool hasUpdateTimeEnd() const { return this->updateTimeEnd_ != nullptr;};
    void deleteUpdateTimeEnd() { this->updateTimeEnd_ = nullptr;};
    inline int64_t updateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(updateTimeEnd_, 0L) };
    inline SearchCondition& setUpdateTimeEnd(int64_t updateTimeEnd) { DARABONBA_PTR_SET_VALUE(updateTimeEnd_, updateTimeEnd) };


    // updateTimeStart Field Functions 
    bool hasUpdateTimeStart() const { return this->updateTimeStart_ != nullptr;};
    void deleteUpdateTimeStart() { this->updateTimeStart_ = nullptr;};
    inline int64_t updateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(updateTimeStart_, 0L) };
    inline SearchCondition& setUpdateTimeStart(int64_t updateTimeStart) { DARABONBA_PTR_SET_VALUE(updateTimeStart_, updateTimeStart) };


  protected:
    std::shared_ptr<vector<string>> assKeywordList_ = nullptr;
    std::shared_ptr<vector<string>> atAuthorNameList_ = nullptr;
    std::shared_ptr<vector<string>> authorNameList_ = nullptr;
    std::shared_ptr<int32_t> commentsLevel_ = nullptr;
    std::shared_ptr<int32_t> contentLenLevel_ = nullptr;
    std::shared_ptr<int64_t> createTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> createTimeStart_ = nullptr;
    std::shared_ptr<string> docContentSign_ = nullptr;
    std::shared_ptr<vector<string>> docIdList_ = nullptr;
    std::shared_ptr<bool> duplicateRemoval_ = nullptr;
    std::shared_ptr<int32_t> emotionType_ = nullptr;
    std::shared_ptr<bool> enableKeywordHighlight_ = nullptr;
    std::shared_ptr<vector<string>> excludeAtAuthorNameList_ = nullptr;
    std::shared_ptr<vector<string>> excludeAuthorNameList_ = nullptr;
    std::shared_ptr<vector<string>> excludeHostNameList_ = nullptr;
    std::shared_ptr<vector<string>> excludeKeywordList_ = nullptr;
    std::shared_ptr<vector<string>> excludeKeywordListInTitle_ = nullptr;
    std::shared_ptr<vector<int64_t>> excludeKeywordTagIds_ = nullptr;
    std::shared_ptr<vector<string>> excludeMaterialTagList_ = nullptr;
    std::shared_ptr<vector<string>> excludeMediaLibraryIdList_ = nullptr;
    std::shared_ptr<vector<string>> excludeMediaNameList_ = nullptr;
    std::shared_ptr<vector<string>> excludeMediaTypeList_ = nullptr;
    std::shared_ptr<vector<string>> excludeMessageTypeList_ = nullptr;
    std::shared_ptr<vector<FieldCondition>> fieldConditions_ = nullptr;
    std::shared_ptr<int64_t> filterId_ = nullptr;
    std::shared_ptr<bool> hasAudio_ = nullptr;
    std::shared_ptr<bool> hasImage_ = nullptr;
    std::shared_ptr<bool> hasMultiModeContent_ = nullptr;
    std::shared_ptr<bool> hasVideo_ = nullptr;
    std::shared_ptr<vector<string>> hostNameList_ = nullptr;
    std::shared_ptr<int64_t> influenceLevel_ = nullptr;
    std::shared_ptr<vector<int64_t>> keywordTagIds_ = nullptr;
    std::shared_ptr<int32_t> likesLevel_ = nullptr;
    std::shared_ptr<vector<string>> materialTagList_ = nullptr;
    std::shared_ptr<vector<string>> mediaLibraryIdList_ = nullptr;
    std::shared_ptr<vector<string>> mediaNameList_ = nullptr;
    std::shared_ptr<vector<string>> mediaTypeList_ = nullptr;
    std::shared_ptr<vector<string>> messageTypeList_ = nullptr;
    std::shared_ptr<int32_t> pageNow_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> parentDocId_ = nullptr;
    std::shared_ptr<vector<string>> posKeywordList_ = nullptr;
    std::shared_ptr<vector<string>> posKeywordListInTitle_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<int64_t> propagationLevel_ = nullptr;
    std::shared_ptr<int64_t> publishTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> publishTimeStart_ = nullptr;
    std::shared_ptr<int32_t> readsLevel_ = nullptr;
    std::shared_ptr<int32_t> relevanceLevel_ = nullptr;
    std::shared_ptr<int32_t> repostLevel_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> sortByDirection_ = nullptr;
    std::shared_ptr<vector<string>> topicList_ = nullptr;
    std::shared_ptr<int64_t> updateTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> updateTimeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
