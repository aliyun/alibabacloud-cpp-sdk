// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUESTANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLIST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUESTANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList.hpp>
#include <alibabacloud/models/SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList.hpp>
#include <alibabacloud/models/SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList.hpp>
#include <alibabacloud/models/SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& obj) { 
      DARABONBA_PTR_TO_JSON(AnnotationAsrResult, annotationAsrResult_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatCustomizationDataInfoList, annotationMissionChatCustomizationDataInfoList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatId, annotationMissionChatId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatIntentUserSayInfoList, annotationMissionChatIntentUserSayInfoList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatTagInfoList, annotationMissionChatTagInfoList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionChatVocabularyInfoList, annotationMissionChatVocabularyInfoList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(AsrAnnotationStatus, asrAnnotationStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentAnnotationStatus, intentAnnotationStatus_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OccurTime, occurTime_);
      DARABONBA_PTR_TO_JSON(OriginalAsrResult, originalAsrResult_);
      DARABONBA_PTR_TO_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(TagAnnotationStatus, tagAnnotationStatus_);
      DARABONBA_PTR_TO_JSON(TranslationError, translationError_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnnotationAsrResult, annotationAsrResult_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatCustomizationDataInfoList, annotationMissionChatCustomizationDataInfoList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatId, annotationMissionChatId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatIntentUserSayInfoList, annotationMissionChatIntentUserSayInfoList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatTagInfoList, annotationMissionChatTagInfoList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionChatVocabularyInfoList, annotationMissionChatVocabularyInfoList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
      DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(AsrAnnotationStatus, asrAnnotationStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentAnnotationStatus, intentAnnotationStatus_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OccurTime, occurTime_);
      DARABONBA_PTR_FROM_JSON(OriginalAsrResult, originalAsrResult_);
      DARABONBA_PTR_FROM_JSON(SequenceId, sequenceId_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(TagAnnotationStatus, tagAnnotationStatus_);
      DARABONBA_PTR_FROM_JSON(TranslationError, translationError_);
    };
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList() = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList(const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList &) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList(SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList &&) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList() = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& operator=(const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList &) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& operator=(SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationAsrResult_ == nullptr
        && return this->annotationMissionChatCustomizationDataInfoList_ == nullptr && return this->annotationMissionChatId_ == nullptr && return this->annotationMissionChatIntentUserSayInfoList_ == nullptr && return this->annotationMissionChatTagInfoList_ == nullptr && return this->annotationMissionChatVocabularyInfoList_ == nullptr
        && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->annotationStatus_ == nullptr && return this->answer_ == nullptr && return this->asrAnnotationStatus_ == nullptr
        && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->intentAnnotationStatus_ == nullptr && return this->modifiedTime_ == nullptr && return this->occurTime_ == nullptr
        && return this->originalAsrResult_ == nullptr && return this->sequenceId_ == nullptr && return this->subStatus_ == nullptr && return this->tagAnnotationStatus_ == nullptr && return this->translationError_ == nullptr; };
    // annotationAsrResult Field Functions 
    bool hasAnnotationAsrResult() const { return this->annotationAsrResult_ != nullptr;};
    void deleteAnnotationAsrResult() { this->annotationAsrResult_ = nullptr;};
    inline string annotationAsrResult() const { DARABONBA_PTR_GET_DEFAULT(annotationAsrResult_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationAsrResult(string annotationAsrResult) { DARABONBA_PTR_SET_VALUE(annotationAsrResult_, annotationAsrResult) };


    // annotationMissionChatCustomizationDataInfoList Field Functions 
    bool hasAnnotationMissionChatCustomizationDataInfoList() const { return this->annotationMissionChatCustomizationDataInfoList_ != nullptr;};
    void deleteAnnotationMissionChatCustomizationDataInfoList() { this->annotationMissionChatCustomizationDataInfoList_ = nullptr;};
    inline const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList> & annotationMissionChatCustomizationDataInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatCustomizationDataInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList>) };
    inline vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList> annotationMissionChatCustomizationDataInfoList() { DARABONBA_PTR_GET(annotationMissionChatCustomizationDataInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList>) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatCustomizationDataInfoList(const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList> & annotationMissionChatCustomizationDataInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatCustomizationDataInfoList_, annotationMissionChatCustomizationDataInfoList) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatCustomizationDataInfoList(vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList> && annotationMissionChatCustomizationDataInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatCustomizationDataInfoList_, annotationMissionChatCustomizationDataInfoList) };


    // annotationMissionChatId Field Functions 
    bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
    void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
    inline string annotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


    // annotationMissionChatIntentUserSayInfoList Field Functions 
    bool hasAnnotationMissionChatIntentUserSayInfoList() const { return this->annotationMissionChatIntentUserSayInfoList_ != nullptr;};
    void deleteAnnotationMissionChatIntentUserSayInfoList() { this->annotationMissionChatIntentUserSayInfoList_ = nullptr;};
    inline const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList> & annotationMissionChatIntentUserSayInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatIntentUserSayInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList>) };
    inline vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList> annotationMissionChatIntentUserSayInfoList() { DARABONBA_PTR_GET(annotationMissionChatIntentUserSayInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList>) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatIntentUserSayInfoList(const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList> & annotationMissionChatIntentUserSayInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatIntentUserSayInfoList_, annotationMissionChatIntentUserSayInfoList) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatIntentUserSayInfoList(vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList> && annotationMissionChatIntentUserSayInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatIntentUserSayInfoList_, annotationMissionChatIntentUserSayInfoList) };


    // annotationMissionChatTagInfoList Field Functions 
    bool hasAnnotationMissionChatTagInfoList() const { return this->annotationMissionChatTagInfoList_ != nullptr;};
    void deleteAnnotationMissionChatTagInfoList() { this->annotationMissionChatTagInfoList_ = nullptr;};
    inline const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList> & annotationMissionChatTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatTagInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList>) };
    inline vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList> annotationMissionChatTagInfoList() { DARABONBA_PTR_GET(annotationMissionChatTagInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList>) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatTagInfoList(const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList> & annotationMissionChatTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatTagInfoList_, annotationMissionChatTagInfoList) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatTagInfoList(vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList> && annotationMissionChatTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatTagInfoList_, annotationMissionChatTagInfoList) };


    // annotationMissionChatVocabularyInfoList Field Functions 
    bool hasAnnotationMissionChatVocabularyInfoList() const { return this->annotationMissionChatVocabularyInfoList_ != nullptr;};
    void deleteAnnotationMissionChatVocabularyInfoList() { this->annotationMissionChatVocabularyInfoList_ = nullptr;};
    inline const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList> & annotationMissionChatVocabularyInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatVocabularyInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList>) };
    inline vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList> annotationMissionChatVocabularyInfoList() { DARABONBA_PTR_GET(annotationMissionChatVocabularyInfoList_, vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList>) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatVocabularyInfoList(const vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList> & annotationMissionChatVocabularyInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatVocabularyInfoList_, annotationMissionChatVocabularyInfoList) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionChatVocabularyInfoList(vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList> && annotationMissionChatVocabularyInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatVocabularyInfoList_, annotationMissionChatVocabularyInfoList) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // annotationStatus Field Functions 
    bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
    void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
    inline int32_t annotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string answer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // asrAnnotationStatus Field Functions 
    bool hasAsrAnnotationStatus() const { return this->asrAnnotationStatus_ != nullptr;};
    void deleteAsrAnnotationStatus() { this->asrAnnotationStatus_ = nullptr;};
    inline int32_t asrAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(asrAnnotationStatus_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setAsrAnnotationStatus(int32_t asrAnnotationStatus) { DARABONBA_PTR_SET_VALUE(asrAnnotationStatus_, asrAnnotationStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentAnnotationStatus Field Functions 
    bool hasIntentAnnotationStatus() const { return this->intentAnnotationStatus_ != nullptr;};
    void deleteIntentAnnotationStatus() { this->intentAnnotationStatus_ = nullptr;};
    inline int32_t intentAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(intentAnnotationStatus_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setIntentAnnotationStatus(int32_t intentAnnotationStatus) { DARABONBA_PTR_SET_VALUE(intentAnnotationStatus_, intentAnnotationStatus) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // occurTime Field Functions 
    bool hasOccurTime() const { return this->occurTime_ != nullptr;};
    void deleteOccurTime() { this->occurTime_ = nullptr;};
    inline int64_t occurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, 0L) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setOccurTime(int64_t occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


    // originalAsrResult Field Functions 
    bool hasOriginalAsrResult() const { return this->originalAsrResult_ != nullptr;};
    void deleteOriginalAsrResult() { this->originalAsrResult_ = nullptr;};
    inline string originalAsrResult() const { DARABONBA_PTR_GET_DEFAULT(originalAsrResult_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setOriginalAsrResult(string originalAsrResult) { DARABONBA_PTR_SET_VALUE(originalAsrResult_, originalAsrResult) };


    // sequenceId Field Functions 
    bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
    void deleteSequenceId() { this->sequenceId_ = nullptr;};
    inline string sequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline int32_t subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setSubStatus(int32_t subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // tagAnnotationStatus Field Functions 
    bool hasTagAnnotationStatus() const { return this->tagAnnotationStatus_ != nullptr;};
    void deleteTagAnnotationStatus() { this->tagAnnotationStatus_ = nullptr;};
    inline int32_t tagAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(tagAnnotationStatus_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setTagAnnotationStatus(int32_t tagAnnotationStatus) { DARABONBA_PTR_SET_VALUE(tagAnnotationStatus_, tagAnnotationStatus) };


    // translationError Field Functions 
    bool hasTranslationError() const { return this->translationError_ != nullptr;};
    void deleteTranslationError() { this->translationError_ = nullptr;};
    inline int32_t translationError() const { DARABONBA_PTR_GET_DEFAULT(translationError_, 0) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatList& setTranslationError(int32_t translationError) { DARABONBA_PTR_SET_VALUE(translationError_, translationError) };


  protected:
    std::shared_ptr<string> annotationAsrResult_ = nullptr;
    std::shared_ptr<vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList>> annotationMissionChatCustomizationDataInfoList_ = nullptr;
    // chat id
    std::shared_ptr<string> annotationMissionChatId_ = nullptr;
    std::shared_ptr<vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList>> annotationMissionChatIntentUserSayInfoList_ = nullptr;
    std::shared_ptr<vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList>> annotationMissionChatTagInfoList_ = nullptr;
    std::shared_ptr<vector<Models::SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList>> annotationMissionChatVocabularyInfoList_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<int32_t> annotationStatus_ = nullptr;
    std::shared_ptr<string> answer_ = nullptr;
    std::shared_ptr<int32_t> asrAnnotationStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> intentAnnotationStatus_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<int64_t> occurTime_ = nullptr;
    std::shared_ptr<string> originalAsrResult_ = nullptr;
    std::shared_ptr<string> sequenceId_ = nullptr;
    std::shared_ptr<int32_t> subStatus_ = nullptr;
    std::shared_ptr<int32_t> tagAnnotationStatus_ = nullptr;
    std::shared_ptr<int32_t> translationError_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
