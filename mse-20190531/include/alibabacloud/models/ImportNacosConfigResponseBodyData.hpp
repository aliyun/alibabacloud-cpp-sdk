// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportNacosConfigResponseBodyDataFailData.hpp>
#include <alibabacloud/models/ImportNacosConfigResponseBodyDataSkipData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ImportNacosConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailData, failData_);
      DARABONBA_PTR_TO_JSON(SkipCount, skipCount_);
      DARABONBA_PTR_TO_JSON(SkipData, skipData_);
      DARABONBA_PTR_TO_JSON(SuccCount, succCount_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailData, failData_);
      DARABONBA_PTR_FROM_JSON(SkipCount, skipCount_);
      DARABONBA_PTR_FROM_JSON(SkipData, skipData_);
      DARABONBA_PTR_FROM_JSON(SuccCount, succCount_);
    };
    ImportNacosConfigResponseBodyData() = default ;
    ImportNacosConfigResponseBodyData(const ImportNacosConfigResponseBodyData &) = default ;
    ImportNacosConfigResponseBodyData(ImportNacosConfigResponseBodyData &&) = default ;
    ImportNacosConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNacosConfigResponseBodyData() = default ;
    ImportNacosConfigResponseBodyData& operator=(const ImportNacosConfigResponseBodyData &) = default ;
    ImportNacosConfigResponseBodyData& operator=(ImportNacosConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failData_ == nullptr
        && return this->skipCount_ == nullptr && return this->skipData_ == nullptr && return this->succCount_ == nullptr; };
    // failData Field Functions 
    bool hasFailData() const { return this->failData_ != nullptr;};
    void deleteFailData() { this->failData_ = nullptr;};
    inline const vector<Models::ImportNacosConfigResponseBodyDataFailData> & failData() const { DARABONBA_PTR_GET_CONST(failData_, vector<Models::ImportNacosConfigResponseBodyDataFailData>) };
    inline vector<Models::ImportNacosConfigResponseBodyDataFailData> failData() { DARABONBA_PTR_GET(failData_, vector<Models::ImportNacosConfigResponseBodyDataFailData>) };
    inline ImportNacosConfigResponseBodyData& setFailData(const vector<Models::ImportNacosConfigResponseBodyDataFailData> & failData) { DARABONBA_PTR_SET_VALUE(failData_, failData) };
    inline ImportNacosConfigResponseBodyData& setFailData(vector<Models::ImportNacosConfigResponseBodyDataFailData> && failData) { DARABONBA_PTR_SET_RVALUE(failData_, failData) };


    // skipCount Field Functions 
    bool hasSkipCount() const { return this->skipCount_ != nullptr;};
    void deleteSkipCount() { this->skipCount_ = nullptr;};
    inline int32_t skipCount() const { DARABONBA_PTR_GET_DEFAULT(skipCount_, 0) };
    inline ImportNacosConfigResponseBodyData& setSkipCount(int32_t skipCount) { DARABONBA_PTR_SET_VALUE(skipCount_, skipCount) };


    // skipData Field Functions 
    bool hasSkipData() const { return this->skipData_ != nullptr;};
    void deleteSkipData() { this->skipData_ = nullptr;};
    inline const vector<Models::ImportNacosConfigResponseBodyDataSkipData> & skipData() const { DARABONBA_PTR_GET_CONST(skipData_, vector<Models::ImportNacosConfigResponseBodyDataSkipData>) };
    inline vector<Models::ImportNacosConfigResponseBodyDataSkipData> skipData() { DARABONBA_PTR_GET(skipData_, vector<Models::ImportNacosConfigResponseBodyDataSkipData>) };
    inline ImportNacosConfigResponseBodyData& setSkipData(const vector<Models::ImportNacosConfigResponseBodyDataSkipData> & skipData) { DARABONBA_PTR_SET_VALUE(skipData_, skipData) };
    inline ImportNacosConfigResponseBodyData& setSkipData(vector<Models::ImportNacosConfigResponseBodyDataSkipData> && skipData) { DARABONBA_PTR_SET_RVALUE(skipData_, skipData) };


    // succCount Field Functions 
    bool hasSuccCount() const { return this->succCount_ != nullptr;};
    void deleteSuccCount() { this->succCount_ = nullptr;};
    inline int32_t succCount() const { DARABONBA_PTR_GET_DEFAULT(succCount_, 0) };
    inline ImportNacosConfigResponseBodyData& setSuccCount(int32_t succCount) { DARABONBA_PTR_SET_VALUE(succCount_, succCount) };


  protected:
    // The data structure.
    std::shared_ptr<vector<Models::ImportNacosConfigResponseBodyDataFailData>> failData_ = nullptr;
    // The information about skipped configurations.
    std::shared_ptr<int32_t> skipCount_ = nullptr;
    // The data structure.
    std::shared_ptr<vector<Models::ImportNacosConfigResponseBodyDataSkipData>> skipData_ = nullptr;
    // The number of configurations that are skipped.
    std::shared_ptr<int32_t> succCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
