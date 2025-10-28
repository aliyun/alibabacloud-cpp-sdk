// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNCLOUDBENCHTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCloudBenchTaskResponseBodyDataPreCheckItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class RunCloudBenchTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCloudBenchTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckItem, preCheckItem_);
    };
    friend void from_json(const Darabonba::Json& j, RunCloudBenchTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckItem, preCheckItem_);
    };
    RunCloudBenchTaskResponseBodyData() = default ;
    RunCloudBenchTaskResponseBodyData(const RunCloudBenchTaskResponseBodyData &) = default ;
    RunCloudBenchTaskResponseBodyData(RunCloudBenchTaskResponseBodyData &&) = default ;
    RunCloudBenchTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCloudBenchTaskResponseBodyData() = default ;
    RunCloudBenchTaskResponseBodyData& operator=(const RunCloudBenchTaskResponseBodyData &) = default ;
    RunCloudBenchTaskResponseBodyData& operator=(RunCloudBenchTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preCheckItem_ == nullptr; };
    // preCheckItem Field Functions 
    bool hasPreCheckItem() const { return this->preCheckItem_ != nullptr;};
    void deletePreCheckItem() { this->preCheckItem_ = nullptr;};
    inline const vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem> & preCheckItem() const { DARABONBA_PTR_GET_CONST(preCheckItem_, vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem>) };
    inline vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem> preCheckItem() { DARABONBA_PTR_GET(preCheckItem_, vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem>) };
    inline RunCloudBenchTaskResponseBodyData& setPreCheckItem(const vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem> & preCheckItem) { DARABONBA_PTR_SET_VALUE(preCheckItem_, preCheckItem) };
    inline RunCloudBenchTaskResponseBodyData& setPreCheckItem(vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem> && preCheckItem) { DARABONBA_PTR_SET_RVALUE(preCheckItem_, preCheckItem) };


  protected:
    std::shared_ptr<vector<Models::RunCloudBenchTaskResponseBodyDataPreCheckItem>> preCheckItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
