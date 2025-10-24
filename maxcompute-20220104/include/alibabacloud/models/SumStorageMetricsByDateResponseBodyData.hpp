// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SumStorageMetricsByDateResponseBodyDataItemStorageMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumStorageMetricsByDateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByDateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(itemStorageMetrics, itemStorageMetrics_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByDateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(itemStorageMetrics, itemStorageMetrics_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    SumStorageMetricsByDateResponseBodyData() = default ;
    SumStorageMetricsByDateResponseBodyData(const SumStorageMetricsByDateResponseBodyData &) = default ;
    SumStorageMetricsByDateResponseBodyData(SumStorageMetricsByDateResponseBodyData &&) = default ;
    SumStorageMetricsByDateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByDateResponseBodyData() = default ;
    SumStorageMetricsByDateResponseBodyData& operator=(const SumStorageMetricsByDateResponseBodyData &) = default ;
    SumStorageMetricsByDateResponseBodyData& operator=(SumStorageMetricsByDateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dateTime_ == nullptr
        && return this->itemStorageMetrics_ == nullptr && return this->storageType_ == nullptr && return this->unit_ == nullptr && return this->usage_ == nullptr; };
    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline SumStorageMetricsByDateResponseBodyData& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // itemStorageMetrics Field Functions 
    bool hasItemStorageMetrics() const { return this->itemStorageMetrics_ != nullptr;};
    void deleteItemStorageMetrics() { this->itemStorageMetrics_ = nullptr;};
    inline const vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics> & itemStorageMetrics() const { DARABONBA_PTR_GET_CONST(itemStorageMetrics_, vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics>) };
    inline vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics> itemStorageMetrics() { DARABONBA_PTR_GET(itemStorageMetrics_, vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics>) };
    inline SumStorageMetricsByDateResponseBodyData& setItemStorageMetrics(const vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics> & itemStorageMetrics) { DARABONBA_PTR_SET_VALUE(itemStorageMetrics_, itemStorageMetrics) };
    inline SumStorageMetricsByDateResponseBodyData& setItemStorageMetrics(vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics> && itemStorageMetrics) { DARABONBA_PTR_SET_RVALUE(itemStorageMetrics_, itemStorageMetrics) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline SumStorageMetricsByDateResponseBodyData& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline SumStorageMetricsByDateResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline SumStorageMetricsByDateResponseBodyData& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<vector<Models::SumStorageMetricsByDateResponseBodyDataItemStorageMetrics>> itemStorageMetrics_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<string> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
