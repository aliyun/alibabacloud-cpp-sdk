// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODYDRMUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODYDRMUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDrmUsageDataResponseBodyDrmUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDrmUsageDataResponseBodyDrmUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDrmUsageDataResponseBodyDrmUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData() = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData(const DescribeLiveDrmUsageDataResponseBodyDrmUsageData &) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData(DescribeLiveDrmUsageDataResponseBodyDrmUsageData &&) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDrmUsageDataResponseBodyDrmUsageData() = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData& operator=(const DescribeLiveDrmUsageDataResponseBodyDrmUsageData &) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageData& operator=(DescribeLiveDrmUsageDataResponseBodyDrmUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule>) };
    inline vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule>) };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageData& setDataModule(const vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageData& setDataModule(vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
