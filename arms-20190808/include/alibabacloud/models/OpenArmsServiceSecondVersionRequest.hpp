// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENARMSSERVICESECONDVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENARMSSERVICESECONDVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class OpenArmsServiceSecondVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenArmsServiceSecondVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OpenArmsServiceSecondVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OpenArmsServiceSecondVersionRequest() = default ;
    OpenArmsServiceSecondVersionRequest(const OpenArmsServiceSecondVersionRequest &) = default ;
    OpenArmsServiceSecondVersionRequest(OpenArmsServiceSecondVersionRequest &&) = default ;
    OpenArmsServiceSecondVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenArmsServiceSecondVersionRequest() = default ;
    OpenArmsServiceSecondVersionRequest& operator=(const OpenArmsServiceSecondVersionRequest &) = default ;
    OpenArmsServiceSecondVersionRequest& operator=(OpenArmsServiceSecondVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->type_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline OpenArmsServiceSecondVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OpenArmsServiceSecondVersionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the service. Valid values:
    // 
    // *   `arms`: ARMS
    // *   `arms_app`: Application Monitoring
    // *   `arms_web`: Browser Monitoring
    // *   `prometheus_monitor`: Managed Service for Prometheus
    // *   `synthetic_post`: Synthetic Monitoring
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
