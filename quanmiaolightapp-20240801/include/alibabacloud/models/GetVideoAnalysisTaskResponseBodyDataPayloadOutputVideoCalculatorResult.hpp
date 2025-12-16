// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCALCULATORRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATAPAYLOADOUTPUTVIDEOCALCULATORRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
    };
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult &&) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult() = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& operator=(const GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult &) = default ;
    GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& operator=(GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->items_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems>) };
    inline vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems>) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& setItems(const vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResult& setItems(vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    std::shared_ptr<vector<Models::GetVideoAnalysisTaskResponseBodyDataPayloadOutputVideoCalculatorResultItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
