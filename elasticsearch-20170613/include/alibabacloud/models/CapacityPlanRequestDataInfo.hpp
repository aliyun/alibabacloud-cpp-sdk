// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANREQUESTDATAINFO_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANREQUESTDATAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanRequestDataInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanRequestDataInfo& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanRequestDataInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    CapacityPlanRequestDataInfo() = default ;
    CapacityPlanRequestDataInfo(const CapacityPlanRequestDataInfo &) = default ;
    CapacityPlanRequestDataInfo(CapacityPlanRequestDataInfo &&) = default ;
    CapacityPlanRequestDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanRequestDataInfo() = default ;
    CapacityPlanRequestDataInfo& operator=(const CapacityPlanRequestDataInfo &) = default ;
    CapacityPlanRequestDataInfo& operator=(CapacityPlanRequestDataInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->size_ != nullptr && this->totalCount_ != nullptr && this->type_ != nullptr && this->unit_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CapacityPlanRequestDataInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline CapacityPlanRequestDataInfo& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CapacityPlanRequestDataInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CapacityPlanRequestDataInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline CapacityPlanRequestDataInfo& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // Disk data metric code. Options:
    // 
    // - totalRawData: Raw data information
    // - document: Data document information, estimated document count
    // - dailyIncrement: Daily data growth
    // - dailyIncrementDoc: Daily incremental document count
    // - retentionTime: Data retention period
    // - replica: Replica settings
    std::shared_ptr<string> code_ = nullptr;
    // Disk usage metric value.
    std::shared_ptr<int64_t> size_ = nullptr;
    // Total number of data entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Disk data type. Options:
    // 
    // - hot: Hot data
    // - warm: Cold data
    std::shared_ptr<string> type_ = nullptr;
    // Data or time unit. Options:
    // 
    // - Data units: MiB, GiB, TB, PB
    // - Time units: DAYS, WEEKS, MONTHS, YEARS
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
