// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODY_HPP_
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
  class GetRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRuleResponseBody() = default ;
    GetRuleResponseBody(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody(GetRuleResponseBody &&) = default ;
    GetRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBody() = default ;
    GetRuleResponseBody& operator=(const GetRuleResponseBody &) = default ;
    GetRuleResponseBody& operator=(GetRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
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
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
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
        class RuleInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleInfo& obj) { 
            DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
            DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(CreateEmpid, createEmpid_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
            DARABONBA_PTR_TO_JSON(IsOnline, isOnline_);
            DARABONBA_PTR_TO_JSON(LastUpdateEmpid, lastUpdateEmpid_);
            DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Rid, rid_);
            DARABONBA_PTR_TO_JSON(RuleLambda, ruleLambda_);
            DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
            DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
            DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, RuleInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
            DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(CreateEmpid, createEmpid_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
            DARABONBA_PTR_FROM_JSON(IsOnline, isOnline_);
            DARABONBA_PTR_FROM_JSON(LastUpdateEmpid, lastUpdateEmpid_);
            DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Rid, rid_);
            DARABONBA_PTR_FROM_JSON(RuleLambda, ruleLambda_);
            DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
            DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
            DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
            DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
            DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          RuleInfo() = default ;
          RuleInfo(const RuleInfo &) = default ;
          RuleInfo(RuleInfo &&) = default ;
          RuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuleInfo() = default ;
          RuleInfo& operator=(const RuleInfo &) = default ;
          RuleInfo& operator=(RuleInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BusinessCategoryNameList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BusinessCategoryNameList& obj) { 
              DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
            };
            friend void from_json(const Darabonba::Json& j, BusinessCategoryNameList& obj) { 
              DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
            };
            BusinessCategoryNameList() = default ;
            BusinessCategoryNameList(const BusinessCategoryNameList &) = default ;
            BusinessCategoryNameList(BusinessCategoryNameList &&) = default ;
            BusinessCategoryNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BusinessCategoryNameList() = default ;
            BusinessCategoryNameList& operator=(const BusinessCategoryNameList &) = default ;
            BusinessCategoryNameList& operator=(BusinessCategoryNameList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->businessCategoryNameList_ == nullptr; };
            // businessCategoryNameList Field Functions 
            bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
            void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
            inline const vector<string> & getBusinessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
            inline vector<string> getBusinessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
            inline BusinessCategoryNameList& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
            inline BusinessCategoryNameList& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


          protected:
            shared_ptr<vector<string>> businessCategoryNameList_ {};
          };

          virtual bool empty() const override { return this->autoReview_ == nullptr
        && this->businessCategoryNameList_ == nullptr && this->comments_ == nullptr && this->createEmpid_ == nullptr && this->createTime_ == nullptr && this->endTime_ == nullptr
        && this->isDelete_ == nullptr && this->isOnline_ == nullptr && this->lastUpdateEmpid_ == nullptr && this->lastUpdateTime_ == nullptr && this->name_ == nullptr
        && this->rid_ == nullptr && this->ruleLambda_ == nullptr && this->ruleScoreType_ == nullptr && this->scoreId_ == nullptr && this->scoreName_ == nullptr
        && this->scoreSubId_ == nullptr && this->scoreSubName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->weight_ == nullptr; };
          // autoReview Field Functions 
          bool hasAutoReview() const { return this->autoReview_ != nullptr;};
          void deleteAutoReview() { this->autoReview_ = nullptr;};
          inline int32_t getAutoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
          inline RuleInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


          // businessCategoryNameList Field Functions 
          bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
          void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
          inline const RuleInfo::BusinessCategoryNameList & getBusinessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, RuleInfo::BusinessCategoryNameList) };
          inline RuleInfo::BusinessCategoryNameList getBusinessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, RuleInfo::BusinessCategoryNameList) };
          inline RuleInfo& setBusinessCategoryNameList(const RuleInfo::BusinessCategoryNameList & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
          inline RuleInfo& setBusinessCategoryNameList(RuleInfo::BusinessCategoryNameList && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


          // comments Field Functions 
          bool hasComments() const { return this->comments_ != nullptr;};
          void deleteComments() { this->comments_ = nullptr;};
          inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
          inline RuleInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


          // createEmpid Field Functions 
          bool hasCreateEmpid() const { return this->createEmpid_ != nullptr;};
          void deleteCreateEmpid() { this->createEmpid_ = nullptr;};
          inline string getCreateEmpid() const { DARABONBA_PTR_GET_DEFAULT(createEmpid_, "") };
          inline RuleInfo& setCreateEmpid(string createEmpid) { DARABONBA_PTR_SET_VALUE(createEmpid_, createEmpid) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline RuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline RuleInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // isDelete Field Functions 
          bool hasIsDelete() const { return this->isDelete_ != nullptr;};
          void deleteIsDelete() { this->isDelete_ = nullptr;};
          inline int32_t getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
          inline RuleInfo& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


          // isOnline Field Functions 
          bool hasIsOnline() const { return this->isOnline_ != nullptr;};
          void deleteIsOnline() { this->isOnline_ = nullptr;};
          inline int32_t getIsOnline() const { DARABONBA_PTR_GET_DEFAULT(isOnline_, 0) };
          inline RuleInfo& setIsOnline(int32_t isOnline) { DARABONBA_PTR_SET_VALUE(isOnline_, isOnline) };


          // lastUpdateEmpid Field Functions 
          bool hasLastUpdateEmpid() const { return this->lastUpdateEmpid_ != nullptr;};
          void deleteLastUpdateEmpid() { this->lastUpdateEmpid_ = nullptr;};
          inline string getLastUpdateEmpid() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpid_, "") };
          inline RuleInfo& setLastUpdateEmpid(string lastUpdateEmpid) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpid_, lastUpdateEmpid) };


          // lastUpdateTime Field Functions 
          bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
          void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
          inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
          inline RuleInfo& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RuleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // rid Field Functions 
          bool hasRid() const { return this->rid_ != nullptr;};
          void deleteRid() { this->rid_ = nullptr;};
          inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
          inline RuleInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


          // ruleLambda Field Functions 
          bool hasRuleLambda() const { return this->ruleLambda_ != nullptr;};
          void deleteRuleLambda() { this->ruleLambda_ = nullptr;};
          inline string getRuleLambda() const { DARABONBA_PTR_GET_DEFAULT(ruleLambda_, "") };
          inline RuleInfo& setRuleLambda(string ruleLambda) { DARABONBA_PTR_SET_VALUE(ruleLambda_, ruleLambda) };


          // ruleScoreType Field Functions 
          bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
          void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
          inline int32_t getRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
          inline RuleInfo& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


          // scoreId Field Functions 
          bool hasScoreId() const { return this->scoreId_ != nullptr;};
          void deleteScoreId() { this->scoreId_ = nullptr;};
          inline int32_t getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0) };
          inline RuleInfo& setScoreId(int32_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


          // scoreName Field Functions 
          bool hasScoreName() const { return this->scoreName_ != nullptr;};
          void deleteScoreName() { this->scoreName_ = nullptr;};
          inline string getScoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
          inline RuleInfo& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


          // scoreSubId Field Functions 
          bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
          void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
          inline int32_t getScoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0) };
          inline RuleInfo& setScoreSubId(int32_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


          // scoreSubName Field Functions 
          bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
          void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
          inline string getScoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
          inline RuleInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline RuleInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline RuleInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline RuleInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
          inline RuleInfo& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          shared_ptr<int32_t> autoReview_ {};
          shared_ptr<RuleInfo::BusinessCategoryNameList> businessCategoryNameList_ {};
          shared_ptr<string> comments_ {};
          shared_ptr<string> createEmpid_ {};
          shared_ptr<string> createTime_ {};
          shared_ptr<string> endTime_ {};
          shared_ptr<int32_t> isDelete_ {};
          shared_ptr<int32_t> isOnline_ {};
          shared_ptr<string> lastUpdateEmpid_ {};
          shared_ptr<string> lastUpdateTime_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> rid_ {};
          shared_ptr<string> ruleLambda_ {};
          shared_ptr<int32_t> ruleScoreType_ {};
          shared_ptr<int32_t> scoreId_ {};
          shared_ptr<string> scoreName_ {};
          shared_ptr<int32_t> scoreSubId_ {};
          shared_ptr<string> scoreSubName_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<int32_t> type_ {};
          shared_ptr<string> weight_ {};
        };

        virtual bool empty() const override { return this->ruleInfo_ == nullptr; };
        // ruleInfo Field Functions 
        bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
        void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
        inline const vector<Rules::RuleInfo> & getRuleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<Rules::RuleInfo>) };
        inline vector<Rules::RuleInfo> getRuleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<Rules::RuleInfo>) };
        inline Rules& setRuleInfo(const vector<Rules::RuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
        inline Rules& setRuleInfo(vector<Rules::RuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


      protected:
        shared_ptr<vector<Rules::RuleInfo>> ruleInfo_ {};
      };

      virtual bool empty() const override { return this->rules_ == nullptr; };
      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const Data::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, Data::Rules) };
      inline Data::Rules getRules() { DARABONBA_PTR_GET(rules_, Data::Rules) };
      inline Data& setRules(const Data::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline Data& setRules(Data::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      shared_ptr<Data::Rules> rules_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRuleResponseBody::Data) };
    inline GetRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRuleResponseBody::Data) };
    inline GetRuleResponseBody& setData(const GetRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRuleResponseBody& setData(GetRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRuleResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
