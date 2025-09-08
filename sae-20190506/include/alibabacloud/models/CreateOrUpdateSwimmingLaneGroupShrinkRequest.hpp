// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIdsShrink_);
      DARABONBA_PTR_TO_JSON(EntryAppId, entryAppId_);
      DARABONBA_PTR_TO_JSON(EntryAppType, entryAppType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SwimVersion, swimVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIdsShrink_);
      DARABONBA_PTR_FROM_JSON(EntryAppId, entryAppId_);
      DARABONBA_PTR_FROM_JSON(EntryAppType, entryAppType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SwimVersion, swimVersion_);
    };
    CreateOrUpdateSwimmingLaneGroupShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(const CreateOrUpdateSwimmingLaneGroupShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(CreateOrUpdateSwimmingLaneGroupShrinkRequest &&) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneGroupShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest& operator=(const CreateOrUpdateSwimmingLaneGroupShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneGroupShrinkRequest& operator=(CreateOrUpdateSwimmingLaneGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdsShrink_ != nullptr
        && this->entryAppId_ != nullptr && this->entryAppType_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->namespaceId_ != nullptr
        && this->swimVersion_ != nullptr; };
    // appIdsShrink Field Functions 
    bool hasAppIdsShrink() const { return this->appIdsShrink_ != nullptr;};
    void deleteAppIdsShrink() { this->appIdsShrink_ = nullptr;};
    inline string appIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(appIdsShrink_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setAppIdsShrink(string appIdsShrink) { DARABONBA_PTR_SET_VALUE(appIdsShrink_, appIdsShrink) };


    // entryAppId Field Functions 
    bool hasEntryAppId() const { return this->entryAppId_ != nullptr;};
    void deleteEntryAppId() { this->entryAppId_ = nullptr;};
    inline string entryAppId() const { DARABONBA_PTR_GET_DEFAULT(entryAppId_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setEntryAppId(string entryAppId) { DARABONBA_PTR_SET_VALUE(entryAppId_, entryAppId) };


    // entryAppType Field Functions 
    bool hasEntryAppType() const { return this->entryAppType_ != nullptr;};
    void deleteEntryAppType() { this->entryAppType_ = nullptr;};
    inline string entryAppType() const { DARABONBA_PTR_GET_DEFAULT(entryAppType_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setEntryAppType(string entryAppType) { DARABONBA_PTR_SET_VALUE(entryAppType_, entryAppType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // swimVersion Field Functions 
    bool hasSwimVersion() const { return this->swimVersion_ != nullptr;};
    void deleteSwimVersion() { this->swimVersion_ = nullptr;};
    inline string swimVersion() const { DARABONBA_PTR_GET_DEFAULT(swimVersion_, "") };
    inline CreateOrUpdateSwimmingLaneGroupShrinkRequest& setSwimVersion(string swimVersion) { DARABONBA_PTR_SET_VALUE(swimVersion_, swimVersion) };


  protected:
    std::shared_ptr<string> appIdsShrink_ = nullptr;
    std::shared_ptr<string> entryAppId_ = nullptr;
    std::shared_ptr<string> entryAppType_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<string> swimVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
