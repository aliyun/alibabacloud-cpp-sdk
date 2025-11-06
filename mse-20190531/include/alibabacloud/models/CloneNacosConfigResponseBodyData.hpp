// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLONENACOSCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CloneNacosConfigResponseBodyDataFailData.hpp>
#include <alibabacloud/models/CloneNacosConfigResponseBodyDataSkipData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneNacosConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailData, failData_);
      DARABONBA_PTR_TO_JSON(SkipCount, skipCount_);
      DARABONBA_PTR_TO_JSON(SkipData, skipData_);
      DARABONBA_PTR_TO_JSON(SuccCount, succCount_);
    };
    friend void from_json(const Darabonba::Json& j, CloneNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailData, failData_);
      DARABONBA_PTR_FROM_JSON(SkipCount, skipCount_);
      DARABONBA_PTR_FROM_JSON(SkipData, skipData_);
      DARABONBA_PTR_FROM_JSON(SuccCount, succCount_);
    };
    CloneNacosConfigResponseBodyData() = default ;
    CloneNacosConfigResponseBodyData(const CloneNacosConfigResponseBodyData &) = default ;
    CloneNacosConfigResponseBodyData(CloneNacosConfigResponseBodyData &&) = default ;
    CloneNacosConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneNacosConfigResponseBodyData() = default ;
    CloneNacosConfigResponseBodyData& operator=(const CloneNacosConfigResponseBodyData &) = default ;
    CloneNacosConfigResponseBodyData& operator=(CloneNacosConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failData_ == nullptr
        && return this->skipCount_ == nullptr && return this->skipData_ == nullptr && return this->succCount_ == nullptr; };
    // failData Field Functions 
    bool hasFailData() const { return this->failData_ != nullptr;};
    void deleteFailData() { this->failData_ = nullptr;};
    inline const vector<Models::CloneNacosConfigResponseBodyDataFailData> & failData() const { DARABONBA_PTR_GET_CONST(failData_, vector<Models::CloneNacosConfigResponseBodyDataFailData>) };
    inline vector<Models::CloneNacosConfigResponseBodyDataFailData> failData() { DARABONBA_PTR_GET(failData_, vector<Models::CloneNacosConfigResponseBodyDataFailData>) };
    inline CloneNacosConfigResponseBodyData& setFailData(const vector<Models::CloneNacosConfigResponseBodyDataFailData> & failData) { DARABONBA_PTR_SET_VALUE(failData_, failData) };
    inline CloneNacosConfigResponseBodyData& setFailData(vector<Models::CloneNacosConfigResponseBodyDataFailData> && failData) { DARABONBA_PTR_SET_RVALUE(failData_, failData) };


    // skipCount Field Functions 
    bool hasSkipCount() const { return this->skipCount_ != nullptr;};
    void deleteSkipCount() { this->skipCount_ = nullptr;};
    inline int32_t skipCount() const { DARABONBA_PTR_GET_DEFAULT(skipCount_, 0) };
    inline CloneNacosConfigResponseBodyData& setSkipCount(int32_t skipCount) { DARABONBA_PTR_SET_VALUE(skipCount_, skipCount) };


    // skipData Field Functions 
    bool hasSkipData() const { return this->skipData_ != nullptr;};
    void deleteSkipData() { this->skipData_ = nullptr;};
    inline const vector<Models::CloneNacosConfigResponseBodyDataSkipData> & skipData() const { DARABONBA_PTR_GET_CONST(skipData_, vector<Models::CloneNacosConfigResponseBodyDataSkipData>) };
    inline vector<Models::CloneNacosConfigResponseBodyDataSkipData> skipData() { DARABONBA_PTR_GET(skipData_, vector<Models::CloneNacosConfigResponseBodyDataSkipData>) };
    inline CloneNacosConfigResponseBodyData& setSkipData(const vector<Models::CloneNacosConfigResponseBodyDataSkipData> & skipData) { DARABONBA_PTR_SET_VALUE(skipData_, skipData) };
    inline CloneNacosConfigResponseBodyData& setSkipData(vector<Models::CloneNacosConfigResponseBodyDataSkipData> && skipData) { DARABONBA_PTR_SET_RVALUE(skipData_, skipData) };


    // succCount Field Functions 
    bool hasSuccCount() const { return this->succCount_ != nullptr;};
    void deleteSuccCount() { this->succCount_ = nullptr;};
    inline int32_t succCount() const { DARABONBA_PTR_GET_DEFAULT(succCount_, 0) };
    inline CloneNacosConfigResponseBodyData& setSuccCount(int32_t succCount) { DARABONBA_PTR_SET_VALUE(succCount_, succCount) };


  protected:
    // Failed configuration information.
    std::shared_ptr<vector<Models::CloneNacosConfigResponseBodyDataFailData>> failData_ = nullptr;
    // Number of skips.
    std::shared_ptr<int32_t> skipCount_ = nullptr;
    // Skipped configuration information.
    std::shared_ptr<vector<Models::CloneNacosConfigResponseBodyDataSkipData>> skipData_ = nullptr;
    // Number of successes.
    std::shared_ptr<int32_t> succCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
