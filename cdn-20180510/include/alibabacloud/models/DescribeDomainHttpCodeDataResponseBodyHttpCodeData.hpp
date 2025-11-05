// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODYHTTPCODEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHttpCodeDataResponseBodyHttpCodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataResponseBodyHttpCodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData(const DescribeDomainHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData(DescribeDomainHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataResponseBodyHttpCodeData() = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData& operator=(const DescribeDomainHttpCodeDataResponseBodyHttpCodeData &) = default ;
    DescribeDomainHttpCodeDataResponseBodyHttpCodeData& operator=(DescribeDomainHttpCodeDataResponseBodyHttpCodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeData& setUsageData(const vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainHttpCodeDataResponseBodyHttpCodeData& setUsageData(vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainHttpCodeDataResponseBodyHttpCodeDataUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
