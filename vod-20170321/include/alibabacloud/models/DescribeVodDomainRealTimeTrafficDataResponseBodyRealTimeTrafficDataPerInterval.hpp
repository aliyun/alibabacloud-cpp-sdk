// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMETRAFFICDATARESPONSEBODYREALTIMETRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMETRAFFICDATARESPONSEBODYREALTIMETRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() = default ;
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(const DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &) = default ;
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &&) = default ;
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() = default ;
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& operator=(const DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &) = default ;
    DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& operator=(DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>) };
    inline DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& setDataModule(vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
