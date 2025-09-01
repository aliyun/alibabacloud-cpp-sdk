// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTSPOTCOMPARERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHotspotCompareResponseBodyDataFlame.hpp>
#include <alibabacloud/models/GetHotspotCompareResponseBodyDataSeriesInstance1.hpp>
#include <alibabacloud/models/GetHotspotCompareResponseBodyDataSeriesInstance2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetHotspotCompareResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotspotCompareResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(flame, flame_);
      DARABONBA_PTR_TO_JSON(series_instance1, seriesInstance1_);
      DARABONBA_PTR_TO_JSON(series_instance2, seriesInstance2_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotspotCompareResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(flame, flame_);
      DARABONBA_PTR_FROM_JSON(series_instance1, seriesInstance1_);
      DARABONBA_PTR_FROM_JSON(series_instance2, seriesInstance2_);
    };
    GetHotspotCompareResponseBodyData() = default ;
    GetHotspotCompareResponseBodyData(const GetHotspotCompareResponseBodyData &) = default ;
    GetHotspotCompareResponseBodyData(GetHotspotCompareResponseBodyData &&) = default ;
    GetHotspotCompareResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotspotCompareResponseBodyData() = default ;
    GetHotspotCompareResponseBodyData& operator=(const GetHotspotCompareResponseBodyData &) = default ;
    GetHotspotCompareResponseBodyData& operator=(GetHotspotCompareResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flame_ != nullptr
        && this->seriesInstance1_ != nullptr && this->seriesInstance2_ != nullptr; };
    // flame Field Functions 
    bool hasFlame() const { return this->flame_ != nullptr;};
    void deleteFlame() { this->flame_ = nullptr;};
    inline const Models::GetHotspotCompareResponseBodyDataFlame & flame() const { DARABONBA_PTR_GET_CONST(flame_, Models::GetHotspotCompareResponseBodyDataFlame) };
    inline Models::GetHotspotCompareResponseBodyDataFlame flame() { DARABONBA_PTR_GET(flame_, Models::GetHotspotCompareResponseBodyDataFlame) };
    inline GetHotspotCompareResponseBodyData& setFlame(const Models::GetHotspotCompareResponseBodyDataFlame & flame) { DARABONBA_PTR_SET_VALUE(flame_, flame) };
    inline GetHotspotCompareResponseBodyData& setFlame(Models::GetHotspotCompareResponseBodyDataFlame && flame) { DARABONBA_PTR_SET_RVALUE(flame_, flame) };


    // seriesInstance1 Field Functions 
    bool hasSeriesInstance1() const { return this->seriesInstance1_ != nullptr;};
    void deleteSeriesInstance1() { this->seriesInstance1_ = nullptr;};
    inline const Models::GetHotspotCompareResponseBodyDataSeriesInstance1 & seriesInstance1() const { DARABONBA_PTR_GET_CONST(seriesInstance1_, Models::GetHotspotCompareResponseBodyDataSeriesInstance1) };
    inline Models::GetHotspotCompareResponseBodyDataSeriesInstance1 seriesInstance1() { DARABONBA_PTR_GET(seriesInstance1_, Models::GetHotspotCompareResponseBodyDataSeriesInstance1) };
    inline GetHotspotCompareResponseBodyData& setSeriesInstance1(const Models::GetHotspotCompareResponseBodyDataSeriesInstance1 & seriesInstance1) { DARABONBA_PTR_SET_VALUE(seriesInstance1_, seriesInstance1) };
    inline GetHotspotCompareResponseBodyData& setSeriesInstance1(Models::GetHotspotCompareResponseBodyDataSeriesInstance1 && seriesInstance1) { DARABONBA_PTR_SET_RVALUE(seriesInstance1_, seriesInstance1) };


    // seriesInstance2 Field Functions 
    bool hasSeriesInstance2() const { return this->seriesInstance2_ != nullptr;};
    void deleteSeriesInstance2() { this->seriesInstance2_ = nullptr;};
    inline const Models::GetHotspotCompareResponseBodyDataSeriesInstance2 & seriesInstance2() const { DARABONBA_PTR_GET_CONST(seriesInstance2_, Models::GetHotspotCompareResponseBodyDataSeriesInstance2) };
    inline Models::GetHotspotCompareResponseBodyDataSeriesInstance2 seriesInstance2() { DARABONBA_PTR_GET(seriesInstance2_, Models::GetHotspotCompareResponseBodyDataSeriesInstance2) };
    inline GetHotspotCompareResponseBodyData& setSeriesInstance2(const Models::GetHotspotCompareResponseBodyDataSeriesInstance2 & seriesInstance2) { DARABONBA_PTR_SET_VALUE(seriesInstance2_, seriesInstance2) };
    inline GetHotspotCompareResponseBodyData& setSeriesInstance2(Models::GetHotspotCompareResponseBodyDataSeriesInstance2 && seriesInstance2) { DARABONBA_PTR_SET_RVALUE(seriesInstance2_, seriesInstance2) };


  protected:
    std::shared_ptr<Models::GetHotspotCompareResponseBodyDataFlame> flame_ = nullptr;
    std::shared_ptr<Models::GetHotspotCompareResponseBodyDataSeriesInstance1> seriesInstance1_ = nullptr;
    std::shared_ptr<Models::GetHotspotCompareResponseBodyDataSeriesInstance2> seriesInstance2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
