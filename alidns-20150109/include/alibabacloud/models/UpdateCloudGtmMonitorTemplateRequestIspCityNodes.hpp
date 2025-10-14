// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATEREQUESTISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATEREQUESTISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmMonitorTemplateRequestIspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmMonitorTemplateRequestIspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmMonitorTemplateRequestIspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
    };
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes() = default ;
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes(const UpdateCloudGtmMonitorTemplateRequestIspCityNodes &) = default ;
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes(UpdateCloudGtmMonitorTemplateRequestIspCityNodes &&) = default ;
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmMonitorTemplateRequestIspCityNodes() = default ;
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes& operator=(const UpdateCloudGtmMonitorTemplateRequestIspCityNodes &) = default ;
    UpdateCloudGtmMonitorTemplateRequestIspCityNodes& operator=(UpdateCloudGtmMonitorTemplateRequestIspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cityCode_ == nullptr
        && return this->ispCode_ == nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline UpdateCloudGtmMonitorTemplateRequestIspCityNodes& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline UpdateCloudGtmMonitorTemplateRequestIspCityNodes& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


  protected:
    // The city code of the health check node.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The Internet service provider (ISP) code of the health check node.
    std::shared_ptr<string> ispCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
