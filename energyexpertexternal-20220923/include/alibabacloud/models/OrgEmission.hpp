// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORGEMISSION_HPP_
#define ALIBABACLOUD_MODELS_ORGEMISSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrgEmissionModuleEmissionList.hpp>
#include <alibabacloud/models/OrgEmission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class OrgEmission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrgEmission& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(moduleEmissionList, moduleEmissionList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(subEmissionItems, subEmissionItems_);
      DARABONBA_PTR_TO_JSON(weightingCarbonEmissionData, weightingCarbonEmissionData_);
      DARABONBA_PTR_TO_JSON(weightingProportion, weightingProportion_);
      DARABONBA_PTR_TO_JSON(weightingRatio, weightingRatio_);
    };
    friend void from_json(const Darabonba::Json& j, OrgEmission& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(moduleEmissionList, moduleEmissionList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(subEmissionItems, subEmissionItems_);
      DARABONBA_PTR_FROM_JSON(weightingCarbonEmissionData, weightingCarbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(weightingProportion, weightingProportion_);
      DARABONBA_PTR_FROM_JSON(weightingRatio, weightingRatio_);
    };
    OrgEmission() = default ;
    OrgEmission(const OrgEmission &) = default ;
    OrgEmission(OrgEmission &&) = default ;
    OrgEmission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrgEmission() = default ;
    OrgEmission& operator=(const OrgEmission &) = default ;
    OrgEmission& operator=(OrgEmission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && return this->moduleEmissionList_ == nullptr && return this->name_ == nullptr && return this->nameKey_ == nullptr && return this->ratio_ == nullptr && return this->subEmissionItems_ == nullptr
        && return this->weightingCarbonEmissionData_ == nullptr && return this->weightingProportion_ == nullptr && return this->weightingRatio_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline OrgEmission& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // moduleEmissionList Field Functions 
    bool hasModuleEmissionList() const { return this->moduleEmissionList_ != nullptr;};
    void deleteModuleEmissionList() { this->moduleEmissionList_ = nullptr;};
    inline const vector<OrgEmissionModuleEmissionList> & moduleEmissionList() const { DARABONBA_PTR_GET_CONST(moduleEmissionList_, vector<OrgEmissionModuleEmissionList>) };
    inline vector<OrgEmissionModuleEmissionList> moduleEmissionList() { DARABONBA_PTR_GET(moduleEmissionList_, vector<OrgEmissionModuleEmissionList>) };
    inline OrgEmission& setModuleEmissionList(const vector<OrgEmissionModuleEmissionList> & moduleEmissionList) { DARABONBA_PTR_SET_VALUE(moduleEmissionList_, moduleEmissionList) };
    inline OrgEmission& setModuleEmissionList(vector<OrgEmissionModuleEmissionList> && moduleEmissionList) { DARABONBA_PTR_SET_RVALUE(moduleEmissionList_, moduleEmissionList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OrgEmission& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline OrgEmission& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline OrgEmission& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // subEmissionItems Field Functions 
    bool hasSubEmissionItems() const { return this->subEmissionItems_ != nullptr;};
    void deleteSubEmissionItems() { this->subEmissionItems_ = nullptr;};
    inline const vector<OrgEmission> & subEmissionItems() const { DARABONBA_PTR_GET_CONST(subEmissionItems_, vector<OrgEmission>) };
    inline vector<OrgEmission> subEmissionItems() { DARABONBA_PTR_GET(subEmissionItems_, vector<OrgEmission>) };
    inline OrgEmission& setSubEmissionItems(const vector<OrgEmission> & subEmissionItems) { DARABONBA_PTR_SET_VALUE(subEmissionItems_, subEmissionItems) };
    inline OrgEmission& setSubEmissionItems(vector<OrgEmission> && subEmissionItems) { DARABONBA_PTR_SET_RVALUE(subEmissionItems_, subEmissionItems) };


    // weightingCarbonEmissionData Field Functions 
    bool hasWeightingCarbonEmissionData() const { return this->weightingCarbonEmissionData_ != nullptr;};
    void deleteWeightingCarbonEmissionData() { this->weightingCarbonEmissionData_ = nullptr;};
    inline double weightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(weightingCarbonEmissionData_, 0.0) };
    inline OrgEmission& setWeightingCarbonEmissionData(double weightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(weightingCarbonEmissionData_, weightingCarbonEmissionData) };


    // weightingProportion Field Functions 
    bool hasWeightingProportion() const { return this->weightingProportion_ != nullptr;};
    void deleteWeightingProportion() { this->weightingProportion_ = nullptr;};
    inline double weightingProportion() const { DARABONBA_PTR_GET_DEFAULT(weightingProportion_, 0.0) };
    inline OrgEmission& setWeightingProportion(double weightingProportion) { DARABONBA_PTR_SET_VALUE(weightingProportion_, weightingProportion) };


    // weightingRatio Field Functions 
    bool hasWeightingRatio() const { return this->weightingRatio_ != nullptr;};
    void deleteWeightingRatio() { this->weightingRatio_ = nullptr;};
    inline double weightingRatio() const { DARABONBA_PTR_GET_DEFAULT(weightingRatio_, 0.0) };
    inline OrgEmission& setWeightingRatio(double weightingRatio) { DARABONBA_PTR_SET_VALUE(weightingRatio_, weightingRatio) };


  protected:
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    std::shared_ptr<vector<OrgEmissionModuleEmissionList>> moduleEmissionList_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameKey_ = nullptr;
    std::shared_ptr<double> ratio_ = nullptr;
    std::shared_ptr<vector<OrgEmission>> subEmissionItems_ = nullptr;
    std::shared_ptr<double> weightingCarbonEmissionData_ = nullptr;
    std::shared_ptr<double> weightingProportion_ = nullptr;
    std::shared_ptr<double> weightingRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
