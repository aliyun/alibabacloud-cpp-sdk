// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODY_HPP_
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
  class ListQualityCheckSchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityCheckSchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityCheckSchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityCheckSchemeResponseBody() = default ;
    ListQualityCheckSchemeResponseBody(const ListQualityCheckSchemeResponseBody &) = default ;
    ListQualityCheckSchemeResponseBody(ListQualityCheckSchemeResponseBody &&) = default ;
    ListQualityCheckSchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityCheckSchemeResponseBody() = default ;
    ListQualityCheckSchemeResponseBody& operator=(const ListQualityCheckSchemeResponseBody &) = default ;
    ListQualityCheckSchemeResponseBody& operator=(ListQualityCheckSchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
        DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateUserName, updateUserName_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(SchemeCheckTypeList, schemeCheckTypeList_);
        DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateUserName, updateUserName_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SchemeCheckTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchemeCheckTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(CheckType, checkType_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, SchemeCheckTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        SchemeCheckTypeList() = default ;
        SchemeCheckTypeList(const SchemeCheckTypeList &) = default ;
        SchemeCheckTypeList(SchemeCheckTypeList &&) = default ;
        SchemeCheckTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SchemeCheckTypeList() = default ;
        SchemeCheckTypeList& operator=(const SchemeCheckTypeList &) = default ;
        SchemeCheckTypeList& operator=(SchemeCheckTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkName_ == nullptr
        && this->checkType_ == nullptr && this->enable_ == nullptr && this->score_ == nullptr && this->targetType_ == nullptr; };
        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline SchemeCheckTypeList& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // checkType Field Functions 
        bool hasCheckType() const { return this->checkType_ != nullptr;};
        void deleteCheckType() { this->checkType_ = nullptr;};
        inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
        inline SchemeCheckTypeList& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
        inline SchemeCheckTypeList& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline SchemeCheckTypeList& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
        inline SchemeCheckTypeList& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        // The name of the quality check dimension.
        shared_ptr<string> checkName_ {};
        // The type of the quality check dimension.
        shared_ptr<int32_t> checkType_ {};
        // The enabled status. Valid values: 0 (disabled) and 1 (enabled).
        shared_ptr<int32_t> enable_ {};
        // The score of the quality check dimension.
        shared_ptr<int32_t> score_ {};
        // An internal parameter. You can ignore this parameter.
        shared_ptr<int32_t> targetType_ {};
      };

      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Rules, rules_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(CheckType, checkType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Rid, rid_);
            DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
            DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
            DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
            DARABONBA_PTR_TO_JSON(TargetType, targetType_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Rid, rid_);
            DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
            DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
            DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
            DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
            DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkType_ == nullptr
        && this->name_ == nullptr && this->rid_ == nullptr && this->ruleScoreType_ == nullptr && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr
        && this->scoreType_ == nullptr && this->targetType_ == nullptr; };
          // checkType Field Functions 
          bool hasCheckType() const { return this->checkType_ != nullptr;};
          void deleteCheckType() { this->checkType_ = nullptr;};
          inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
          inline Rules& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // rid Field Functions 
          bool hasRid() const { return this->rid_ != nullptr;};
          void deleteRid() { this->rid_ = nullptr;};
          inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
          inline Rules& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


          // ruleScoreType Field Functions 
          bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
          void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
          inline int32_t getRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
          inline Rules& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


          // scoreNum Field Functions 
          bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
          void deleteScoreNum() { this->scoreNum_ = nullptr;};
          inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
          inline Rules& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


          // scoreNumType Field Functions 
          bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
          void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
          inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
          inline Rules& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


          // scoreType Field Functions 
          bool hasScoreType() const { return this->scoreType_ != nullptr;};
          void deleteScoreType() { this->scoreType_ = nullptr;};
          inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
          inline Rules& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


          // targetType Field Functions 
          bool hasTargetType() const { return this->targetType_ != nullptr;};
          void deleteTargetType() { this->targetType_ = nullptr;};
          inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
          inline Rules& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        protected:
          // The quality check dimension to which the item belongs.
          shared_ptr<int32_t> checkType_ {};
          // The name of the check item.
          shared_ptr<string> name_ {};
          // The ID of the check item.
          shared_ptr<int64_t> rid_ {};
          // Indicates whether to calculate a score. Valid values: 1 (no score) and 3 (score).
          shared_ptr<int32_t> ruleScoreType_ {};
          // The score.
          shared_ptr<int32_t> scoreNum_ {};
          // The scoring type. Valid values: 0 (Points are added or deducted each time the rule is triggered) and 1 (A one-time score is given when the rule is triggered).
          shared_ptr<int32_t> scoreNumType_ {};
          // The scoring method. Valid values: 1 (add points) and 3 (deduct points).
          shared_ptr<int32_t> scoreType_ {};
          // The application scenario of the check item. Valid values: 10 (common check item) and 11 (SOP flow check item).
          shared_ptr<int32_t> targetType_ {};
        };

        virtual bool empty() const override { return this->rules_ == nullptr; };
        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const vector<RuleList::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<RuleList::Rules>) };
        inline vector<RuleList::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<RuleList::Rules>) };
        inline RuleList& setRules(const vector<RuleList::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline RuleList& setRules(vector<RuleList::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


      protected:
        // The rule information. This parameter is reserved for future use. Currently, only one rule is returned.
        shared_ptr<vector<RuleList::Rules>> rules_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUserName_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->ruleList_ == nullptr
        && this->schemeCheckTypeList_ == nullptr && this->schemeId_ == nullptr && this->status_ == nullptr && this->templateType_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->updateUserName_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Data& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
      inline Data& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<Data::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Data::RuleList>) };
      inline vector<Data::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<Data::RuleList>) };
      inline Data& setRuleList(const vector<Data::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Data& setRuleList(vector<Data::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // schemeCheckTypeList Field Functions 
      bool hasSchemeCheckTypeList() const { return this->schemeCheckTypeList_ != nullptr;};
      void deleteSchemeCheckTypeList() { this->schemeCheckTypeList_ = nullptr;};
      inline const vector<Data::SchemeCheckTypeList> & getSchemeCheckTypeList() const { DARABONBA_PTR_GET_CONST(schemeCheckTypeList_, vector<Data::SchemeCheckTypeList>) };
      inline vector<Data::SchemeCheckTypeList> getSchemeCheckTypeList() { DARABONBA_PTR_GET(schemeCheckTypeList_, vector<Data::SchemeCheckTypeList>) };
      inline Data& setSchemeCheckTypeList(const vector<Data::SchemeCheckTypeList> & schemeCheckTypeList) { DARABONBA_PTR_SET_VALUE(schemeCheckTypeList_, schemeCheckTypeList) };
      inline Data& setSchemeCheckTypeList(vector<Data::SchemeCheckTypeList> && schemeCheckTypeList) { DARABONBA_PTR_SET_RVALUE(schemeCheckTypeList_, schemeCheckTypeList) };


      // schemeId Field Functions 
      bool hasSchemeId() const { return this->schemeId_ != nullptr;};
      void deleteSchemeId() { this->schemeId_ = nullptr;};
      inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
      inline Data& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
      inline Data& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateUserName Field Functions 
      bool hasUpdateUserName() const { return this->updateUserName_ != nullptr;};
      void deleteUpdateUserName() { this->updateUserName_ = nullptr;};
      inline string getUpdateUserName() const { DARABONBA_PTR_GET_DEFAULT(updateUserName_, "") };
      inline Data& setUpdateUserName(string updateUserName) { DARABONBA_PTR_SET_VALUE(updateUserName_, updateUserName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The time when the scheme was created.
      shared_ptr<string> createTime_ {};
      // The name of the creator.
      shared_ptr<string> createUserName_ {};
      // The data type of the quality check scheme. Valid values: 0 (text) and 1 (audio).
      shared_ptr<int32_t> dataType_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The name of the quality check scheme.
      shared_ptr<string> name_ {};
      // The list of check items.
      shared_ptr<vector<Data::RuleList>> ruleList_ {};
      // The list of quality check dimensions.
      shared_ptr<vector<Data::SchemeCheckTypeList>> schemeCheckTypeList_ {};
      // The ID of the quality check scheme.
      shared_ptr<int64_t> schemeId_ {};
      // The status of the quality check scheme. Valid values: 0 (deleted), 1 (published), 2 (unpublished), and 3 (updated but not published).
      shared_ptr<int32_t> status_ {};
      // The type of the quality check scheme template. Valid values: 1 (built-in) and 2 (user-defined).
      shared_ptr<int32_t> templateType_ {};
      // The type of the quality check scheme. Valid values: 0 (built-in) and 1 (user-defined).
      shared_ptr<int32_t> type_ {};
      // The time when the scheme was last updated.
      shared_ptr<string> updateTime_ {};
      // The name of the user who last updated the scheme.
      shared_ptr<string> updateUserName_ {};
      // The version of the quality check scheme.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->resultCountId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListQualityCheckSchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListQualityCheckSchemeResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListQualityCheckSchemeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListQualityCheckSchemeResponseBody::Data>) };
    inline vector<ListQualityCheckSchemeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListQualityCheckSchemeResponseBody::Data>) };
    inline ListQualityCheckSchemeResponseBody& setData(const vector<ListQualityCheckSchemeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQualityCheckSchemeResponseBody& setData(vector<ListQualityCheckSchemeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQualityCheckSchemeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQualityCheckSchemeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQualityCheckSchemeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityCheckSchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string getResultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline ListQualityCheckSchemeResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityCheckSchemeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of **200** indicates success. Other values indicate a failure. Use this code to identify the cause of the failure.
    shared_ptr<string> code_ {};
    // The total number of entries.
    shared_ptr<int32_t> count_ {};
    // The data of the quality check scheme list.
    shared_ptr<vector<ListQualityCheckSchemeResponseBody::Data>> data_ {};
    // The returned message. If the request is successful, \\`successful\\` is returned. If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // An internal parameter. You can ignore this parameter.
    shared_ptr<string> resultCountId_ {};
    // Indicates whether the request was successful. A value of true indicates success. A value of **false** or **null** indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
