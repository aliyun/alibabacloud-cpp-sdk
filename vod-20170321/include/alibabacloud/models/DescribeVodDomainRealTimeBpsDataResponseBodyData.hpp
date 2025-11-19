// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeBpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BpsModel, bpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsModel, bpsModel_);
    };
    DescribeVodDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyData(const DescribeVodDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyData(DescribeVodDomainRealTimeBpsDataResponseBodyData &&) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyData& operator=(const DescribeVodDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeBpsDataResponseBodyData& operator=(DescribeVodDomainRealTimeBpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bpsModel_ == nullptr; };
    // bpsModel Field Functions 
    bool hasBpsModel() const { return this->bpsModel_ != nullptr;};
    void deleteBpsModel() { this->bpsModel_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel() const { DARABONBA_PTR_GET_CONST(bpsModel_, vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel> bpsModel() { DARABONBA_PTR_GET(bpsModel_, vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline DescribeVodDomainRealTimeBpsDataResponseBodyData& setBpsModel(const vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel) { DARABONBA_PTR_SET_VALUE(bpsModel_, bpsModel) };
    inline DescribeVodDomainRealTimeBpsDataResponseBodyData& setBpsModel(vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel> && bpsModel) { DARABONBA_PTR_SET_RVALUE(bpsModel_, bpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeBpsDataResponseBodyDataBpsModel>> bpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
