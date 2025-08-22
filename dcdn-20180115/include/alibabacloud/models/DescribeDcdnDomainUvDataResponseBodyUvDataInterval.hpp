// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval(const DescribeDcdnDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval(DescribeDcdnDomainUvDataResponseBodyUvDataInterval &&) = default ;
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval& operator=(const DescribeDcdnDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeDcdnDomainUvDataResponseBodyUvDataInterval& operator=(DescribeDcdnDomainUvDataResponseBodyUvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline DescribeDcdnDomainUvDataResponseBodyUvDataInterval& setUsageData(const vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDcdnDomainUvDataResponseBodyUvDataInterval& setUsageData(vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
