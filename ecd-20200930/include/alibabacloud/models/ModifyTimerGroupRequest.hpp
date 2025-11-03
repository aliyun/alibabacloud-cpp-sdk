// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTIMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTIMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyTimerGroupRequestConfigTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyTimerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTimerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTimerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyTimerGroupRequest() = default ;
    ModifyTimerGroupRequest(const ModifyTimerGroupRequest &) = default ;
    ModifyTimerGroupRequest(ModifyTimerGroupRequest &&) = default ;
    ModifyTimerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTimerGroupRequest() = default ;
    ModifyTimerGroupRequest& operator=(const ModifyTimerGroupRequest &) = default ;
    ModifyTimerGroupRequest& operator=(ModifyTimerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configTimers_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr; };
    // configTimers Field Functions 
    bool hasConfigTimers() const { return this->configTimers_ != nullptr;};
    void deleteConfigTimers() { this->configTimers_ = nullptr;};
    inline const vector<ModifyTimerGroupRequestConfigTimers> & configTimers() const { DARABONBA_PTR_GET_CONST(configTimers_, vector<ModifyTimerGroupRequestConfigTimers>) };
    inline vector<ModifyTimerGroupRequestConfigTimers> configTimers() { DARABONBA_PTR_GET(configTimers_, vector<ModifyTimerGroupRequestConfigTimers>) };
    inline ModifyTimerGroupRequest& setConfigTimers(const vector<ModifyTimerGroupRequestConfigTimers> & configTimers) { DARABONBA_PTR_SET_VALUE(configTimers_, configTimers) };
    inline ModifyTimerGroupRequest& setConfigTimers(vector<ModifyTimerGroupRequestConfigTimers> && configTimers) { DARABONBA_PTR_SET_RVALUE(configTimers_, configTimers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyTimerGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyTimerGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyTimerGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTimerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The scheduled tasks.
    std::shared_ptr<vector<ModifyTimerGroupRequestConfigTimers>> configTimers_ = nullptr;
    // The description of the configuration group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the configuration group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region. Set the value to `cn-shanghai`.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
