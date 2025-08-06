// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(const DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(const vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
