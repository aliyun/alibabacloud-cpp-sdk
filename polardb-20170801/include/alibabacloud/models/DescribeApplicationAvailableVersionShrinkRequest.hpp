// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAvailableVersionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAvailableVersionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAvailableVersionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeApplicationAvailableVersionShrinkRequest() = default ;
    DescribeApplicationAvailableVersionShrinkRequest(const DescribeApplicationAvailableVersionShrinkRequest &) = default ;
    DescribeApplicationAvailableVersionShrinkRequest(DescribeApplicationAvailableVersionShrinkRequest &&) = default ;
    DescribeApplicationAvailableVersionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAvailableVersionShrinkRequest() = default ;
    DescribeApplicationAvailableVersionShrinkRequest& operator=(const DescribeApplicationAvailableVersionShrinkRequest &) = default ;
    DescribeApplicationAvailableVersionShrinkRequest& operator=(DescribeApplicationAvailableVersionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->componentsShrink_ == nullptr && this->regionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationAvailableVersionShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationAvailableVersionShrinkRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string getComponentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline DescribeApplicationAvailableVersionShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationAvailableVersionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The application type.
    shared_ptr<string> applicationType_ {};
    // The list of application subcomponents.
    shared_ptr<string> componentsShrink_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
