// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATAHASENABLERULEBUTNOTDASPROLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTORESOURCEOPTIMIZERULESRESPONSEBODYDATAHASENABLERULEBUTNOTDASPROLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDefragment, autoDefragment_);
      DARABONBA_PTR_TO_JSON(DasProOn, dasProOn_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TableFragmentationRatio, tableFragmentationRatio_);
      DARABONBA_PTR_TO_JSON(TableSpaceSize, tableSpaceSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDefragment, autoDefragment_);
      DARABONBA_PTR_FROM_JSON(DasProOn, dasProOn_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TableFragmentationRatio, tableFragmentationRatio_);
      DARABONBA_PTR_FROM_JSON(TableSpaceSize, tableSpaceSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList() = default ;
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList(const GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList &) = default ;
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList(GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList &&) = default ;
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList() = default ;
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& operator=(const GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList &) = default ;
    GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& operator=(GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoDefragment_ != nullptr
        && this->dasProOn_ != nullptr && this->instanceId_ != nullptr && this->tableFragmentationRatio_ != nullptr && this->tableSpaceSize_ != nullptr && this->userId_ != nullptr; };
    // autoDefragment Field Functions 
    bool hasAutoDefragment() const { return this->autoDefragment_ != nullptr;};
    void deleteAutoDefragment() { this->autoDefragment_ = nullptr;};
    inline bool autoDefragment() const { DARABONBA_PTR_GET_DEFAULT(autoDefragment_, false) };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setAutoDefragment(bool autoDefragment) { DARABONBA_PTR_SET_VALUE(autoDefragment_, autoDefragment) };


    // dasProOn Field Functions 
    bool hasDasProOn() const { return this->dasProOn_ != nullptr;};
    void deleteDasProOn() { this->dasProOn_ = nullptr;};
    inline bool dasProOn() const { DARABONBA_PTR_GET_DEFAULT(dasProOn_, false) };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setDasProOn(bool dasProOn) { DARABONBA_PTR_SET_VALUE(dasProOn_, dasProOn) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tableFragmentationRatio Field Functions 
    bool hasTableFragmentationRatio() const { return this->tableFragmentationRatio_ != nullptr;};
    void deleteTableFragmentationRatio() { this->tableFragmentationRatio_ = nullptr;};
    inline double tableFragmentationRatio() const { DARABONBA_PTR_GET_DEFAULT(tableFragmentationRatio_, 0.0) };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setTableFragmentationRatio(double tableFragmentationRatio) { DARABONBA_PTR_SET_VALUE(tableFragmentationRatio_, tableFragmentationRatio) };


    // tableSpaceSize Field Functions 
    bool hasTableSpaceSize() const { return this->tableSpaceSize_ != nullptr;};
    void deleteTableSpaceSize() { this->tableSpaceSize_ = nullptr;};
    inline double tableSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(tableSpaceSize_, 0.0) };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setTableSpaceSize(double tableSpaceSize) { DARABONBA_PTR_SET_VALUE(tableSpaceSize_, tableSpaceSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAutoResourceOptimizeRulesResponseBodyDataHasEnableRuleButNotDasProList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoDefragment_ = nullptr;
    // Indicates whether DAS Enterprise Edition is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dasProOn_ = nullptr;
    // The database instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The fragmentation rate of a single physical table for which the automatic fragment recycling feature is enabled.
    std::shared_ptr<double> tableFragmentationRatio_ = nullptr;
    // The minimum storage usage of a single physical table for which the automatic fragment recycling feature is enabled. Unit: GB.
    std::shared_ptr<double> tableSpaceSize_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to create the database instance.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
