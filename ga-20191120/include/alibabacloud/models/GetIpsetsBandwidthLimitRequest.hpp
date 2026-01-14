// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPSETSBANDWIDTHLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIPSETSBANDWIDTHLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetIpsetsBandwidthLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpsetsBandwidthLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpsetsBandwidthLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetIpsetsBandwidthLimitRequest() = default ;
    GetIpsetsBandwidthLimitRequest(const GetIpsetsBandwidthLimitRequest &) = default ;
    GetIpsetsBandwidthLimitRequest(GetIpsetsBandwidthLimitRequest &&) = default ;
    GetIpsetsBandwidthLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpsetsBandwidthLimitRequest() = default ;
    GetIpsetsBandwidthLimitRequest& operator=(const GetIpsetsBandwidthLimitRequest &) = default ;
    GetIpsetsBandwidthLimitRequest& operator=(GetIpsetsBandwidthLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetIpsetsBandwidthLimitRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetIpsetsBandwidthLimitRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance to be queried.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The ID of the region where the Global Accelerator (GA) instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
