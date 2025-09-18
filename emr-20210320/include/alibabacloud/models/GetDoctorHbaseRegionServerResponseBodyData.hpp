// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionServerResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionServerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionServerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionServerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
    };
    GetDoctorHBaseRegionServerResponseBodyData() = default ;
    GetDoctorHBaseRegionServerResponseBodyData(const GetDoctorHBaseRegionServerResponseBodyData &) = default ;
    GetDoctorHBaseRegionServerResponseBodyData(GetDoctorHBaseRegionServerResponseBodyData &&) = default ;
    GetDoctorHBaseRegionServerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionServerResponseBodyData() = default ;
    GetDoctorHBaseRegionServerResponseBodyData& operator=(const GetDoctorHBaseRegionServerResponseBodyData &) = default ;
    GetDoctorHBaseRegionServerResponseBodyData& operator=(GetDoctorHBaseRegionServerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metrics_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics) };
    inline Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics) };
    inline GetDoctorHBaseRegionServerResponseBodyData& setMetrics(const Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHBaseRegionServerResponseBodyData& setMetrics(Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


  protected:
    // The metric information.
    std::shared_ptr<Models::GetDoctorHBaseRegionServerResponseBodyDataMetrics> metrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
