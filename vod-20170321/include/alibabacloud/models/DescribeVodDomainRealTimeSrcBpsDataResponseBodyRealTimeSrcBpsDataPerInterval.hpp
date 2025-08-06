// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMESRCBPSDATARESPONSEBODYREALTIMESRCBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMESRCBPSDATARESPONSEBODYREALTIMESRCBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval() = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval(const DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval &) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval(DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval &&) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval() = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& operator=(const DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval &) = default ;
    DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& operator=(DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule>) };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerInterval& setDataModule(vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainRealTimeSrcBpsDataResponseBodyRealTimeSrcBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
