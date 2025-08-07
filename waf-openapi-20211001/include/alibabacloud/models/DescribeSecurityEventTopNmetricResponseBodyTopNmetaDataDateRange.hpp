// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYTOPNMETADATADATERANGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYTOPNMETADATADATERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange() = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange(const DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange &) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange(DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange &&) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange() = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& operator=(const DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange &) = default ;
    DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& operator=(DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->startDate_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeSecurityEventTopNMetricResponseBodyTopNMetaDataDateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of EndDate in the request parameters.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // The beginning of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of StartDate in the request parameters.
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
