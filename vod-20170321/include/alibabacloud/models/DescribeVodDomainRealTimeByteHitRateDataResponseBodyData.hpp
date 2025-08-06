// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeByteHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData(const DescribeVodDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData(DescribeVodDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& operator=(const DescribeVodDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& operator=(DescribeVodDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byteHitRateDataModel_ != nullptr; };
    // byteHitRateDataModel Field Functions 
    bool hasByteHitRateDataModel() const { return this->byteHitRateDataModel_ != nullptr;};
    void deleteByteHitRateDataModel() { this->byteHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel() const { DARABONBA_PTR_GET_CONST(byteHitRateDataModel_, vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> byteHitRateDataModel() { DARABONBA_PTR_GET(byteHitRateDataModel_, vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(const vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel) { DARABONBA_PTR_SET_VALUE(byteHitRateDataModel_, byteHitRateDataModel) };
    inline DescribeVodDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> && byteHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(byteHitRateDataModel_, byteHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>> byteHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
