// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval(const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval(DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainPushBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
