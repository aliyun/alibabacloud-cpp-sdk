// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSTITUTEITEM_HPP_
#define ALIBABACLOUD_MODELS_CONSTITUTEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConstituteItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ConstituteItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConstituteItem& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_TO_JSON(emissionSource, emissionSource_);
      DARABONBA_PTR_TO_JSON(emissionSourceKey, emissionSourceKey_);
      DARABONBA_PTR_TO_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(envGasEmissions, envGasEmissions_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(rawData, rawData_);
      DARABONBA_PTR_TO_JSON(subConstituteItems, subConstituteItems_);
    };
    friend void from_json(const Darabonba::Json& j, ConstituteItem& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_FROM_JSON(emissionSource, emissionSource_);
      DARABONBA_PTR_FROM_JSON(emissionSourceKey, emissionSourceKey_);
      DARABONBA_PTR_FROM_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(envGasEmissions, envGasEmissions_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(rawData, rawData_);
      DARABONBA_PTR_FROM_JSON(subConstituteItems, subConstituteItems_);
    };
    ConstituteItem() = default ;
    ConstituteItem(const ConstituteItem &) = default ;
    ConstituteItem(ConstituteItem &&) = default ;
    ConstituteItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConstituteItem() = default ;
    ConstituteItem& operator=(const ConstituteItem &) = default ;
    ConstituteItem& operator=(ConstituteItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EnvGasEmissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvGasEmissions& obj) { 
        DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_TO_JSON(gasEmissionData, gasEmissionData_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EnvGasEmissions& obj) { 
        DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
        DARABONBA_PTR_FROM_JSON(gasEmissionData, gasEmissionData_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      EnvGasEmissions() = default ;
      EnvGasEmissions(const EnvGasEmissions &) = default ;
      EnvGasEmissions(EnvGasEmissions &&) = default ;
      EnvGasEmissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvGasEmissions() = default ;
      EnvGasEmissions& operator=(const EnvGasEmissions &) = default ;
      EnvGasEmissions& operator=(EnvGasEmissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->gasEmissionData_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // carbonEmissionData Field Functions 
      bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
      void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
      inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
      inline EnvGasEmissions& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


      // gasEmissionData Field Functions 
      bool hasGasEmissionData() const { return this->gasEmissionData_ != nullptr;};
      void deleteGasEmissionData() { this->gasEmissionData_ = nullptr;};
      inline double getGasEmissionData() const { DARABONBA_PTR_GET_DEFAULT(gasEmissionData_, 0.0) };
      inline EnvGasEmissions& setGasEmissionData(double gasEmissionData) { DARABONBA_PTR_SET_VALUE(gasEmissionData_, gasEmissionData) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EnvGasEmissions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EnvGasEmissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Carbon emissions.
      shared_ptr<double> carbonEmissionData_ {};
      // Gas emissions.
      shared_ptr<double> gasEmissionData_ {};
      // Name of gas.
      shared_ptr<string> name_ {};
      // A unique key that identifies the gas type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && this->dataUnit_ == nullptr && this->emissionSource_ == nullptr && this->emissionSourceKey_ == nullptr && this->enterpriseName_ == nullptr && this->envGasEmissions_ == nullptr
        && this->name_ == nullptr && this->nameKey_ == nullptr && this->ratio_ == nullptr && this->rawData_ == nullptr && this->subConstituteItems_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double getCarbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline ConstituteItem& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline ConstituteItem& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // emissionSource Field Functions 
    bool hasEmissionSource() const { return this->emissionSource_ != nullptr;};
    void deleteEmissionSource() { this->emissionSource_ = nullptr;};
    inline string getEmissionSource() const { DARABONBA_PTR_GET_DEFAULT(emissionSource_, "") };
    inline ConstituteItem& setEmissionSource(string emissionSource) { DARABONBA_PTR_SET_VALUE(emissionSource_, emissionSource) };


    // emissionSourceKey Field Functions 
    bool hasEmissionSourceKey() const { return this->emissionSourceKey_ != nullptr;};
    void deleteEmissionSourceKey() { this->emissionSourceKey_ = nullptr;};
    inline string getEmissionSourceKey() const { DARABONBA_PTR_GET_DEFAULT(emissionSourceKey_, "") };
    inline ConstituteItem& setEmissionSourceKey(string emissionSourceKey) { DARABONBA_PTR_SET_VALUE(emissionSourceKey_, emissionSourceKey) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline ConstituteItem& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // envGasEmissions Field Functions 
    bool hasEnvGasEmissions() const { return this->envGasEmissions_ != nullptr;};
    void deleteEnvGasEmissions() { this->envGasEmissions_ = nullptr;};
    inline const vector<ConstituteItem::EnvGasEmissions> & getEnvGasEmissions() const { DARABONBA_PTR_GET_CONST(envGasEmissions_, vector<ConstituteItem::EnvGasEmissions>) };
    inline vector<ConstituteItem::EnvGasEmissions> getEnvGasEmissions() { DARABONBA_PTR_GET(envGasEmissions_, vector<ConstituteItem::EnvGasEmissions>) };
    inline ConstituteItem& setEnvGasEmissions(const vector<ConstituteItem::EnvGasEmissions> & envGasEmissions) { DARABONBA_PTR_SET_VALUE(envGasEmissions_, envGasEmissions) };
    inline ConstituteItem& setEnvGasEmissions(vector<ConstituteItem::EnvGasEmissions> && envGasEmissions) { DARABONBA_PTR_SET_RVALUE(envGasEmissions_, envGasEmissions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConstituteItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline ConstituteItem& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline ConstituteItem& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline double getRawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
    inline ConstituteItem& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


    // subConstituteItems Field Functions 
    bool hasSubConstituteItems() const { return this->subConstituteItems_ != nullptr;};
    void deleteSubConstituteItems() { this->subConstituteItems_ = nullptr;};
    inline const vector<ConstituteItem> & getSubConstituteItems() const { DARABONBA_PTR_GET_CONST(subConstituteItems_, vector<ConstituteItem>) };
    inline vector<ConstituteItem> getSubConstituteItems() { DARABONBA_PTR_GET(subConstituteItems_, vector<ConstituteItem>) };
    inline ConstituteItem& setSubConstituteItems(const vector<ConstituteItem> & subConstituteItems) { DARABONBA_PTR_SET_VALUE(subConstituteItems_, subConstituteItems) };
    inline ConstituteItem& setSubConstituteItems(vector<ConstituteItem> && subConstituteItems) { DARABONBA_PTR_SET_RVALUE(subConstituteItems_, subConstituteItems) };


  protected:
    // Carbon emission
    shared_ptr<double> carbonEmissionData_ {};
    // Data Unit
    shared_ptr<string> dataUnit_ {};
    // Emission source
    shared_ptr<string> emissionSource_ {};
    // Unique identification of emission source.
    shared_ptr<string> emissionSourceKey_ {};
    // The name of enterprise.
    shared_ptr<string> enterpriseName_ {};
    // Gas Emissions Detail List.
    shared_ptr<vector<ConstituteItem::EnvGasEmissions>> envGasEmissions_ {};
    // The name.
    shared_ptr<string> name_ {};
    // The unique identifier of name.
    shared_ptr<string> nameKey_ {};
    // Ratio.example value: 0.5 (i. e. 50%).
    shared_ptr<double> ratio_ {};
    // Raw data
    shared_ptr<double> rawData_ {};
    // The child detail list.
    shared_ptr<vector<ConstituteItem>> subConstituteItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
