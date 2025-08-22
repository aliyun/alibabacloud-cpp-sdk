// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
    };
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData(DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& operator=(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& operator=(DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->byteHitRateDataModel_ != nullptr; };
    // byteHitRateDataModel Field Functions 
    bool hasByteHitRateDataModel() const { return this->byteHitRateDataModel_ != nullptr;};
    void deleteByteHitRateDataModel() { this->byteHitRateDataModel_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel() const { DARABONBA_PTR_GET_CONST(byteHitRateDataModel_, vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> byteHitRateDataModel() { DARABONBA_PTR_GET(byteHitRateDataModel_, vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(const vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> & byteHitRateDataModel) { DARABONBA_PTR_SET_VALUE(byteHitRateDataModel_, byteHitRateDataModel) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyData& setByteHitRateDataModel(vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel> && byteHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(byteHitRateDataModel_, byteHitRateDataModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRealTimeByteHitRateDataResponseBodyDataByteHitRateDataModel>> byteHitRateDataModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
