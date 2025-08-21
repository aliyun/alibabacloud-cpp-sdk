// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainRegionDataResponseBodyValueRegionProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainRegionDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(RegionProportionData, regionProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionProportionData, regionProportionData_);
    };
    DescribeVsDomainRegionDataResponseBodyValue() = default ;
    DescribeVsDomainRegionDataResponseBodyValue(const DescribeVsDomainRegionDataResponseBodyValue &) = default ;
    DescribeVsDomainRegionDataResponseBodyValue(DescribeVsDomainRegionDataResponseBodyValue &&) = default ;
    DescribeVsDomainRegionDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainRegionDataResponseBodyValue() = default ;
    DescribeVsDomainRegionDataResponseBodyValue& operator=(const DescribeVsDomainRegionDataResponseBodyValue &) = default ;
    DescribeVsDomainRegionDataResponseBodyValue& operator=(DescribeVsDomainRegionDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionProportionData_ != nullptr; };
    // regionProportionData Field Functions 
    bool hasRegionProportionData() const { return this->regionProportionData_ != nullptr;};
    void deleteRegionProportionData() { this->regionProportionData_ = nullptr;};
    inline const vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData() const { DARABONBA_PTR_GET_CONST(regionProportionData_, vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData> regionProportionData() { DARABONBA_PTR_GET(regionProportionData_, vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline DescribeVsDomainRegionDataResponseBodyValue& setRegionProportionData(const vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData) { DARABONBA_PTR_SET_VALUE(regionProportionData_, regionProportionData) };
    inline DescribeVsDomainRegionDataResponseBodyValue& setRegionProportionData(vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData> && regionProportionData) { DARABONBA_PTR_SET_RVALUE(regionProportionData_, regionProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
