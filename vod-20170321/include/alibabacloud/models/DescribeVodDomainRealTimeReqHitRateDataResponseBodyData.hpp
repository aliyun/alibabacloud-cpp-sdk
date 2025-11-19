// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeReqHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData(const DescribeVodDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData(DescribeVodDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& operator=(const DescribeVodDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& operator=(DescribeVodDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reqHitRateDataModel_ == nullptr; };
    // reqHitRateDataModel Field Functions 
    bool hasReqHitRateDataModel() const { return this->reqHitRateDataModel_ != nullptr;};
    void deleteReqHitRateDataModel() { this->reqHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel() const { DARABONBA_PTR_GET_CONST(reqHitRateDataModel_, vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> reqHitRateDataModel() { DARABONBA_PTR_GET(reqHitRateDataModel_, vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(const vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel) { DARABONBA_PTR_SET_VALUE(reqHitRateDataModel_, reqHitRateDataModel) };
    inline DescribeVodDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> && reqHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(reqHitRateDataModel_, reqHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>> reqHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
