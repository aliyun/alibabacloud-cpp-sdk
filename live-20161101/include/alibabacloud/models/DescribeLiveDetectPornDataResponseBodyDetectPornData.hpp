// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODYDETECTPORNDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODYDETECTPORNDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectPornDataResponseBodyDetectPornData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectPornDataResponseBodyDetectPornData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectPornDataResponseBodyDetectPornData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDetectPornDataResponseBodyDetectPornData() = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornData(const DescribeLiveDetectPornDataResponseBodyDetectPornData &) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornData(DescribeLiveDetectPornDataResponseBodyDetectPornData &&) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectPornDataResponseBodyDetectPornData() = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornData& operator=(const DescribeLiveDetectPornDataResponseBodyDetectPornData &) = default ;
    DescribeLiveDetectPornDataResponseBodyDetectPornData& operator=(DescribeLiveDetectPornDataResponseBodyDetectPornData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule>) };
    inline vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule>) };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornData& setDataModule(const vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDetectPornDataResponseBodyDetectPornData& setDataModule(vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDetectPornDataResponseBodyDetectPornDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
