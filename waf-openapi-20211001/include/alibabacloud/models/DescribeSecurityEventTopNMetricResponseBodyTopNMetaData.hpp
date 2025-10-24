// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYTOPNMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYTOPNMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricResponseBodyTopNMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      DARABONBA_PTR_TO_JSON(Units, units_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      DARABONBA_PTR_FROM_JSON(Units, units_);
    };
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData() = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData(const DescribeSecurityEventTopNMetricResponseBodyTopNMetaData &) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData(DescribeSecurityEventTopNMetricResponseBodyTopNMetaData &&) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricResponseBodyTopNMetaData() = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& operator=(const DescribeSecurityEventTopNMetricResponseBodyTopNMetaData &) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& operator=(DescribeSecurityEventTopNMetricResponseBodyTopNMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateRange_ == nullptr
        && return this->units_ == nullptr; };
    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange) };
    inline Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange) };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& setDateRange(const Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& setDateRange(Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    // units Field Functions 
    bool hasUnits() const { return this->units_ != nullptr;};
    void deleteUnits() { this->units_ = nullptr;};
    inline string units() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


  protected:
    // The time range that is used for the query.
    std::shared_ptr<Models::DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange> dateRange_ = nullptr;
    // The unit of the statistics returned. It is fixed as requests.
    std::shared_ptr<string> units_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
