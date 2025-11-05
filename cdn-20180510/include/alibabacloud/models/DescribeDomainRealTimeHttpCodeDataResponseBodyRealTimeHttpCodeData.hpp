// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(const vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
