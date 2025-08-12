// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODYISPCITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorISPCityListResponseBodyIspCityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListResponseBodyIspCityList& obj) { 
      DARABONBA_PTR_TO_JSON(IspCity, ispCity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListResponseBodyIspCityList& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCity, ispCity_);
    };
    DescribeSiteMonitorISPCityListResponseBodyIspCityList() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityList(const DescribeSiteMonitorISPCityListResponseBodyIspCityList &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityList(DescribeSiteMonitorISPCityListResponseBodyIspCityList &&) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListResponseBodyIspCityList() = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityList& operator=(const DescribeSiteMonitorISPCityListResponseBodyIspCityList &) = default ;
    DescribeSiteMonitorISPCityListResponseBodyIspCityList& operator=(DescribeSiteMonitorISPCityListResponseBodyIspCityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispCity_ != nullptr; };
    // ispCity Field Functions 
    bool hasIspCity() const { return this->ispCity_ != nullptr;};
    void deleteIspCity() { this->ispCity_ = nullptr;};
    inline const vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity> & ispCity() const { DARABONBA_PTR_GET_CONST(ispCity_, vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity>) };
    inline vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity> ispCity() { DARABONBA_PTR_GET(ispCity_, vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity>) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityList& setIspCity(const vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity> & ispCity) { DARABONBA_PTR_SET_VALUE(ispCity_, ispCity) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityList& setIspCity(vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity> && ispCity) { DARABONBA_PTR_SET_RVALUE(ispCity_, ispCity) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteMonitorISPCityListResponseBodyIspCityListIspCity>> ispCity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
