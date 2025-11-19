// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEQPSDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeQpsDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(QpsModel, qpsModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeQpsDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(QpsModel, qpsModel_);
    };
    DescribeVodDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyData(const DescribeVodDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyData(DescribeVodDomainRealTimeQpsDataResponseBodyData &&) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeQpsDataResponseBodyData() = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyData& operator=(const DescribeVodDomainRealTimeQpsDataResponseBodyData &) = default ;
    DescribeVodDomainRealTimeQpsDataResponseBodyData& operator=(DescribeVodDomainRealTimeQpsDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qpsModel_ == nullptr; };
    // qpsModel Field Functions 
    bool hasQpsModel() const { return this->qpsModel_ != nullptr;};
    void deleteQpsModel() { this->qpsModel_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel() const { DARABONBA_PTR_GET_CONST(qpsModel_, vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel> qpsModel() { DARABONBA_PTR_GET(qpsModel_, vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel>) };
    inline DescribeVodDomainRealTimeQpsDataResponseBodyData& setQpsModel(const vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel> & qpsModel) { DARABONBA_PTR_SET_VALUE(qpsModel_, qpsModel) };
    inline DescribeVodDomainRealTimeQpsDataResponseBodyData& setQpsModel(vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel> && qpsModel) { DARABONBA_PTR_SET_RVALUE(qpsModel_, qpsModel) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeQpsDataResponseBodyDataQpsModel>> qpsModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
