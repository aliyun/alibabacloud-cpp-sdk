// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& operator=(const DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& operator=(DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& setUsageData(const vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeVodDomainHttpCodeDataResponseBodyHttpCodeData& setUsageData(vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
