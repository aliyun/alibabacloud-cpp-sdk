// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
    };
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData(DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& operator=(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& operator=(DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reqHitRateDataModel_ != nullptr; };
    // reqHitRateDataModel Field Functions 
    bool hasReqHitRateDataModel() const { return this->reqHitRateDataModel_ != nullptr;};
    void deleteReqHitRateDataModel() { this->reqHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel() const { DARABONBA_PTR_GET_CONST(reqHitRateDataModel_, vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> reqHitRateDataModel() { DARABONBA_PTR_GET(reqHitRateDataModel_, vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(const vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> & reqHitRateDataModel) { DARABONBA_PTR_SET_VALUE(reqHitRateDataModel_, reqHitRateDataModel) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData& setReqHitRateDataModel(vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel> && reqHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(reqHitRateDataModel_, reqHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyDataReqHitRateDataModel>> reqHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
