// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, InsertSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LogicalRegionId, logicalRegionId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    InsertSwimmingLaneRequest() = default ;
    InsertSwimmingLaneRequest(const InsertSwimmingLaneRequest &) = default ;
    InsertSwimmingLaneRequest(InsertSwimmingLaneRequest &&) = default ;
    InsertSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertSwimmingLaneRequest() = default ;
    InsertSwimmingLaneRequest& operator=(const InsertSwimmingLaneRequest &) = default ;
    InsertSwimmingLaneRequest& operator=(InsertSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfos_ == nullptr
        && return this->enableRules_ == nullptr && return this->entryRules_ == nullptr && return this->groupId_ == nullptr && return this->logicalRegionId_ == nullptr && return this->name_ == nullptr
        && return this->tag_ == nullptr; };
    // appInfos Field Functions 
    bool hasAppInfos() const { return this->appInfos_ != nullptr;};
    void deleteAppInfos() { this->appInfos_ = nullptr;};
    inline string appInfos() const { DARABONBA_PTR_GET_DEFAULT(appInfos_, "") };
    inline InsertSwimmingLaneRequest& setAppInfos(string appInfos) { DARABONBA_PTR_SET_VALUE(appInfos_, appInfos) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline InsertSwimmingLaneRequest& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline string entryRules() const { DARABONBA_PTR_GET_DEFAULT(entryRules_, "") };
    inline InsertSwimmingLaneRequest& setEntryRules(string entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline InsertSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // logicalRegionId Field Functions 
    bool hasLogicalRegionId() const { return this->logicalRegionId_ != nullptr;};
    void deleteLogicalRegionId() { this->logicalRegionId_ = nullptr;};
    inline string logicalRegionId() const { DARABONBA_PTR_GET_DEFAULT(logicalRegionId_, "") };
    inline InsertSwimmingLaneRequest& setLogicalRegionId(string logicalRegionId) { DARABONBA_PTR_SET_VALUE(logicalRegionId_, logicalRegionId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InsertSwimmingLaneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline InsertSwimmingLaneRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The information about applications related to the lane.
    std::shared_ptr<string> appInfos_ = nullptr;
    // Specifies whether to enable the throttling rule.
    std::shared_ptr<bool> enableRules_ = nullptr;
    // The throttling conditions.
    // 
    // This parameter is required.
    std::shared_ptr<string> entryRules_ = nullptr;
    // The ID of the lane group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the custom namespace. The ID is in the `physical region ID:custom namespace identifier` format. Example: `cn-hangzhou:test`.
    // 
    // This parameter is required.
    std::shared_ptr<string> logicalRegionId_ = nullptr;
    // The name of the lane.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The tag.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
