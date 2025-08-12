// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODYMONITORINGDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMONITORINGUSAGEDATARESPONSEBODYMONITORINGDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& obj) { 
      DARABONBA_PTR_TO_JSON(MonitoringDataItem, monitoringDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitoringDataItem, monitoringDataItem_);
    };
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData(const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData(DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData &&) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData() = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& operator=(const DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData &) = default ;
    DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& operator=(DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->monitoringDataItem_ != nullptr; };
    // monitoringDataItem Field Functions 
    bool hasMonitoringDataItem() const { return this->monitoringDataItem_ != nullptr;};
    void deleteMonitoringDataItem() { this->monitoringDataItem_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem> & monitoringDataItem() const { DARABONBA_PTR_GET_CONST(monitoringDataItem_, vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem>) };
    inline vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem> monitoringDataItem() { DARABONBA_PTR_GET(monitoringDataItem_, vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem>) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& setMonitoringDataItem(const vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem> & monitoringDataItem) { DARABONBA_PTR_SET_VALUE(monitoringDataItem_, monitoringDataItem) };
    inline DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringData& setMonitoringDataItem(vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem> && monitoringDataItem) { DARABONBA_PTR_SET_RVALUE(monitoringDataItem_, monitoringDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainMonitoringUsageDataResponseBodyMonitoringDataMonitoringDataItem>> monitoringDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
