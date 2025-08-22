// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval(const DescribeDcdnDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval(DescribeDcdnDomainPvDataResponseBodyPvDataInterval &&) = default ;
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval& operator=(const DescribeDcdnDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeDcdnDomainPvDataResponseBodyPvDataInterval& operator=(DescribeDcdnDomainPvDataResponseBodyPvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline DescribeDcdnDomainPvDataResponseBodyPvDataInterval& setUsageData(const vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDcdnDomainPvDataResponseBodyPvDataInterval& setUsageData(vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainPvDataResponseBodyPvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
