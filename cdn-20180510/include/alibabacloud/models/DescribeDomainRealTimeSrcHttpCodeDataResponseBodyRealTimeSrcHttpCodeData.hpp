// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODYREALTIMESRCHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODYREALTIMESRCHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData() = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData(const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData &) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData(DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData &&) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData() = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& operator=(const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData &) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& operator=(DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData>) };
    inline vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData>) };
    inline DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& setUsageData(const vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeData& setUsageData(vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
