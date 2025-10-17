// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDSUBTASKMODEL_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTMVRECOMMENDSUBTASKMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OpenStructMvRecommendSubTaskModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructMvRecommendSubTaskModel& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_TO_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_TO_JSON(ScanQueriesCount, scanQueriesCount_);
      DARABONBA_PTR_TO_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubQueriesCount, subQueriesCount_);
      DARABONBA_PTR_TO_JSON(SubtaskId, subtaskId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructMvRecommendSubTaskModel& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryCount, minRewriteQueryCount_);
      DARABONBA_PTR_FROM_JSON(MinRewriteQueryPattern, minRewriteQueryPattern_);
      DARABONBA_PTR_FROM_JSON(ScanQueriesCount, scanQueriesCount_);
      DARABONBA_PTR_FROM_JSON(SlowQueryThreshold, slowQueryThreshold_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubQueriesCount, subQueriesCount_);
      DARABONBA_PTR_FROM_JSON(SubtaskId, subtaskId_);
    };
    OpenStructMvRecommendSubTaskModel() = default ;
    OpenStructMvRecommendSubTaskModel(const OpenStructMvRecommendSubTaskModel &) = default ;
    OpenStructMvRecommendSubTaskModel(OpenStructMvRecommendSubTaskModel &&) = default ;
    OpenStructMvRecommendSubTaskModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructMvRecommendSubTaskModel() = default ;
    OpenStructMvRecommendSubTaskModel& operator=(const OpenStructMvRecommendSubTaskModel &) = default ;
    OpenStructMvRecommendSubTaskModel& operator=(OpenStructMvRecommendSubTaskModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->minRewriteQueryCount_ == nullptr && return this->minRewriteQueryPattern_ == nullptr && return this->scanQueriesCount_ == nullptr && return this->slowQueryThreshold_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->subQueriesCount_ == nullptr && return this->subtaskId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline OpenStructMvRecommendSubTaskModel& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // minRewriteQueryCount Field Functions 
    bool hasMinRewriteQueryCount() const { return this->minRewriteQueryCount_ != nullptr;};
    void deleteMinRewriteQueryCount() { this->minRewriteQueryCount_ = nullptr;};
    inline int32_t minRewriteQueryCount() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryCount_, 0) };
    inline OpenStructMvRecommendSubTaskModel& setMinRewriteQueryCount(int32_t minRewriteQueryCount) { DARABONBA_PTR_SET_VALUE(minRewriteQueryCount_, minRewriteQueryCount) };


    // minRewriteQueryPattern Field Functions 
    bool hasMinRewriteQueryPattern() const { return this->minRewriteQueryPattern_ != nullptr;};
    void deleteMinRewriteQueryPattern() { this->minRewriteQueryPattern_ = nullptr;};
    inline int32_t minRewriteQueryPattern() const { DARABONBA_PTR_GET_DEFAULT(minRewriteQueryPattern_, 0) };
    inline OpenStructMvRecommendSubTaskModel& setMinRewriteQueryPattern(int32_t minRewriteQueryPattern) { DARABONBA_PTR_SET_VALUE(minRewriteQueryPattern_, minRewriteQueryPattern) };


    // scanQueriesCount Field Functions 
    bool hasScanQueriesCount() const { return this->scanQueriesCount_ != nullptr;};
    void deleteScanQueriesCount() { this->scanQueriesCount_ = nullptr;};
    inline int64_t scanQueriesCount() const { DARABONBA_PTR_GET_DEFAULT(scanQueriesCount_, 0L) };
    inline OpenStructMvRecommendSubTaskModel& setScanQueriesCount(int64_t scanQueriesCount) { DARABONBA_PTR_SET_VALUE(scanQueriesCount_, scanQueriesCount) };


    // slowQueryThreshold Field Functions 
    bool hasSlowQueryThreshold() const { return this->slowQueryThreshold_ != nullptr;};
    void deleteSlowQueryThreshold() { this->slowQueryThreshold_ = nullptr;};
    inline int32_t slowQueryThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowQueryThreshold_, 0) };
    inline OpenStructMvRecommendSubTaskModel& setSlowQueryThreshold(int32_t slowQueryThreshold) { DARABONBA_PTR_SET_VALUE(slowQueryThreshold_, slowQueryThreshold) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline OpenStructMvRecommendSubTaskModel& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OpenStructMvRecommendSubTaskModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subQueriesCount Field Functions 
    bool hasSubQueriesCount() const { return this->subQueriesCount_ != nullptr;};
    void deleteSubQueriesCount() { this->subQueriesCount_ = nullptr;};
    inline int64_t subQueriesCount() const { DARABONBA_PTR_GET_DEFAULT(subQueriesCount_, 0L) };
    inline OpenStructMvRecommendSubTaskModel& setSubQueriesCount(int64_t subQueriesCount) { DARABONBA_PTR_SET_VALUE(subQueriesCount_, subQueriesCount) };


    // subtaskId Field Functions 
    bool hasSubtaskId() const { return this->subtaskId_ != nullptr;};
    void deleteSubtaskId() { this->subtaskId_ = nullptr;};
    inline int64_t subtaskId() const { DARABONBA_PTR_GET_DEFAULT(subtaskId_, 0L) };
    inline OpenStructMvRecommendSubTaskModel& setSubtaskId(int64_t subtaskId) { DARABONBA_PTR_SET_VALUE(subtaskId_, subtaskId) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryCount_ = nullptr;
    std::shared_ptr<int32_t> minRewriteQueryPattern_ = nullptr;
    std::shared_ptr<int64_t> scanQueriesCount_ = nullptr;
    std::shared_ptr<int32_t> slowQueryThreshold_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> subQueriesCount_ = nullptr;
    std::shared_ptr<int64_t> subtaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
