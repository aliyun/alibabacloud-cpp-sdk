// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATADATAQUALITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityAnalysisResponseBodyDataDataQualityScore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyDataDataQuality : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyDataDataQuality& obj) { 
      DARABONBA_PTR_TO_JSON(inventory, inventory_);
      DARABONBA_PTR_TO_JSON(score, score_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyDataDataQuality& obj) { 
      DARABONBA_PTR_FROM_JSON(inventory, inventory_);
      DARABONBA_PTR_FROM_JSON(score, score_);
    };
    GetDataQualityAnalysisResponseBodyDataDataQuality() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQuality(const GetDataQualityAnalysisResponseBodyDataDataQuality &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQuality(GetDataQualityAnalysisResponseBodyDataDataQuality &&) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQuality(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyDataDataQuality() = default ;
    GetDataQualityAnalysisResponseBodyDataDataQuality& operator=(const GetDataQualityAnalysisResponseBodyDataDataQuality &) = default ;
    GetDataQualityAnalysisResponseBodyDataDataQuality& operator=(GetDataQualityAnalysisResponseBodyDataDataQuality &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inventory_ != nullptr
        && this->score_ != nullptr; };
    // inventory Field Functions 
    bool hasInventory() const { return this->inventory_ != nullptr;};
    void deleteInventory() { this->inventory_ = nullptr;};
    inline string inventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
    inline GetDataQualityAnalysisResponseBodyDataDataQuality& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline const Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore & score() const { DARABONBA_PTR_GET_CONST(score_, Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore) };
    inline Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore score() { DARABONBA_PTR_GET(score_, Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore) };
    inline GetDataQualityAnalysisResponseBodyDataDataQuality& setScore(const Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore & score) { DARABONBA_PTR_SET_VALUE(score_, score) };
    inline GetDataQualityAnalysisResponseBodyDataDataQuality& setScore(Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore && score) { DARABONBA_PTR_SET_RVALUE(score_, score) };


  protected:
    // Inventory name
    std::shared_ptr<string> inventory_ = nullptr;
    // Score. The distribution ranges from 1 to 5. A value closer to 1 indicates better data quality.
    std::shared_ptr<Models::GetDataQualityAnalysisResponseBodyDataDataQualityScore> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
