// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCOMMERCIALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKCOMMERCIALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CheckCommercialStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCommercialStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCommercialStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    CheckCommercialStatusRequest() = default ;
    CheckCommercialStatusRequest(const CheckCommercialStatusRequest &) = default ;
    CheckCommercialStatusRequest(CheckCommercialStatusRequest &&) = default ;
    CheckCommercialStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCommercialStatusRequest() = default ;
    CheckCommercialStatusRequest& operator=(const CheckCommercialStatusRequest &) = default ;
    CheckCommercialStatusRequest& operator=(CheckCommercialStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->service_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckCommercialStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline CheckCommercialStatusRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // The region ID. Default value: cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ARMS sub-service. Valid values:
    // 
    // *   apm: Application Monitoring
    // *   rum: RUM
    // *   prometheus: Managed Service for Prometheus
    // *   xtrace: Managed Service for OpenTelemetry
    // 
    // This parameter is required.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
