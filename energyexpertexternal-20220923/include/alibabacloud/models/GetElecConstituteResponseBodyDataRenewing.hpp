// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODYDATARENEWING_HPP_
#define ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODYDATARENEWING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecConstituteResponseBodyDataRenewing : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecConstituteResponseBodyDataRenewing& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameKey, nameKey_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(rawData, rawData_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecConstituteResponseBodyDataRenewing& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameKey, nameKey_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(rawData, rawData_);
    };
    GetElecConstituteResponseBodyDataRenewing() = default ;
    GetElecConstituteResponseBodyDataRenewing(const GetElecConstituteResponseBodyDataRenewing &) = default ;
    GetElecConstituteResponseBodyDataRenewing(GetElecConstituteResponseBodyDataRenewing &&) = default ;
    GetElecConstituteResponseBodyDataRenewing(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecConstituteResponseBodyDataRenewing() = default ;
    GetElecConstituteResponseBodyDataRenewing& operator=(const GetElecConstituteResponseBodyDataRenewing &) = default ;
    GetElecConstituteResponseBodyDataRenewing& operator=(GetElecConstituteResponseBodyDataRenewing &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carbonEmissionData_ != nullptr
        && this->dataUnit_ != nullptr && this->name_ != nullptr && this->nameKey_ != nullptr && this->ratio_ != nullptr && this->rawData_ != nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline GetElecConstituteResponseBodyDataRenewing& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string dataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline GetElecConstituteResponseBodyDataRenewing& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetElecConstituteResponseBodyDataRenewing& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline GetElecConstituteResponseBodyDataRenewing& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline GetElecConstituteResponseBodyDataRenewing& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline double rawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
    inline GetElecConstituteResponseBodyDataRenewing& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


  protected:
    // Carbon emission.
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    // The unit.
    std::shared_ptr<string> dataUnit_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The unique identifier of name.
    std::shared_ptr<string> nameKey_ = nullptr;
    // Proportion of electricity consumption to all electricity consumption in the month: example value: 0.5 (i. e., 50%)
    std::shared_ptr<double> ratio_ = nullptr;
    // Electricity consumption
    std::shared_ptr<double> rawData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
