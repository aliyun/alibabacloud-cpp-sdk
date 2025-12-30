// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMECHECKTYPE_HPP_
#define ALIBABACLOUD_MODELS_SCHEMECHECKTYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TaskFlowScoreInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskFlowScoreInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
        DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
        DARABONBA_PTR_TO_JSON(TaskFlowName, taskFlowName_);
        DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
      };
      friend void from_json(const Darabonba::Json& j, TaskFlowScoreInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
        DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
        DARABONBA_PTR_FROM_JSON(TaskFlowName, taskFlowName_);
        DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
      };
      TaskFlowScoreInfoList() = default ;
      TaskFlowScoreInfoList(const TaskFlowScoreInfoList &) = default ;
      TaskFlowScoreInfoList(TaskFlowScoreInfoList &&) = default ;
      TaskFlowScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskFlowScoreInfoList() = default ;
      TaskFlowScoreInfoList& operator=(const TaskFlowScoreInfoList &) = default ;
      TaskFlowScoreInfoList& operator=(TaskFlowScoreInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SchemeScoreInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchemeScoreInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
          DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
          DARABONBA_PTR_TO_JSON(ScoreRuleHitType, scoreRuleHitType_);
          DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
          DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
          DARABONBA_PTR_TO_JSON(TaskFlowName, taskFlowName_);
        };
        friend void from_json(const Darabonba::Json& j, SchemeScoreInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
          DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
          DARABONBA_PTR_FROM_JSON(ScoreRuleHitType, scoreRuleHitType_);
          DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
          DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
          DARABONBA_PTR_FROM_JSON(TaskFlowName, taskFlowName_);
        };
        SchemeScoreInfoList() = default ;
        SchemeScoreInfoList(const SchemeScoreInfoList &) = default ;
        SchemeScoreInfoList(SchemeScoreInfoList &&) = default ;
        SchemeScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SchemeScoreInfoList() = default ;
        SchemeScoreInfoList& operator=(const SchemeScoreInfoList &) = default ;
        SchemeScoreInfoList& operator=(SchemeScoreInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->rid_ == nullptr && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr && this->scoreRuleHitType_ == nullptr && this->scoreType_ == nullptr
        && this->taskFlowId_ == nullptr && this->taskFlowName_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SchemeScoreInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
        inline SchemeScoreInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // scoreNum Field Functions 
        bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
        void deleteScoreNum() { this->scoreNum_ = nullptr;};
        inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
        inline SchemeScoreInfoList& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


        // scoreNumType Field Functions 
        bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
        void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
        inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
        inline SchemeScoreInfoList& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


        // scoreRuleHitType Field Functions 
        bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
        void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
        inline int32_t getScoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
        inline SchemeScoreInfoList& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


        // scoreType Field Functions 
        bool hasScoreType() const { return this->scoreType_ != nullptr;};
        void deleteScoreType() { this->scoreType_ = nullptr;};
        inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
        inline SchemeScoreInfoList& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


        // taskFlowId Field Functions 
        bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
        void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
        inline int64_t getTaskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
        inline SchemeScoreInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


        // taskFlowName Field Functions 
        bool hasTaskFlowName() const { return this->taskFlowName_ != nullptr;};
        void deleteTaskFlowName() { this->taskFlowName_ = nullptr;};
        inline string getTaskFlowName() const { DARABONBA_PTR_GET_DEFAULT(taskFlowName_, "") };
        inline SchemeScoreInfoList& setTaskFlowName(string taskFlowName) { DARABONBA_PTR_SET_VALUE(taskFlowName_, taskFlowName) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> rid_ {};
        shared_ptr<int32_t> scoreNum_ {};
        shared_ptr<int32_t> scoreNumType_ {};
        shared_ptr<int32_t> scoreRuleHitType_ {};
        shared_ptr<int32_t> scoreType_ {};
        shared_ptr<int64_t> taskFlowId_ {};
        shared_ptr<string> taskFlowName_ {};
      };

      virtual bool empty() const override { return this->schemeScoreInfoList_ == nullptr
        && this->taskFlowId_ == nullptr && this->taskFlowName_ == nullptr && this->taskFlowType_ == nullptr; };
      // schemeScoreInfoList Field Functions 
      bool hasSchemeScoreInfoList() const { return this->schemeScoreInfoList_ != nullptr;};
      void deleteSchemeScoreInfoList() { this->schemeScoreInfoList_ = nullptr;};
      inline const vector<TaskFlowScoreInfoList::SchemeScoreInfoList> & getSchemeScoreInfoList() const { DARABONBA_PTR_GET_CONST(schemeScoreInfoList_, vector<TaskFlowScoreInfoList::SchemeScoreInfoList>) };
      inline vector<TaskFlowScoreInfoList::SchemeScoreInfoList> getSchemeScoreInfoList() { DARABONBA_PTR_GET(schemeScoreInfoList_, vector<TaskFlowScoreInfoList::SchemeScoreInfoList>) };
      inline TaskFlowScoreInfoList& setSchemeScoreInfoList(const vector<TaskFlowScoreInfoList::SchemeScoreInfoList> & schemeScoreInfoList) { DARABONBA_PTR_SET_VALUE(schemeScoreInfoList_, schemeScoreInfoList) };
      inline TaskFlowScoreInfoList& setSchemeScoreInfoList(vector<TaskFlowScoreInfoList::SchemeScoreInfoList> && schemeScoreInfoList) { DARABONBA_PTR_SET_RVALUE(schemeScoreInfoList_, schemeScoreInfoList) };


      // taskFlowId Field Functions 
      bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
      void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
      inline int64_t getTaskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
      inline TaskFlowScoreInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


      // taskFlowName Field Functions 
      bool hasTaskFlowName() const { return this->taskFlowName_ != nullptr;};
      void deleteTaskFlowName() { this->taskFlowName_ = nullptr;};
      inline string getTaskFlowName() const { DARABONBA_PTR_GET_DEFAULT(taskFlowName_, "") };
      inline TaskFlowScoreInfoList& setTaskFlowName(string taskFlowName) { DARABONBA_PTR_SET_VALUE(taskFlowName_, taskFlowName) };


      // taskFlowType Field Functions 
      bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
      void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
      inline int32_t getTaskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
      inline TaskFlowScoreInfoList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


    protected:
      shared_ptr<vector<TaskFlowScoreInfoList::SchemeScoreInfoList>> schemeScoreInfoList_ {};
      shared_ptr<int64_t> taskFlowId_ {};
      shared_ptr<string> taskFlowName_ {};
      shared_ptr<int32_t> taskFlowType_ {};
    };

    class SchemeScoreInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchemeScoreInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Rid, rid_);
        DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
        DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
        DARABONBA_PTR_TO_JSON(ScoreRuleHitType, scoreRuleHitType_);
        DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
        DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
        DARABONBA_PTR_TO_JSON(TaskFlowName, taskFlowName_);
      };
      friend void from_json(const Darabonba::Json& j, SchemeScoreInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Rid, rid_);
        DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
        DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
        DARABONBA_PTR_FROM_JSON(ScoreRuleHitType, scoreRuleHitType_);
        DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
        DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
        DARABONBA_PTR_FROM_JSON(TaskFlowName, taskFlowName_);
      };
      SchemeScoreInfoList() = default ;
      SchemeScoreInfoList(const SchemeScoreInfoList &) = default ;
      SchemeScoreInfoList(SchemeScoreInfoList &&) = default ;
      SchemeScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchemeScoreInfoList() = default ;
      SchemeScoreInfoList& operator=(const SchemeScoreInfoList &) = default ;
      SchemeScoreInfoList& operator=(SchemeScoreInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->rid_ == nullptr && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr && this->scoreRuleHitType_ == nullptr && this->scoreType_ == nullptr
        && this->taskFlowId_ == nullptr && this->taskFlowName_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SchemeScoreInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rid Field Functions 
      bool hasRid() const { return this->rid_ != nullptr;};
      void deleteRid() { this->rid_ = nullptr;};
      inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
      inline SchemeScoreInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


      // scoreNum Field Functions 
      bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
      void deleteScoreNum() { this->scoreNum_ = nullptr;};
      inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
      inline SchemeScoreInfoList& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


      // scoreNumType Field Functions 
      bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
      void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
      inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
      inline SchemeScoreInfoList& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


      // scoreRuleHitType Field Functions 
      bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
      void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
      inline int32_t getScoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
      inline SchemeScoreInfoList& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


      // scoreType Field Functions 
      bool hasScoreType() const { return this->scoreType_ != nullptr;};
      void deleteScoreType() { this->scoreType_ = nullptr;};
      inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
      inline SchemeScoreInfoList& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


      // taskFlowId Field Functions 
      bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
      void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
      inline int64_t getTaskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
      inline SchemeScoreInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


      // taskFlowName Field Functions 
      bool hasTaskFlowName() const { return this->taskFlowName_ != nullptr;};
      void deleteTaskFlowName() { this->taskFlowName_ = nullptr;};
      inline string getTaskFlowName() const { DARABONBA_PTR_GET_DEFAULT(taskFlowName_, "") };
      inline SchemeScoreInfoList& setTaskFlowName(string taskFlowName) { DARABONBA_PTR_SET_VALUE(taskFlowName_, taskFlowName) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> rid_ {};
      shared_ptr<int32_t> scoreNum_ {};
      shared_ptr<int32_t> scoreNumType_ {};
      shared_ptr<int32_t> scoreRuleHitType_ {};
      shared_ptr<int32_t> scoreType_ {};
      shared_ptr<int64_t> taskFlowId_ {};
      shared_ptr<string> taskFlowName_ {};
    };

    virtual bool empty() const override { return this->checkName_ == nullptr
        && this->checkType_ == nullptr && this->enable_ == nullptr && this->schemeId_ == nullptr && this->schemeScoreInfoList_ == nullptr && this->score_ == nullptr
        && this->sourceScore_ == nullptr && this->taskFlowScoreInfoList_ == nullptr; };
    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline SchemeCheckType& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int64_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0L) };
    inline SchemeCheckType& setCheckType(int64_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline SchemeCheckType& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline SchemeCheckType& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // schemeScoreInfoList Field Functions 
    bool hasSchemeScoreInfoList() const { return this->schemeScoreInfoList_ != nullptr;};
    void deleteSchemeScoreInfoList() { this->schemeScoreInfoList_ = nullptr;};
    inline const vector<SchemeCheckType::SchemeScoreInfoList> & getSchemeScoreInfoList() const { DARABONBA_PTR_GET_CONST(schemeScoreInfoList_, vector<SchemeCheckType::SchemeScoreInfoList>) };
    inline vector<SchemeCheckType::SchemeScoreInfoList> getSchemeScoreInfoList() { DARABONBA_PTR_GET(schemeScoreInfoList_, vector<SchemeCheckType::SchemeScoreInfoList>) };
    inline SchemeCheckType& setSchemeScoreInfoList(const vector<SchemeCheckType::SchemeScoreInfoList> & schemeScoreInfoList) { DARABONBA_PTR_SET_VALUE(schemeScoreInfoList_, schemeScoreInfoList) };
    inline SchemeCheckType& setSchemeScoreInfoList(vector<SchemeCheckType::SchemeScoreInfoList> && schemeScoreInfoList) { DARABONBA_PTR_SET_RVALUE(schemeScoreInfoList_, schemeScoreInfoList) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline SchemeCheckType& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sourceScore Field Functions 
    bool hasSourceScore() const { return this->sourceScore_ != nullptr;};
    void deleteSourceScore() { this->sourceScore_ = nullptr;};
    inline int32_t getSourceScore() const { DARABONBA_PTR_GET_DEFAULT(sourceScore_, 0) };
    inline SchemeCheckType& setSourceScore(int32_t sourceScore) { DARABONBA_PTR_SET_VALUE(sourceScore_, sourceScore) };


    // taskFlowScoreInfoList Field Functions 
    bool hasTaskFlowScoreInfoList() const { return this->taskFlowScoreInfoList_ != nullptr;};
    void deleteTaskFlowScoreInfoList() { this->taskFlowScoreInfoList_ = nullptr;};
    inline const vector<SchemeCheckType::TaskFlowScoreInfoList> & getTaskFlowScoreInfoList() const { DARABONBA_PTR_GET_CONST(taskFlowScoreInfoList_, vector<SchemeCheckType::TaskFlowScoreInfoList>) };
    inline vector<SchemeCheckType::TaskFlowScoreInfoList> getTaskFlowScoreInfoList() { DARABONBA_PTR_GET(taskFlowScoreInfoList_, vector<SchemeCheckType::TaskFlowScoreInfoList>) };
    inline SchemeCheckType& setTaskFlowScoreInfoList(const vector<SchemeCheckType::TaskFlowScoreInfoList> & taskFlowScoreInfoList) { DARABONBA_PTR_SET_VALUE(taskFlowScoreInfoList_, taskFlowScoreInfoList) };
    inline SchemeCheckType& setTaskFlowScoreInfoList(vector<SchemeCheckType::TaskFlowScoreInfoList> && taskFlowScoreInfoList) { DARABONBA_PTR_SET_RVALUE(taskFlowScoreInfoList_, taskFlowScoreInfoList) };


  protected:
    shared_ptr<string> checkName_ {};
    shared_ptr<int64_t> checkType_ {};
    shared_ptr<int32_t> enable_ {};
    shared_ptr<int64_t> schemeId_ {};
    shared_ptr<vector<SchemeCheckType::SchemeScoreInfoList>> schemeScoreInfoList_ {};
    shared_ptr<int32_t> score_ {};
    shared_ptr<int32_t> sourceScore_ {};
    shared_ptr<vector<SchemeCheckType::TaskFlowScoreInfoList>> taskFlowScoreInfoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
