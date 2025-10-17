// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentOSNVMeSupported, currentOSNVMeSupported_);
      DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentOSNVMeSupported, currentOSNVMeSupported_);
      DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    DescribeInstancesResponseBodyInstancesInstanceImageOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceImageOptions(const DescribeInstancesResponseBodyInstancesInstanceImageOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceImageOptions(DescribeInstancesResponseBodyInstancesInstanceImageOptions &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceImageOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceImageOptions& operator=(const DescribeInstancesResponseBodyInstancesInstanceImageOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceImageOptions& operator=(DescribeInstancesResponseBodyInstancesInstanceImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentOSNVMeSupported_ == nullptr
        && return this->loginAsNonRoot_ == nullptr; };
    // currentOSNVMeSupported Field Functions 
    bool hasCurrentOSNVMeSupported() const { return this->currentOSNVMeSupported_ != nullptr;};
    void deleteCurrentOSNVMeSupported() { this->currentOSNVMeSupported_ = nullptr;};
    inline bool currentOSNVMeSupported() const { DARABONBA_PTR_GET_DEFAULT(currentOSNVMeSupported_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceImageOptions& setCurrentOSNVMeSupported(bool currentOSNVMeSupported) { DARABONBA_PTR_SET_VALUE(currentOSNVMeSupported_, currentOSNVMeSupported) };


    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


  protected:
    // Indicates whether the operating system supports access to disks over the NVMe protocol. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is returned only if you specify CURRENT_OS_NVME_SUPPORTED in AdditionalAttributes in the request.
    std::shared_ptr<bool> currentOSNVMeSupported_ = nullptr;
    // Indicates whether the instance that uses the image supports logons of the ecs-user user. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
