// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREGIONDATARESPONSEBODYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRegionDataResponseBodyValueRegionProportionData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRegionDataResponseBodyValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_TO_JSON(RegionProportionData, regionProportionData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRegionDataResponseBodyValue& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionProportionData, regionProportionData_);
    };
    DescribeVodDomainRegionDataResponseBodyValue() = default ;
    DescribeVodDomainRegionDataResponseBodyValue(const DescribeVodDomainRegionDataResponseBodyValue &) = default ;
    DescribeVodDomainRegionDataResponseBodyValue(DescribeVodDomainRegionDataResponseBodyValue &&) = default ;
    DescribeVodDomainRegionDataResponseBodyValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRegionDataResponseBodyValue() = default ;
    DescribeVodDomainRegionDataResponseBodyValue& operator=(const DescribeVodDomainRegionDataResponseBodyValue &) = default ;
    DescribeVodDomainRegionDataResponseBodyValue& operator=(DescribeVodDomainRegionDataResponseBodyValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionProportionData_ != nullptr; };
    // regionProportionData Field Functions 
    bool hasRegionProportionData() const { return this->regionProportionData_ != nullptr;};
    void deleteRegionProportionData() { this->regionProportionData_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData() const { DARABONBA_PTR_GET_CONST(regionProportionData_, vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData> regionProportionData() { DARABONBA_PTR_GET(regionProportionData_, vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData>) };
    inline DescribeVodDomainRegionDataResponseBodyValue& setRegionProportionData(const vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData> & regionProportionData) { DARABONBA_PTR_SET_VALUE(regionProportionData_, regionProportionData) };
    inline DescribeVodDomainRegionDataResponseBodyValue& setRegionProportionData(vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData> && regionProportionData) { DARABONBA_PTR_SET_RVALUE(regionProportionData_, regionProportionData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRegionDataResponseBodyValueRegionProportionData>> regionProportionData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
