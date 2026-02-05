// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_TO_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionList, annotationMissionSessionList_);
      DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionListJsonString, annotationMissionSessionListJsonString_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    SaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListRequest(const SaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListRequest(SaveAnnotationMissionSessionListRequest &&) = default ;
    SaveAnnotationMissionSessionListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListRequest() = default ;
    SaveAnnotationMissionSessionListRequest& operator=(const SaveAnnotationMissionSessionListRequest &) = default ;
    SaveAnnotationMissionSessionListRequest& operator=(SaveAnnotationMissionSessionListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AnnotationMissionSessionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnnotationMissionSessionList& obj) { 
        DARABONBA_PTR_TO_JSON(AnnotationMissionChatList, annotationMissionChatList_);
        DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
        DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
        DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, AnnotationMissionSessionList& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnotationMissionChatList, annotationMissionChatList_);
        DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
        DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
        DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      AnnotationMissionSessionList() = default ;
      AnnotationMissionSessionList(const AnnotationMissionSessionList &) = default ;
      AnnotationMissionSessionList(AnnotationMissionSessionList &&) = default ;
      AnnotationMissionSessionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnnotationMissionSessionList() = default ;
      AnnotationMissionSessionList& operator=(const AnnotationMissionSessionList &) = default ;
      AnnotationMissionSessionList& operator=(AnnotationMissionSessionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AnnotationMissionChatList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnnotationMissionChatList& obj) { 
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
        friend void from_json(const Darabonba::Json& j, AnnotationMissionChatList& obj) { 
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
        AnnotationMissionChatList() = default ;
        AnnotationMissionChatList(const AnnotationMissionChatList &) = default ;
        AnnotationMissionChatList(AnnotationMissionChatList &&) = default ;
        AnnotationMissionChatList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnnotationMissionChatList() = default ;
        AnnotationMissionChatList& operator=(const AnnotationMissionChatList &) = default ;
        AnnotationMissionChatList& operator=(AnnotationMissionChatList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AnnotationMissionChatVocabularyInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnnotationMissionChatVocabularyInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatVocabularyInfoId, annotationMissionChatVocabularyInfoId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_TO_JSON(Create, create_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Delete, delete_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_TO_JSON(Vocabulary, vocabulary_);
            DARABONBA_PTR_TO_JSON(VocabularyDescription, vocabularyDescription_);
            DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
            DARABONBA_PTR_TO_JSON(VocabularyName, vocabularyName_);
            DARABONBA_PTR_TO_JSON(VocabularyWeight, vocabularyWeight_);
          };
          friend void from_json(const Darabonba::Json& j, AnnotationMissionChatVocabularyInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatVocabularyInfoId, annotationMissionChatVocabularyInfoId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_FROM_JSON(Create, create_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Delete, delete_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_FROM_JSON(Vocabulary, vocabulary_);
            DARABONBA_PTR_FROM_JSON(VocabularyDescription, vocabularyDescription_);
            DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
            DARABONBA_PTR_FROM_JSON(VocabularyName, vocabularyName_);
            DARABONBA_PTR_FROM_JSON(VocabularyWeight, vocabularyWeight_);
          };
          AnnotationMissionChatVocabularyInfoList() = default ;
          AnnotationMissionChatVocabularyInfoList(const AnnotationMissionChatVocabularyInfoList &) = default ;
          AnnotationMissionChatVocabularyInfoList(AnnotationMissionChatVocabularyInfoList &&) = default ;
          AnnotationMissionChatVocabularyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnnotationMissionChatVocabularyInfoList() = default ;
          AnnotationMissionChatVocabularyInfoList& operator=(const AnnotationMissionChatVocabularyInfoList &) = default ;
          AnnotationMissionChatVocabularyInfoList& operator=(AnnotationMissionChatVocabularyInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && this->annotationMissionChatVocabularyInfoId_ == nullptr && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->create_ == nullptr && this->createTime_ == nullptr
        && this->delete_ == nullptr && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr && this->vocabulary_ == nullptr && this->vocabularyDescription_ == nullptr
        && this->vocabularyId_ == nullptr && this->vocabularyName_ == nullptr && this->vocabularyWeight_ == nullptr; };
          // annotationMissionChatId Field Functions 
          bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
          void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
          inline string getAnnotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


          // annotationMissionChatVocabularyInfoId Field Functions 
          bool hasAnnotationMissionChatVocabularyInfoId() const { return this->annotationMissionChatVocabularyInfoId_ != nullptr;};
          void deleteAnnotationMissionChatVocabularyInfoId() { this->annotationMissionChatVocabularyInfoId_ = nullptr;};
          inline string getAnnotationMissionChatVocabularyInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatVocabularyInfoId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setAnnotationMissionChatVocabularyInfoId(string annotationMissionChatVocabularyInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatVocabularyInfoId_, annotationMissionChatVocabularyInfoId) };


          // annotationMissionId Field Functions 
          bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
          void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
          inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


          // annotationMissionSessionId Field Functions 
          bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
          void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
          inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


          // create Field Functions 
          bool hasCreate() const { return this->create_ != nullptr;};
          void deleteCreate() { this->create_ = nullptr;};
          inline bool getCreate() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
          inline AnnotationMissionChatVocabularyInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline AnnotationMissionChatVocabularyInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // delete Field Functions 
          bool hasDelete() const { return this->delete_ != nullptr;};
          void deleteDelete() { this->delete_ = nullptr;};
          inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
          inline AnnotationMissionChatVocabularyInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
          inline AnnotationMissionChatVocabularyInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


          // vocabulary Field Functions 
          bool hasVocabulary() const { return this->vocabulary_ != nullptr;};
          void deleteVocabulary() { this->vocabulary_ = nullptr;};
          inline string getVocabulary() const { DARABONBA_PTR_GET_DEFAULT(vocabulary_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setVocabulary(string vocabulary) { DARABONBA_PTR_SET_VALUE(vocabulary_, vocabulary) };


          // vocabularyDescription Field Functions 
          bool hasVocabularyDescription() const { return this->vocabularyDescription_ != nullptr;};
          void deleteVocabularyDescription() { this->vocabularyDescription_ = nullptr;};
          inline string getVocabularyDescription() const { DARABONBA_PTR_GET_DEFAULT(vocabularyDescription_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setVocabularyDescription(string vocabularyDescription) { DARABONBA_PTR_SET_VALUE(vocabularyDescription_, vocabularyDescription) };


          // vocabularyId Field Functions 
          bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
          void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
          inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


          // vocabularyName Field Functions 
          bool hasVocabularyName() const { return this->vocabularyName_ != nullptr;};
          void deleteVocabularyName() { this->vocabularyName_ = nullptr;};
          inline string getVocabularyName() const { DARABONBA_PTR_GET_DEFAULT(vocabularyName_, "") };
          inline AnnotationMissionChatVocabularyInfoList& setVocabularyName(string vocabularyName) { DARABONBA_PTR_SET_VALUE(vocabularyName_, vocabularyName) };


          // vocabularyWeight Field Functions 
          bool hasVocabularyWeight() const { return this->vocabularyWeight_ != nullptr;};
          void deleteVocabularyWeight() { this->vocabularyWeight_ = nullptr;};
          inline int32_t getVocabularyWeight() const { DARABONBA_PTR_GET_DEFAULT(vocabularyWeight_, 0) };
          inline AnnotationMissionChatVocabularyInfoList& setVocabularyWeight(int32_t vocabularyWeight) { DARABONBA_PTR_SET_VALUE(vocabularyWeight_, vocabularyWeight) };


        protected:
          // chat id
          shared_ptr<string> annotationMissionChatId_ {};
          // id
          shared_ptr<string> annotationMissionChatVocabularyInfoId_ {};
          shared_ptr<string> annotationMissionId_ {};
          shared_ptr<string> annotationMissionSessionId_ {};
          shared_ptr<bool> create_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<bool> delete_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<int64_t> modifiedTime_ {};
          shared_ptr<string> vocabulary_ {};
          shared_ptr<string> vocabularyDescription_ {};
          shared_ptr<string> vocabularyId_ {};
          shared_ptr<string> vocabularyName_ {};
          shared_ptr<int32_t> vocabularyWeight_ {};
        };

        class AnnotationMissionChatTagInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnnotationMissionChatTagInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatTagInfoId, annotationMissionChatTagInfoId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
            DARABONBA_PTR_TO_JSON(Create, create_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Delete, delete_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          };
          friend void from_json(const Darabonba::Json& j, AnnotationMissionChatTagInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatTagInfoId, annotationMissionChatTagInfoId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoId, annotationMissionTagInfoId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionTagInfoName, annotationMissionTagInfoName_);
            DARABONBA_PTR_FROM_JSON(Create, create_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Delete, delete_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          };
          AnnotationMissionChatTagInfoList() = default ;
          AnnotationMissionChatTagInfoList(const AnnotationMissionChatTagInfoList &) = default ;
          AnnotationMissionChatTagInfoList(AnnotationMissionChatTagInfoList &&) = default ;
          AnnotationMissionChatTagInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnnotationMissionChatTagInfoList() = default ;
          AnnotationMissionChatTagInfoList& operator=(const AnnotationMissionChatTagInfoList &) = default ;
          AnnotationMissionChatTagInfoList& operator=(AnnotationMissionChatTagInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && this->annotationMissionChatTagInfoId_ == nullptr && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->annotationMissionTagInfoId_ == nullptr && this->annotationMissionTagInfoName_ == nullptr
        && this->create_ == nullptr && this->createTime_ == nullptr && this->delete_ == nullptr && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr; };
          // annotationMissionChatId Field Functions 
          bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
          void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
          inline string getAnnotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


          // annotationMissionChatTagInfoId Field Functions 
          bool hasAnnotationMissionChatTagInfoId() const { return this->annotationMissionChatTagInfoId_ != nullptr;};
          void deleteAnnotationMissionChatTagInfoId() { this->annotationMissionChatTagInfoId_ = nullptr;};
          inline string getAnnotationMissionChatTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatTagInfoId_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionChatTagInfoId(string annotationMissionChatTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatTagInfoId_, annotationMissionChatTagInfoId) };


          // annotationMissionId Field Functions 
          bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
          void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
          inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


          // annotationMissionSessionId Field Functions 
          bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
          void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
          inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


          // annotationMissionTagInfoId Field Functions 
          bool hasAnnotationMissionTagInfoId() const { return this->annotationMissionTagInfoId_ != nullptr;};
          void deleteAnnotationMissionTagInfoId() { this->annotationMissionTagInfoId_ = nullptr;};
          inline string getAnnotationMissionTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoId_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionTagInfoId(string annotationMissionTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoId_, annotationMissionTagInfoId) };


          // annotationMissionTagInfoName Field Functions 
          bool hasAnnotationMissionTagInfoName() const { return this->annotationMissionTagInfoName_ != nullptr;};
          void deleteAnnotationMissionTagInfoName() { this->annotationMissionTagInfoName_ = nullptr;};
          inline string getAnnotationMissionTagInfoName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoName_, "") };
          inline AnnotationMissionChatTagInfoList& setAnnotationMissionTagInfoName(string annotationMissionTagInfoName) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoName_, annotationMissionTagInfoName) };


          // create Field Functions 
          bool hasCreate() const { return this->create_ != nullptr;};
          void deleteCreate() { this->create_ = nullptr;};
          inline bool getCreate() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
          inline AnnotationMissionChatTagInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline AnnotationMissionChatTagInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // delete Field Functions 
          bool hasDelete() const { return this->delete_ != nullptr;};
          void deleteDelete() { this->delete_ = nullptr;};
          inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
          inline AnnotationMissionChatTagInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AnnotationMissionChatTagInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
          inline AnnotationMissionChatTagInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        protected:
          // chat id
          shared_ptr<string> annotationMissionChatId_ {};
          // id
          shared_ptr<string> annotationMissionChatTagInfoId_ {};
          shared_ptr<string> annotationMissionId_ {};
          shared_ptr<string> annotationMissionSessionId_ {};
          // tag id
          shared_ptr<string> annotationMissionTagInfoId_ {};
          shared_ptr<string> annotationMissionTagInfoName_ {};
          shared_ptr<bool> create_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<bool> delete_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<int64_t> modifiedTime_ {};
        };

        class AnnotationMissionChatIntentUserSayInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnnotationMissionChatIntentUserSayInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatIntentUserSayInfoId, annotationMissionChatIntentUserSayInfoId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_TO_JSON(BotId, botId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Create, create_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Delete, delete_);
            DARABONBA_PTR_TO_JSON(DialogId, dialogId_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(IntentId, intentId_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          };
          friend void from_json(const Darabonba::Json& j, AnnotationMissionChatIntentUserSayInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatIntentUserSayInfoId, annotationMissionChatIntentUserSayInfoId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_FROM_JSON(BotId, botId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Create, create_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Delete, delete_);
            DARABONBA_PTR_FROM_JSON(DialogId, dialogId_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          };
          AnnotationMissionChatIntentUserSayInfoList() = default ;
          AnnotationMissionChatIntentUserSayInfoList(const AnnotationMissionChatIntentUserSayInfoList &) = default ;
          AnnotationMissionChatIntentUserSayInfoList(AnnotationMissionChatIntentUserSayInfoList &&) = default ;
          AnnotationMissionChatIntentUserSayInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnnotationMissionChatIntentUserSayInfoList() = default ;
          AnnotationMissionChatIntentUserSayInfoList& operator=(const AnnotationMissionChatIntentUserSayInfoList &) = default ;
          AnnotationMissionChatIntentUserSayInfoList& operator=(AnnotationMissionChatIntentUserSayInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && this->annotationMissionChatIntentUserSayInfoId_ == nullptr && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->botId_ == nullptr && this->content_ == nullptr
        && this->create_ == nullptr && this->createTime_ == nullptr && this->delete_ == nullptr && this->dialogId_ == nullptr && this->instanceId_ == nullptr
        && this->intentId_ == nullptr && this->modifiedTime_ == nullptr; };
          // annotationMissionChatId Field Functions 
          bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
          void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
          inline string getAnnotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


          // annotationMissionChatIntentUserSayInfoId Field Functions 
          bool hasAnnotationMissionChatIntentUserSayInfoId() const { return this->annotationMissionChatIntentUserSayInfoId_ != nullptr;};
          void deleteAnnotationMissionChatIntentUserSayInfoId() { this->annotationMissionChatIntentUserSayInfoId_ = nullptr;};
          inline string getAnnotationMissionChatIntentUserSayInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatIntentUserSayInfoId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionChatIntentUserSayInfoId(string annotationMissionChatIntentUserSayInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatIntentUserSayInfoId_, annotationMissionChatIntentUserSayInfoId) };


          // annotationMissionId Field Functions 
          bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
          void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
          inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


          // annotationMissionSessionId Field Functions 
          bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
          void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
          inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


          // botId Field Functions 
          bool hasBotId() const { return this->botId_ != nullptr;};
          void deleteBotId() { this->botId_ = nullptr;};
          inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // create Field Functions 
          bool hasCreate() const { return this->create_ != nullptr;};
          void deleteCreate() { this->create_ = nullptr;};
          inline bool getCreate() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
          inline AnnotationMissionChatIntentUserSayInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline AnnotationMissionChatIntentUserSayInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // delete Field Functions 
          bool hasDelete() const { return this->delete_ != nullptr;};
          void deleteDelete() { this->delete_ = nullptr;};
          inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
          inline AnnotationMissionChatIntentUserSayInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


          // dialogId Field Functions 
          bool hasDialogId() const { return this->dialogId_ != nullptr;};
          void deleteDialogId() { this->dialogId_ = nullptr;};
          inline int64_t getDialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, 0L) };
          inline AnnotationMissionChatIntentUserSayInfoList& setDialogId(int64_t dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AnnotationMissionChatIntentUserSayInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // intentId Field Functions 
          bool hasIntentId() const { return this->intentId_ != nullptr;};
          void deleteIntentId() { this->intentId_ = nullptr;};
          inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
          inline AnnotationMissionChatIntentUserSayInfoList& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
          inline AnnotationMissionChatIntentUserSayInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        protected:
          shared_ptr<string> annotationMissionChatId_ {};
          shared_ptr<string> annotationMissionChatIntentUserSayInfoId_ {};
          shared_ptr<string> annotationMissionId_ {};
          shared_ptr<string> annotationMissionSessionId_ {};
          shared_ptr<string> botId_ {};
          shared_ptr<string> content_ {};
          shared_ptr<bool> create_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<bool> delete_ {};
          shared_ptr<int64_t> dialogId_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<int64_t> intentId_ {};
          shared_ptr<int64_t> modifiedTime_ {};
        };

        class AnnotationMissionChatCustomizationDataInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnnotationMissionChatCustomizationDataInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatCustomizationDataInfoId, annotationMissionChatCustomizationDataInfoId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_TO_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Create, create_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(CustomizationDataDescription, customizationDataDescription_);
            DARABONBA_PTR_TO_JSON(CustomizationDataId, customizationDataId_);
            DARABONBA_PTR_TO_JSON(CustomizationDataName, customizationDataName_);
            DARABONBA_PTR_TO_JSON(CustomizationDataWeight, customizationDataWeight_);
            DARABONBA_PTR_TO_JSON(Delete, delete_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          };
          friend void from_json(const Darabonba::Json& j, AnnotationMissionChatCustomizationDataInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatCustomizationDataInfoId, annotationMissionChatCustomizationDataInfoId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionChatId, annotationMissionChatId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
            DARABONBA_PTR_FROM_JSON(AnnotationMissionSessionId, annotationMissionSessionId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Create, create_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(CustomizationDataDescription, customizationDataDescription_);
            DARABONBA_PTR_FROM_JSON(CustomizationDataId, customizationDataId_);
            DARABONBA_PTR_FROM_JSON(CustomizationDataName, customizationDataName_);
            DARABONBA_PTR_FROM_JSON(CustomizationDataWeight, customizationDataWeight_);
            DARABONBA_PTR_FROM_JSON(Delete, delete_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          };
          AnnotationMissionChatCustomizationDataInfoList() = default ;
          AnnotationMissionChatCustomizationDataInfoList(const AnnotationMissionChatCustomizationDataInfoList &) = default ;
          AnnotationMissionChatCustomizationDataInfoList(AnnotationMissionChatCustomizationDataInfoList &&) = default ;
          AnnotationMissionChatCustomizationDataInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnnotationMissionChatCustomizationDataInfoList() = default ;
          AnnotationMissionChatCustomizationDataInfoList& operator=(const AnnotationMissionChatCustomizationDataInfoList &) = default ;
          AnnotationMissionChatCustomizationDataInfoList& operator=(AnnotationMissionChatCustomizationDataInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->annotationMissionChatCustomizationDataInfoId_ == nullptr
        && this->annotationMissionChatId_ == nullptr && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->content_ == nullptr && this->create_ == nullptr
        && this->createTime_ == nullptr && this->customizationDataDescription_ == nullptr && this->customizationDataId_ == nullptr && this->customizationDataName_ == nullptr && this->customizationDataWeight_ == nullptr
        && this->delete_ == nullptr && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr; };
          // annotationMissionChatCustomizationDataInfoId Field Functions 
          bool hasAnnotationMissionChatCustomizationDataInfoId() const { return this->annotationMissionChatCustomizationDataInfoId_ != nullptr;};
          void deleteAnnotationMissionChatCustomizationDataInfoId() { this->annotationMissionChatCustomizationDataInfoId_ = nullptr;};
          inline string getAnnotationMissionChatCustomizationDataInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatCustomizationDataInfoId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionChatCustomizationDataInfoId(string annotationMissionChatCustomizationDataInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatCustomizationDataInfoId_, annotationMissionChatCustomizationDataInfoId) };


          // annotationMissionChatId Field Functions 
          bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
          void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
          inline string getAnnotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


          // annotationMissionId Field Functions 
          bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
          void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
          inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


          // annotationMissionSessionId Field Functions 
          bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
          void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
          inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // create Field Functions 
          bool hasCreate() const { return this->create_ != nullptr;};
          void deleteCreate() { this->create_ = nullptr;};
          inline bool getCreate() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
          inline AnnotationMissionChatCustomizationDataInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline AnnotationMissionChatCustomizationDataInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // customizationDataDescription Field Functions 
          bool hasCustomizationDataDescription() const { return this->customizationDataDescription_ != nullptr;};
          void deleteCustomizationDataDescription() { this->customizationDataDescription_ = nullptr;};
          inline string getCustomizationDataDescription() const { DARABONBA_PTR_GET_DEFAULT(customizationDataDescription_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setCustomizationDataDescription(string customizationDataDescription) { DARABONBA_PTR_SET_VALUE(customizationDataDescription_, customizationDataDescription) };


          // customizationDataId Field Functions 
          bool hasCustomizationDataId() const { return this->customizationDataId_ != nullptr;};
          void deleteCustomizationDataId() { this->customizationDataId_ = nullptr;};
          inline string getCustomizationDataId() const { DARABONBA_PTR_GET_DEFAULT(customizationDataId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setCustomizationDataId(string customizationDataId) { DARABONBA_PTR_SET_VALUE(customizationDataId_, customizationDataId) };


          // customizationDataName Field Functions 
          bool hasCustomizationDataName() const { return this->customizationDataName_ != nullptr;};
          void deleteCustomizationDataName() { this->customizationDataName_ = nullptr;};
          inline string getCustomizationDataName() const { DARABONBA_PTR_GET_DEFAULT(customizationDataName_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setCustomizationDataName(string customizationDataName) { DARABONBA_PTR_SET_VALUE(customizationDataName_, customizationDataName) };


          // customizationDataWeight Field Functions 
          bool hasCustomizationDataWeight() const { return this->customizationDataWeight_ != nullptr;};
          void deleteCustomizationDataWeight() { this->customizationDataWeight_ = nullptr;};
          inline int32_t getCustomizationDataWeight() const { DARABONBA_PTR_GET_DEFAULT(customizationDataWeight_, 0) };
          inline AnnotationMissionChatCustomizationDataInfoList& setCustomizationDataWeight(int32_t customizationDataWeight) { DARABONBA_PTR_SET_VALUE(customizationDataWeight_, customizationDataWeight) };


          // delete Field Functions 
          bool hasDelete() const { return this->delete_ != nullptr;};
          void deleteDelete() { this->delete_ = nullptr;};
          inline bool getDelete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
          inline AnnotationMissionChatCustomizationDataInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AnnotationMissionChatCustomizationDataInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
          inline AnnotationMissionChatCustomizationDataInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        protected:
          // id
          shared_ptr<string> annotationMissionChatCustomizationDataInfoId_ {};
          // chat id
          shared_ptr<string> annotationMissionChatId_ {};
          shared_ptr<string> annotationMissionId_ {};
          shared_ptr<string> annotationMissionSessionId_ {};
          shared_ptr<string> content_ {};
          shared_ptr<bool> create_ {};
          shared_ptr<int64_t> createTime_ {};
          shared_ptr<string> customizationDataDescription_ {};
          // id
          shared_ptr<string> customizationDataId_ {};
          shared_ptr<string> customizationDataName_ {};
          shared_ptr<int32_t> customizationDataWeight_ {};
          shared_ptr<bool> delete_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<int64_t> modifiedTime_ {};
        };

        virtual bool empty() const override { return this->annotationAsrResult_ == nullptr
        && this->annotationMissionChatCustomizationDataInfoList_ == nullptr && this->annotationMissionChatId_ == nullptr && this->annotationMissionChatIntentUserSayInfoList_ == nullptr && this->annotationMissionChatTagInfoList_ == nullptr && this->annotationMissionChatVocabularyInfoList_ == nullptr
        && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->annotationStatus_ == nullptr && this->answer_ == nullptr && this->asrAnnotationStatus_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->intentAnnotationStatus_ == nullptr && this->modifiedTime_ == nullptr && this->occurTime_ == nullptr
        && this->originalAsrResult_ == nullptr && this->sequenceId_ == nullptr && this->subStatus_ == nullptr && this->tagAnnotationStatus_ == nullptr && this->translationError_ == nullptr; };
        // annotationAsrResult Field Functions 
        bool hasAnnotationAsrResult() const { return this->annotationAsrResult_ != nullptr;};
        void deleteAnnotationAsrResult() { this->annotationAsrResult_ = nullptr;};
        inline string getAnnotationAsrResult() const { DARABONBA_PTR_GET_DEFAULT(annotationAsrResult_, "") };
        inline AnnotationMissionChatList& setAnnotationAsrResult(string annotationAsrResult) { DARABONBA_PTR_SET_VALUE(annotationAsrResult_, annotationAsrResult) };


        // annotationMissionChatCustomizationDataInfoList Field Functions 
        bool hasAnnotationMissionChatCustomizationDataInfoList() const { return this->annotationMissionChatCustomizationDataInfoList_ != nullptr;};
        void deleteAnnotationMissionChatCustomizationDataInfoList() { this->annotationMissionChatCustomizationDataInfoList_ = nullptr;};
        inline const vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList> & getAnnotationMissionChatCustomizationDataInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatCustomizationDataInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList>) };
        inline vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList> getAnnotationMissionChatCustomizationDataInfoList() { DARABONBA_PTR_GET(annotationMissionChatCustomizationDataInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList>) };
        inline AnnotationMissionChatList& setAnnotationMissionChatCustomizationDataInfoList(const vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList> & annotationMissionChatCustomizationDataInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatCustomizationDataInfoList_, annotationMissionChatCustomizationDataInfoList) };
        inline AnnotationMissionChatList& setAnnotationMissionChatCustomizationDataInfoList(vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList> && annotationMissionChatCustomizationDataInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatCustomizationDataInfoList_, annotationMissionChatCustomizationDataInfoList) };


        // annotationMissionChatId Field Functions 
        bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
        void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
        inline string getAnnotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
        inline AnnotationMissionChatList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


        // annotationMissionChatIntentUserSayInfoList Field Functions 
        bool hasAnnotationMissionChatIntentUserSayInfoList() const { return this->annotationMissionChatIntentUserSayInfoList_ != nullptr;};
        void deleteAnnotationMissionChatIntentUserSayInfoList() { this->annotationMissionChatIntentUserSayInfoList_ = nullptr;};
        inline const vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList> & getAnnotationMissionChatIntentUserSayInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatIntentUserSayInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList>) };
        inline vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList> getAnnotationMissionChatIntentUserSayInfoList() { DARABONBA_PTR_GET(annotationMissionChatIntentUserSayInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList>) };
        inline AnnotationMissionChatList& setAnnotationMissionChatIntentUserSayInfoList(const vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList> & annotationMissionChatIntentUserSayInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatIntentUserSayInfoList_, annotationMissionChatIntentUserSayInfoList) };
        inline AnnotationMissionChatList& setAnnotationMissionChatIntentUserSayInfoList(vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList> && annotationMissionChatIntentUserSayInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatIntentUserSayInfoList_, annotationMissionChatIntentUserSayInfoList) };


        // annotationMissionChatTagInfoList Field Functions 
        bool hasAnnotationMissionChatTagInfoList() const { return this->annotationMissionChatTagInfoList_ != nullptr;};
        void deleteAnnotationMissionChatTagInfoList() { this->annotationMissionChatTagInfoList_ = nullptr;};
        inline const vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList> & getAnnotationMissionChatTagInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatTagInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList>) };
        inline vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList> getAnnotationMissionChatTagInfoList() { DARABONBA_PTR_GET(annotationMissionChatTagInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList>) };
        inline AnnotationMissionChatList& setAnnotationMissionChatTagInfoList(const vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList> & annotationMissionChatTagInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatTagInfoList_, annotationMissionChatTagInfoList) };
        inline AnnotationMissionChatList& setAnnotationMissionChatTagInfoList(vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList> && annotationMissionChatTagInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatTagInfoList_, annotationMissionChatTagInfoList) };


        // annotationMissionChatVocabularyInfoList Field Functions 
        bool hasAnnotationMissionChatVocabularyInfoList() const { return this->annotationMissionChatVocabularyInfoList_ != nullptr;};
        void deleteAnnotationMissionChatVocabularyInfoList() { this->annotationMissionChatVocabularyInfoList_ = nullptr;};
        inline const vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList> & getAnnotationMissionChatVocabularyInfoList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatVocabularyInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList>) };
        inline vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList> getAnnotationMissionChatVocabularyInfoList() { DARABONBA_PTR_GET(annotationMissionChatVocabularyInfoList_, vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList>) };
        inline AnnotationMissionChatList& setAnnotationMissionChatVocabularyInfoList(const vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList> & annotationMissionChatVocabularyInfoList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatVocabularyInfoList_, annotationMissionChatVocabularyInfoList) };
        inline AnnotationMissionChatList& setAnnotationMissionChatVocabularyInfoList(vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList> && annotationMissionChatVocabularyInfoList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatVocabularyInfoList_, annotationMissionChatVocabularyInfoList) };


        // annotationMissionId Field Functions 
        bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
        void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
        inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
        inline AnnotationMissionChatList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


        // annotationMissionSessionId Field Functions 
        bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
        void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
        inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
        inline AnnotationMissionChatList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


        // annotationStatus Field Functions 
        bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
        void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
        inline int32_t getAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
        inline AnnotationMissionChatList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline AnnotationMissionChatList& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // asrAnnotationStatus Field Functions 
        bool hasAsrAnnotationStatus() const { return this->asrAnnotationStatus_ != nullptr;};
        void deleteAsrAnnotationStatus() { this->asrAnnotationStatus_ = nullptr;};
        inline int32_t getAsrAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(asrAnnotationStatus_, 0) };
        inline AnnotationMissionChatList& setAsrAnnotationStatus(int32_t asrAnnotationStatus) { DARABONBA_PTR_SET_VALUE(asrAnnotationStatus_, asrAnnotationStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline AnnotationMissionChatList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AnnotationMissionChatList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // intentAnnotationStatus Field Functions 
        bool hasIntentAnnotationStatus() const { return this->intentAnnotationStatus_ != nullptr;};
        void deleteIntentAnnotationStatus() { this->intentAnnotationStatus_ = nullptr;};
        inline int32_t getIntentAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(intentAnnotationStatus_, 0) };
        inline AnnotationMissionChatList& setIntentAnnotationStatus(int32_t intentAnnotationStatus) { DARABONBA_PTR_SET_VALUE(intentAnnotationStatus_, intentAnnotationStatus) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
        inline AnnotationMissionChatList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // occurTime Field Functions 
        bool hasOccurTime() const { return this->occurTime_ != nullptr;};
        void deleteOccurTime() { this->occurTime_ = nullptr;};
        inline int64_t getOccurTime() const { DARABONBA_PTR_GET_DEFAULT(occurTime_, 0L) };
        inline AnnotationMissionChatList& setOccurTime(int64_t occurTime) { DARABONBA_PTR_SET_VALUE(occurTime_, occurTime) };


        // originalAsrResult Field Functions 
        bool hasOriginalAsrResult() const { return this->originalAsrResult_ != nullptr;};
        void deleteOriginalAsrResult() { this->originalAsrResult_ = nullptr;};
        inline string getOriginalAsrResult() const { DARABONBA_PTR_GET_DEFAULT(originalAsrResult_, "") };
        inline AnnotationMissionChatList& setOriginalAsrResult(string originalAsrResult) { DARABONBA_PTR_SET_VALUE(originalAsrResult_, originalAsrResult) };


        // sequenceId Field Functions 
        bool hasSequenceId() const { return this->sequenceId_ != nullptr;};
        void deleteSequenceId() { this->sequenceId_ = nullptr;};
        inline string getSequenceId() const { DARABONBA_PTR_GET_DEFAULT(sequenceId_, "") };
        inline AnnotationMissionChatList& setSequenceId(string sequenceId) { DARABONBA_PTR_SET_VALUE(sequenceId_, sequenceId) };


        // subStatus Field Functions 
        bool hasSubStatus() const { return this->subStatus_ != nullptr;};
        void deleteSubStatus() { this->subStatus_ = nullptr;};
        inline int32_t getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, 0) };
        inline AnnotationMissionChatList& setSubStatus(int32_t subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


        // tagAnnotationStatus Field Functions 
        bool hasTagAnnotationStatus() const { return this->tagAnnotationStatus_ != nullptr;};
        void deleteTagAnnotationStatus() { this->tagAnnotationStatus_ = nullptr;};
        inline int32_t getTagAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(tagAnnotationStatus_, 0) };
        inline AnnotationMissionChatList& setTagAnnotationStatus(int32_t tagAnnotationStatus) { DARABONBA_PTR_SET_VALUE(tagAnnotationStatus_, tagAnnotationStatus) };


        // translationError Field Functions 
        bool hasTranslationError() const { return this->translationError_ != nullptr;};
        void deleteTranslationError() { this->translationError_ = nullptr;};
        inline int32_t getTranslationError() const { DARABONBA_PTR_GET_DEFAULT(translationError_, 0) };
        inline AnnotationMissionChatList& setTranslationError(int32_t translationError) { DARABONBA_PTR_SET_VALUE(translationError_, translationError) };


      protected:
        shared_ptr<string> annotationAsrResult_ {};
        shared_ptr<vector<AnnotationMissionChatList::AnnotationMissionChatCustomizationDataInfoList>> annotationMissionChatCustomizationDataInfoList_ {};
        // chat id
        shared_ptr<string> annotationMissionChatId_ {};
        shared_ptr<vector<AnnotationMissionChatList::AnnotationMissionChatIntentUserSayInfoList>> annotationMissionChatIntentUserSayInfoList_ {};
        shared_ptr<vector<AnnotationMissionChatList::AnnotationMissionChatTagInfoList>> annotationMissionChatTagInfoList_ {};
        shared_ptr<vector<AnnotationMissionChatList::AnnotationMissionChatVocabularyInfoList>> annotationMissionChatVocabularyInfoList_ {};
        shared_ptr<string> annotationMissionId_ {};
        shared_ptr<string> annotationMissionSessionId_ {};
        shared_ptr<int32_t> annotationStatus_ {};
        shared_ptr<string> answer_ {};
        shared_ptr<int32_t> asrAnnotationStatus_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> intentAnnotationStatus_ {};
        shared_ptr<int64_t> modifiedTime_ {};
        shared_ptr<int64_t> occurTime_ {};
        shared_ptr<string> originalAsrResult_ {};
        shared_ptr<string> sequenceId_ {};
        shared_ptr<int32_t> subStatus_ {};
        shared_ptr<int32_t> tagAnnotationStatus_ {};
        shared_ptr<int32_t> translationError_ {};
      };

      virtual bool empty() const override { return this->annotationMissionChatList_ == nullptr
        && this->annotationMissionId_ == nullptr && this->annotationMissionSessionId_ == nullptr && this->annotationStatus_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr
        && this->jobGroupId_ == nullptr && this->jobId_ == nullptr && this->modifiedTime_ == nullptr && this->scriptId_ == nullptr && this->sessionId_ == nullptr; };
      // annotationMissionChatList Field Functions 
      bool hasAnnotationMissionChatList() const { return this->annotationMissionChatList_ != nullptr;};
      void deleteAnnotationMissionChatList() { this->annotationMissionChatList_ = nullptr;};
      inline const vector<AnnotationMissionSessionList::AnnotationMissionChatList> & getAnnotationMissionChatList() const { DARABONBA_PTR_GET_CONST(annotationMissionChatList_, vector<AnnotationMissionSessionList::AnnotationMissionChatList>) };
      inline vector<AnnotationMissionSessionList::AnnotationMissionChatList> getAnnotationMissionChatList() { DARABONBA_PTR_GET(annotationMissionChatList_, vector<AnnotationMissionSessionList::AnnotationMissionChatList>) };
      inline AnnotationMissionSessionList& setAnnotationMissionChatList(const vector<AnnotationMissionSessionList::AnnotationMissionChatList> & annotationMissionChatList) { DARABONBA_PTR_SET_VALUE(annotationMissionChatList_, annotationMissionChatList) };
      inline AnnotationMissionSessionList& setAnnotationMissionChatList(vector<AnnotationMissionSessionList::AnnotationMissionChatList> && annotationMissionChatList) { DARABONBA_PTR_SET_RVALUE(annotationMissionChatList_, annotationMissionChatList) };


      // annotationMissionId Field Functions 
      bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
      void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
      inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
      inline AnnotationMissionSessionList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


      // annotationMissionSessionId Field Functions 
      bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
      void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
      inline string getAnnotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
      inline AnnotationMissionSessionList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


      // annotationStatus Field Functions 
      bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
      void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
      inline int32_t getAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
      inline AnnotationMissionSessionList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AnnotationMissionSessionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AnnotationMissionSessionList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline AnnotationMissionSessionList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline AnnotationMissionSessionList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline AnnotationMissionSessionList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline AnnotationMissionSessionList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline AnnotationMissionSessionList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<vector<AnnotationMissionSessionList::AnnotationMissionChatList>> annotationMissionChatList_ {};
      shared_ptr<string> annotationMissionId_ {};
      shared_ptr<string> annotationMissionSessionId_ {};
      shared_ptr<int32_t> annotationStatus_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> jobGroupId_ {};
      shared_ptr<string> jobId_ {};
      shared_ptr<int64_t> modifiedTime_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->annotationMissionDataSourceType_ == nullptr && this->annotationMissionSessionList_ == nullptr && this->annotationMissionSessionListJsonString_ == nullptr && this->environment_ == nullptr
        && this->userNick_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // annotationMissionDataSourceType Field Functions 
    bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
    void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
    inline int64_t getAnnotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0L) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionDataSourceType(int64_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


    // annotationMissionSessionList Field Functions 
    bool hasAnnotationMissionSessionList() const { return this->annotationMissionSessionList_ != nullptr;};
    void deleteAnnotationMissionSessionList() { this->annotationMissionSessionList_ = nullptr;};
    inline const vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> & getAnnotationMissionSessionList() const { DARABONBA_PTR_GET_CONST(annotationMissionSessionList_, vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList>) };
    inline vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> getAnnotationMissionSessionList() { DARABONBA_PTR_GET(annotationMissionSessionList_, vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList>) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionList(const vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> & annotationMissionSessionList) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionList_, annotationMissionSessionList) };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionList(vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList> && annotationMissionSessionList) { DARABONBA_PTR_SET_RVALUE(annotationMissionSessionList_, annotationMissionSessionList) };


    // annotationMissionSessionListJsonString Field Functions 
    bool hasAnnotationMissionSessionListJsonString() const { return this->annotationMissionSessionListJsonString_ != nullptr;};
    void deleteAnnotationMissionSessionListJsonString() { this->annotationMissionSessionListJsonString_ = nullptr;};
    inline string getAnnotationMissionSessionListJsonString() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionListJsonString_, "") };
    inline SaveAnnotationMissionSessionListRequest& setAnnotationMissionSessionListJsonString(string annotationMissionSessionListJsonString) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionListJsonString_, annotationMissionSessionListJsonString) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline int64_t getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, 0L) };
    inline SaveAnnotationMissionSessionListRequest& setEnvironment(int64_t environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline SaveAnnotationMissionSessionListRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    shared_ptr<string> agentId_ {};
    shared_ptr<string> agentKey_ {};
    shared_ptr<int64_t> annotationMissionDataSourceType_ {};
    shared_ptr<vector<SaveAnnotationMissionSessionListRequest::AnnotationMissionSessionList>> annotationMissionSessionList_ {};
    shared_ptr<string> annotationMissionSessionListJsonString_ {};
    shared_ptr<int64_t> environment_ {};
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
