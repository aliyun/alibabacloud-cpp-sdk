// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSTITUTEITEM_HPP_
#define ALIBABACLOUD_MODELS_CONSTITUTEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConstituteItemEnvGasEmissions.hpp>
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
    virtual bool empty() const override { this->carbonEmissionData_ != nullptr
        && this->dataUnit_ != nullptr && this->emissionSource_ != nullptr && this->emissionSourceKey_ != nullptr && this->enterpriseName_ != nullptr && this->envGasEmissions_ != nullptr
        && this->name_ != nullptr && this->nameKey_ != nullptr && this->ratio_ != nullptr && this->rawData_ != nullptr && this->subConstituteItems_ != nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline ConstituteItem& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string dataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline ConstituteItem& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // emissionSource Field Functions 
    bool hasEmissionSource() const { return this->emissionSource_ != nullptr;};
    void deleteEmissionSource() { this->emissionSource_ = nullptr;};
    inline string emissionSource() const { DARABONBA_PTR_GET_DEFAULT(emissionSource_, "") };
    inline ConstituteItem& setEmissionSource(string emissionSource) { DARABONBA_PTR_SET_VALUE(emissionSource_, emissionSource) };


    // emissionSourceKey Field Functions 
    bool hasEmissionSourceKey() const { return this->emissionSourceKey_ != nullptr;};
    void deleteEmissionSourceKey() { this->emissionSourceKey_ = nullptr;};
    inline string emissionSourceKey() const { DARABONBA_PTR_GET_DEFAULT(emissionSourceKey_, "") };
    inline ConstituteItem& setEmissionSourceKey(string emissionSourceKey) { DARABONBA_PTR_SET_VALUE(emissionSourceKey_, emissionSourceKey) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string enterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline ConstituteItem& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // envGasEmissions Field Functions 
    bool hasEnvGasEmissions() const { return this->envGasEmissions_ != nullptr;};
    void deleteEnvGasEmissions() { this->envGasEmissions_ = nullptr;};
    inline const vector<ConstituteItemEnvGasEmissions> & envGasEmissions() const { DARABONBA_PTR_GET_CONST(envGasEmissions_, vector<ConstituteItemEnvGasEmissions>) };
    inline vector<ConstituteItemEnvGasEmissions> envGasEmissions() { DARABONBA_PTR_GET(envGasEmissions_, vector<ConstituteItemEnvGasEmissions>) };
    inline ConstituteItem& setEnvGasEmissions(const vector<ConstituteItemEnvGasEmissions> & envGasEmissions) { DARABONBA_PTR_SET_VALUE(envGasEmissions_, envGasEmissions) };
    inline ConstituteItem& setEnvGasEmissions(vector<ConstituteItemEnvGasEmissions> && envGasEmissions) { DARABONBA_PTR_SET_RVALUE(envGasEmissions_, envGasEmissions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConstituteItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline ConstituteItem& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline ConstituteItem& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline double rawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
    inline ConstituteItem& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


    // subConstituteItems Field Functions 
    bool hasSubConstituteItems() const { return this->subConstituteItems_ != nullptr;};
    void deleteSubConstituteItems() { this->subConstituteItems_ = nullptr;};
    inline const vector<ConstituteItem> & subConstituteItems() const { DARABONBA_PTR_GET_CONST(subConstituteItems_, vector<ConstituteItem>) };
    inline vector<ConstituteItem> subConstituteItems() { DARABONBA_PTR_GET(subConstituteItems_, vector<ConstituteItem>) };
    inline ConstituteItem& setSubConstituteItems(const vector<ConstituteItem> & subConstituteItems) { DARABONBA_PTR_SET_VALUE(subConstituteItems_, subConstituteItems) };
    inline ConstituteItem& setSubConstituteItems(vector<ConstituteItem> && subConstituteItems) { DARABONBA_PTR_SET_RVALUE(subConstituteItems_, subConstituteItems) };


  protected:
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    std::shared_ptr<string> dataUnit_ = nullptr;
    std::shared_ptr<string> emissionSource_ = nullptr;
    std::shared_ptr<string> emissionSourceKey_ = nullptr;
    std::shared_ptr<string> enterpriseName_ = nullptr;
    std::shared_ptr<vector<ConstituteItemEnvGasEmissions>> envGasEmissions_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameKey_ = nullptr;
    std::shared_ptr<double> ratio_ = nullptr;
    std::shared_ptr<double> rawData_ = nullptr;
    std::shared_ptr<vector<ConstituteItem>> subConstituteItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
