// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATVOCABULARYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATVOCABULARYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& obj) { 
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
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList &&) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& operator=(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& operator=(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && return this->annotationMissionChatVocabularyInfoId_ == nullptr && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->create_ == nullptr && return this->createTime_ == nullptr
        && return this->delete_ == nullptr && return this->instanceId_ == nullptr && return this->modifiedTime_ == nullptr && return this->vocabulary_ == nullptr && return this->vocabularyDescription_ == nullptr
        && return this->vocabularyId_ == nullptr && return this->vocabularyName_ == nullptr && return this->vocabularyWeight_ == nullptr; };
    // annotationMissionChatId Field Functions 
    bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
    void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
    inline string annotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


    // annotationMissionChatVocabularyInfoId Field Functions 
    bool hasAnnotationMissionChatVocabularyInfoId() const { return this->annotationMissionChatVocabularyInfoId_ != nullptr;};
    void deleteAnnotationMissionChatVocabularyInfoId() { this->annotationMissionChatVocabularyInfoId_ = nullptr;};
    inline string annotationMissionChatVocabularyInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatVocabularyInfoId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setAnnotationMissionChatVocabularyInfoId(string annotationMissionChatVocabularyInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatVocabularyInfoId_, annotationMissionChatVocabularyInfoId) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline bool create() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // vocabulary Field Functions 
    bool hasVocabulary() const { return this->vocabulary_ != nullptr;};
    void deleteVocabulary() { this->vocabulary_ = nullptr;};
    inline string vocabulary() const { DARABONBA_PTR_GET_DEFAULT(vocabulary_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setVocabulary(string vocabulary) { DARABONBA_PTR_SET_VALUE(vocabulary_, vocabulary) };


    // vocabularyDescription Field Functions 
    bool hasVocabularyDescription() const { return this->vocabularyDescription_ != nullptr;};
    void deleteVocabularyDescription() { this->vocabularyDescription_ = nullptr;};
    inline string vocabularyDescription() const { DARABONBA_PTR_GET_DEFAULT(vocabularyDescription_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setVocabularyDescription(string vocabularyDescription) { DARABONBA_PTR_SET_VALUE(vocabularyDescription_, vocabularyDescription) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // vocabularyName Field Functions 
    bool hasVocabularyName() const { return this->vocabularyName_ != nullptr;};
    void deleteVocabularyName() { this->vocabularyName_ = nullptr;};
    inline string vocabularyName() const { DARABONBA_PTR_GET_DEFAULT(vocabularyName_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setVocabularyName(string vocabularyName) { DARABONBA_PTR_SET_VALUE(vocabularyName_, vocabularyName) };


    // vocabularyWeight Field Functions 
    bool hasVocabularyWeight() const { return this->vocabularyWeight_ != nullptr;};
    void deleteVocabularyWeight() { this->vocabularyWeight_ = nullptr;};
    inline int32_t vocabularyWeight() const { DARABONBA_PTR_GET_DEFAULT(vocabularyWeight_, 0) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatVocabularyInfoList& setVocabularyWeight(int32_t vocabularyWeight) { DARABONBA_PTR_SET_VALUE(vocabularyWeight_, vocabularyWeight) };


  protected:
    // chat id
    std::shared_ptr<string> annotationMissionChatId_ = nullptr;
    // id
    std::shared_ptr<string> annotationMissionChatVocabularyInfoId_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<bool> create_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    std::shared_ptr<string> vocabulary_ = nullptr;
    std::shared_ptr<string> vocabularyDescription_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
    std::shared_ptr<string> vocabularyName_ = nullptr;
    std::shared_ptr<int32_t> vocabularyWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
