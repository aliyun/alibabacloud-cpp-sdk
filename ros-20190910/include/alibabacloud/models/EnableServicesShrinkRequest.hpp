// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServicesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServicesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceNames, serviceNamesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServicesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceNames, serviceNamesShrink_);
    };
    EnableServicesShrinkRequest() = default ;
    EnableServicesShrinkRequest(const EnableServicesShrinkRequest &) = default ;
    EnableServicesShrinkRequest(EnableServicesShrinkRequest &&) = default ;
    EnableServicesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServicesShrinkRequest() = default ;
    EnableServicesShrinkRequest& operator=(const EnableServicesShrinkRequest &) = default ;
    EnableServicesShrinkRequest& operator=(EnableServicesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->serviceNamesShrink_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableServicesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceNamesShrink Field Functions 
    bool hasServiceNamesShrink() const { return this->serviceNamesShrink_ != nullptr;};
    void deleteServiceNamesShrink() { this->serviceNamesShrink_ = nullptr;};
    inline string serviceNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceNamesShrink_, "") };
    inline EnableServicesShrinkRequest& setServiceNamesShrink(string serviceNamesShrink) { DARABONBA_PTR_SET_VALUE(serviceNamesShrink_, serviceNamesShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> serviceNamesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
