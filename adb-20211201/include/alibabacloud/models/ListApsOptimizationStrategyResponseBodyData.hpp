// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONSTRATEGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONSTRATEGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsOptimizationStrategyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsOptimizationStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyDesc, strategyDesc_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsOptimizationStrategyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyDesc, strategyDesc_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
    };
    ListApsOptimizationStrategyResponseBodyData() = default ;
    ListApsOptimizationStrategyResponseBodyData(const ListApsOptimizationStrategyResponseBodyData &) = default ;
    ListApsOptimizationStrategyResponseBodyData(ListApsOptimizationStrategyResponseBodyData &&) = default ;
    ListApsOptimizationStrategyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsOptimizationStrategyResponseBodyData() = default ;
    ListApsOptimizationStrategyResponseBodyData& operator=(const ListApsOptimizationStrategyResponseBodyData &) = default ;
    ListApsOptimizationStrategyResponseBodyData& operator=(ListApsOptimizationStrategyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->status_ != nullptr && this->strategyDesc_ != nullptr && this->strategyName_ != nullptr && this->strategyType_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ListApsOptimizationStrategyResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListApsOptimizationStrategyResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyDesc Field Functions 
    bool hasStrategyDesc() const { return this->strategyDesc_ != nullptr;};
    void deleteStrategyDesc() { this->strategyDesc_ = nullptr;};
    inline string strategyDesc() const { DARABONBA_PTR_GET_DEFAULT(strategyDesc_, "") };
    inline ListApsOptimizationStrategyResponseBodyData& setStrategyDesc(string strategyDesc) { DARABONBA_PTR_SET_VALUE(strategyDesc_, strategyDesc) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListApsOptimizationStrategyResponseBodyData& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ListApsOptimizationStrategyResponseBodyData& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The status of the lifecycle management policy. Valid values:
    // 
    // 1.  on: enabled.
    // 2.  off: disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The description of the lifecycle management policy.
    std::shared_ptr<string> strategyDesc_ = nullptr;
    // The name of the lifecycle management policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The type of the lifecycle management policy. Only StrategyValue is returned.
    std::shared_ptr<string> strategyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
