// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODYDATAITEMSTORAGEMETRICS_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODYDATAITEMSTORAGEMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumStorageMetricsByDateResponseBodyDataItemStorageMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(itemName, itemName_);
      DARABONBA_PTR_TO_JSON(percentage, percentage_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(itemName, itemName_);
      DARABONBA_PTR_FROM_JSON(percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics() = default ;
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics(const SumStorageMetricsByDateResponseBodyDataItemStorageMetrics &) = default ;
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics(SumStorageMetricsByDateResponseBodyDataItemStorageMetrics &&) = default ;
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByDateResponseBodyDataItemStorageMetrics() = default ;
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& operator=(const SumStorageMetricsByDateResponseBodyDataItemStorageMetrics &) = default ;
    SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& operator=(SumStorageMetricsByDateResponseBodyDataItemStorageMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemName_ != nullptr
        && this->percentage_ != nullptr && this->usage_ != nullptr; };
    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline double percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
    inline SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline SumStorageMetricsByDateResponseBodyDataItemStorageMetrics& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> itemName_ = nullptr;
    std::shared_ptr<double> percentage_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
