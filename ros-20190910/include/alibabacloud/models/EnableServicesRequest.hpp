// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class EnableServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceNames, serviceNames_);
    };
    friend void from_json(const Darabonba::Json& j, EnableServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceNames, serviceNames_);
    };
    EnableServicesRequest() = default ;
    EnableServicesRequest(const EnableServicesRequest &) = default ;
    EnableServicesRequest(EnableServicesRequest &&) = default ;
    EnableServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableServicesRequest() = default ;
    EnableServicesRequest& operator=(const EnableServicesRequest &) = default ;
    EnableServicesRequest& operator=(EnableServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->serviceNames_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableServicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceNames Field Functions 
    bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
    void deleteServiceNames() { this->serviceNames_ = nullptr;};
    inline const vector<string> & serviceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
    inline vector<string> serviceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
    inline EnableServicesRequest& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
    inline EnableServicesRequest& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> serviceNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
