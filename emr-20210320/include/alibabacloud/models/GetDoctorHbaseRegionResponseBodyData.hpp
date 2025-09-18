// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDoctorHBaseRegionResponseBodyDataMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RegionServerHost, regionServerHost_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RegionServerHost, regionServerHost_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetDoctorHBaseRegionResponseBodyData() = default ;
    GetDoctorHBaseRegionResponseBodyData(const GetDoctorHBaseRegionResponseBodyData &) = default ;
    GetDoctorHBaseRegionResponseBodyData(GetDoctorHBaseRegionResponseBodyData &&) = default ;
    GetDoctorHBaseRegionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionResponseBodyData() = default ;
    GetDoctorHBaseRegionResponseBodyData& operator=(const GetDoctorHBaseRegionResponseBodyData &) = default ;
    GetDoctorHBaseRegionResponseBodyData& operator=(GetDoctorHBaseRegionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metrics_ != nullptr
        && this->regionServerHost_ != nullptr && this->tableName_ != nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const Models::GetDoctorHBaseRegionResponseBodyDataMetrics & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, Models::GetDoctorHBaseRegionResponseBodyDataMetrics) };
    inline Models::GetDoctorHBaseRegionResponseBodyDataMetrics metrics() { DARABONBA_PTR_GET(metrics_, Models::GetDoctorHBaseRegionResponseBodyDataMetrics) };
    inline GetDoctorHBaseRegionResponseBodyData& setMetrics(const Models::GetDoctorHBaseRegionResponseBodyDataMetrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline GetDoctorHBaseRegionResponseBodyData& setMetrics(Models::GetDoctorHBaseRegionResponseBodyDataMetrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // regionServerHost Field Functions 
    bool hasRegionServerHost() const { return this->regionServerHost_ != nullptr;};
    void deleteRegionServerHost() { this->regionServerHost_ = nullptr;};
    inline string regionServerHost() const { DARABONBA_PTR_GET_DEFAULT(regionServerHost_, "") };
    inline GetDoctorHBaseRegionResponseBodyData& setRegionServerHost(string regionServerHost) { DARABONBA_PTR_SET_VALUE(regionServerHost_, regionServerHost) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDoctorHBaseRegionResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // Metrics information.
    std::shared_ptr<Models::GetDoctorHBaseRegionResponseBodyDataMetrics> metrics_ = nullptr;
    // Host of the RegionServer.
    std::shared_ptr<string> regionServerHost_ = nullptr;
    // Table name.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
