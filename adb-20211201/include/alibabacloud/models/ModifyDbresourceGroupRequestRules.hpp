// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupRequestRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequestRules& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(TargetGroupName, targetGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequestRules& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(TargetGroupName, targetGroupName_);
    };
    ModifyDBResourceGroupRequestRules() = default ;
    ModifyDBResourceGroupRequestRules(const ModifyDBResourceGroupRequestRules &) = default ;
    ModifyDBResourceGroupRequestRules(ModifyDBResourceGroupRequestRules &&) = default ;
    ModifyDBResourceGroupRequestRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequestRules() = default ;
    ModifyDBResourceGroupRequestRules& operator=(const ModifyDBResourceGroupRequestRules &) = default ;
    ModifyDBResourceGroupRequestRules& operator=(ModifyDBResourceGroupRequestRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupName_ != nullptr
        && this->queryTime_ != nullptr && this->targetGroupName_ != nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDBResourceGroupRequestRules& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline string queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
    inline ModifyDBResourceGroupRequestRules& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // targetGroupName Field Functions 
    bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
    void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
    inline string targetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
    inline ModifyDBResourceGroupRequestRules& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


  protected:
    // The name of the resource group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The execution duration of the query. Unit: milliseconds.
    std::shared_ptr<string> queryTime_ = nullptr;
    // The name of the destination resource group.
    std::shared_ptr<string> targetGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
