// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATINTENTUSERSAYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATINTENTUSERSAYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& obj) { 
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
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList &&) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& operator=(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& operator=(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && return this->annotationMissionChatIntentUserSayInfoId_ == nullptr && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->botId_ == nullptr && return this->content_ == nullptr
        && return this->create_ == nullptr && return this->createTime_ == nullptr && return this->delete_ == nullptr && return this->dialogId_ == nullptr && return this->instanceId_ == nullptr
        && return this->intentId_ == nullptr && return this->modifiedTime_ == nullptr; };
    // annotationMissionChatId Field Functions 
    bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
    void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
    inline string annotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


    // annotationMissionChatIntentUserSayInfoId Field Functions 
    bool hasAnnotationMissionChatIntentUserSayInfoId() const { return this->annotationMissionChatIntentUserSayInfoId_ != nullptr;};
    void deleteAnnotationMissionChatIntentUserSayInfoId() { this->annotationMissionChatIntentUserSayInfoId_ = nullptr;};
    inline string annotationMissionChatIntentUserSayInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatIntentUserSayInfoId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionChatIntentUserSayInfoId(string annotationMissionChatIntentUserSayInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatIntentUserSayInfoId_, annotationMissionChatIntentUserSayInfoId) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // botId Field Functions 
    bool hasBotId() const { return this->botId_ != nullptr;};
    void deleteBotId() { this->botId_ = nullptr;};
    inline string botId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline bool create() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // dialogId Field Functions 
    bool hasDialogId() const { return this->dialogId_ != nullptr;};
    void deleteDialogId() { this->dialogId_ = nullptr;};
    inline int64_t dialogId() const { DARABONBA_PTR_GET_DEFAULT(dialogId_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setDialogId(int64_t dialogId) { DARABONBA_PTR_SET_VALUE(dialogId_, dialogId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatIntentUserSayInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // chat id
    std::shared_ptr<string> annotationMissionChatId_ = nullptr;
    // id
    std::shared_ptr<string> annotationMissionChatIntentUserSayInfoId_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<string> botId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> create_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<int64_t> dialogId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> intentId_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
