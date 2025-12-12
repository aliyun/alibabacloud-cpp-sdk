// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMECHECKTYPESCHEMESCOREINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SCHEMECHECKTYPESCHEMESCOREINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SchemeCheckTypeSchemeScoreInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemeCheckTypeSchemeScoreInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_TO_JSON(ScoreRuleHitType, scoreRuleHitType_);
      DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_TO_JSON(TaskFlowName, taskFlowName_);
    };
    friend void from_json(const Darabonba::Json& j, SchemeCheckTypeSchemeScoreInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_FROM_JSON(ScoreRuleHitType, scoreRuleHitType_);
      DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_FROM_JSON(TaskFlowName, taskFlowName_);
    };
    SchemeCheckTypeSchemeScoreInfoList() = default ;
    SchemeCheckTypeSchemeScoreInfoList(const SchemeCheckTypeSchemeScoreInfoList &) = default ;
    SchemeCheckTypeSchemeScoreInfoList(SchemeCheckTypeSchemeScoreInfoList &&) = default ;
    SchemeCheckTypeSchemeScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemeCheckTypeSchemeScoreInfoList() = default ;
    SchemeCheckTypeSchemeScoreInfoList& operator=(const SchemeCheckTypeSchemeScoreInfoList &) = default ;
    SchemeCheckTypeSchemeScoreInfoList& operator=(SchemeCheckTypeSchemeScoreInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->rid_ == nullptr && return this->scoreNum_ == nullptr && return this->scoreNumType_ == nullptr && return this->scoreRuleHitType_ == nullptr && return this->scoreType_ == nullptr
        && return this->taskFlowId_ == nullptr && return this->taskFlowName_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SchemeCheckTypeSchemeScoreInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline SchemeCheckTypeSchemeScoreInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline SchemeCheckTypeSchemeScoreInfoList& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t scoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline SchemeCheckTypeSchemeScoreInfoList& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // scoreRuleHitType Field Functions 
    bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
    void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
    inline int32_t scoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
    inline SchemeCheckTypeSchemeScoreInfoList& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t scoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline SchemeCheckTypeSchemeScoreInfoList& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


    // taskFlowId Field Functions 
    bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
    void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
    inline int64_t taskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
    inline SchemeCheckTypeSchemeScoreInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


    // taskFlowName Field Functions 
    bool hasTaskFlowName() const { return this->taskFlowName_ != nullptr;};
    void deleteTaskFlowName() { this->taskFlowName_ = nullptr;};
    inline string taskFlowName() const { DARABONBA_PTR_GET_DEFAULT(taskFlowName_, "") };
    inline SchemeCheckTypeSchemeScoreInfoList& setTaskFlowName(string taskFlowName) { DARABONBA_PTR_SET_VALUE(taskFlowName_, taskFlowName) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int32_t> scoreNumType_ = nullptr;
    std::shared_ptr<int32_t> scoreRuleHitType_ = nullptr;
    std::shared_ptr<int32_t> scoreType_ = nullptr;
    std::shared_ptr<int64_t> taskFlowId_ = nullptr;
    std::shared_ptr<string> taskFlowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
