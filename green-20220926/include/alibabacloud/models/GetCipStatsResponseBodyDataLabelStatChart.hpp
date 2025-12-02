// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATALABELSTATCHART_HPP_
#define ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATALABELSTATCHART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChartImageTreeChar.hpp>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChartTextTreeChart.hpp>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChartTreeChart.hpp>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart.hpp>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChartY.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetCipStatsResponseBodyDataLabelStatChart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCipStatsResponseBodyDataLabelStatChart& obj) { 
      DARABONBA_PTR_TO_JSON(ImageTreeChar, imageTreeChar_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(TextTreeChart, textTreeChart_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TreeChart, treeChart_);
      DARABONBA_PTR_TO_JSON(VoiceTreeChart, voiceTreeChart_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, GetCipStatsResponseBodyDataLabelStatChart& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageTreeChar, imageTreeChar_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(TextTreeChart, textTreeChart_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TreeChart, treeChart_);
      DARABONBA_PTR_FROM_JSON(VoiceTreeChart, voiceTreeChart_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    GetCipStatsResponseBodyDataLabelStatChart() = default ;
    GetCipStatsResponseBodyDataLabelStatChart(const GetCipStatsResponseBodyDataLabelStatChart &) = default ;
    GetCipStatsResponseBodyDataLabelStatChart(GetCipStatsResponseBodyDataLabelStatChart &&) = default ;
    GetCipStatsResponseBodyDataLabelStatChart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCipStatsResponseBodyDataLabelStatChart() = default ;
    GetCipStatsResponseBodyDataLabelStatChart& operator=(const GetCipStatsResponseBodyDataLabelStatChart &) = default ;
    GetCipStatsResponseBodyDataLabelStatChart& operator=(GetCipStatsResponseBodyDataLabelStatChart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageTreeChar_ == nullptr
        && return this->serviceCode_ == nullptr && return this->textTreeChart_ == nullptr && return this->totalCount_ == nullptr && return this->treeChart_ == nullptr && return this->voiceTreeChart_ == nullptr
        && return this->x_ == nullptr && return this->y_ == nullptr; };
    // imageTreeChar Field Functions 
    bool hasImageTreeChar() const { return this->imageTreeChar_ != nullptr;};
    void deleteImageTreeChar() { this->imageTreeChar_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar> & imageTreeChar() const { DARABONBA_PTR_GET_CONST(imageTreeChar_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar> imageTreeChar() { DARABONBA_PTR_GET(imageTreeChar_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setImageTreeChar(const vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar> & imageTreeChar) { DARABONBA_PTR_SET_VALUE(imageTreeChar_, imageTreeChar) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setImageTreeChar(vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar> && imageTreeChar) { DARABONBA_PTR_SET_RVALUE(imageTreeChar_, imageTreeChar) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetCipStatsResponseBodyDataLabelStatChart& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // textTreeChart Field Functions 
    bool hasTextTreeChart() const { return this->textTreeChart_ != nullptr;};
    void deleteTextTreeChart() { this->textTreeChart_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart> & textTreeChart() const { DARABONBA_PTR_GET_CONST(textTreeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart> textTreeChart() { DARABONBA_PTR_GET(textTreeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setTextTreeChart(const vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart> & textTreeChart) { DARABONBA_PTR_SET_VALUE(textTreeChart_, textTreeChart) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setTextTreeChart(vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart> && textTreeChart) { DARABONBA_PTR_SET_RVALUE(textTreeChart_, textTreeChart) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // treeChart Field Functions 
    bool hasTreeChart() const { return this->treeChart_ != nullptr;};
    void deleteTreeChart() { this->treeChart_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart> & treeChart() const { DARABONBA_PTR_GET_CONST(treeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart> treeChart() { DARABONBA_PTR_GET(treeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setTreeChart(const vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart> & treeChart) { DARABONBA_PTR_SET_VALUE(treeChart_, treeChart) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setTreeChart(vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart> && treeChart) { DARABONBA_PTR_SET_RVALUE(treeChart_, treeChart) };


    // voiceTreeChart Field Functions 
    bool hasVoiceTreeChart() const { return this->voiceTreeChart_ != nullptr;};
    void deleteVoiceTreeChart() { this->voiceTreeChart_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart> & voiceTreeChart() const { DARABONBA_PTR_GET_CONST(voiceTreeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart> voiceTreeChart() { DARABONBA_PTR_GET(voiceTreeChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setVoiceTreeChart(const vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart> & voiceTreeChart) { DARABONBA_PTR_SET_VALUE(voiceTreeChart_, voiceTreeChart) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setVoiceTreeChart(vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart> && voiceTreeChart) { DARABONBA_PTR_SET_RVALUE(voiceTreeChart_, voiceTreeChart) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline const vector<string> & x() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
    inline vector<string> x() { DARABONBA_PTR_GET(x_, vector<string>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChartY> & y() const { DARABONBA_PTR_GET_CONST(y_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartY>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChartY> y() { DARABONBA_PTR_GET(y_, vector<Models::GetCipStatsResponseBodyDataLabelStatChartY>) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setY(const vector<Models::GetCipStatsResponseBodyDataLabelStatChartY> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
    inline GetCipStatsResponseBodyDataLabelStatChart& setY(vector<Models::GetCipStatsResponseBodyDataLabelStatChartY> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


  protected:
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChartImageTreeChar>> imageTreeChar_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChartTextTreeChart>> textTreeChart_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChartTreeChart>> treeChart_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChartVoiceTreeChart>> voiceTreeChart_ = nullptr;
    std::shared_ptr<vector<string>> x_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChartY>> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
