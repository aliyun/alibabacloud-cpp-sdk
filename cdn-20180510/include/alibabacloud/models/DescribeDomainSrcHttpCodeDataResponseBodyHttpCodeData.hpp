// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& operator=(const DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& operator=(DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& setUsageData(const vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeData& setUsageData(vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcHttpCodeDataResponseBodyHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
