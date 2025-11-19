// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval(const DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval(DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeVodDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
