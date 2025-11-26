// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseRegionServersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseRegionServersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RegionServerHost, regionServerHost_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseRegionServersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RegionServerHost, regionServerHost_);
    };
    ListDoctorHBaseRegionServersResponseBodyData() = default ;
    ListDoctorHBaseRegionServersResponseBodyData(const ListDoctorHBaseRegionServersResponseBodyData &) = default ;
    ListDoctorHBaseRegionServersResponseBodyData(ListDoctorHBaseRegionServersResponseBodyData &&) = default ;
    ListDoctorHBaseRegionServersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseRegionServersResponseBodyData() = default ;
    ListDoctorHBaseRegionServersResponseBodyData& operator=(const ListDoctorHBaseRegionServersResponseBodyData &) = default ;
    ListDoctorHBaseRegionServersResponseBodyData& operator=(ListDoctorHBaseRegionServersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metrics_ == nullptr
        && return this->regionServerHost_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics) };
    inline Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics) };
    inline ListDoctorHBaseRegionServersResponseBodyData& setMetrics(const Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListDoctorHBaseRegionServersResponseBodyData& setMetrics(Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // regionServerHost Field Functions 
    bool hasRegionServerHost() const { return this->regionServerHost_ != nullptr;};
    void deleteRegionServerHost() { this->regionServerHost_ = nullptr;};
    inline string regionServerHost() const { DARABONBA_PTR_GET_DEFAULT(regionServerHost_, "") };
    inline ListDoctorHBaseRegionServersResponseBodyData& setRegionServerHost(string regionServerHost) { DARABONBA_PTR_SET_VALUE(regionServerHost_, regionServerHost) };


  protected:
    // The metric information.
    std::shared_ptr<Models::ListDoctorHBaseRegionServersResponseBodyDataMetrics> metrics_ = nullptr;
    // The RegionServer host.
    std::shared_ptr<string> regionServerHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
