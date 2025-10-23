// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGASCONSTITUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGASCONSTITUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGasConstituteResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGasConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(gasEmissionData, gasEmissionData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetGasConstituteResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(gasEmissionData, gasEmissionData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetGasConstituteResponseBodyData() = default ;
    GetGasConstituteResponseBodyData(const GetGasConstituteResponseBodyData &) = default ;
    GetGasConstituteResponseBodyData(GetGasConstituteResponseBodyData &&) = default ;
    GetGasConstituteResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGasConstituteResponseBodyData() = default ;
    GetGasConstituteResponseBodyData& operator=(const GetGasConstituteResponseBodyData &) = default ;
    GetGasConstituteResponseBodyData& operator=(GetGasConstituteResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmissionData_ == nullptr
        && return this->gasEmissionData_ == nullptr && return this->name_ == nullptr && return this->ratio_ == nullptr && return this->type_ == nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline GetGasConstituteResponseBodyData& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // gasEmissionData Field Functions 
    bool hasGasEmissionData() const { return this->gasEmissionData_ != nullptr;};
    void deleteGasEmissionData() { this->gasEmissionData_ = nullptr;};
    inline double gasEmissionData() const { DARABONBA_PTR_GET_DEFAULT(gasEmissionData_, 0.0) };
    inline GetGasConstituteResponseBodyData& setGasEmissionData(double gasEmissionData) { DARABONBA_PTR_SET_VALUE(gasEmissionData_, gasEmissionData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGasConstituteResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline GetGasConstituteResponseBodyData& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetGasConstituteResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Carbon emissions
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    // Gas emissions
    std::shared_ptr<double> gasEmissionData_ = nullptr;
    // Name of gas
    std::shared_ptr<string> name_ = nullptr;
    // Proportion of carbon emissions. Example value: 0.5 (50%)
    std::shared_ptr<double> ratio_ = nullptr;
    // Gas Type
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
