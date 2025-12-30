// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYCHECKTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetQualityCheckTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityCheckTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityCheckTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetQualityCheckTaskResultResponseBody() = default ;
    GetQualityCheckTaskResultResponseBody(const GetQualityCheckTaskResultResponseBody &) = default ;
    GetQualityCheckTaskResultResponseBody(GetQualityCheckTaskResultResponseBody &&) = default ;
    GetQualityCheckTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityCheckTaskResultResponseBody() = default ;
    GetQualityCheckTaskResultResponseBody& operator=(const GetQualityCheckTaskResultResponseBody &) = default ;
    GetQualityCheckTaskResultResponseBody& operator=(GetQualityCheckTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(conversationList, conversationList_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
        DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
        DARABONBA_PTR_TO_JSON(qualityCheckList, qualityCheckList_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(conversationList, conversationList_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
        DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
        DARABONBA_PTR_FROM_JSON(qualityCheckList, qualityCheckList_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      class QualityCheckList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityCheckList& obj) { 
          DARABONBA_PTR_TO_JSON(bizType, bizType_);
          DARABONBA_PTR_TO_JSON(checkExplanation, checkExplanation_);
          DARABONBA_PTR_TO_JSON(checkPassed, checkPassed_);
          DARABONBA_PTR_TO_JSON(checkProcess, checkProcess_);
          DARABONBA_PTR_TO_JSON(checked, checked_);
          DARABONBA_PTR_TO_JSON(gmtEnd, gmtEnd_);
          DARABONBA_PTR_TO_JSON(gmtStart, gmtStart_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
          DARABONBA_PTR_TO_JSON(originDialogue, originDialogue_);
          DARABONBA_PTR_TO_JSON(qualityGroupId, qualityGroupId_);
          DARABONBA_PTR_TO_JSON(ruleDescription, ruleDescription_);
          DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
          DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
          DARABONBA_PTR_TO_JSON(subNodeCol, subNodeCol_);
        };
        friend void from_json(const Darabonba::Json& j, QualityCheckList& obj) { 
          DARABONBA_PTR_FROM_JSON(bizType, bizType_);
          DARABONBA_PTR_FROM_JSON(checkExplanation, checkExplanation_);
          DARABONBA_PTR_FROM_JSON(checkPassed, checkPassed_);
          DARABONBA_PTR_FROM_JSON(checkProcess, checkProcess_);
          DARABONBA_PTR_FROM_JSON(checked, checked_);
          DARABONBA_PTR_FROM_JSON(gmtEnd, gmtEnd_);
          DARABONBA_PTR_FROM_JSON(gmtStart, gmtStart_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
          DARABONBA_PTR_FROM_JSON(originDialogue, originDialogue_);
          DARABONBA_PTR_FROM_JSON(qualityGroupId, qualityGroupId_);
          DARABONBA_PTR_FROM_JSON(ruleDescription, ruleDescription_);
          DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
          DARABONBA_PTR_FROM_JSON(subNodeCol, subNodeCol_);
        };
        QualityCheckList() = default ;
        QualityCheckList(const QualityCheckList &) = default ;
        QualityCheckList(QualityCheckList &&) = default ;
        QualityCheckList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityCheckList() = default ;
        QualityCheckList& operator=(const QualityCheckList &) = default ;
        QualityCheckList& operator=(QualityCheckList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OriginDialogue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OriginDialogue& obj) { 
            DARABONBA_PTR_TO_JSON(begin, begin_);
            DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(customerId, customerId_);
            DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
            DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
            DARABONBA_PTR_TO_JSON(end, end_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, OriginDialogue& obj) { 
            DARABONBA_PTR_FROM_JSON(begin, begin_);
            DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(customerId, customerId_);
            DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
            DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
            DARABONBA_PTR_FROM_JSON(end, end_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          OriginDialogue() = default ;
          OriginDialogue(const OriginDialogue &) = default ;
          OriginDialogue(OriginDialogue &&) = default ;
          OriginDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OriginDialogue() = default ;
          OriginDialogue& operator=(const OriginDialogue &) = default ;
          OriginDialogue& operator=(OriginDialogue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->content_ == nullptr && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr
        && this->end_ == nullptr && this->id_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
          inline OriginDialogue& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // beginTime Field Functions 
          bool hasBeginTime() const { return this->beginTime_ != nullptr;};
          void deleteBeginTime() { this->beginTime_ = nullptr;};
          inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
          inline OriginDialogue& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline OriginDialogue& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // customerId Field Functions 
          bool hasCustomerId() const { return this->customerId_ != nullptr;};
          void deleteCustomerId() { this->customerId_ = nullptr;};
          inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
          inline OriginDialogue& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


          // customerServiceId Field Functions 
          bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
          void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
          inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
          inline OriginDialogue& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


          // customerServiceType Field Functions 
          bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
          void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
          inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
          inline OriginDialogue& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
          inline OriginDialogue& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
          inline OriginDialogue& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline OriginDialogue& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline OriginDialogue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<int32_t> begin_ {};
          shared_ptr<string> beginTime_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> customerId_ {};
          shared_ptr<string> customerServiceId_ {};
          shared_ptr<string> customerServiceType_ {};
          shared_ptr<int32_t> end_ {};
          shared_ptr<int32_t> id_ {};
          shared_ptr<string> role_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->bizType_ == nullptr
        && this->checkExplanation_ == nullptr && this->checkPassed_ == nullptr && this->checkProcess_ == nullptr && this->checked_ == nullptr && this->gmtEnd_ == nullptr
        && this->gmtStart_ == nullptr && this->mode_ == nullptr && this->originDialogue_ == nullptr && this->qualityGroupId_ == nullptr && this->ruleDescription_ == nullptr
        && this->ruleId_ == nullptr && this->ruleType_ == nullptr && this->subNodeCol_ == nullptr; };
        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline QualityCheckList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // checkExplanation Field Functions 
        bool hasCheckExplanation() const { return this->checkExplanation_ != nullptr;};
        void deleteCheckExplanation() { this->checkExplanation_ = nullptr;};
        inline string getCheckExplanation() const { DARABONBA_PTR_GET_DEFAULT(checkExplanation_, "") };
        inline QualityCheckList& setCheckExplanation(string checkExplanation) { DARABONBA_PTR_SET_VALUE(checkExplanation_, checkExplanation) };


        // checkPassed Field Functions 
        bool hasCheckPassed() const { return this->checkPassed_ != nullptr;};
        void deleteCheckPassed() { this->checkPassed_ = nullptr;};
        inline string getCheckPassed() const { DARABONBA_PTR_GET_DEFAULT(checkPassed_, "") };
        inline QualityCheckList& setCheckPassed(string checkPassed) { DARABONBA_PTR_SET_VALUE(checkPassed_, checkPassed) };


        // checkProcess Field Functions 
        bool hasCheckProcess() const { return this->checkProcess_ != nullptr;};
        void deleteCheckProcess() { this->checkProcess_ = nullptr;};
        inline string getCheckProcess() const { DARABONBA_PTR_GET_DEFAULT(checkProcess_, "") };
        inline QualityCheckList& setCheckProcess(string checkProcess) { DARABONBA_PTR_SET_VALUE(checkProcess_, checkProcess) };


        // checked Field Functions 
        bool hasChecked() const { return this->checked_ != nullptr;};
        void deleteChecked() { this->checked_ = nullptr;};
        inline string getChecked() const { DARABONBA_PTR_GET_DEFAULT(checked_, "") };
        inline QualityCheckList& setChecked(string checked) { DARABONBA_PTR_SET_VALUE(checked_, checked) };


        // gmtEnd Field Functions 
        bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
        void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
        inline string getGmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
        inline QualityCheckList& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


        // gmtStart Field Functions 
        bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
        void deleteGmtStart() { this->gmtStart_ = nullptr;};
        inline string getGmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
        inline QualityCheckList& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline QualityCheckList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // originDialogue Field Functions 
        bool hasOriginDialogue() const { return this->originDialogue_ != nullptr;};
        void deleteOriginDialogue() { this->originDialogue_ = nullptr;};
        inline const vector<QualityCheckList::OriginDialogue> & getOriginDialogue() const { DARABONBA_PTR_GET_CONST(originDialogue_, vector<QualityCheckList::OriginDialogue>) };
        inline vector<QualityCheckList::OriginDialogue> getOriginDialogue() { DARABONBA_PTR_GET(originDialogue_, vector<QualityCheckList::OriginDialogue>) };
        inline QualityCheckList& setOriginDialogue(const vector<QualityCheckList::OriginDialogue> & originDialogue) { DARABONBA_PTR_SET_VALUE(originDialogue_, originDialogue) };
        inline QualityCheckList& setOriginDialogue(vector<QualityCheckList::OriginDialogue> && originDialogue) { DARABONBA_PTR_SET_RVALUE(originDialogue_, originDialogue) };


        // qualityGroupId Field Functions 
        bool hasQualityGroupId() const { return this->qualityGroupId_ != nullptr;};
        void deleteQualityGroupId() { this->qualityGroupId_ = nullptr;};
        inline string getQualityGroupId() const { DARABONBA_PTR_GET_DEFAULT(qualityGroupId_, "") };
        inline QualityCheckList& setQualityGroupId(string qualityGroupId) { DARABONBA_PTR_SET_VALUE(qualityGroupId_, qualityGroupId) };


        // ruleDescription Field Functions 
        bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
        void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
        inline string getRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
        inline QualityCheckList& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline QualityCheckList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
        inline QualityCheckList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


        // subNodeCol Field Functions 
        bool hasSubNodeCol() const { return this->subNodeCol_ != nullptr;};
        void deleteSubNodeCol() { this->subNodeCol_ = nullptr;};
        inline const vector<Darabonba::Json> & getSubNodeCol() const { DARABONBA_PTR_GET_CONST(subNodeCol_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getSubNodeCol() { DARABONBA_PTR_GET(subNodeCol_, vector<Darabonba::Json>) };
        inline QualityCheckList& setSubNodeCol(const vector<Darabonba::Json> & subNodeCol) { DARABONBA_PTR_SET_VALUE(subNodeCol_, subNodeCol) };
        inline QualityCheckList& setSubNodeCol(vector<Darabonba::Json> && subNodeCol) { DARABONBA_PTR_SET_RVALUE(subNodeCol_, subNodeCol) };


      protected:
        shared_ptr<string> bizType_ {};
        shared_ptr<string> checkExplanation_ {};
        shared_ptr<string> checkPassed_ {};
        shared_ptr<string> checkProcess_ {};
        shared_ptr<string> checked_ {};
        shared_ptr<string> gmtEnd_ {};
        shared_ptr<string> gmtStart_ {};
        shared_ptr<string> mode_ {};
        shared_ptr<vector<QualityCheckList::OriginDialogue>> originDialogue_ {};
        shared_ptr<string> qualityGroupId_ {};
        shared_ptr<string> ruleDescription_ {};
        shared_ptr<string> ruleId_ {};
        shared_ptr<string> ruleType_ {};
        shared_ptr<vector<Darabonba::Json>> subNodeCol_ {};
      };

      class ConversationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConversationList& obj) { 
          DARABONBA_PTR_TO_JSON(callType, callType_);
          DARABONBA_PTR_TO_JSON(customerId, customerId_);
          DARABONBA_PTR_TO_JSON(customerName, customerName_);
          DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_TO_JSON(customerServiceName, customerServiceName_);
          DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
          DARABONBA_PTR_TO_JSON(gmtService, gmtService_);
        };
        friend void from_json(const Darabonba::Json& j, ConversationList& obj) { 
          DARABONBA_PTR_FROM_JSON(callType, callType_);
          DARABONBA_PTR_FROM_JSON(customerId, customerId_);
          DARABONBA_PTR_FROM_JSON(customerName, customerName_);
          DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
          DARABONBA_PTR_FROM_JSON(customerServiceName, customerServiceName_);
          DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
          DARABONBA_PTR_FROM_JSON(gmtService, gmtService_);
        };
        ConversationList() = default ;
        ConversationList(const ConversationList &) = default ;
        ConversationList(ConversationList &&) = default ;
        ConversationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConversationList() = default ;
        ConversationList& operator=(const ConversationList &) = default ;
        ConversationList& operator=(ConversationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DialogueList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
            DARABONBA_PTR_TO_JSON(begin, begin_);
            DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(content, content_);
            DARABONBA_PTR_TO_JSON(customerId, customerId_);
            DARABONBA_PTR_TO_JSON(customerServiceId, customerServiceId_);
            DARABONBA_PTR_TO_JSON(customerServiceType, customerServiceType_);
            DARABONBA_PTR_TO_JSON(end, end_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(role, role_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
            DARABONBA_PTR_FROM_JSON(begin, begin_);
            DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(content, content_);
            DARABONBA_PTR_FROM_JSON(customerId, customerId_);
            DARABONBA_PTR_FROM_JSON(customerServiceId, customerServiceId_);
            DARABONBA_PTR_FROM_JSON(customerServiceType, customerServiceType_);
            DARABONBA_PTR_FROM_JSON(end, end_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(role, role_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          DialogueList() = default ;
          DialogueList(const DialogueList &) = default ;
          DialogueList(DialogueList &&) = default ;
          DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DialogueList() = default ;
          DialogueList& operator=(const DialogueList &) = default ;
          DialogueList& operator=(DialogueList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->begin_ == nullptr
        && this->beginTime_ == nullptr && this->content_ == nullptr && this->customerId_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceType_ == nullptr
        && this->end_ == nullptr && this->id_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
          // begin Field Functions 
          bool hasBegin() const { return this->begin_ != nullptr;};
          void deleteBegin() { this->begin_ = nullptr;};
          inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
          inline DialogueList& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


          // beginTime Field Functions 
          bool hasBeginTime() const { return this->beginTime_ != nullptr;};
          void deleteBeginTime() { this->beginTime_ = nullptr;};
          inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
          inline DialogueList& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline DialogueList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // customerId Field Functions 
          bool hasCustomerId() const { return this->customerId_ != nullptr;};
          void deleteCustomerId() { this->customerId_ = nullptr;};
          inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
          inline DialogueList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


          // customerServiceId Field Functions 
          bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
          void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
          inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
          inline DialogueList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


          // customerServiceType Field Functions 
          bool hasCustomerServiceType() const { return this->customerServiceType_ != nullptr;};
          void deleteCustomerServiceType() { this->customerServiceType_ = nullptr;};
          inline string getCustomerServiceType() const { DARABONBA_PTR_GET_DEFAULT(customerServiceType_, "") };
          inline DialogueList& setCustomerServiceType(string customerServiceType) { DARABONBA_PTR_SET_VALUE(customerServiceType_, customerServiceType) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
          inline DialogueList& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
          inline DialogueList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DialogueList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<int32_t> begin_ {};
          shared_ptr<string> beginTime_ {};
          shared_ptr<string> content_ {};
          shared_ptr<string> customerId_ {};
          shared_ptr<string> customerServiceId_ {};
          shared_ptr<string> customerServiceType_ {};
          shared_ptr<int32_t> end_ {};
          shared_ptr<int32_t> id_ {};
          shared_ptr<string> role_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->callType_ == nullptr
        && this->customerId_ == nullptr && this->customerName_ == nullptr && this->customerServiceId_ == nullptr && this->customerServiceName_ == nullptr && this->dialogueList_ == nullptr
        && this->gmtService_ == nullptr; };
        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
        inline ConversationList& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // customerId Field Functions 
        bool hasCustomerId() const { return this->customerId_ != nullptr;};
        void deleteCustomerId() { this->customerId_ = nullptr;};
        inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
        inline ConversationList& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


        // customerName Field Functions 
        bool hasCustomerName() const { return this->customerName_ != nullptr;};
        void deleteCustomerName() { this->customerName_ = nullptr;};
        inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
        inline ConversationList& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


        // customerServiceId Field Functions 
        bool hasCustomerServiceId() const { return this->customerServiceId_ != nullptr;};
        void deleteCustomerServiceId() { this->customerServiceId_ = nullptr;};
        inline string getCustomerServiceId() const { DARABONBA_PTR_GET_DEFAULT(customerServiceId_, "") };
        inline ConversationList& setCustomerServiceId(string customerServiceId) { DARABONBA_PTR_SET_VALUE(customerServiceId_, customerServiceId) };


        // customerServiceName Field Functions 
        bool hasCustomerServiceName() const { return this->customerServiceName_ != nullptr;};
        void deleteCustomerServiceName() { this->customerServiceName_ = nullptr;};
        inline string getCustomerServiceName() const { DARABONBA_PTR_GET_DEFAULT(customerServiceName_, "") };
        inline ConversationList& setCustomerServiceName(string customerServiceName) { DARABONBA_PTR_SET_VALUE(customerServiceName_, customerServiceName) };


        // dialogueList Field Functions 
        bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
        void deleteDialogueList() { this->dialogueList_ = nullptr;};
        inline const vector<ConversationList::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<ConversationList::DialogueList>) };
        inline vector<ConversationList::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<ConversationList::DialogueList>) };
        inline ConversationList& setDialogueList(const vector<ConversationList::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
        inline ConversationList& setDialogueList(vector<ConversationList::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


        // gmtService Field Functions 
        bool hasGmtService() const { return this->gmtService_ != nullptr;};
        void deleteGmtService() { this->gmtService_ = nullptr;};
        inline string getGmtService() const { DARABONBA_PTR_GET_DEFAULT(gmtService_, "") };
        inline ConversationList& setGmtService(string gmtService) { DARABONBA_PTR_SET_VALUE(gmtService_, gmtService) };


      protected:
        shared_ptr<string> callType_ {};
        shared_ptr<string> customerId_ {};
        shared_ptr<string> customerName_ {};
        shared_ptr<string> customerServiceId_ {};
        shared_ptr<string> customerServiceName_ {};
        shared_ptr<vector<ConversationList::DialogueList>> dialogueList_ {};
        shared_ptr<string> gmtService_ {};
      };

      virtual bool empty() const override { return this->conversationList_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtEnd_ == nullptr && this->gmtStart_ == nullptr && this->qualityCheckList_ == nullptr && this->status_ == nullptr
        && this->taskId_ == nullptr; };
      // conversationList Field Functions 
      bool hasConversationList() const { return this->conversationList_ != nullptr;};
      void deleteConversationList() { this->conversationList_ = nullptr;};
      inline const Data::ConversationList & getConversationList() const { DARABONBA_PTR_GET_CONST(conversationList_, Data::ConversationList) };
      inline Data::ConversationList getConversationList() { DARABONBA_PTR_GET(conversationList_, Data::ConversationList) };
      inline Data& setConversationList(const Data::ConversationList & conversationList) { DARABONBA_PTR_SET_VALUE(conversationList_, conversationList) };
      inline Data& setConversationList(Data::ConversationList && conversationList) { DARABONBA_PTR_SET_RVALUE(conversationList_, conversationList) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtEnd Field Functions 
      bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
      void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
      inline string getGmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, "") };
      inline Data& setGmtEnd(string gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


      // gmtStart Field Functions 
      bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
      void deleteGmtStart() { this->gmtStart_ = nullptr;};
      inline string getGmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, "") };
      inline Data& setGmtStart(string gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


      // qualityCheckList Field Functions 
      bool hasQualityCheckList() const { return this->qualityCheckList_ != nullptr;};
      void deleteQualityCheckList() { this->qualityCheckList_ = nullptr;};
      inline const vector<Data::QualityCheckList> & getQualityCheckList() const { DARABONBA_PTR_GET_CONST(qualityCheckList_, vector<Data::QualityCheckList>) };
      inline vector<Data::QualityCheckList> getQualityCheckList() { DARABONBA_PTR_GET(qualityCheckList_, vector<Data::QualityCheckList>) };
      inline Data& setQualityCheckList(const vector<Data::QualityCheckList> & qualityCheckList) { DARABONBA_PTR_SET_VALUE(qualityCheckList_, qualityCheckList) };
      inline Data& setQualityCheckList(vector<Data::QualityCheckList> && qualityCheckList) { DARABONBA_PTR_SET_RVALUE(qualityCheckList_, qualityCheckList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<Data::ConversationList> conversationList_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtEnd_ {};
      shared_ptr<string> gmtStart_ {};
      shared_ptr<vector<Data::QualityCheckList>> qualityCheckList_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetQualityCheckTaskResultResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityCheckTaskResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityCheckTaskResultResponseBody::Data) };
    inline GetQualityCheckTaskResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityCheckTaskResultResponseBody::Data) };
    inline GetQualityCheckTaskResultResponseBody& setData(const GetQualityCheckTaskResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityCheckTaskResultResponseBody& setData(GetQualityCheckTaskResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetQualityCheckTaskResultResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetQualityCheckTaskResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityCheckTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityCheckTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityCheckTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetQualityCheckTaskResultResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetQualityCheckTaskResultResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
