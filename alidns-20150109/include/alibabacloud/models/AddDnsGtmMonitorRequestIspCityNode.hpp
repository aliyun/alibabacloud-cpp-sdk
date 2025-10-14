// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUESTISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSGTMMONITORREQUESTISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsGtmMonitorRequestIspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsGtmMonitorRequestIspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsGtmMonitorRequestIspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
    };
    AddDnsGtmMonitorRequestIspCityNode() = default ;
    AddDnsGtmMonitorRequestIspCityNode(const AddDnsGtmMonitorRequestIspCityNode &) = default ;
    AddDnsGtmMonitorRequestIspCityNode(AddDnsGtmMonitorRequestIspCityNode &&) = default ;
    AddDnsGtmMonitorRequestIspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsGtmMonitorRequestIspCityNode() = default ;
    AddDnsGtmMonitorRequestIspCityNode& operator=(const AddDnsGtmMonitorRequestIspCityNode &) = default ;
    AddDnsGtmMonitorRequestIspCityNode& operator=(AddDnsGtmMonitorRequestIspCityNode &&) = default ;
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
    inline AddDnsGtmMonitorRequestIspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline AddDnsGtmMonitorRequestIspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


  protected:
    // The code of the city where the monitored node is deployed.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The code of the Internet service provider (ISP) to which the monitored node belongs.
    std::shared_ptr<string> ispCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
