// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRegionDataResponseBodyValueRegionProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRegionDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(RegionProportionData, regionProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionProportionData, regionProportionData_);
    };
    DescribeDomainRegionDataResponseBodyValue() = default ;
    DescribeDomainRegionDataResponseBodyValue(const DescribeDomainRegionDataResponseBodyValue &) = default ;
    DescribeDomainRegionDataResponseBodyValue(DescribeDomainRegionDataResponseBodyValue &&) = default ;
    DescribeDomainRegionDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRegionDataResponseBodyValue() = default ;
    DescribeDomainRegionDataResponseBodyValue& operator=(const DescribeDomainRegionDataResponseBodyValue &) = default ;
    DescribeDomainRegionDataResponseBodyValue& operator=(DescribeDomainRegionDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionProportionData_ == nullptr; };
    // regionProportionData Field Functions 
    bool hasRegionProportionData() const { return this->regionProportionData_ != nullptr;};
    void deleteRegionProportionData() { this->regionProportionData_ = nullptr;};
    inline const vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData() const { DARABONBA_PTR_GET_CONST(regionProportionData_, vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData> regionProportionData() { DARABONBA_PTR_GET(regionProportionData_, vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline DescribeDomainRegionDataResponseBodyValue& setRegionProportionData(const vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData) { DARABONBA_PTR_SET_VALUE(regionProportionData_, regionProportionData) };
    inline DescribeDomainRegionDataResponseBodyValue& setRegionProportionData(vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData> && regionProportionData) { DARABONBA_PTR_SET_RVALUE(regionProportionData_, regionProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
