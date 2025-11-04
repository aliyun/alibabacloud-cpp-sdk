// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSSCHEDULEROPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSSCHEDULEROPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions(DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managedPrivateSpaceId_ == nullptr; };
    // managedPrivateSpaceId Field Functions 
    bool hasManagedPrivateSpaceId() const { return this->managedPrivateSpaceId_ != nullptr;};
    void deleteManagedPrivateSpaceId() { this->managedPrivateSpaceId_ = nullptr;};
    inline string managedPrivateSpaceId() const { DARABONBA_PTR_GET_DEFAULT(managedPrivateSpaceId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsSchedulerOptions& setManagedPrivateSpaceId(string managedPrivateSpaceId) { DARABONBA_PTR_SET_VALUE(managedPrivateSpaceId_, managedPrivateSpaceId) };


  protected:
    // >  This parameter is in invitational preview and is not available for use.
    std::shared_ptr<string> managedPrivateSpaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
