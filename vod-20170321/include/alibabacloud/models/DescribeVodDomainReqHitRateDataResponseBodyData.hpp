// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREQHITRATEDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREQHITRATEDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainReqHitRateDataResponseBodyDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainReqHitRateDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainReqHitRateDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainReqHitRateDataResponseBodyData() = default ;
    DescribeVodDomainReqHitRateDataResponseBodyData(const DescribeVodDomainReqHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainReqHitRateDataResponseBodyData(DescribeVodDomainReqHitRateDataResponseBodyData &&) = default ;
    DescribeVodDomainReqHitRateDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainReqHitRateDataResponseBodyData() = default ;
    DescribeVodDomainReqHitRateDataResponseBodyData& operator=(const DescribeVodDomainReqHitRateDataResponseBodyData &) = default ;
    DescribeVodDomainReqHitRateDataResponseBodyData& operator=(DescribeVodDomainReqHitRateDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule>) };
    inline vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule>) };
    inline DescribeVodDomainReqHitRateDataResponseBodyData& setDataModule(const vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainReqHitRateDataResponseBodyData& setDataModule(vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainReqHitRateDataResponseBodyDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
