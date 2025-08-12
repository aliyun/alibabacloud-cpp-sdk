// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval(const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval(DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
