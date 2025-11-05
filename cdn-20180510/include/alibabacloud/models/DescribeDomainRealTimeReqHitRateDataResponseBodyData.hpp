// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeReqHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    DescribeDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBodyData(const DescribeDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBodyData(DescribeDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBodyData& operator=(const DescribeDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBodyData& operator=(DescribeDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reqHitRateDataModel_ == nullptr; };
    // reqHitRateDataModel Field Functions 
    bool hasReqHitRateDataModel() const { return this->reqHitRateDataModel_ != nullptr;};
    void deleteReqHitRateDataModel() { this->reqHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel() const { DARABONBA_PTR_GET_CONST(reqHitRateDataModel_, vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> reqHitRateDataModel() { DARABONBA_PTR_GET(reqHitRateDataModel_, vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline DescribeDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(const vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel) { DARABONBA_PTR_SET_VALUE(reqHitRateDataModel_, reqHitRateDataModel) };
    inline DescribeDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> && reqHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(reqHitRateDataModel_, reqHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>> reqHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
