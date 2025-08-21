// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeByteHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    DescribeDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBodyData(const DescribeDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBodyData(DescribeDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBodyData& operator=(const DescribeDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBodyData& operator=(DescribeDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byteHitRateDataModel_ != nullptr; };
    // byteHitRateDataModel Field Functions 
    bool hasByteHitRateDataModel() const { return this->byteHitRateDataModel_ != nullptr;};
    void deleteByteHitRateDataModel() { this->byteHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel() const { DARABONBA_PTR_GET_CONST(byteHitRateDataModel_, vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> byteHitRateDataModel() { DARABONBA_PTR_GET(byteHitRateDataModel_, vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline DescribeDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(const vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel) { DARABONBA_PTR_SET_VALUE(byteHitRateDataModel_, byteHitRateDataModel) };
    inline DescribeDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> && byteHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(byteHitRateDataModel_, byteHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>> byteHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
