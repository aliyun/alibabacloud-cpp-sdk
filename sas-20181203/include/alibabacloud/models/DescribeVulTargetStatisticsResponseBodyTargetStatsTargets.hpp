// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODYTARGETSTATSTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSRESPONSEBODYTARGETSTATSTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetStatisticsResponseBodyTargetStatsTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets() = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets(const DescribeVulTargetStatisticsResponseBodyTargetStatsTargets &) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets(DescribeVulTargetStatisticsResponseBodyTargetStatsTargets &&) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetStatisticsResponseBodyTargetStatsTargets() = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& operator=(const DescribeVulTargetStatisticsResponseBodyTargetStatsTargets &) = default ;
    DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& operator=(DescribeVulTargetStatisticsResponseBodyTargetStatsTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flag_ == nullptr
        && return this->target_ == nullptr && return this->targetType_ == nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeVulTargetStatisticsResponseBodyTargetStatsTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // Indicates whether the configurations are applied to the server. Valid values:
    // 
    // *   **add**: yes
    // *   **del**: no
    std::shared_ptr<string> flag_ = nullptr;
    // The group ID or UUID of the server to which the configurations are applied.
    std::shared_ptr<string> target_ = nullptr;
    // The condition by which the configurations are applied to the server. Valid values:
    // 
    // *   **uuid**: the UUID of the server
    // *   **groupId**: the ID of the server group
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
