// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSTITUTEITEMENVGASEMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_CONSTITUTEITEMENVGASEMISSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ConstituteItemEnvGasEmissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConstituteItemEnvGasEmissions& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(gasEmissionData, gasEmissionData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ConstituteItemEnvGasEmissions& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(gasEmissionData, gasEmissionData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ConstituteItemEnvGasEmissions() = default ;
    ConstituteItemEnvGasEmissions(const ConstituteItemEnvGasEmissions &) = default ;
    ConstituteItemEnvGasEmissions(ConstituteItemEnvGasEmissions &&) = default ;
    ConstituteItemEnvGasEmissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConstituteItemEnvGasEmissions() = default ;
    ConstituteItemEnvGasEmissions& operator=(const ConstituteItemEnvGasEmissions &) = default ;
    ConstituteItemEnvGasEmissions& operator=(ConstituteItemEnvGasEmissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && return this->gasEmissionData_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline ConstituteItemEnvGasEmissions& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // gasEmissionData Field Functions 
    bool hasGasEmissionData() const { return this->gasEmissionData_ != nullptr;};
    void deleteGasEmissionData() { this->gasEmissionData_ = nullptr;};
    inline double gasEmissionData() const { DARABONBA_PTR_GET_DEFAULT(gasEmissionData_, 0.0) };
    inline ConstituteItemEnvGasEmissions& setGasEmissionData(double gasEmissionData) { DARABONBA_PTR_SET_VALUE(gasEmissionData_, gasEmissionData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConstituteItemEnvGasEmissions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ConstituteItemEnvGasEmissions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    std::shared_ptr<double> gasEmissionData_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
