// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTOTIMEDIMENSIONSTATISTICITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTOTIMEDIMENSIONSTATISTICITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& obj) { 
      DARABONBA_PTR_TO_JSON(DataTime, dataTime_);
      DARABONBA_PTR_TO_JSON(StatisticDatas, statisticDatas_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTime, dataTime_);
      DARABONBA_PTR_FROM_JSON(StatisticDatas, statisticDatas_);
    };
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems &&) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& operator=(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& operator=(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataTime_ == nullptr
        && return this->statisticDatas_ == nullptr; };
    // dataTime Field Functions 
    bool hasDataTime() const { return this->dataTime_ != nullptr;};
    void deleteDataTime() { this->dataTime_ = nullptr;};
    inline int64_t dataTime() const { DARABONBA_PTR_GET_DEFAULT(dataTime_, 0L) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& setDataTime(int64_t dataTime) { DARABONBA_PTR_SET_VALUE(dataTime_, dataTime) };


    // statisticDatas Field Functions 
    bool hasStatisticDatas() const { return this->statisticDatas_ != nullptr;};
    void deleteStatisticDatas() { this->statisticDatas_ = nullptr;};
    inline const vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas> & statisticDatas() const { DARABONBA_PTR_GET_CONST(statisticDatas_, vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas>) };
    inline vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas> statisticDatas() { DARABONBA_PTR_GET(statisticDatas_, vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas>) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& setStatisticDatas(const vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas> & statisticDatas) { DARABONBA_PTR_SET_VALUE(statisticDatas_, statisticDatas) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems& setStatisticDatas(vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas> && statisticDatas) { DARABONBA_PTR_SET_RVALUE(statisticDatas_, statisticDatas) };


  protected:
    // Data time, in timestamp format.
    std::shared_ptr<int64_t> dataTime_ = nullptr;
    // List of statistical data.
    std::shared_ptr<vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas>> statisticDatas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
