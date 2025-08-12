// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval(const DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval(DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
