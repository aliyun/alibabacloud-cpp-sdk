// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNSTATISTICSDESC_HPP_
#define ALIBABACLOUD_MODELS_COLUMNSTATISTICSDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ColumnStatisticsDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnStatisticsDesc& obj) { 
      DARABONBA_PTR_TO_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_TO_JSON(PartitionName, partitionName_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnStatisticsDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(LastAnalyzedTime, lastAnalyzedTime_);
      DARABONBA_PTR_FROM_JSON(PartitionName, partitionName_);
    };
    ColumnStatisticsDesc() = default ;
    ColumnStatisticsDesc(const ColumnStatisticsDesc &) = default ;
    ColumnStatisticsDesc(ColumnStatisticsDesc &&) = default ;
    ColumnStatisticsDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnStatisticsDesc() = default ;
    ColumnStatisticsDesc& operator=(const ColumnStatisticsDesc &) = default ;
    ColumnStatisticsDesc& operator=(ColumnStatisticsDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastAnalyzedTime_ == nullptr
        && return this->partitionName_ == nullptr; };
    // lastAnalyzedTime Field Functions 
    bool hasLastAnalyzedTime() const { return this->lastAnalyzedTime_ != nullptr;};
    void deleteLastAnalyzedTime() { this->lastAnalyzedTime_ = nullptr;};
    inline int64_t lastAnalyzedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAnalyzedTime_, 0L) };
    inline ColumnStatisticsDesc& setLastAnalyzedTime(int64_t lastAnalyzedTime) { DARABONBA_PTR_SET_VALUE(lastAnalyzedTime_, lastAnalyzedTime) };


    // partitionName Field Functions 
    bool hasPartitionName() const { return this->partitionName_ != nullptr;};
    void deletePartitionName() { this->partitionName_ = nullptr;};
    inline string partitionName() const { DARABONBA_PTR_GET_DEFAULT(partitionName_, "") };
    inline ColumnStatisticsDesc& setPartitionName(string partitionName) { DARABONBA_PTR_SET_VALUE(partitionName_, partitionName) };


  protected:
    std::shared_ptr<int64_t> lastAnalyzedTime_ = nullptr;
    std::shared_ptr<string> partitionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
