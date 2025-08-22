// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData() = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(const DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &) = default ;
    DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& operator=(DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>) };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(const vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeData& setUsageData(vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
