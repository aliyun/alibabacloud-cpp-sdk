// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval(const DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval(DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
