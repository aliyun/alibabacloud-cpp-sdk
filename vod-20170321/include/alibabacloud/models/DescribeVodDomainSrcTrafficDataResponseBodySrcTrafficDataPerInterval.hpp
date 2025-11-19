// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSRCTRAFFICDATARESPONSEBODYSRCTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINSRCTRAFFICDATARESPONSEBODYSRCTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval() = default ;
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(const DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &) = default ;
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &&) = default ;
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval() = default ;
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& operator=(const DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &) = default ;
    DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& operator=(DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>) };
    inline DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& setDataModule(vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
