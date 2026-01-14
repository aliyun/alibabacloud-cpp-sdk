// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORGEMISSION_HPP_
#define ALIBABACLOUD_MODELS_ORGEMISSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ModuleEmissionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleEmissionList& obj) { 
        DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
        DARABONBA_PTR_TO_JSON(ratio, ratio_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleEmissionList& obj) { 
        DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
        DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      };
      ModuleEmissionList() = default ;
      ModuleEmissionList(const ModuleEmissionList &) = default ;
      ModuleEmissionList(ModuleEmissionList &&) = default ;
      ModuleEmissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleEmissionList() = default ;
      ModuleEmissionList& operator=(const ModuleEmissionList &) = default ;
      ModuleEmissionList& operator=(ModuleEmissionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr; };
      // carbonEmissionData Field Functions 
      bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
      void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
      inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
      inline ModuleEmissionList& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ModuleEmissionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameKey Field Functions 
      bool hasNameKey() const { return this->nameKey_ != nullptr;};
      void deleteNameKey() { this->nameKey_ = nullptr;};
      inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
      inline ModuleEmissionList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
      inline ModuleEmissionList& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    protected:
      shared_ptr<double> carbonEmissionData_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nameKey_ {};
      shared_ptr<double> ratio_ {};
    };

    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->moduleEmissionList_ == nullptr && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->subEmissionItems_ == nullptr
        && this->weightingCarbonEmissionData_ == nullptr && this->weightingProportion_ == nullptr && this->weightingRatio_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline OrgEmission& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // moduleEmissionList Field Functions 
    bool hasModuleEmissionList() const { return this->moduleEmissionList_ != nullptr;};
    void deleteModuleEmissionList() { this->moduleEmissionList_ = nullptr;};
    inline const vector<OrgEmission::ModuleEmissionList> & getModuleEmissionList() const { DARABONBA_PTR_GET_CONST(moduleEmissionList_, vector<OrgEmission::ModuleEmissionList>) };
    inline vector<OrgEmission::ModuleEmissionList> getModuleEmissionList() { DARABONBA_PTR_GET(moduleEmissionList_, vector<OrgEmission::ModuleEmissionList>) };
    inline OrgEmission& setModuleEmissionList(const vector<OrgEmission::ModuleEmissionList> & moduleEmissionList) { DARABONBA_PTR_SET_VALUE(moduleEmissionList_, moduleEmissionList) };
    inline OrgEmission& setModuleEmissionList(vector<OrgEmission::ModuleEmissionList> && moduleEmissionList) { DARABONBA_PTR_SET_RVALUE(moduleEmissionList_, moduleEmissionList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OrgEmission& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline OrgEmission& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline OrgEmission& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // subEmissionItems Field Functions 
    bool hasSubEmissionItems() const { return this->subEmissionItems_ != nullptr;};
    void deleteSubEmissionItems() { this->subEmissionItems_ = nullptr;};
    inline const vector<OrgEmission> & getSubEmissionItems() const { DARABONBA_PTR_GET_CONST(subEmissionItems_, vector<OrgEmission>) };
    inline vector<OrgEmission> getSubEmissionItems() { DARABONBA_PTR_GET(subEmissionItems_, vector<OrgEmission>) };
    inline OrgEmission& setSubEmissionItems(const vector<OrgEmission> & subEmissionItems) { DARABONBA_PTR_SET_VALUE(subEmissionItems_, subEmissionItems) };
    inline OrgEmission& setSubEmissionItems(vector<OrgEmission> && subEmissionItems) { DARABONBA_PTR_SET_RVALUE(subEmissionItems_, subEmissionItems) };


    // weightingCarbonEmissionData Field Functions 
    bool hasWeightingCarbonEmissionData() const { return this->weightingCarbonEmissionData_ != nullptr;};
    void deleteWeightingCarbonEmissionData() { this->weightingCarbonEmissionData_ = nullptr;};
    inline double getWeightingCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(weightingCarbonEmissionData_, 0.0) };
    inline OrgEmission& setWeightingCarbonEmissionData(double weightingCarbonEmissionData) { DARABONBA_PTR_SET_VALUE(weightingCarbonEmissionData_, weightingCarbonEmissionData) };


    // weightingProportion Field Functions 
    bool hasWeightingProportion() const { return this->weightingProportion_ != nullptr;};
    void deleteWeightingProportion() { this->weightingProportion_ = nullptr;};
    inline double getWeightingProportion() const { DARABONBA_PTR_GET_DEFAULT(weightingProportion_, 0.0) };
    inline OrgEmission& setWeightingProportion(double weightingProportion) { DARABONBA_PTR_SET_VALUE(weightingProportion_, weightingProportion) };


    // weightingRatio Field Functions 
    bool hasWeightingRatio() const { return this->weightingRatio_ != nullptr;};
    void deleteWeightingRatio() { this->weightingRatio_ = nullptr;};
    inline double getWeightingRatio() const { DARABONBA_PTR_GET_DEFAULT(weightingRatio_, 0.0) };
    inline OrgEmission& setWeightingRatio(double weightingRatio) { DARABONBA_PTR_SET_VALUE(weightingRatio_, weightingRatio) };


  protected:
    shared_ptr<double> carbonEmissionData_ {};
    shared_ptr<vector<OrgEmission::ModuleEmissionList>> moduleEmissionList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> nameKey_ {};
    shared_ptr<double> ratio_ {};
    shared_ptr<vector<OrgEmission>> subEmissionItems_ {};
    shared_ptr<double> weightingCarbonEmissionData_ {};
    shared_ptr<double> weightingProportion_ {};
    shared_ptr<double> weightingRatio_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
