// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTTRACKINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHotspotTrackingResponseBodyDataFlame.hpp>
#include <alibabacloud/models/GetHotspotTrackingResponseBodyDataSeries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotTrackingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotTrackingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(flame, flame_);
      DARABONBA_PTR_TO_JSON(series, series_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotTrackingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(flame, flame_);
      DARABONBA_PTR_FROM_JSON(series, series_);
    };
    GetHotspotTrackingResponseBodyData() = default ;
    GetHotspotTrackingResponseBodyData(const GetHotspotTrackingResponseBodyData &) = default ;
    GetHotspotTrackingResponseBodyData(GetHotspotTrackingResponseBodyData &&) = default ;
    GetHotspotTrackingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotTrackingResponseBodyData() = default ;
    GetHotspotTrackingResponseBodyData& operator=(const GetHotspotTrackingResponseBodyData &) = default ;
    GetHotspotTrackingResponseBodyData& operator=(GetHotspotTrackingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flame_ != nullptr
        && this->series_ != nullptr; };
    // flame Field Functions 
    bool hasFlame() const { return this->flame_ != nullptr;};
    void deleteFlame() { this->flame_ = nullptr;};
    inline const Models::GetHotspotTrackingResponseBodyDataFlame & flame() const { DARABONBA_PTR_GET_CONST(flame_, Models::GetHotspotTrackingResponseBodyDataFlame) };
    inline Models::GetHotspotTrackingResponseBodyDataFlame flame() { DARABONBA_PTR_GET(flame_, Models::GetHotspotTrackingResponseBodyDataFlame) };
    inline GetHotspotTrackingResponseBodyData& setFlame(const Models::GetHotspotTrackingResponseBodyDataFlame & flame) { DARABONBA_PTR_SET_VALUE(flame_, flame) };
    inline GetHotspotTrackingResponseBodyData& setFlame(Models::GetHotspotTrackingResponseBodyDataFlame && flame) { DARABONBA_PTR_SET_RVALUE(flame_, flame) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline const Models::GetHotspotTrackingResponseBodyDataSeries & series() const { DARABONBA_PTR_GET_CONST(series_, Models::GetHotspotTrackingResponseBodyDataSeries) };
    inline Models::GetHotspotTrackingResponseBodyDataSeries series() { DARABONBA_PTR_GET(series_, Models::GetHotspotTrackingResponseBodyDataSeries) };
    inline GetHotspotTrackingResponseBodyData& setSeries(const Models::GetHotspotTrackingResponseBodyDataSeries & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
    inline GetHotspotTrackingResponseBodyData& setSeries(Models::GetHotspotTrackingResponseBodyDataSeries && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


  protected:
    std::shared_ptr<Models::GetHotspotTrackingResponseBodyDataFlame> flame_ = nullptr;
    std::shared_ptr<Models::GetHotspotTrackingResponseBodyDataSeries> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
