// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateSwimmingLaneRequest() = default ;
    UpdateSwimmingLaneRequest(const UpdateSwimmingLaneRequest &) = default ;
    UpdateSwimmingLaneRequest(UpdateSwimmingLaneRequest &&) = default ;
    UpdateSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneRequest() = default ;
    UpdateSwimmingLaneRequest& operator=(const UpdateSwimmingLaneRequest &) = default ;
    UpdateSwimmingLaneRequest& operator=(UpdateSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfos_ == nullptr
        && return this->enableRules_ == nullptr && return this->entryRules_ == nullptr && return this->laneId_ == nullptr && return this->name_ == nullptr; };
    // appInfos Field Functions 
    bool hasAppInfos() const { return this->appInfos_ != nullptr;};
    void deleteAppInfos() { this->appInfos_ = nullptr;};
    inline string appInfos() const { DARABONBA_PTR_GET_DEFAULT(appInfos_, "") };
    inline UpdateSwimmingLaneRequest& setAppInfos(string appInfos) { DARABONBA_PTR_SET_VALUE(appInfos_, appInfos) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline UpdateSwimmingLaneRequest& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline string entryRules() const { DARABONBA_PTR_GET_DEFAULT(entryRules_, "") };
    inline UpdateSwimmingLaneRequest& setEntryRules(string entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline UpdateSwimmingLaneRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSwimmingLaneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The list of applications that are related to the lane.
    std::shared_ptr<string> appInfos_ = nullptr;
    // Specifies whether to enable the throttling rule.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableRules_ = nullptr;
    // The configuration of the throttling rule.
    std::shared_ptr<string> entryRules_ = nullptr;
    // The ID of the lane.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> laneId_ = nullptr;
    // The name of the lane.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
