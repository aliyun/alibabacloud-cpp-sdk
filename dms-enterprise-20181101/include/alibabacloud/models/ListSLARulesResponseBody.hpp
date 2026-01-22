// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLARULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLARULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSLARulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSLARulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SLARuleList, SLARuleList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSLARulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SLARuleList, SLARuleList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSLARulesResponseBody() = default ;
    ListSLARulesResponseBody(const ListSLARulesResponseBody &) = default ;
    ListSLARulesResponseBody(ListSLARulesResponseBody &&) = default ;
    ListSLARulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSLARulesResponseBody() = default ;
    ListSLARulesResponseBody& operator=(const ListSLARulesResponseBody &) = default ;
    ListSLARulesResponseBody& operator=(ListSLARulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SLARuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SLARuleList& obj) { 
        DARABONBA_PTR_TO_JSON(SLARule, SLARule_);
      };
      friend void from_json(const Darabonba::Json& j, SLARuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(SLARule, SLARule_);
      };
      SLARuleList() = default ;
      SLARuleList(const SLARuleList &) = default ;
      SLARuleList(SLARuleList &&) = default ;
      SLARuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SLARuleList() = default ;
      SLARuleList& operator=(const SLARuleList &) = default ;
      SLARuleList& operator=(SLARuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SLARule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SLARule& obj) { 
          DARABONBA_PTR_TO_JSON(DagId, dagId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        };
        friend void from_json(const Darabonba::Json& j, SLARule& obj) { 
          DARABONBA_PTR_FROM_JSON(DagId, dagId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        };
        SLARule() = default ;
        SLARule(const SLARule &) = default ;
        SLARule(SLARule &&) = default ;
        SLARule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SLARule() = default ;
        SLARule& operator=(const SLARule &) = default ;
        SLARule& operator=(SLARule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dagId_ == nullptr
        && this->id_ == nullptr && this->intervalMinutes_ == nullptr && this->nodeId_ == nullptr && this->ruleType_ == nullptr; };
        // dagId Field Functions 
        bool hasDagId() const { return this->dagId_ != nullptr;};
        void deleteDagId() { this->dagId_ = nullptr;};
        inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
        inline SLARule& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SLARule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // intervalMinutes Field Functions 
        bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
        void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
        inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
        inline SLARule& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline SLARule& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // ruleType Field Functions 
        bool hasRuleType() const { return this->ruleType_ != nullptr;};
        void deleteRuleType() { this->ruleType_ = nullptr;};
        inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
        inline SLARule& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      protected:
        // The ID of the task flow.
        shared_ptr<int64_t> dagId_ {};
        // The ID of the SLA rule.
        shared_ptr<int64_t> id_ {};
        // The timeout period. Unit: minutes.
        shared_ptr<int32_t> intervalMinutes_ {};
        // The ID of the task node.
        shared_ptr<int64_t> nodeId_ {};
        // The type of the rule. Valid values:
        // 
        // *   **0**: an SLA rule for a task flow
        // *   **1**: an SLA rule for a task node
        shared_ptr<int32_t> ruleType_ {};
      };

      virtual bool empty() const override { return this->SLARule_ == nullptr; };
      // SLARule Field Functions 
      bool hasSLARule() const { return this->SLARule_ != nullptr;};
      void deleteSLARule() { this->SLARule_ = nullptr;};
      inline const vector<SLARuleList::SLARule> & getSLARule() const { DARABONBA_PTR_GET_CONST(SLARule_, vector<SLARuleList::SLARule>) };
      inline vector<SLARuleList::SLARule> getSLARule() { DARABONBA_PTR_GET(SLARule_, vector<SLARuleList::SLARule>) };
      inline SLARuleList& setSLARule(const vector<SLARuleList::SLARule> & sLARule) { DARABONBA_PTR_SET_VALUE(SLARule_, sLARule) };
      inline SLARuleList& setSLARule(vector<SLARuleList::SLARule> && sLARule) { DARABONBA_PTR_SET_RVALUE(SLARule_, sLARule) };


    protected:
      shared_ptr<vector<SLARuleList::SLARule>> SLARule_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->SLARuleList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListSLARulesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListSLARulesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSLARulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SLARuleList Field Functions 
    bool hasSLARuleList() const { return this->SLARuleList_ != nullptr;};
    void deleteSLARuleList() { this->SLARuleList_ = nullptr;};
    inline const ListSLARulesResponseBody::SLARuleList & getSLARuleList() const { DARABONBA_PTR_GET_CONST(SLARuleList_, ListSLARulesResponseBody::SLARuleList) };
    inline ListSLARulesResponseBody::SLARuleList getSLARuleList() { DARABONBA_PTR_GET(SLARuleList_, ListSLARulesResponseBody::SLARuleList) };
    inline ListSLARulesResponseBody& setSLARuleList(const ListSLARulesResponseBody::SLARuleList & sLARuleList) { DARABONBA_PTR_SET_VALUE(SLARuleList_, sLARuleList) };
    inline ListSLARulesResponseBody& setSLARuleList(ListSLARulesResponseBody::SLARuleList && sLARuleList) { DARABONBA_PTR_SET_RVALUE(SLARuleList_, sLARuleList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSLARulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of SLA rules.
    shared_ptr<ListSLARulesResponseBody::SLARuleList> SLARuleList_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
