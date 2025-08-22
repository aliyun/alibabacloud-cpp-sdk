// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeQpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(QpsModel, qpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(QpsModel, qpsModel_);
    };
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData(const DescribeDcdnDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData(DescribeDcdnDomainRealTimeQpsDataResponseBodyData &&) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData& operator=(const DescribeDcdnDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBodyData& operator=(DescribeDcdnDomainRealTimeQpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->qpsModel_ != nullptr; };
    // qpsModel Field Functions 
    bool hasQpsModel() const { return this->qpsModel_ != nullptr;};
    void deleteQpsModel() { this->qpsModel_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel() const { DARABONBA_PTR_GET_CONST(qpsModel_, vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel> qpsModel() { DARABONBA_PTR_GET(qpsModel_, vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBodyData& setQpsModel(const vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel) { DARABONBA_PTR_SET_VALUE(qpsModel_, qpsModel) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBodyData& setQpsModel(vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel> && qpsModel) { DARABONBA_PTR_SET_RVALUE(qpsModel_, qpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainRealTimeQpsDataResponseBodyDataQpsModel>> qpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
