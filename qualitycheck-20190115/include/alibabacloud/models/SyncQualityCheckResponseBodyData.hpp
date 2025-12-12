// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncQualityCheckResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SyncQualityCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SyncQualityCheckResponseBodyData() = default ;
    SyncQualityCheckResponseBodyData(const SyncQualityCheckResponseBodyData &) = default ;
    SyncQualityCheckResponseBodyData(SyncQualityCheckResponseBodyData &&) = default ;
    SyncQualityCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBodyData() = default ;
    SyncQualityCheckResponseBodyData& operator=(const SyncQualityCheckResponseBodyData &) = default ;
    SyncQualityCheckResponseBodyData& operator=(SyncQualityCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->rules_ == nullptr && return this->score_ == nullptr && return this->taskId_ == nullptr && return this->tid_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline SyncQualityCheckResponseBodyData& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::SyncQualityCheckResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::SyncQualityCheckResponseBodyDataRules>) };
    inline vector<Models::SyncQualityCheckResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::SyncQualityCheckResponseBodyDataRules>) };
    inline SyncQualityCheckResponseBodyData& setRules(const vector<Models::SyncQualityCheckResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline SyncQualityCheckResponseBodyData& setRules(vector<Models::SyncQualityCheckResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline SyncQualityCheckResponseBodyData& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SyncQualityCheckResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline SyncQualityCheckResponseBodyData& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<int64_t> beginTime_ = nullptr;
    std::shared_ptr<vector<Models::SyncQualityCheckResponseBodyDataRules>> rules_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
