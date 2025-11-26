// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUESTANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATTAGINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONSESSIONLISTREQUESTANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATTAGINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& obj) { 
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
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList() = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList(const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList &) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList(SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList &&) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList() = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& operator=(const SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList &) = default ;
    SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& operator=(SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionChatId_ == nullptr
        && return this->annotationMissionChatTagInfoId_ == nullptr && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->annotationMissionTagInfoId_ == nullptr && return this->annotationMissionTagInfoName_ == nullptr
        && return this->create_ == nullptr && return this->createTime_ == nullptr && return this->delete_ == nullptr && return this->instanceId_ == nullptr && return this->modifiedTime_ == nullptr; };
    // annotationMissionChatId Field Functions 
    bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
    void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
    inline string annotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


    // annotationMissionChatTagInfoId Field Functions 
    bool hasAnnotationMissionChatTagInfoId() const { return this->annotationMissionChatTagInfoId_ != nullptr;};
    void deleteAnnotationMissionChatTagInfoId() { this->annotationMissionChatTagInfoId_ = nullptr;};
    inline string annotationMissionChatTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatTagInfoId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionChatTagInfoId(string annotationMissionChatTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatTagInfoId_, annotationMissionChatTagInfoId) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // annotationMissionTagInfoId Field Functions 
    bool hasAnnotationMissionTagInfoId() const { return this->annotationMissionTagInfoId_ != nullptr;};
    void deleteAnnotationMissionTagInfoId() { this->annotationMissionTagInfoId_ = nullptr;};
    inline string annotationMissionTagInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionTagInfoId(string annotationMissionTagInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoId_, annotationMissionTagInfoId) };


    // annotationMissionTagInfoName Field Functions 
    bool hasAnnotationMissionTagInfoName() const { return this->annotationMissionTagInfoName_ != nullptr;};
    void deleteAnnotationMissionTagInfoName() { this->annotationMissionTagInfoName_ = nullptr;};
    inline string annotationMissionTagInfoName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionTagInfoName_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setAnnotationMissionTagInfoName(string annotationMissionTagInfoName) { DARABONBA_PTR_SET_VALUE(annotationMissionTagInfoName_, annotationMissionTagInfoName) };


    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline bool create() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline SaveAnnotationMissionSessionListRequestAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatTagInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // chat id
    std::shared_ptr<string> annotationMissionChatId_ = nullptr;
    // id
    std::shared_ptr<string> annotationMissionChatTagInfoId_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    // tag id
    std::shared_ptr<string> annotationMissionTagInfoId_ = nullptr;
    std::shared_ptr<string> annotationMissionTagInfoName_ = nullptr;
    std::shared_ptr<bool> create_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
