// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBuildRiskDefineRuleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBuildRiskDefineRuleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBuildRiskDefineRuleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBuildRiskDefineRuleConfigResponseBody() = default ;
    GetBuildRiskDefineRuleConfigResponseBody(const GetBuildRiskDefineRuleConfigResponseBody &) = default ;
    GetBuildRiskDefineRuleConfigResponseBody(GetBuildRiskDefineRuleConfigResponseBody &&) = default ;
    GetBuildRiskDefineRuleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBuildRiskDefineRuleConfigResponseBody() = default ;
    GetBuildRiskDefineRuleConfigResponseBody& operator=(const GetBuildRiskDefineRuleConfigResponseBody &) = default ;
    GetBuildRiskDefineRuleConfigResponseBody& operator=(GetBuildRiskDefineRuleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_TO_JSON(RuleTree, ruleTree_);
        DARABONBA_PTR_TO_JSON(SelectedCount, selectedCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
        DARABONBA_PTR_FROM_JSON(RuleTree, ruleTree_);
        DARABONBA_PTR_FROM_JSON(SelectedCount, selectedCount_);
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
      class RuleTree : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleTree& obj) { 
          DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
          DARABONBA_PTR_TO_JSON(ClassName, className_);
          DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        };
        friend void from_json(const Darabonba::Json& j, RuleTree& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
          DARABONBA_PTR_FROM_JSON(ClassName, className_);
          DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        };
        RuleTree() = default ;
        RuleTree(const RuleTree &) = default ;
        RuleTree(RuleTree &&) = default ;
        RuleTree(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleTree() = default ;
        RuleTree& operator=(const RuleTree &) = default ;
        RuleTree& operator=(RuleTree &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
            DARABONBA_PTR_TO_JSON(RuleKey, ruleKey_);
            DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
            DARABONBA_PTR_TO_JSON(Selected, selected_);
          };
          friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleKey, ruleKey_);
            DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
            DARABONBA_PTR_FROM_JSON(Selected, selected_);
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
          virtual bool empty() const override { return this->ruleKey_ == nullptr
        && this->ruleName_ == nullptr && this->selected_ == nullptr; };
          // ruleKey Field Functions 
          bool hasRuleKey() const { return this->ruleKey_ != nullptr;};
          void deleteRuleKey() { this->ruleKey_ = nullptr;};
          inline string getRuleKey() const { DARABONBA_PTR_GET_DEFAULT(ruleKey_, "") };
          inline RuleList& setRuleKey(string ruleKey) { DARABONBA_PTR_SET_VALUE(ruleKey_, ruleKey) };


          // ruleName Field Functions 
          bool hasRuleName() const { return this->ruleName_ != nullptr;};
          void deleteRuleName() { this->ruleName_ = nullptr;};
          inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
          inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


          // selected Field Functions 
          bool hasSelected() const { return this->selected_ != nullptr;};
          void deleteSelected() { this->selected_ = nullptr;};
          inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
          inline RuleList& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


        protected:
          // The check item.
          shared_ptr<string> ruleKey_ {};
          // The name of the check item.
          shared_ptr<string> ruleName_ {};
          // Indicates whether the check item is selected. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> selected_ {};
        };

        virtual bool empty() const override { return this->classKey_ == nullptr
        && this->className_ == nullptr && this->ruleList_ == nullptr; };
        // classKey Field Functions 
        bool hasClassKey() const { return this->classKey_ != nullptr;};
        void deleteClassKey() { this->classKey_ = nullptr;};
        inline string getClassKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
        inline RuleTree& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


        // className Field Functions 
        bool hasClassName() const { return this->className_ != nullptr;};
        void deleteClassName() { this->className_ = nullptr;};
        inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
        inline RuleTree& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


        // ruleList Field Functions 
        bool hasRuleList() const { return this->ruleList_ != nullptr;};
        void deleteRuleList() { this->ruleList_ = nullptr;};
        inline const vector<RuleTree::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<RuleTree::RuleList>) };
        inline vector<RuleTree::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<RuleTree::RuleList>) };
        inline RuleTree& setRuleList(const vector<RuleTree::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
        inline RuleTree& setRuleList(vector<RuleTree::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      protected:
        // The check item type.
        shared_ptr<string> classKey_ {};
        // The name of the check item type.
        shared_ptr<string> className_ {};
        // The check items of the type.
        shared_ptr<vector<RuleTree::RuleList>> ruleList_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->ruleCount_ == nullptr && this->ruleTree_ == nullptr && this->selectedCount_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline Data& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


      // ruleTree Field Functions 
      bool hasRuleTree() const { return this->ruleTree_ != nullptr;};
      void deleteRuleTree() { this->ruleTree_ = nullptr;};
      inline const vector<Data::RuleTree> & getRuleTree() const { DARABONBA_PTR_GET_CONST(ruleTree_, vector<Data::RuleTree>) };
      inline vector<Data::RuleTree> getRuleTree() { DARABONBA_PTR_GET(ruleTree_, vector<Data::RuleTree>) };
      inline Data& setRuleTree(const vector<Data::RuleTree> & ruleTree) { DARABONBA_PTR_SET_VALUE(ruleTree_, ruleTree) };
      inline Data& setRuleTree(vector<Data::RuleTree> && ruleTree) { DARABONBA_PTR_SET_RVALUE(ruleTree_, ruleTree) };


      // selectedCount Field Functions 
      bool hasSelectedCount() const { return this->selectedCount_ != nullptr;};
      void deleteSelectedCount() { this->selectedCount_ = nullptr;};
      inline int32_t getSelectedCount() const { DARABONBA_PTR_GET_DEFAULT(selectedCount_, 0) };
      inline Data& setSelectedCount(int32_t selectedCount) { DARABONBA_PTR_SET_VALUE(selectedCount_, selectedCount) };


    protected:
      // The configuration ID for scanning image build command risks.
      shared_ptr<int64_t> id_ {};
      // The total number of check items.
      shared_ptr<int32_t> ruleCount_ {};
      // The details of all check items.
      shared_ptr<vector<Data::RuleTree>> ruleTree_ {};
      // The number of selected check items.
      shared_ptr<int32_t> selectedCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBuildRiskDefineRuleConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBuildRiskDefineRuleConfigResponseBody::Data) };
    inline GetBuildRiskDefineRuleConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBuildRiskDefineRuleConfigResponseBody::Data) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setData(const GetBuildRiskDefineRuleConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setData(GetBuildRiskDefineRuleConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBuildRiskDefineRuleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetBuildRiskDefineRuleConfigResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
