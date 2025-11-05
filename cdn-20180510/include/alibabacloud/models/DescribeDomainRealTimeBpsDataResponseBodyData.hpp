// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeBpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BpsModel, bpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsModel, bpsModel_);
    };
    DescribeDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeDomainRealTimeBpsDataResponseBodyData(const DescribeDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyData(DescribeDomainRealTimeBpsDataResponseBodyData &&) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeDomainRealTimeBpsDataResponseBodyData& operator=(const DescribeDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeDomainRealTimeBpsDataResponseBodyData& operator=(DescribeDomainRealTimeBpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bpsModel_ == nullptr; };
    // bpsModel Field Functions 
    bool hasBpsModel() const { return this->bpsModel_ != nullptr;};
    void deleteBpsModel() { this->bpsModel_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel() const { DARABONBA_PTR_GET_CONST(bpsModel_, vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel> bpsModel() { DARABONBA_PTR_GET(bpsModel_, vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline DescribeDomainRealTimeBpsDataResponseBodyData& setBpsModel(const vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel) { DARABONBA_PTR_SET_VALUE(bpsModel_, bpsModel) };
    inline DescribeDomainRealTimeBpsDataResponseBodyData& setBpsModel(vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel> && bpsModel) { DARABONBA_PTR_SET_RVALUE(bpsModel_, bpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeBpsDataResponseBodyDataBpsModel>> bpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
