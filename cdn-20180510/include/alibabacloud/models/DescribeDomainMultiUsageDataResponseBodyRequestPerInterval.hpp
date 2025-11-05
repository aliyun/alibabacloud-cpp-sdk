// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMultiUsageDataResponseBodyRequestPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(RequestDataModule, requestDataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestDataModule, requestDataModule_);
    };
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval() = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval(const DescribeDomainMultiUsageDataResponseBodyRequestPerInterval &) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval(DescribeDomainMultiUsageDataResponseBodyRequestPerInterval &&) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMultiUsageDataResponseBodyRequestPerInterval() = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& operator=(const DescribeDomainMultiUsageDataResponseBodyRequestPerInterval &) = default ;
    DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& operator=(DescribeDomainMultiUsageDataResponseBodyRequestPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestDataModule_ == nullptr; };
    // requestDataModule Field Functions 
    bool hasRequestDataModule() const { return this->requestDataModule_ != nullptr;};
    void deleteRequestDataModule() { this->requestDataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> & requestDataModule() const { DARABONBA_PTR_GET_CONST(requestDataModule_, vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>) };
    inline vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> requestDataModule() { DARABONBA_PTR_GET(requestDataModule_, vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>) };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& setRequestDataModule(const vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> & requestDataModule) { DARABONBA_PTR_SET_VALUE(requestDataModule_, requestDataModule) };
    inline DescribeDomainMultiUsageDataResponseBodyRequestPerInterval& setRequestDataModule(vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> && requestDataModule) { DARABONBA_PTR_SET_RVALUE(requestDataModule_, requestDataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>> requestDataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
