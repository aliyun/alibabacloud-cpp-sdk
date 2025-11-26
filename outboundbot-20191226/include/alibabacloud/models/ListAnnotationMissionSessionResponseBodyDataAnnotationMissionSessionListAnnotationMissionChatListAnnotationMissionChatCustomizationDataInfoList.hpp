// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATCUSTOMIZATIONDATAINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONSESSIONRESPONSEBODYDATAANNOTATIONMISSIONSESSIONLISTANNOTATIONMISSIONCHATLISTANNOTATIONMISSIONCHATCUSTOMIZATIONDATAINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& obj) { 
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
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList &&) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList() = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& operator=(const ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList &) = default ;
    ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& operator=(ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotationMissionChatCustomizationDataInfoId_ == nullptr
        && return this->annotationMissionChatId_ == nullptr && return this->annotationMissionId_ == nullptr && return this->annotationMissionSessionId_ == nullptr && return this->content_ == nullptr && return this->create_ == nullptr
        && return this->createTime_ == nullptr && return this->customizationDataDescription_ == nullptr && return this->customizationDataId_ == nullptr && return this->customizationDataName_ == nullptr && return this->customizationDataWeight_ == nullptr
        && return this->delete_ == nullptr && return this->instanceId_ == nullptr && return this->modifiedTime_ == nullptr; };
    // annotationMissionChatCustomizationDataInfoId Field Functions 
    bool hasAnnotationMissionChatCustomizationDataInfoId() const { return this->annotationMissionChatCustomizationDataInfoId_ != nullptr;};
    void deleteAnnotationMissionChatCustomizationDataInfoId() { this->annotationMissionChatCustomizationDataInfoId_ = nullptr;};
    inline string annotationMissionChatCustomizationDataInfoId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatCustomizationDataInfoId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionChatCustomizationDataInfoId(string annotationMissionChatCustomizationDataInfoId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatCustomizationDataInfoId_, annotationMissionChatCustomizationDataInfoId) };


    // annotationMissionChatId Field Functions 
    bool hasAnnotationMissionChatId() const { return this->annotationMissionChatId_ != nullptr;};
    void deleteAnnotationMissionChatId() { this->annotationMissionChatId_ = nullptr;};
    inline string annotationMissionChatId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionChatId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionChatId(string annotationMissionChatId) { DARABONBA_PTR_SET_VALUE(annotationMissionChatId_, annotationMissionChatId) };


    // annotationMissionId Field Functions 
    bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
    void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
    inline string annotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


    // annotationMissionSessionId Field Functions 
    bool hasAnnotationMissionSessionId() const { return this->annotationMissionSessionId_ != nullptr;};
    void deleteAnnotationMissionSessionId() { this->annotationMissionSessionId_ = nullptr;};
    inline string annotationMissionSessionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionSessionId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setAnnotationMissionSessionId(string annotationMissionSessionId) { DARABONBA_PTR_SET_VALUE(annotationMissionSessionId_, annotationMissionSessionId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // create Field Functions 
    bool hasCreate() const { return this->create_ != nullptr;};
    void deleteCreate() { this->create_ = nullptr;};
    inline bool create() const { DARABONBA_PTR_GET_DEFAULT(create_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCreate(bool create) { DARABONBA_PTR_SET_VALUE(create_, create) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customizationDataDescription Field Functions 
    bool hasCustomizationDataDescription() const { return this->customizationDataDescription_ != nullptr;};
    void deleteCustomizationDataDescription() { this->customizationDataDescription_ = nullptr;};
    inline string customizationDataDescription() const { DARABONBA_PTR_GET_DEFAULT(customizationDataDescription_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCustomizationDataDescription(string customizationDataDescription) { DARABONBA_PTR_SET_VALUE(customizationDataDescription_, customizationDataDescription) };


    // customizationDataId Field Functions 
    bool hasCustomizationDataId() const { return this->customizationDataId_ != nullptr;};
    void deleteCustomizationDataId() { this->customizationDataId_ = nullptr;};
    inline string customizationDataId() const { DARABONBA_PTR_GET_DEFAULT(customizationDataId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCustomizationDataId(string customizationDataId) { DARABONBA_PTR_SET_VALUE(customizationDataId_, customizationDataId) };


    // customizationDataName Field Functions 
    bool hasCustomizationDataName() const { return this->customizationDataName_ != nullptr;};
    void deleteCustomizationDataName() { this->customizationDataName_ = nullptr;};
    inline string customizationDataName() const { DARABONBA_PTR_GET_DEFAULT(customizationDataName_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCustomizationDataName(string customizationDataName) { DARABONBA_PTR_SET_VALUE(customizationDataName_, customizationDataName) };


    // customizationDataWeight Field Functions 
    bool hasCustomizationDataWeight() const { return this->customizationDataWeight_ != nullptr;};
    void deleteCustomizationDataWeight() { this->customizationDataWeight_ = nullptr;};
    inline int32_t customizationDataWeight() const { DARABONBA_PTR_GET_DEFAULT(customizationDataWeight_, 0) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setCustomizationDataWeight(int32_t customizationDataWeight) { DARABONBA_PTR_SET_VALUE(customizationDataWeight_, customizationDataWeight) };


    // delete Field Functions 
    bool hasDelete() const { return this->delete_ != nullptr;};
    void deleteDelete() { this->delete_ = nullptr;};
    inline bool _delete() const { DARABONBA_PTR_GET_DEFAULT(delete_, false) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setDelete(bool _delete) { DARABONBA_PTR_SET_VALUE(delete_, _delete) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline ListAnnotationMissionSessionResponseBodyDataAnnotationMissionSessionListAnnotationMissionChatListAnnotationMissionChatCustomizationDataInfoList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


  protected:
    // id
    std::shared_ptr<string> annotationMissionChatCustomizationDataInfoId_ = nullptr;
    // chat id
    std::shared_ptr<string> annotationMissionChatId_ = nullptr;
    std::shared_ptr<string> annotationMissionId_ = nullptr;
    std::shared_ptr<string> annotationMissionSessionId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> create_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> customizationDataDescription_ = nullptr;
    // id
    std::shared_ptr<string> customizationDataId_ = nullptr;
    std::shared_ptr<string> customizationDataName_ = nullptr;
    std::shared_ptr<int32_t> customizationDataWeight_ = nullptr;
    std::shared_ptr<bool> delete_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
