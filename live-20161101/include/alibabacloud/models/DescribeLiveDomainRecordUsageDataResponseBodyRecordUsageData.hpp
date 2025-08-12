// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODYRECORDUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODYRECORDUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData() = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData(const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData(DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData &&) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData() = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& operator=(const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& operator=(DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule>) };
    inline vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule>) };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& setDataModule(const vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData& setDataModule(vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
