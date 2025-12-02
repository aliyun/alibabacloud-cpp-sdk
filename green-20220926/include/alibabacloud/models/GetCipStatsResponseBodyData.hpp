// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCIPSTATSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCipStatsResponseBodyDataLabelStatChart.hpp>
#include <map>
#include <alibabacloud/models/GetCipStatsResponseBodyDataY.hpp>
#include <alibabacloud/models/GetCipStatsResponseBodyDataZ.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetCipStatsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCipStatsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LabelStatChart, labelStatChart_);
      DARABONBA_PTR_TO_JSON(TotalStat, totalStat_);
      DARABONBA_PTR_TO_JSON(Uids, uids_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(Z, z_);
    };
    friend void from_json(const Darabonba::Json& j, GetCipStatsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelStatChart, labelStatChart_);
      DARABONBA_PTR_FROM_JSON(TotalStat, totalStat_);
      DARABONBA_PTR_FROM_JSON(Uids, uids_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(Z, z_);
    };
    GetCipStatsResponseBodyData() = default ;
    GetCipStatsResponseBodyData(const GetCipStatsResponseBodyData &) = default ;
    GetCipStatsResponseBodyData(GetCipStatsResponseBodyData &&) = default ;
    GetCipStatsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCipStatsResponseBodyData() = default ;
    GetCipStatsResponseBodyData& operator=(const GetCipStatsResponseBodyData &) = default ;
    GetCipStatsResponseBodyData& operator=(GetCipStatsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelStatChart_ == nullptr
        && return this->totalStat_ == nullptr && return this->uids_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr && return this->z_ == nullptr; };
    // labelStatChart Field Functions 
    bool hasLabelStatChart() const { return this->labelStatChart_ != nullptr;};
    void deleteLabelStatChart() { this->labelStatChart_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataLabelStatChart> & labelStatChart() const { DARABONBA_PTR_GET_CONST(labelStatChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChart>) };
    inline vector<Models::GetCipStatsResponseBodyDataLabelStatChart> labelStatChart() { DARABONBA_PTR_GET(labelStatChart_, vector<Models::GetCipStatsResponseBodyDataLabelStatChart>) };
    inline GetCipStatsResponseBodyData& setLabelStatChart(const vector<Models::GetCipStatsResponseBodyDataLabelStatChart> & labelStatChart) { DARABONBA_PTR_SET_VALUE(labelStatChart_, labelStatChart) };
    inline GetCipStatsResponseBodyData& setLabelStatChart(vector<Models::GetCipStatsResponseBodyDataLabelStatChart> && labelStatChart) { DARABONBA_PTR_SET_RVALUE(labelStatChart_, labelStatChart) };


    // totalStat Field Functions 
    bool hasTotalStat() const { return this->totalStat_ != nullptr;};
    void deleteTotalStat() { this->totalStat_ = nullptr;};
    inline const map<string, Darabonba::Json> & totalStat() const { DARABONBA_PTR_GET_CONST(totalStat_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> totalStat() { DARABONBA_PTR_GET(totalStat_, map<string, Darabonba::Json>) };
    inline GetCipStatsResponseBodyData& setTotalStat(const map<string, Darabonba::Json> & totalStat) { DARABONBA_PTR_SET_VALUE(totalStat_, totalStat) };
    inline GetCipStatsResponseBodyData& setTotalStat(map<string, Darabonba::Json> && totalStat) { DARABONBA_PTR_SET_RVALUE(totalStat_, totalStat) };


    // uids Field Functions 
    bool hasUids() const { return this->uids_ != nullptr;};
    void deleteUids() { this->uids_ = nullptr;};
    inline const vector<string> & uids() const { DARABONBA_PTR_GET_CONST(uids_, vector<string>) };
    inline vector<string> uids() { DARABONBA_PTR_GET(uids_, vector<string>) };
    inline GetCipStatsResponseBodyData& setUids(const vector<string> & uids) { DARABONBA_PTR_SET_VALUE(uids_, uids) };
    inline GetCipStatsResponseBodyData& setUids(vector<string> && uids) { DARABONBA_PTR_SET_RVALUE(uids_, uids) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline const vector<string> & x() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
    inline vector<string> x() { DARABONBA_PTR_GET(x_, vector<string>) };
    inline GetCipStatsResponseBodyData& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
    inline GetCipStatsResponseBodyData& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataY> & y() const { DARABONBA_PTR_GET_CONST(y_, vector<Models::GetCipStatsResponseBodyDataY>) };
    inline vector<Models::GetCipStatsResponseBodyDataY> y() { DARABONBA_PTR_GET(y_, vector<Models::GetCipStatsResponseBodyDataY>) };
    inline GetCipStatsResponseBodyData& setY(const vector<Models::GetCipStatsResponseBodyDataY> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
    inline GetCipStatsResponseBodyData& setY(vector<Models::GetCipStatsResponseBodyDataY> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


    // z Field Functions 
    bool hasZ() const { return this->z_ != nullptr;};
    void deleteZ() { this->z_ = nullptr;};
    inline const vector<Models::GetCipStatsResponseBodyDataZ> & z() const { DARABONBA_PTR_GET_CONST(z_, vector<Models::GetCipStatsResponseBodyDataZ>) };
    inline vector<Models::GetCipStatsResponseBodyDataZ> z() { DARABONBA_PTR_GET(z_, vector<Models::GetCipStatsResponseBodyDataZ>) };
    inline GetCipStatsResponseBodyData& setZ(const vector<Models::GetCipStatsResponseBodyDataZ> & z) { DARABONBA_PTR_SET_VALUE(z_, z) };
    inline GetCipStatsResponseBodyData& setZ(vector<Models::GetCipStatsResponseBodyDataZ> && z) { DARABONBA_PTR_SET_RVALUE(z_, z) };


  protected:
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataLabelStatChart>> labelStatChart_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> totalStat_ = nullptr;
    std::shared_ptr<vector<string>> uids_ = nullptr;
    std::shared_ptr<vector<string>> x_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataY>> y_ = nullptr;
    std::shared_ptr<vector<Models::GetCipStatsResponseBodyDataZ>> z_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
