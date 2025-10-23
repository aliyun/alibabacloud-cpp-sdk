// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETGWPBENCHMARKLISTRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpBenchmarkListResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpBenchmarkListResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(activeReduction, activeReduction_);
      DARABONBA_PTR_TO_JSON(benchmarkEmission, benchmarkEmission_);
      DARABONBA_PTR_TO_JSON(benchmarkName, benchmarkName_);
      DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(percent, percent_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpBenchmarkListResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(activeReduction, activeReduction_);
      DARABONBA_PTR_FROM_JSON(benchmarkEmission, benchmarkEmission_);
      DARABONBA_PTR_FROM_JSON(benchmarkName, benchmarkName_);
      DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(percent, percent_);
    };
    GetGwpBenchmarkListResponseBodyDataItems() = default ;
    GetGwpBenchmarkListResponseBodyDataItems(const GetGwpBenchmarkListResponseBodyDataItems &) = default ;
    GetGwpBenchmarkListResponseBodyDataItems(GetGwpBenchmarkListResponseBodyDataItems &&) = default ;
    GetGwpBenchmarkListResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpBenchmarkListResponseBodyDataItems() = default ;
    GetGwpBenchmarkListResponseBodyDataItems& operator=(const GetGwpBenchmarkListResponseBodyDataItems &) = default ;
    GetGwpBenchmarkListResponseBodyDataItems& operator=(GetGwpBenchmarkListResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeReduction_ == nullptr
        && return this->benchmarkEmission_ == nullptr && return this->benchmarkName_ == nullptr && return this->carbonEmission_ == nullptr && return this->name_ == nullptr && return this->percent_ == nullptr; };
    // activeReduction Field Functions 
    bool hasActiveReduction() const { return this->activeReduction_ != nullptr;};
    void deleteActiveReduction() { this->activeReduction_ = nullptr;};
    inline double activeReduction() const { DARABONBA_PTR_GET_DEFAULT(activeReduction_, 0.0) };
    inline GetGwpBenchmarkListResponseBodyDataItems& setActiveReduction(double activeReduction) { DARABONBA_PTR_SET_VALUE(activeReduction_, activeReduction) };


    // benchmarkEmission Field Functions 
    bool hasBenchmarkEmission() const { return this->benchmarkEmission_ != nullptr;};
    void deleteBenchmarkEmission() { this->benchmarkEmission_ = nullptr;};
    inline double benchmarkEmission() const { DARABONBA_PTR_GET_DEFAULT(benchmarkEmission_, 0.0) };
    inline GetGwpBenchmarkListResponseBodyDataItems& setBenchmarkEmission(double benchmarkEmission) { DARABONBA_PTR_SET_VALUE(benchmarkEmission_, benchmarkEmission) };


    // benchmarkName Field Functions 
    bool hasBenchmarkName() const { return this->benchmarkName_ != nullptr;};
    void deleteBenchmarkName() { this->benchmarkName_ = nullptr;};
    inline string benchmarkName() const { DARABONBA_PTR_GET_DEFAULT(benchmarkName_, "") };
    inline GetGwpBenchmarkListResponseBodyDataItems& setBenchmarkName(string benchmarkName) { DARABONBA_PTR_SET_VALUE(benchmarkName_, benchmarkName) };


    // carbonEmission Field Functions 
    bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
    void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
    inline double carbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
    inline GetGwpBenchmarkListResponseBodyDataItems& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGwpBenchmarkListResponseBodyDataItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline GetGwpBenchmarkListResponseBodyDataItems& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


  protected:
    // `activeReduction=benchmarkEmission-carbonEmission` Generally, baseline emissions are greater than inventory emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
    std::shared_ptr<double> activeReduction_ = nullptr;
    // Benchmark emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
    std::shared_ptr<double> benchmarkEmission_ = nullptr;
    // Benchmark name
    std::shared_ptr<string> benchmarkName_ = nullptr;
    // Inventory emissions. Maintain four decimal places. Unit pertains to a higher-level unit.
    std::shared_ptr<double> carbonEmission_ = nullptr;
    // name
    std::shared_ptr<string> name_ = nullptr;
    // Unused temporarily.
    std::shared_ptr<string> percent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
