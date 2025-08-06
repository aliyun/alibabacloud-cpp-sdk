// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
    };
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &&) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& operator=(const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& operator=(DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realTimeCodeProportionData_ != nullptr; };
    // realTimeCodeProportionData Field Functions 
    bool hasRealTimeCodeProportionData() const { return this->realTimeCodeProportionData_ != nullptr;};
    void deleteRealTimeCodeProportionData() { this->realTimeCodeProportionData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> & realTimeCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeCodeProportionData_, vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>) };
    inline vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> realTimeCodeProportionData() { DARABONBA_PTR_GET(realTimeCodeProportionData_, vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& setRealTimeCodeProportionData(const vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> & realTimeCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& setRealTimeCodeProportionData(vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> && realTimeCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>> realTimeCodeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
