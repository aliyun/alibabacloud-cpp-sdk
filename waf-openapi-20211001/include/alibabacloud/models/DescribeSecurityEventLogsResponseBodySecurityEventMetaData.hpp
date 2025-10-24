// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODYSECURITYEVENTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODYSECURITYEVENTMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventLogsResponseBodySecurityEventMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsResponseBodySecurityEventMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
      DARABONBA_PTR_TO_JSON(Units, units_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsResponseBodySecurityEventMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
      DARABONBA_PTR_FROM_JSON(Units, units_);
    };
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData() = default ;
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData(const DescribeSecurityEventLogsResponseBodySecurityEventMetaData &) = default ;
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData(DescribeSecurityEventLogsResponseBodySecurityEventMetaData &&) = default ;
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsResponseBodySecurityEventMetaData() = default ;
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData& operator=(const DescribeSecurityEventLogsResponseBodySecurityEventMetaData &) = default ;
    DescribeSecurityEventLogsResponseBodySecurityEventMetaData& operator=(DescribeSecurityEventLogsResponseBodySecurityEventMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateRange_ == nullptr
        && return this->units_ == nullptr; };
    // dateRange Field Functions 
    bool hasDateRange() const { return this->dateRange_ != nullptr;};
    void deleteDateRange() { this->dateRange_ = nullptr;};
    inline const Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange & dateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange) };
    inline Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange dateRange() { DARABONBA_PTR_GET(dateRange_, Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange) };
    inline DescribeSecurityEventLogsResponseBodySecurityEventMetaData& setDateRange(const Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
    inline DescribeSecurityEventLogsResponseBodySecurityEventMetaData& setDateRange(Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


    // units Field Functions 
    bool hasUnits() const { return this->units_ != nullptr;};
    void deleteUnits() { this->units_ = nullptr;};
    inline string units() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
    inline DescribeSecurityEventLogsResponseBodySecurityEventMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


  protected:
    // The time range that is used for the query.
    std::shared_ptr<Models::DescribeSecurityEventLogsResponseBodySecurityEventMetaDataDateRange> dateRange_ = nullptr;
    // The unit of the statistics returned. The value is fixed as requests.
    std::shared_ptr<string> units_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
