// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODYCHECKCOUNTSTATISTICDTO_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICRESPONSEBODYCHECKCOUNTSTATISTICDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckCountStatisticResponseBodyCheckCountStatisticDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCountStatisticItems, checkCountStatisticItems_);
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCountStatisticItems, checkCountStatisticItems_);
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
    };
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO() = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO(const GetCheckCountStatisticResponseBodyCheckCountStatisticDTO &) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO(GetCheckCountStatisticResponseBodyCheckCountStatisticDTO &&) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckCountStatisticResponseBodyCheckCountStatisticDTO() = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& operator=(const GetCheckCountStatisticResponseBodyCheckCountStatisticDTO &) = default ;
    GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& operator=(GetCheckCountStatisticResponseBodyCheckCountStatisticDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkCountStatisticItems_ != nullptr
        && this->statisticType_ != nullptr; };
    // checkCountStatisticItems Field Functions 
    bool hasCheckCountStatisticItems() const { return this->checkCountStatisticItems_ != nullptr;};
    void deleteCheckCountStatisticItems() { this->checkCountStatisticItems_ = nullptr;};
    inline const vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems> & checkCountStatisticItems() const { DARABONBA_PTR_GET_CONST(checkCountStatisticItems_, vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems>) };
    inline vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems> checkCountStatisticItems() { DARABONBA_PTR_GET(checkCountStatisticItems_, vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems>) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& setCheckCountStatisticItems(const vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems> & checkCountStatisticItems) { DARABONBA_PTR_SET_VALUE(checkCountStatisticItems_, checkCountStatisticItems) };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& setCheckCountStatisticItems(vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems> && checkCountStatisticItems) { DARABONBA_PTR_SET_RVALUE(checkCountStatisticItems_, checkCountStatisticItems) };


    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string statisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline GetCheckCountStatisticResponseBodyCheckCountStatisticDTO& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


  protected:
    // The risk item statistics.
    std::shared_ptr<vector<Models::GetCheckCountStatisticResponseBodyCheckCountStatisticDTOCheckCountStatisticItems>> checkCountStatisticItems_ = nullptr;
    // The type of the statistics. Valid values:
    // 
    // *   **user**: the top five users that are granted excessive permissions.
    // *   **role**: the top five roles that are granted excessive permissions.
    // *   **instance**: the top five cloud services on which risks are detected.
    std::shared_ptr<string> statisticType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
