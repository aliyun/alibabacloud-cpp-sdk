// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENDISABLESCALINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENDISABLESCALINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class EnDisableScalingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnDisableScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(ScalingRulesEnable, scalingRulesEnable_);
    };
    friend void from_json(const Darabonba::Json& j, EnDisableScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(ScalingRulesEnable, scalingRulesEnable_);
    };
    EnDisableScalingRulesResponseBodyData() = default ;
    EnDisableScalingRulesResponseBodyData(const EnDisableScalingRulesResponseBodyData &) = default ;
    EnDisableScalingRulesResponseBodyData(EnDisableScalingRulesResponseBodyData &&) = default ;
    EnDisableScalingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnDisableScalingRulesResponseBodyData() = default ;
    EnDisableScalingRulesResponseBodyData& operator=(const EnDisableScalingRulesResponseBodyData &) = default ;
    EnDisableScalingRulesResponseBodyData& operator=(EnDisableScalingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->dbInstanceId_ == nullptr && return this->scalingRulesEnable_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline EnDisableScalingRulesResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline EnDisableScalingRulesResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // scalingRulesEnable Field Functions 
    bool hasScalingRulesEnable() const { return this->scalingRulesEnable_ != nullptr;};
    void deleteScalingRulesEnable() { this->scalingRulesEnable_ = nullptr;};
    inline bool scalingRulesEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRulesEnable_, false) };
    inline EnDisableScalingRulesResponseBodyData& setScalingRulesEnable(bool scalingRulesEnable) { DARABONBA_PTR_SET_VALUE(scalingRulesEnable_, scalingRulesEnable) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> dbInstanceId_ = nullptr;
    // Indicates whether the scheduled scaling policy is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> scalingRulesEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
