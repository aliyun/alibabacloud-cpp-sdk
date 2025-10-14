// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSISPCITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORATTRIBUTERESPONSEBODYSITEMONITORSISPCITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& obj) { 
      DARABONBA_PTR_TO_JSON(IspCity, ispCity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCity, ispCity_);
    };
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities(DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities &&) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities() = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& operator=(const DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities &) = default ;
    DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& operator=(DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ispCity_ == nullptr; };
    // ispCity Field Functions 
    bool hasIspCity() const { return this->ispCity_ != nullptr;};
    void deleteIspCity() { this->ispCity_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity> & ispCity() const { DARABONBA_PTR_GET_CONST(ispCity_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity>) };
    inline vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity> ispCity() { DARABONBA_PTR_GET(ispCity_, vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity>) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& setIspCity(const vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity> & ispCity) { DARABONBA_PTR_SET_VALUE(ispCity_, ispCity) };
    inline DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCities& setIspCity(vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity> && ispCity) { DARABONBA_PTR_SET_RVALUE(ispCity_, ispCity) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorAttributeResponseBodySiteMonitorsIspCitiesIspCity>> ispCity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
