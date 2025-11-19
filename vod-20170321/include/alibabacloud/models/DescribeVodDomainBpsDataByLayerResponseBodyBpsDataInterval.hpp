// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval(const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval(DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(const DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(const vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
