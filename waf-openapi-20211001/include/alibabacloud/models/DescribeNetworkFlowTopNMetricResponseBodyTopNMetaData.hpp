// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODYTOPNMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODYTOPNMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      DARABONBA_PTR_TO_JSON(Units, units_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      DARABONBA_PTR_FROM_JSON(Units, units_);
    };
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData() = default ;
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData(const DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData &) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData(DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData &&) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData() = default ;
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& operator=(const DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData &) = default ;
    DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& operator=(DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateRange_ == nullptr
        && return this->units_ == nullptr; };
    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange) };
    inline Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange) };
    inline DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& setDateRange(const Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& setDateRange(Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    // units Field Functions 
    bool hasUnits() const { return this->units_ != nullptr;};
    void deleteUnits() { this->units_ = nullptr;};
    inline string units() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
    inline DescribeNetworkFlowTopNMetricResponseBodyTopNMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


  protected:
    // The query time range.
    std::shared_ptr<Models::DescribeNetworkFlowTopNMetricResponseBodyTopNMetaDataDateRange> dateRange_ = nullptr;
    // The unit of the returned data. It is fixed as requests.
    std::shared_ptr<string> units_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
