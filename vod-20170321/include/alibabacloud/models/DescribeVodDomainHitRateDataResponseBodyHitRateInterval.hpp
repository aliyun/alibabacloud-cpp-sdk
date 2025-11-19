// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainHitRateDataResponseBodyHitRateInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainHitRateDataResponseBodyHitRateInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainHitRateDataResponseBodyHitRateInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval() = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval(const DescribeVodDomainHitRateDataResponseBodyHitRateInterval &) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval(DescribeVodDomainHitRateDataResponseBodyHitRateInterval &&) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainHitRateDataResponseBodyHitRateInterval() = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval& operator=(const DescribeVodDomainHitRateDataResponseBodyHitRateInterval &) = default ;
    DescribeVodDomainHitRateDataResponseBodyHitRateInterval& operator=(DescribeVodDomainHitRateDataResponseBodyHitRateInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule>) };
    inline DescribeVodDomainHitRateDataResponseBodyHitRateInterval& setDataModule(const vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainHitRateDataResponseBodyHitRateInterval& setDataModule(vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainHitRateDataResponseBodyHitRateIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
