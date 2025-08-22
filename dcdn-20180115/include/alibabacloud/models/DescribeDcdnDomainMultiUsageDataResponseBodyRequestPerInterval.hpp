// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYREQUESTPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(RequestDataModule, requestDataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestDataModule, requestDataModule_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval(DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& operator=(const DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& operator=(DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestDataModule_ != nullptr; };
    // requestDataModule Field Functions 
    bool hasRequestDataModule() const { return this->requestDataModule_ != nullptr;};
    void deleteRequestDataModule() { this->requestDataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> & requestDataModule() const { DARABONBA_PTR_GET_CONST(requestDataModule_, vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>) };
    inline vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> requestDataModule() { DARABONBA_PTR_GET(requestDataModule_, vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& setRequestDataModule(const vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> & requestDataModule) { DARABONBA_PTR_SET_VALUE(requestDataModule_, requestDataModule) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerInterval& setRequestDataModule(vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule> && requestDataModule) { DARABONBA_PTR_SET_RVALUE(requestDataModule_, requestDataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyRequestPerIntervalRequestDataModule>> requestDataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
