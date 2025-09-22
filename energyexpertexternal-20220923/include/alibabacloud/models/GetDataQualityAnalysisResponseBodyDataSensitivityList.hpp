// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATASENSITIVITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYANALYSISRESPONSEBODYDATASENSITIVITYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataQualityAnalysisResponseBodyDataSensitivityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityAnalysisResponseBodyDataSensitivityList& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(inventory, inventory_);
      DARABONBA_PTR_TO_JSON(reductionList, reductionList_);
      DARABONBA_PTR_TO_JSON(sensitivity, sensitivity_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityAnalysisResponseBodyDataSensitivityList& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(inventory, inventory_);
      DARABONBA_PTR_FROM_JSON(reductionList, reductionList_);
      DARABONBA_PTR_FROM_JSON(sensitivity, sensitivity_);
    };
    GetDataQualityAnalysisResponseBodyDataSensitivityList() = default ;
    GetDataQualityAnalysisResponseBodyDataSensitivityList(const GetDataQualityAnalysisResponseBodyDataSensitivityList &) = default ;
    GetDataQualityAnalysisResponseBodyDataSensitivityList(GetDataQualityAnalysisResponseBodyDataSensitivityList &&) = default ;
    GetDataQualityAnalysisResponseBodyDataSensitivityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityAnalysisResponseBodyDataSensitivityList() = default ;
    GetDataQualityAnalysisResponseBodyDataSensitivityList& operator=(const GetDataQualityAnalysisResponseBodyDataSensitivityList &) = default ;
    GetDataQualityAnalysisResponseBodyDataSensitivityList& operator=(GetDataQualityAnalysisResponseBodyDataSensitivityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->inventory_ != nullptr && this->reductionList_ != nullptr && this->sensitivity_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDataQualityAnalysisResponseBodyDataSensitivityList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inventory Field Functions 
    bool hasInventory() const { return this->inventory_ != nullptr;};
    void deleteInventory() { this->inventory_ = nullptr;};
    inline string inventory() const { DARABONBA_PTR_GET_DEFAULT(inventory_, "") };
    inline GetDataQualityAnalysisResponseBodyDataSensitivityList& setInventory(string inventory) { DARABONBA_PTR_SET_VALUE(inventory_, inventory) };


    // reductionList Field Functions 
    bool hasReductionList() const { return this->reductionList_ != nullptr;};
    void deleteReductionList() { this->reductionList_ = nullptr;};
    inline const vector<string> & reductionList() const { DARABONBA_PTR_GET_CONST(reductionList_, vector<string>) };
    inline vector<string> reductionList() { DARABONBA_PTR_GET(reductionList_, vector<string>) };
    inline GetDataQualityAnalysisResponseBodyDataSensitivityList& setReductionList(const vector<string> & reductionList) { DARABONBA_PTR_SET_VALUE(reductionList_, reductionList) };
    inline GetDataQualityAnalysisResponseBodyDataSensitivityList& setReductionList(vector<string> && reductionList) { DARABONBA_PTR_SET_RVALUE(reductionList_, reductionList) };


    // sensitivity Field Functions 
    bool hasSensitivity() const { return this->sensitivity_ != nullptr;};
    void deleteSensitivity() { this->sensitivity_ = nullptr;};
    inline double sensitivity() const { DARABONBA_PTR_GET_DEFAULT(sensitivity_, 0.0) };
    inline GetDataQualityAnalysisResponseBodyDataSensitivityList& setSensitivity(double sensitivity) { DARABONBA_PTR_SET_VALUE(sensitivity_, sensitivity) };


  protected:
    // Inventory id
    std::shared_ptr<string> id_ = nullptr;
    // Name of the inventory item.
    std::shared_ptr<string> inventory_ = nullptr;
    // List of emission reduction measures.
    std::shared_ptr<vector<string>> reductionList_ = nullptr;
    // Sensitivity percentage.
    std::shared_ptr<double> sensitivity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
