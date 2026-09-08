// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSTAGE_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSTAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressStage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressStage& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressStage& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    RLProgressStage() = default ;
    RLProgressStage(const RLProgressStage &) = default ;
    RLProgressStage(RLProgressStage &&) = default ;
    RLProgressStage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressStage() = default ;
    RLProgressStage& operator=(const RLProgressStage &) = default ;
    RLProgressStage& operator=(RLProgressStage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->key_ == nullptr && this->label_ == nullptr && this->marker_ == nullptr && this->optional_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline RLProgressStage& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline RLProgressStage& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RLProgressStage& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline RLProgressStage& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline RLProgressStage& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline bool getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, false) };
    inline RLProgressStage& setOptional(bool optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline RLProgressStage& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RLProgressStage& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 阶段耗时（秒，保留 3 位小数）；一个 step 常整体落在同一秒内，故不取整
    shared_ptr<double> duration_ {};
    // 阶段结束时间（unix 秒）
    shared_ptr<int64_t> endTime_ {};
    // 阶段标识
    shared_ptr<string> key_ {};
    // 阶段中文名
    shared_ptr<string> label_ {};
    // 匹配该阶段的日志标记文案
    shared_ptr<string> marker_ {};
    // 是否为可选阶段；可选阶段未出现时状态记为 skipped
    shared_ptr<bool> optional_ {};
    // 阶段开始时间（unix 秒）
    shared_ptr<int64_t> startTime_ {};
    // done / running / waiting / pending / skipped
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
