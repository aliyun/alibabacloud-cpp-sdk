// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCALCULATORRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODYPAYLOADOUTPUTVIDEOCALCULATORRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult(const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult(RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult &&) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult() = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& operator=(const RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult &) = default ;
    RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& operator=(RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems>) };
    inline vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems> items() { DARABONBA_PTR_GET(items_, vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems>) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& setItems(const vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResult& setItems(vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<Models::RunVideoAnalysisResponseBodyPayloadOutputVideoCalculatorResultItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
