// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSZONEOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSZONEOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsZoneOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsZoneOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_TO_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsZoneOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OverviewPeriod, overviewPeriod_);
      DARABONBA_PTR_FROM_JSON(ServerRegion, serverRegion_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeInterAuthStatisticsZoneOverviewRequest() = default ;
    DescribeInterAuthStatisticsZoneOverviewRequest(const DescribeInterAuthStatisticsZoneOverviewRequest &) = default ;
    DescribeInterAuthStatisticsZoneOverviewRequest(DescribeInterAuthStatisticsZoneOverviewRequest &&) = default ;
    DescribeInterAuthStatisticsZoneOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsZoneOverviewRequest() = default ;
    DescribeInterAuthStatisticsZoneOverviewRequest& operator=(const DescribeInterAuthStatisticsZoneOverviewRequest &) = default ;
    DescribeInterAuthStatisticsZoneOverviewRequest& operator=(DescribeInterAuthStatisticsZoneOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overviewPeriod_ == nullptr
        && this->serverRegion_ == nullptr && this->zoneName_ == nullptr; };
    // overviewPeriod Field Functions 
    bool hasOverviewPeriod() const { return this->overviewPeriod_ != nullptr;};
    void deleteOverviewPeriod() { this->overviewPeriod_ = nullptr;};
    inline string getOverviewPeriod() const { DARABONBA_PTR_GET_DEFAULT(overviewPeriod_, "") };
    inline DescribeInterAuthStatisticsZoneOverviewRequest& setOverviewPeriod(string overviewPeriod) { DARABONBA_PTR_SET_VALUE(overviewPeriod_, overviewPeriod) };


    // serverRegion Field Functions 
    bool hasServerRegion() const { return this->serverRegion_ != nullptr;};
    void deleteServerRegion() { this->serverRegion_ = nullptr;};
    inline string getServerRegion() const { DARABONBA_PTR_GET_DEFAULT(serverRegion_, "") };
    inline DescribeInterAuthStatisticsZoneOverviewRequest& setServerRegion(string serverRegion) { DARABONBA_PTR_SET_VALUE(serverRegion_, serverRegion) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeInterAuthStatisticsZoneOverviewRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    shared_ptr<string> overviewPeriod_ {};
    shared_ptr<string> serverRegion_ {};
    shared_ptr<string> zoneName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
