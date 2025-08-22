// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRegionDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(RegionProportionData, regionProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionProportionData, regionProportionData_);
    };
    DescribeDcdnDomainRegionDataResponseBodyValue() = default ;
    DescribeDcdnDomainRegionDataResponseBodyValue(const DescribeDcdnDomainRegionDataResponseBodyValue &) = default ;
    DescribeDcdnDomainRegionDataResponseBodyValue(DescribeDcdnDomainRegionDataResponseBodyValue &&) = default ;
    DescribeDcdnDomainRegionDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRegionDataResponseBodyValue() = default ;
    DescribeDcdnDomainRegionDataResponseBodyValue& operator=(const DescribeDcdnDomainRegionDataResponseBodyValue &) = default ;
    DescribeDcdnDomainRegionDataResponseBodyValue& operator=(DescribeDcdnDomainRegionDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionProportionData_ != nullptr; };
    // regionProportionData Field Functions 
    bool hasRegionProportionData() const { return this->regionProportionData_ != nullptr;};
    void deleteRegionProportionData() { this->regionProportionData_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData() const { DARABONBA_PTR_GET_CONST(regionProportionData_, vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData> regionProportionData() { DARABONBA_PTR_GET(regionProportionData_, vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline DescribeDcdnDomainRegionDataResponseBodyValue& setRegionProportionData(const vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData) { DARABONBA_PTR_SET_VALUE(regionProportionData_, regionProportionData) };
    inline DescribeDcdnDomainRegionDataResponseBodyValue& setRegionProportionData(vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData> && regionProportionData) { DARABONBA_PTR_SET_RVALUE(regionProportionData_, regionProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
