// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSTAGES_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSTAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RLProgressStage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressStages& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Stages, stages_);
      DARABONBA_PTR_TO_JSON(StepDone, stepDone_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressStages& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentIndex, currentIndex_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Stages, stages_);
      DARABONBA_PTR_FROM_JSON(StepDone, stepDone_);
    };
    RLProgressStages() = default ;
    RLProgressStages(const RLProgressStages &) = default ;
    RLProgressStages(RLProgressStages &&) = default ;
    RLProgressStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressStages() = default ;
    RLProgressStages& operator=(const RLProgressStages &) = default ;
    RLProgressStages& operator=(RLProgressStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentIndex_ == nullptr
        && this->mode_ == nullptr && this->stages_ == nullptr && this->stepDone_ == nullptr; };
    // currentIndex Field Functions 
    bool hasCurrentIndex() const { return this->currentIndex_ != nullptr;};
    void deleteCurrentIndex() { this->currentIndex_ = nullptr;};
    inline int32_t getCurrentIndex() const { DARABONBA_PTR_GET_DEFAULT(currentIndex_, 0) };
    inline RLProgressStages& setCurrentIndex(int32_t currentIndex) { DARABONBA_PTR_SET_VALUE(currentIndex_, currentIndex) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RLProgressStages& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<RLProgressStage> & getStages() const { DARABONBA_PTR_GET_CONST(stages_, vector<RLProgressStage>) };
    inline vector<RLProgressStage> getStages() { DARABONBA_PTR_GET(stages_, vector<RLProgressStage>) };
    inline RLProgressStages& setStages(const vector<RLProgressStage> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline RLProgressStages& setStages(vector<RLProgressStage> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


    // stepDone Field Functions 
    bool hasStepDone() const { return this->stepDone_ != nullptr;};
    void deleteStepDone() { this->stepDone_ = nullptr;};
    inline bool getStepDone() const { DARABONBA_PTR_GET_DEFAULT(stepDone_, false) };
    inline RLProgressStages& setStepDone(bool stepDone) { DARABONBA_PTR_SET_VALUE(stepDone_, stepDone) };


  protected:
    // 当前所处阶段的下标
    shared_ptr<int32_t> currentIndex_ {};
    // disagg / colocate / 空串
    shared_ptr<string> mode_ {};
    // 阶段列表，按流水线顺序
    shared_ptr<vector<RLProgressStage>> stages_ {};
    // 本 step 的阶段流水线是否已走完
    shared_ptr<bool> stepDone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
