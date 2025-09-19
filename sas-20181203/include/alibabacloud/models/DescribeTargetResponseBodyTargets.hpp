// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODYTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETARGETRESPONSEBODYTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTargetResponseBodyTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTargetResponseBodyTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTargetResponseBodyTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DescribeTargetResponseBodyTargets() = default ;
    DescribeTargetResponseBodyTargets(const DescribeTargetResponseBodyTargets &) = default ;
    DescribeTargetResponseBodyTargets(DescribeTargetResponseBodyTargets &&) = default ;
    DescribeTargetResponseBodyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTargetResponseBodyTargets() = default ;
    DescribeTargetResponseBodyTargets& operator=(const DescribeTargetResponseBodyTargets &) = default ;
    DescribeTargetResponseBodyTargets& operator=(DescribeTargetResponseBodyTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flag_ != nullptr
        && this->target_ != nullptr && this->targetType_ != nullptr; };
    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline string flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
    inline DescribeTargetResponseBodyTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeTargetResponseBodyTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeTargetResponseBodyTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The flag that is added to the server. This parameter can be empty.
    std::shared_ptr<string> flag_ = nullptr;
    // The UUID of the server or the ID of the server group.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   **uuid**: a server
    // *   **groupId**: a server group
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
