// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUSAGEDATARESPONSEBODYUSAGEDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainUsageDataResponseBodyUsageDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUsageDataResponseBodyUsageDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUsageDataResponseBodyUsageDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval() = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval(const DescribeDomainUsageDataResponseBodyUsageDataPerInterval &) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval(DescribeDomainUsageDataResponseBodyUsageDataPerInterval &&) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUsageDataResponseBodyUsageDataPerInterval() = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval& operator=(const DescribeDomainUsageDataResponseBodyUsageDataPerInterval &) = default ;
    DescribeDomainUsageDataResponseBodyUsageDataPerInterval& operator=(DescribeDomainUsageDataResponseBodyUsageDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>) };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerInterval& setDataModule(const vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainUsageDataResponseBodyUsageDataPerInterval& setDataModule(vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainUsageDataResponseBodyUsageDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
