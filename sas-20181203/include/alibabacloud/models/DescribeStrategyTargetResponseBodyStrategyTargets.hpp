// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODYSTRATEGYTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODYSTRATEGYTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyTargetResponseBodyStrategyTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyTargetResponseBodyStrategyTargets& obj) { 
      DARABONBA_PTR_TO_JSON(BindUuidCount, bindUuidCount_);
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyTargetResponseBodyStrategyTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(BindUuidCount, bindUuidCount_);
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeStrategyTargetResponseBodyStrategyTargets() = default ;
    DescribeStrategyTargetResponseBodyStrategyTargets(const DescribeStrategyTargetResponseBodyStrategyTargets &) = default ;
    DescribeStrategyTargetResponseBodyStrategyTargets(DescribeStrategyTargetResponseBodyStrategyTargets &&) = default ;
    DescribeStrategyTargetResponseBodyStrategyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyTargetResponseBodyStrategyTargets() = default ;
    DescribeStrategyTargetResponseBodyStrategyTargets& operator=(const DescribeStrategyTargetResponseBodyStrategyTargets &) = default ;
    DescribeStrategyTargetResponseBodyStrategyTargets& operator=(DescribeStrategyTargetResponseBodyStrategyTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindUuidCount_ == nullptr
        && return this->flag_ == nullptr && return this->target_ == nullptr && return this->targetType_ == nullptr; };
    // bindUuidCount Field Functions 
    bool hasBindUuidCount() const { return this->bindUuidCount_ != nullptr;};
    void deleteBindUuidCount() { this->bindUuidCount_ = nullptr;};
    inline int32_t bindUuidCount() const { DARABONBA_PTR_GET_DEFAULT(bindUuidCount_, 0) };
    inline DescribeStrategyTargetResponseBodyStrategyTargets& setBindUuidCount(int32_t bindUuidCount) { DARABONBA_PTR_SET_VALUE(bindUuidCount_, bindUuidCount) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeStrategyTargetResponseBodyStrategyTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeStrategyTargetResponseBodyStrategyTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeStrategyTargetResponseBodyStrategyTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The number of the assets that belong to the asset group.
    std::shared_ptr<int32_t> bindUuidCount_ = nullptr;
    // Indicates whether the baseline check policy is applied to the asset group. Valid values:
    // 
    // *   **add**: The baseline check policy is applied to the asset group.
    // *   **del**: the baseline check policy is not applied to the asset group.
    std::shared_ptr<string> flag_ = nullptr;
    // The ID of the asset group to which the assets belong or the UUID of the asset.
    std::shared_ptr<string> target_ = nullptr;
    // The method that is used to add the assets to the baseline check policy. Valid values:
    // 
    // *   **groupId**: the ID of the asset group
    // *   **uuid**: the UUID of the asset
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
