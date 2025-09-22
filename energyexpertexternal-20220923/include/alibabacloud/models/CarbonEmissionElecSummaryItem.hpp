// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARBONEMISSIONELECSUMMARYITEM_HPP_
#define ALIBABACLOUD_MODELS_CARBONEMISSIONELECSUMMARYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class CarbonEmissionElecSummaryItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarbonEmissionElecSummaryItem& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(rawData, rawData_);
    };
    friend void from_json(const Darabonba::Json& j, CarbonEmissionElecSummaryItem& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmissionData, carbonEmissionData_);
      DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(rawData, rawData_);
    };
    CarbonEmissionElecSummaryItem() = default ;
    CarbonEmissionElecSummaryItem(const CarbonEmissionElecSummaryItem &) = default ;
    CarbonEmissionElecSummaryItem(CarbonEmissionElecSummaryItem &&) = default ;
    CarbonEmissionElecSummaryItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarbonEmissionElecSummaryItem() = default ;
    CarbonEmissionElecSummaryItem& operator=(const CarbonEmissionElecSummaryItem &) = default ;
    CarbonEmissionElecSummaryItem& operator=(CarbonEmissionElecSummaryItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carbonEmissionData_ != nullptr
        && this->dataUnit_ != nullptr && this->name_ != nullptr && this->ratio_ != nullptr && this->rawData_ != nullptr; };
    // carbonEmissionData Field Functions 
    bool hasCarbonEmissionData() const { return this->carbonEmissionData_ != nullptr;};
    void deleteCarbonEmissionData() { this->carbonEmissionData_ = nullptr;};
    inline double carbonEmissionData() const { DARABONBA_PTR_GET_DEFAULT(carbonEmissionData_, 0.0) };
    inline CarbonEmissionElecSummaryItem& setCarbonEmissionData(double carbonEmissionData) { DARABONBA_PTR_SET_VALUE(carbonEmissionData_, carbonEmissionData) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string dataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline CarbonEmissionElecSummaryItem& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CarbonEmissionElecSummaryItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline double ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
    inline CarbonEmissionElecSummaryItem& setRatio(double ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // rawData Field Functions 
    bool hasRawData() const { return this->rawData_ != nullptr;};
    void deleteRawData() { this->rawData_ = nullptr;};
    inline double rawData() const { DARABONBA_PTR_GET_DEFAULT(rawData_, 0.0) };
    inline CarbonEmissionElecSummaryItem& setRawData(double rawData) { DARABONBA_PTR_SET_VALUE(rawData_, rawData) };


  protected:
    std::shared_ptr<double> carbonEmissionData_ = nullptr;
    std::shared_ptr<string> dataUnit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<double> ratio_ = nullptr;
    std::shared_ptr<double> rawData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
