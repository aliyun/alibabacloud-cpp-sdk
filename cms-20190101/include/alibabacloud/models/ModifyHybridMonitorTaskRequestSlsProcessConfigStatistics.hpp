// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(Parameter1, parameter1_);
      DARABONBA_PTR_TO_JSON(Parameter2, parameter2_);
      DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(Parameter1, parameter1_);
      DARABONBA_PTR_FROM_JSON(Parameter2, parameter2_);
      DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
    };
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics(const ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics(ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics &&) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& operator=(const ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& operator=(ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->function_ == nullptr && return this->parameter1_ == nullptr && return this->parameter2_ == nullptr && return this->SLSKeyName_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // parameter1 Field Functions 
    bool hasParameter1() const { return this->parameter1_ != nullptr;};
    void deleteParameter1() { this->parameter1_ = nullptr;};
    inline string parameter1() const { DARABONBA_PTR_GET_DEFAULT(parameter1_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& setParameter1(string parameter1) { DARABONBA_PTR_SET_VALUE(parameter1_, parameter1) };


    // parameter2 Field Functions 
    bool hasParameter2() const { return this->parameter2_ != nullptr;};
    void deleteParameter2() { this->parameter2_ = nullptr;};
    inline string parameter2() const { DARABONBA_PTR_GET_DEFAULT(parameter2_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& setParameter2(string parameter2) { DARABONBA_PTR_SET_VALUE(parameter2_, parameter2) };


    // SLSKeyName Field Functions 
    bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
    void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
    inline string SLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigStatistics& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


  protected:
    // The alias of the aggregation result.
    std::shared_ptr<string> alias_ = nullptr;
    // The function that is used to aggregate the log data of a statistical period. Valid values:
    // 
    // *   count: counts the number.
    // *   sum: calculates the total value.
    // *   avg: calculates the average value.
    // *   max: calculates the maximum value.
    // *   min: calculates the minimum value.
    // *   value: collects samples within the statistical period.
    // *   countps: calculates the number of values of the specified field divided by the total number of seconds within the statistical period.
    // *   sumps: calculates the sum of the values of the specified field divided by the total number of seconds within the statistical period.
    // *   distinct: calculates the number of unique values of the specified field within the statistical period.
    // *   distribution: calculates the number of logs that meet a specified condition within the statistical period.
    // *   percentile: sorts the values of the specified field in ascending order, and then returns the value that is at the specified percentile within the statistical period. Example: P50.
    std::shared_ptr<string> function_ = nullptr;
    // The value of the function that is used to aggregate logs imported from Simple Log Service.
    // 
    // *   If the `Function` parameter is set to `distribution`, this parameter specifies the lower limit of the statistical interval. For example, if you want to calculate the number of HTTP requests whose status code is 2XX, set this parameter to 200.
    // *   If the `Function` parameter is set to `percentile`, this parameter specifies the percentile at which the expected value is. For example, 0.5 specifies P50.
    std::shared_ptr<string> parameter1_ = nullptr;
    // The value of the function that is used to aggregate logs imported from Simple Log Service.
    // 
    // >  This parameter is required only if the `Function` parameter is set to `distribution`. This parameter specifies the upper limit of the statistical interval. For example, if you want to calculate the number of HTTP requests whose status code is 2XX, set this parameter to 299.
    std::shared_ptr<string> parameter2_ = nullptr;
    // The name of the key that is used to aggregate logs imported from Simple Log Service.
    std::shared_ptr<string> SLSKeyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
