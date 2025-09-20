// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUESTDATEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUESTDATEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateLocationDateClusteringTaskRequestDateOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocationDateClusteringTaskRequestDateOptions& obj) { 
      DARABONBA_PTR_TO_JSON(GapDays, gapDays_);
      DARABONBA_PTR_TO_JSON(MaxDays, maxDays_);
      DARABONBA_PTR_TO_JSON(MinDays, minDays_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocationDateClusteringTaskRequestDateOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(GapDays, gapDays_);
      DARABONBA_PTR_FROM_JSON(MaxDays, maxDays_);
      DARABONBA_PTR_FROM_JSON(MinDays, minDays_);
    };
    CreateLocationDateClusteringTaskRequestDateOptions() = default ;
    CreateLocationDateClusteringTaskRequestDateOptions(const CreateLocationDateClusteringTaskRequestDateOptions &) = default ;
    CreateLocationDateClusteringTaskRequestDateOptions(CreateLocationDateClusteringTaskRequestDateOptions &&) = default ;
    CreateLocationDateClusteringTaskRequestDateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocationDateClusteringTaskRequestDateOptions() = default ;
    CreateLocationDateClusteringTaskRequestDateOptions& operator=(const CreateLocationDateClusteringTaskRequestDateOptions &) = default ;
    CreateLocationDateClusteringTaskRequestDateOptions& operator=(CreateLocationDateClusteringTaskRequestDateOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gapDays_ != nullptr
        && this->maxDays_ != nullptr && this->minDays_ != nullptr; };
    // gapDays Field Functions 
    bool hasGapDays() const { return this->gapDays_ != nullptr;};
    void deleteGapDays() { this->gapDays_ = nullptr;};
    inline int64_t gapDays() const { DARABONBA_PTR_GET_DEFAULT(gapDays_, 0L) };
    inline CreateLocationDateClusteringTaskRequestDateOptions& setGapDays(int64_t gapDays) { DARABONBA_PTR_SET_VALUE(gapDays_, gapDays) };


    // maxDays Field Functions 
    bool hasMaxDays() const { return this->maxDays_ != nullptr;};
    void deleteMaxDays() { this->maxDays_ = nullptr;};
    inline int64_t maxDays() const { DARABONBA_PTR_GET_DEFAULT(maxDays_, 0L) };
    inline CreateLocationDateClusteringTaskRequestDateOptions& setMaxDays(int64_t maxDays) { DARABONBA_PTR_SET_VALUE(maxDays_, maxDays) };


    // minDays Field Functions 
    bool hasMinDays() const { return this->minDays_ != nullptr;};
    void deleteMinDays() { this->minDays_ = nullptr;};
    inline int64_t minDays() const { DARABONBA_PTR_GET_DEFAULT(minDays_, 0L) };
    inline CreateLocationDateClusteringTaskRequestDateOptions& setMinDays(int64_t minDays) { DARABONBA_PTR_SET_VALUE(minDays_, minDays) };


  protected:
    // The maximum number of days allowed in a gap for a single spatiotemporal cluster. Valid values: 0 to 99999.
    // 
    // For example, if travel photos were produced on March 4, 5, and 7, 2024, but not on Marh 6, 2024, and you set the parameter to 1, IMM considers the travel spanning the date range from March 4, 2024 to March 7, 2024 and includes photos within the data range in the same cluster.````
    // 
    // We recommend that you set the parameter to a value within the range from 0 to 3.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> gapDays_ = nullptr;
    // The maximum number of days that a single spatiotemporal cluster can span. Valid values: 1 to 99999. IMM does not create a cluster that spans more than the maximum number of days.
    // 
    // For example, if you want to create travel photo clusters, you may want to exclude photos that were taken within 15 consecutive days in the same city, because it is likely that these photos were not taken during a travel. In this case, you can set the parameter to 15 to exclude this time range and location from the clustering task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> maxDays_ = nullptr;
    // The minimum number of days that a single spatiotemporal cluster can span. Valid values: 1 to 99999. IMM does not create a cluster that spans less than the minimum number of days.
    // 
    // For example, if you do not want a one-day tour cluster, you can set the parameter to 2.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> minDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
