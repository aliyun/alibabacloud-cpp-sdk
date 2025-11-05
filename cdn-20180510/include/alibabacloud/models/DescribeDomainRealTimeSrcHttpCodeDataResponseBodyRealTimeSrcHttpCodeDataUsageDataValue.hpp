// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODYREALTIMESRCHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMESRCHTTPCODEDATARESPONSEBODYREALTIMESRCHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeSrcCodeProportionData, realTimeSrcCodeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeSrcCodeProportionData, realTimeSrcCodeProportionData_);
    };
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue() = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue(const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue(DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue &&) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue() = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& operator=(const DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& operator=(DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->realTimeSrcCodeProportionData_ == nullptr; };
    // realTimeSrcCodeProportionData Field Functions 
    bool hasRealTimeSrcCodeProportionData() const { return this->realTimeSrcCodeProportionData_ != nullptr;};
    void deleteRealTimeSrcCodeProportionData() { this->realTimeSrcCodeProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData> & realTimeSrcCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeSrcCodeProportionData_, vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData>) };
    inline vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData> realTimeSrcCodeProportionData() { DARABONBA_PTR_GET(realTimeSrcCodeProportionData_, vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData>) };
    inline DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& setRealTimeSrcCodeProportionData(const vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData> & realTimeSrcCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeSrcCodeProportionData_, realTimeSrcCodeProportionData) };
    inline DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValue& setRealTimeSrcCodeProportionData(vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData> && realTimeSrcCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeSrcCodeProportionData_, realTimeSrcCodeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeSrcHttpCodeDataResponseBodyRealTimeSrcHttpCodeDataUsageDataValueRealTimeSrcCodeProportionData>> realTimeSrcCodeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
