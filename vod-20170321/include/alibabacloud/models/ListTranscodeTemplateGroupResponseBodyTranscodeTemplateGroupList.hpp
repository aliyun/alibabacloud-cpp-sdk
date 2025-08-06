// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODYTRANSCODETEMPLATEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODETEMPLATEGROUPRESPONSEBODYTRANSCODETEMPLATEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateGroupId, transcodeTemplateGroupId_);
    };
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList() = default ;
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList(const ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList &) = default ;
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList(ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList &&) = default ;
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList() = default ;
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& operator=(const ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList &) = default ;
    ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& operator=(ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->creationTime_ != nullptr && this->isDefault_ != nullptr && this->locked_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr
        && this->transcodeTemplateGroupId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline string locked() const { DARABONBA_PTR_GET_DEFAULT(locked_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setLocked(string locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // transcodeTemplateGroupId Field Functions 
    bool hasTranscodeTemplateGroupId() const { return this->transcodeTemplateGroupId_ != nullptr;};
    void deleteTranscodeTemplateGroupId() { this->transcodeTemplateGroupId_ = nullptr;};
    inline string transcodeTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplateGroupId_, "") };
    inline ListTranscodeTemplateGroupResponseBodyTranscodeTemplateGroupList& setTranscodeTemplateGroupId(string transcodeTemplateGroupId) { DARABONBA_PTR_SET_VALUE(transcodeTemplateGroupId_, transcodeTemplateGroupId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The time when the template group was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the template group is the default one. Valid values:
    // 
    // *   **Default**: The template group is the default one.
    // *   **NotDefault**: The template group is not the default one.
    std::shared_ptr<string> isDefault_ = nullptr;
    // The lock status of the transcoding template group. Valid values:
    // 
    // *   **Disabled**: The template group is not locked.
    // *   **Enabled**: The template group is locked.
    std::shared_ptr<string> locked_ = nullptr;
    // The time when the template group was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The name of the template group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the transcoding template group.
    std::shared_ptr<string> transcodeTemplateGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
