// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval() = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval(const DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval &) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval(DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval &&) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval() = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& operator=(const DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval &) = default ;
    DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& operator=(DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>) };
    inline DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainUsageDataResponseBodyUsageDataPerInterval& setDataModule(vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
