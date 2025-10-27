// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODYTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETCONFIGRESPONSEBODYTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonTargetConfigResponseBodyTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetConfigResponseBodyTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetConfigResponseBodyTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeCommonTargetConfigResponseBodyTargetList() = default ;
    DescribeCommonTargetConfigResponseBodyTargetList(const DescribeCommonTargetConfigResponseBodyTargetList &) = default ;
    DescribeCommonTargetConfigResponseBodyTargetList(DescribeCommonTargetConfigResponseBodyTargetList &&) = default ;
    DescribeCommonTargetConfigResponseBodyTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetConfigResponseBodyTargetList() = default ;
    DescribeCommonTargetConfigResponseBodyTargetList& operator=(const DescribeCommonTargetConfigResponseBodyTargetList &) = default ;
    DescribeCommonTargetConfigResponseBodyTargetList& operator=(DescribeCommonTargetConfigResponseBodyTargetList &&) = default ;
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
    inline DescribeCommonTargetConfigResponseBodyTargetList& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeCommonTargetConfigResponseBodyTargetList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeCommonTargetConfigResponseBodyTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The mode in which the configuration takes effect. Valid values:
    // 
    // *   **add**: In this mode, the configuration takes effect on the assets.
    // *   **del**: In this mode, the configuration does not take effect on the assets.
    std::shared_ptr<string> flag_ = nullptr;
    // The ID of the asset on which the configuration takes effect.
    // 
    // > 
    // 
    // *   When you set the **TargetType** parameter to **uuid**, the value of this parameter indicates the UUID of an asset.
    // 
    // *   When you set the **TargetType** parameter to **Cluster**, the value of this parameter indicates the ID of a cluster.
    // 
    // *   When you set the **TargetType** parameter to **image_repo**, the value of this parameter indicates the ID of an image repository.
    std::shared_ptr<string> target_ = nullptr;
    // The dimension from on which the feature was configured. Valid values:
    // 
    // *   **uuid**: the UUID of the asset
    // *   **Cluster**: the ID of the cluster
    // *   **image_repo**: the ID of the image repository
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
