// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMAX95BPSDATARESPONSEBODYDETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMAX95BPSDATARESPONSEBODYDETAILDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMax95BpsDataResponseBodyDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMax95BpsDataResponseBodyDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(Max95Detail, max95Detail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMax95BpsDataResponseBodyDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(Max95Detail, max95Detail_);
    };
    DescribeDomainMax95BpsDataResponseBodyDetailData() = default ;
    DescribeDomainMax95BpsDataResponseBodyDetailData(const DescribeDomainMax95BpsDataResponseBodyDetailData &) = default ;
    DescribeDomainMax95BpsDataResponseBodyDetailData(DescribeDomainMax95BpsDataResponseBodyDetailData &&) = default ;
    DescribeDomainMax95BpsDataResponseBodyDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMax95BpsDataResponseBodyDetailData() = default ;
    DescribeDomainMax95BpsDataResponseBodyDetailData& operator=(const DescribeDomainMax95BpsDataResponseBodyDetailData &) = default ;
    DescribeDomainMax95BpsDataResponseBodyDetailData& operator=(DescribeDomainMax95BpsDataResponseBodyDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max95Detail_ == nullptr; };
    // max95Detail Field Functions 
    bool hasMax95Detail() const { return this->max95Detail_ != nullptr;};
    void deleteMax95Detail() { this->max95Detail_ = nullptr;};
    inline const vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail> & max95Detail() const { DARABONBA_PTR_GET_CONST(max95Detail_, vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail>) };
    inline vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail> max95Detail() { DARABONBA_PTR_GET(max95Detail_, vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail>) };
    inline DescribeDomainMax95BpsDataResponseBodyDetailData& setMax95Detail(const vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail> & max95Detail) { DARABONBA_PTR_SET_VALUE(max95Detail_, max95Detail) };
    inline DescribeDomainMax95BpsDataResponseBodyDetailData& setMax95Detail(vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail> && max95Detail) { DARABONBA_PTR_SET_RVALUE(max95Detail_, max95Detail) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainMax95BpsDataResponseBodyDetailDataMax95Detail>> max95Detail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
