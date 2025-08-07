// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMECHECKTYPE_HPP_
#define ALIBABACLOUD_MODELS_SCHEMECHECKTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SchemeCheckTypeSchemeScoreInfoList.hpp>
#include <alibabacloud/models/SchemeCheckTypeTaskFlowScoreInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SchemeCheckType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemeCheckType& obj) { 
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SourceScore, sourceScore_);
      DARABONBA_PTR_TO_JSON(TaskFlowScoreInfoList, taskFlowScoreInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, SchemeCheckType& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SourceScore, sourceScore_);
      DARABONBA_PTR_FROM_JSON(TaskFlowScoreInfoList, taskFlowScoreInfoList_);
    };
    SchemeCheckType() = default ;
    SchemeCheckType(const SchemeCheckType &) = default ;
    SchemeCheckType(SchemeCheckType &&) = default ;
    SchemeCheckType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemeCheckType() = default ;
    SchemeCheckType& operator=(const SchemeCheckType &) = default ;
    SchemeCheckType& operator=(SchemeCheckType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkName_ != nullptr
        && this->checkType_ != nullptr && this->enable_ != nullptr && this->schemeId_ != nullptr && this->schemeScoreInfoList_ != nullptr && this->score_ != nullptr
        && this->sourceScore_ != nullptr && this->taskFlowScoreInfoList_ != nullptr; };
    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline SchemeCheckType& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int64_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0L) };
    inline SchemeCheckType& setCheckType(int64_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline SchemeCheckType& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline SchemeCheckType& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // schemeScoreInfoList Field Functions 
    bool hasSchemeScoreInfoList() const { return this->schemeScoreInfoList_ != nullptr;};
    void deleteSchemeScoreInfoList() { this->schemeScoreInfoList_ = nullptr;};
    inline const vector<SchemeCheckTypeSchemeScoreInfoList> & schemeScoreInfoList() const { DARABONBA_PTR_GET_CONST(schemeScoreInfoList_, vector<SchemeCheckTypeSchemeScoreInfoList>) };
    inline vector<SchemeCheckTypeSchemeScoreInfoList> schemeScoreInfoList() { DARABONBA_PTR_GET(schemeScoreInfoList_, vector<SchemeCheckTypeSchemeScoreInfoList>) };
    inline SchemeCheckType& setSchemeScoreInfoList(const vector<SchemeCheckTypeSchemeScoreInfoList> & schemeScoreInfoList) { DARABONBA_PTR_SET_VALUE(schemeScoreInfoList_, schemeScoreInfoList) };
    inline SchemeCheckType& setSchemeScoreInfoList(vector<SchemeCheckTypeSchemeScoreInfoList> && schemeScoreInfoList) { DARABONBA_PTR_SET_RVALUE(schemeScoreInfoList_, schemeScoreInfoList) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline SchemeCheckType& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sourceScore Field Functions 
    bool hasSourceScore() const { return this->sourceScore_ != nullptr;};
    void deleteSourceScore() { this->sourceScore_ = nullptr;};
    inline int32_t sourceScore() const { DARABONBA_PTR_GET_DEFAULT(sourceScore_, 0) };
    inline SchemeCheckType& setSourceScore(int32_t sourceScore) { DARABONBA_PTR_SET_VALUE(sourceScore_, sourceScore) };


    // taskFlowScoreInfoList Field Functions 
    bool hasTaskFlowScoreInfoList() const { return this->taskFlowScoreInfoList_ != nullptr;};
    void deleteTaskFlowScoreInfoList() { this->taskFlowScoreInfoList_ = nullptr;};
    inline const vector<SchemeCheckTypeTaskFlowScoreInfoList> & taskFlowScoreInfoList() const { DARABONBA_PTR_GET_CONST(taskFlowScoreInfoList_, vector<SchemeCheckTypeTaskFlowScoreInfoList>) };
    inline vector<SchemeCheckTypeTaskFlowScoreInfoList> taskFlowScoreInfoList() { DARABONBA_PTR_GET(taskFlowScoreInfoList_, vector<SchemeCheckTypeTaskFlowScoreInfoList>) };
    inline SchemeCheckType& setTaskFlowScoreInfoList(const vector<SchemeCheckTypeTaskFlowScoreInfoList> & taskFlowScoreInfoList) { DARABONBA_PTR_SET_VALUE(taskFlowScoreInfoList_, taskFlowScoreInfoList) };
    inline SchemeCheckType& setTaskFlowScoreInfoList(vector<SchemeCheckTypeTaskFlowScoreInfoList> && taskFlowScoreInfoList) { DARABONBA_PTR_SET_RVALUE(taskFlowScoreInfoList_, taskFlowScoreInfoList) };


  protected:
    std::shared_ptr<string> checkName_ = nullptr;
    std::shared_ptr<int64_t> checkType_ = nullptr;
    std::shared_ptr<int32_t> enable_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
    std::shared_ptr<vector<SchemeCheckTypeSchemeScoreInfoList>> schemeScoreInfoList_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int32_t> sourceScore_ = nullptr;
    std::shared_ptr<vector<SchemeCheckTypeTaskFlowScoreInfoList>> taskFlowScoreInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
