// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEHTTPCODEDATARESPONSEBODYREALTIMEHTTPCODEDATAUSAGEDATAVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
    };
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &&) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue() = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& operator=(const DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &) = default ;
    DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& operator=(DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->realTimeCodeProportionData_ != nullptr; };
    // realTimeCodeProportionData Field Functions 
    bool hasRealTimeCodeProportionData() const { return this->realTimeCodeProportionData_ != nullptr;};
    void deleteRealTimeCodeProportionData() { this->realTimeCodeProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> & realTimeCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeCodeProportionData_, vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>) };
    inline vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> realTimeCodeProportionData() { DARABONBA_PTR_GET(realTimeCodeProportionData_, vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& setRealTimeCodeProportionData(const vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> & realTimeCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };
    inline DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValue& setRealTimeCodeProportionData(vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData> && realTimeCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeHttpCodeDataResponseBodyRealTimeHttpCodeDataUsageDataValueRealTimeCodeProportionData>> realTimeCodeProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
