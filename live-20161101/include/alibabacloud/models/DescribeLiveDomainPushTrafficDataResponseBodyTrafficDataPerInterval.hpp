// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUSHTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval(const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval(DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainPushTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
