// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeQpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(QpsModel, qpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(QpsModel, qpsModel_);
    };
    DescribeDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeDomainRealTimeQpsDataResponseBodyData(const DescribeDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyData(DescribeDomainRealTimeQpsDataResponseBodyData &&) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeDomainRealTimeQpsDataResponseBodyData& operator=(const DescribeDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeDomainRealTimeQpsDataResponseBodyData& operator=(DescribeDomainRealTimeQpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qpsModel_ == nullptr; };
    // qpsModel Field Functions 
    bool hasQpsModel() const { return this->qpsModel_ != nullptr;};
    void deleteQpsModel() { this->qpsModel_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel() const { DARABONBA_PTR_GET_CONST(qpsModel_, vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel> qpsModel() { DARABONBA_PTR_GET(qpsModel_, vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline DescribeDomainRealTimeQpsDataResponseBodyData& setQpsModel(const vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel) { DARABONBA_PTR_SET_VALUE(qpsModel_, qpsModel) };
    inline DescribeDomainRealTimeQpsDataResponseBodyData& setQpsModel(vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel> && qpsModel) { DARABONBA_PTR_SET_RVALUE(qpsModel_, qpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeQpsDataResponseBodyDataQpsModel>> qpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
