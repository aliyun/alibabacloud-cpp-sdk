// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGTMMONITORREQUESTISPCITYNODE_HPP_
#define ALIBABACLOUD_MODELS_ADDGTMMONITORREQUESTISPCITYNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddGtmMonitorRequestIspCityNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGtmMonitorRequestIspCityNode& obj) { 
      DARABONBA_PTR_TO_JSON(CityCode, cityCode_);
      DARABONBA_PTR_TO_JSON(IspCode, ispCode_);
    };
    friend void from_json(const Darabonba::Json& j, AddGtmMonitorRequestIspCityNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CityCode, cityCode_);
      DARABONBA_PTR_FROM_JSON(IspCode, ispCode_);
    };
    AddGtmMonitorRequestIspCityNode() = default ;
    AddGtmMonitorRequestIspCityNode(const AddGtmMonitorRequestIspCityNode &) = default ;
    AddGtmMonitorRequestIspCityNode(AddGtmMonitorRequestIspCityNode &&) = default ;
    AddGtmMonitorRequestIspCityNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGtmMonitorRequestIspCityNode() = default ;
    AddGtmMonitorRequestIspCityNode& operator=(const AddGtmMonitorRequestIspCityNode &) = default ;
    AddGtmMonitorRequestIspCityNode& operator=(AddGtmMonitorRequestIspCityNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cityCode_ != nullptr
        && this->ispCode_ != nullptr; };
    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline AddGtmMonitorRequestIspCityNode& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // ispCode Field Functions 
    bool hasIspCode() const { return this->ispCode_ != nullptr;};
    void deleteIspCode() { this->ispCode_ = nullptr;};
    inline string ispCode() const { DARABONBA_PTR_GET_DEFAULT(ispCode_, "") };
    inline AddGtmMonitorRequestIspCityNode& setIspCode(string ispCode) { DARABONBA_PTR_SET_VALUE(ispCode_, ispCode) };


  protected:
    // The city code.
    // 
    // Specify the parameter according to the value of CityCode returned by the DescribeGtmMonitorAvailableConfig operation.
    std::shared_ptr<string> cityCode_ = nullptr;
    // The Internet service provider (ISP) node. Specify the parameter according to the value of IspCode returned by the DescribeGtmMonitorAvailableConfig operation.
    // 
    // *   If the return value of GroupType for the DescribeGtmMonitorAvailableConfig operation is BGP or Overseas, IspCode is not required and is set to 465 by default.
    // *   If the return value of GroupType for the DescribeGtmMonitorAvailableConfig operation is not BGP or Overseas, IspCode is required. When IspCode is specified, CityCode is required.
    std::shared_ptr<string> ispCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
