// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTO_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Dates, dates_);
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_TO_JSON(TimeDimensionStatisticItems, timeDimensionStatisticItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Dates, dates_);
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_FROM_JSON(TimeDimensionStatisticItems, timeDimensionStatisticItems_);
    };
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO &&) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& operator=(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& operator=(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dates_ != nullptr
        && this->statisticType_ != nullptr && this->timeDimensionStatisticItems_ != nullptr; };
    // dates Field Functions 
    bool hasDates() const { return this->dates_ != nullptr;};
    void deleteDates() { this->dates_ = nullptr;};
    inline const vector<int64_t> & dates() const { DARABONBA_PTR_GET_CONST(dates_, vector<int64_t>) };
    inline vector<int64_t> dates() { DARABONBA_PTR_GET(dates_, vector<int64_t>) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& setDates(const vector<int64_t> & dates) { DARABONBA_PTR_SET_VALUE(dates_, dates) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& setDates(vector<int64_t> && dates) { DARABONBA_PTR_SET_RVALUE(dates_, dates) };


    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string statisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


    // timeDimensionStatisticItems Field Functions 
    bool hasTimeDimensionStatisticItems() const { return this->timeDimensionStatisticItems_ != nullptr;};
    void deleteTimeDimensionStatisticItems() { this->timeDimensionStatisticItems_ = nullptr;};
    inline const vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems> & timeDimensionStatisticItems() const { DARABONBA_PTR_GET_CONST(timeDimensionStatisticItems_, vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems>) };
    inline vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems> timeDimensionStatisticItems() { DARABONBA_PTR_GET(timeDimensionStatisticItems_, vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems>) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& setTimeDimensionStatisticItems(const vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems> & timeDimensionStatisticItems) { DARABONBA_PTR_SET_VALUE(timeDimensionStatisticItems_, timeDimensionStatisticItems) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTO& setTimeDimensionStatisticItems(vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems> && timeDimensionStatisticItems) { DARABONBA_PTR_SET_RVALUE(timeDimensionStatisticItems_, timeDimensionStatisticItems) };


  protected:
    // List of data time points.
    std::shared_ptr<vector<int64_t>> dates_ = nullptr;
    // Type of statistical data. Values:
    // - **CheckPassRate**: Check item pass rate.
    // - **AssetPassRate**: Asset pass rate.
    std::shared_ptr<string> statisticType_ = nullptr;
    // Time trend statistical data results.
    std::shared_ptr<vector<Models::GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItems>> timeDimensionStatisticItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
