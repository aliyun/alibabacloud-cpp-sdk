// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODYTIMESHIFTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODYTIMESHIFTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData() = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData(const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData(DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData &&) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData() = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& operator=(const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& operator=(DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule>) };
    inline vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule>) };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& setDataModule(const vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData& setDataModule(vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
