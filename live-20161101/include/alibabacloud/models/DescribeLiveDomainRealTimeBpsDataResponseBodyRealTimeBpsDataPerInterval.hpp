// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODYREALTIMEBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINREALTIMEBPSDATARESPONSEBODYREALTIMEBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval(const DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval(DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval &&) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval() = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& operator=(const DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval &) = default ;
    DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& operator=(DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule>) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& setDataModule(const vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerInterval& setDataModule(vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainRealTimeBpsDataResponseBodyRealTimeBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
