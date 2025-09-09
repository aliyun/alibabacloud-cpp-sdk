// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHARDTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeShardTaskInfoResponseBodyDataFull.hpp>
#include <alibabacloud/models/DescribeShardTaskInfoResponseBodyDataFullCheck.hpp>
#include <alibabacloud/models/DescribeShardTaskInfoResponseBodyDataFullRevise.hpp>
#include <alibabacloud/models/DescribeShardTaskInfoResponseBodyDataIncrement.hpp>
#include <alibabacloud/models/DescribeShardTaskInfoResponseBodyDataReview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeShardTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShardTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(Full, full_);
      DARABONBA_PTR_TO_JSON(FullCheck, fullCheck_);
      DARABONBA_PTR_TO_JSON(FullRevise, fullRevise_);
      DARABONBA_PTR_TO_JSON(Increment, increment_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Review, review_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_TO_JSON(Stage, stage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShardTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(Full, full_);
      DARABONBA_PTR_FROM_JSON(FullCheck, fullCheck_);
      DARABONBA_PTR_FROM_JSON(FullRevise, fullRevise_);
      DARABONBA_PTR_FROM_JSON(Increment, increment_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Review, review_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_FROM_JSON(Stage, stage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
    };
    DescribeShardTaskInfoResponseBodyData() = default ;
    DescribeShardTaskInfoResponseBodyData(const DescribeShardTaskInfoResponseBodyData &) = default ;
    DescribeShardTaskInfoResponseBodyData(DescribeShardTaskInfoResponseBodyData &&) = default ;
    DescribeShardTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShardTaskInfoResponseBodyData() = default ;
    DescribeShardTaskInfoResponseBodyData& operator=(const DescribeShardTaskInfoResponseBodyData &) = default ;
    DescribeShardTaskInfoResponseBodyData& operator=(DescribeShardTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expired_ != nullptr
        && this->full_ != nullptr && this->fullCheck_ != nullptr && this->fullRevise_ != nullptr && this->increment_ != nullptr && this->progress_ != nullptr
        && this->review_ != nullptr && this->sourceTableName_ != nullptr && this->stage_ != nullptr && this->status_ != nullptr && this->targetTableName_ != nullptr; };
    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // full Field Functions 
    bool hasFull() const { return this->full_ != nullptr;};
    void deleteFull() { this->full_ = nullptr;};
    inline const Models::DescribeShardTaskInfoResponseBodyDataFull & full() const { DARABONBA_PTR_GET_CONST(full_, Models::DescribeShardTaskInfoResponseBodyDataFull) };
    inline Models::DescribeShardTaskInfoResponseBodyDataFull full() { DARABONBA_PTR_GET(full_, Models::DescribeShardTaskInfoResponseBodyDataFull) };
    inline DescribeShardTaskInfoResponseBodyData& setFull(const Models::DescribeShardTaskInfoResponseBodyDataFull & full) { DARABONBA_PTR_SET_VALUE(full_, full) };
    inline DescribeShardTaskInfoResponseBodyData& setFull(Models::DescribeShardTaskInfoResponseBodyDataFull && full) { DARABONBA_PTR_SET_RVALUE(full_, full) };


    // fullCheck Field Functions 
    bool hasFullCheck() const { return this->fullCheck_ != nullptr;};
    void deleteFullCheck() { this->fullCheck_ = nullptr;};
    inline const Models::DescribeShardTaskInfoResponseBodyDataFullCheck & fullCheck() const { DARABONBA_PTR_GET_CONST(fullCheck_, Models::DescribeShardTaskInfoResponseBodyDataFullCheck) };
    inline Models::DescribeShardTaskInfoResponseBodyDataFullCheck fullCheck() { DARABONBA_PTR_GET(fullCheck_, Models::DescribeShardTaskInfoResponseBodyDataFullCheck) };
    inline DescribeShardTaskInfoResponseBodyData& setFullCheck(const Models::DescribeShardTaskInfoResponseBodyDataFullCheck & fullCheck) { DARABONBA_PTR_SET_VALUE(fullCheck_, fullCheck) };
    inline DescribeShardTaskInfoResponseBodyData& setFullCheck(Models::DescribeShardTaskInfoResponseBodyDataFullCheck && fullCheck) { DARABONBA_PTR_SET_RVALUE(fullCheck_, fullCheck) };


    // fullRevise Field Functions 
    bool hasFullRevise() const { return this->fullRevise_ != nullptr;};
    void deleteFullRevise() { this->fullRevise_ = nullptr;};
    inline const Models::DescribeShardTaskInfoResponseBodyDataFullRevise & fullRevise() const { DARABONBA_PTR_GET_CONST(fullRevise_, Models::DescribeShardTaskInfoResponseBodyDataFullRevise) };
    inline Models::DescribeShardTaskInfoResponseBodyDataFullRevise fullRevise() { DARABONBA_PTR_GET(fullRevise_, Models::DescribeShardTaskInfoResponseBodyDataFullRevise) };
    inline DescribeShardTaskInfoResponseBodyData& setFullRevise(const Models::DescribeShardTaskInfoResponseBodyDataFullRevise & fullRevise) { DARABONBA_PTR_SET_VALUE(fullRevise_, fullRevise) };
    inline DescribeShardTaskInfoResponseBodyData& setFullRevise(Models::DescribeShardTaskInfoResponseBodyDataFullRevise && fullRevise) { DARABONBA_PTR_SET_RVALUE(fullRevise_, fullRevise) };


    // increment Field Functions 
    bool hasIncrement() const { return this->increment_ != nullptr;};
    void deleteIncrement() { this->increment_ = nullptr;};
    inline const Models::DescribeShardTaskInfoResponseBodyDataIncrement & increment() const { DARABONBA_PTR_GET_CONST(increment_, Models::DescribeShardTaskInfoResponseBodyDataIncrement) };
    inline Models::DescribeShardTaskInfoResponseBodyDataIncrement increment() { DARABONBA_PTR_GET(increment_, Models::DescribeShardTaskInfoResponseBodyDataIncrement) };
    inline DescribeShardTaskInfoResponseBodyData& setIncrement(const Models::DescribeShardTaskInfoResponseBodyDataIncrement & increment) { DARABONBA_PTR_SET_VALUE(increment_, increment) };
    inline DescribeShardTaskInfoResponseBodyData& setIncrement(Models::DescribeShardTaskInfoResponseBodyDataIncrement && increment) { DARABONBA_PTR_SET_RVALUE(increment_, increment) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // review Field Functions 
    bool hasReview() const { return this->review_ != nullptr;};
    void deleteReview() { this->review_ = nullptr;};
    inline const Models::DescribeShardTaskInfoResponseBodyDataReview & review() const { DARABONBA_PTR_GET_CONST(review_, Models::DescribeShardTaskInfoResponseBodyDataReview) };
    inline Models::DescribeShardTaskInfoResponseBodyDataReview review() { DARABONBA_PTR_GET(review_, Models::DescribeShardTaskInfoResponseBodyDataReview) };
    inline DescribeShardTaskInfoResponseBodyData& setReview(const Models::DescribeShardTaskInfoResponseBodyDataReview & review) { DARABONBA_PTR_SET_VALUE(review_, review) };
    inline DescribeShardTaskInfoResponseBodyData& setReview(Models::DescribeShardTaskInfoResponseBodyDataReview && review) { DARABONBA_PTR_SET_RVALUE(review_, review) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline string stage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string targetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline DescribeShardTaskInfoResponseBodyData& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


  protected:
    // Indicates the number of remaining days before the tasks to shard tables or convert tables expire.
    std::shared_ptr<string> expired_ = nullptr;
    // Indicates information about full migration tasks.
    std::shared_ptr<Models::DescribeShardTaskInfoResponseBodyDataFull> full_ = nullptr;
    // Indicates information about full check tasks.
    std::shared_ptr<Models::DescribeShardTaskInfoResponseBodyDataFullCheck> fullCheck_ = nullptr;
    // Indicates information about full correction tasks.
    std::shared_ptr<Models::DescribeShardTaskInfoResponseBodyDataFullRevise> fullRevise_ = nullptr;
    // Indicates information about incremental data synchronization.
    std::shared_ptr<Models::DescribeShardTaskInfoResponseBodyDataIncrement> increment_ = nullptr;
    // Indicates the incremental data synchronization progress.
    std::shared_ptr<string> progress_ = nullptr;
    // Indicates check tasks.
    std::shared_ptr<Models::DescribeShardTaskInfoResponseBodyDataReview> review_ = nullptr;
    // Indicates the name of the table that you convert or shard.
    std::shared_ptr<string> sourceTableName_ = nullptr;
    // Indicates the current stage of the task.
    std::shared_ptr<string> stage_ = nullptr;
    // Indicates the state of the tasks to shard tables or convert tables.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates the name of the table after you convert or shard the table.
    std::shared_ptr<string> targetTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
