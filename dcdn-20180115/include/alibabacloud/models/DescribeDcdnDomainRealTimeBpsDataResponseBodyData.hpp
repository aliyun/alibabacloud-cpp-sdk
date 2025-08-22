// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeBpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BpsModel, bpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeBpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BpsModel, bpsModel_);
    };
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData(const DescribeDcdnDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData(DescribeDcdnDomainRealTimeBpsDataResponseBodyData &&) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeBpsDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData& operator=(const DescribeDcdnDomainRealTimeBpsDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBodyData& operator=(DescribeDcdnDomainRealTimeBpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bpsModel_ != nullptr; };
    // bpsModel Field Functions 
    bool hasBpsModel() const { return this->bpsModel_ != nullptr;};
    void deleteBpsModel() { this->bpsModel_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel() const { DARABONBA_PTR_GET_CONST(bpsModel_, vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel> bpsModel() { DARABONBA_PTR_GET(bpsModel_, vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel>) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBodyData& setBpsModel(const vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel> & bpsModel) { DARABONBA_PTR_SET_VALUE(bpsModel_, bpsModel) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBodyData& setBpsModel(vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel> && bpsModel) { DARABONBA_PTR_SET_RVALUE(bpsModel_, bpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRealTimeBpsDataResponseBodyDataBpsModel>> bpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
