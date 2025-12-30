// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ParseResult, parseResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ParseResult, parseResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ParseBatchTaskDependencyResponseBody() = default ;
    ParseBatchTaskDependencyResponseBody(const ParseBatchTaskDependencyResponseBody &) = default ;
    ParseBatchTaskDependencyResponseBody(ParseBatchTaskDependencyResponseBody &&) = default ;
    ParseBatchTaskDependencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyResponseBody() = default ;
    ParseBatchTaskDependencyResponseBody& operator=(const ParseBatchTaskDependencyResponseBody &) = default ;
    ParseBatchTaskDependencyResponseBody& operator=(ParseBatchTaskDependencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParseResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParseResult& obj) { 
        DARABONBA_PTR_TO_JSON(DependNodeList, dependNodeList_);
      };
      friend void from_json(const Darabonba::Json& j, ParseResult& obj) { 
        DARABONBA_PTR_FROM_JSON(DependNodeList, dependNodeList_);
      };
      ParseResult() = default ;
      ParseResult(const ParseResult &) = default ;
      ParseResult(ParseResult &&) = default ;
      ParseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParseResult() = default ;
      ParseResult& operator=(const ParseResult &) = default ;
      ParseResult& operator=(ParseResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DependNodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DependNodeList& obj) { 
          DARABONBA_PTR_TO_JSON(NodeIoType, nodeIoType_);
          DARABONBA_PTR_TO_JSON(ScheduleNodeInfoList, scheduleNodeInfoList_);
        };
        friend void from_json(const Darabonba::Json& j, DependNodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeIoType, nodeIoType_);
          DARABONBA_PTR_FROM_JSON(ScheduleNodeInfoList, scheduleNodeInfoList_);
        };
        DependNodeList() = default ;
        DependNodeList(const DependNodeList &) = default ;
        DependNodeList(DependNodeList &&) = default ;
        DependNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DependNodeList() = default ;
        DependNodeList& operator=(const DependNodeList &) = default ;
        DependNodeList& operator=(DependNodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleNodeInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleNodeInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(FieldList, fieldList_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(OutputName, outputName_);
            DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleNodeInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(FieldList, fieldList_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(OutputName, outputName_);
            DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
            DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          ScheduleNodeInfoList() = default ;
          ScheduleNodeInfoList(const ScheduleNodeInfoList &) = default ;
          ScheduleNodeInfoList(ScheduleNodeInfoList &&) = default ;
          ScheduleNodeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleNodeInfoList() = default ;
          ScheduleNodeInfoList& operator=(const ScheduleNodeInfoList &) = default ;
          ScheduleNodeInfoList& operator=(ScheduleNodeInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fieldList_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->outputName_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr
        && this->tableName_ == nullptr; };
          // fieldList Field Functions 
          bool hasFieldList() const { return this->fieldList_ != nullptr;};
          void deleteFieldList() { this->fieldList_ = nullptr;};
          inline const vector<string> & getFieldList() const { DARABONBA_PTR_GET_CONST(fieldList_, vector<string>) };
          inline vector<string> getFieldList() { DARABONBA_PTR_GET(fieldList_, vector<string>) };
          inline ScheduleNodeInfoList& setFieldList(const vector<string> & fieldList) { DARABONBA_PTR_SET_VALUE(fieldList_, fieldList) };
          inline ScheduleNodeInfoList& setFieldList(vector<string> && fieldList) { DARABONBA_PTR_SET_RVALUE(fieldList_, fieldList) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline ScheduleNodeInfoList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline ScheduleNodeInfoList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // outputName Field Functions 
          bool hasOutputName() const { return this->outputName_ != nullptr;};
          void deleteOutputName() { this->outputName_ = nullptr;};
          inline string getOutputName() const { DARABONBA_PTR_GET_DEFAULT(outputName_, "") };
          inline ScheduleNodeInfoList& setOutputName(string outputName) { DARABONBA_PTR_SET_VALUE(outputName_, outputName) };


          // ownerName Field Functions 
          bool hasOwnerName() const { return this->ownerName_ != nullptr;};
          void deleteOwnerName() { this->ownerName_ = nullptr;};
          inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
          inline ScheduleNodeInfoList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


          // ownerUserId Field Functions 
          bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
          void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
          inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
          inline ScheduleNodeInfoList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline ScheduleNodeInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          shared_ptr<vector<string>> fieldList_ {};
          shared_ptr<string> nodeId_ {};
          shared_ptr<string> nodeName_ {};
          shared_ptr<string> outputName_ {};
          shared_ptr<string> ownerName_ {};
          shared_ptr<string> ownerUserId_ {};
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->nodeIoType_ == nullptr
        && this->scheduleNodeInfoList_ == nullptr; };
        // nodeIoType Field Functions 
        bool hasNodeIoType() const { return this->nodeIoType_ != nullptr;};
        void deleteNodeIoType() { this->nodeIoType_ = nullptr;};
        inline string getNodeIoType() const { DARABONBA_PTR_GET_DEFAULT(nodeIoType_, "") };
        inline DependNodeList& setNodeIoType(string nodeIoType) { DARABONBA_PTR_SET_VALUE(nodeIoType_, nodeIoType) };


        // scheduleNodeInfoList Field Functions 
        bool hasScheduleNodeInfoList() const { return this->scheduleNodeInfoList_ != nullptr;};
        void deleteScheduleNodeInfoList() { this->scheduleNodeInfoList_ = nullptr;};
        inline const vector<DependNodeList::ScheduleNodeInfoList> & getScheduleNodeInfoList() const { DARABONBA_PTR_GET_CONST(scheduleNodeInfoList_, vector<DependNodeList::ScheduleNodeInfoList>) };
        inline vector<DependNodeList::ScheduleNodeInfoList> getScheduleNodeInfoList() { DARABONBA_PTR_GET(scheduleNodeInfoList_, vector<DependNodeList::ScheduleNodeInfoList>) };
        inline DependNodeList& setScheduleNodeInfoList(const vector<DependNodeList::ScheduleNodeInfoList> & scheduleNodeInfoList) { DARABONBA_PTR_SET_VALUE(scheduleNodeInfoList_, scheduleNodeInfoList) };
        inline DependNodeList& setScheduleNodeInfoList(vector<DependNodeList::ScheduleNodeInfoList> && scheduleNodeInfoList) { DARABONBA_PTR_SET_RVALUE(scheduleNodeInfoList_, scheduleNodeInfoList) };


      protected:
        shared_ptr<string> nodeIoType_ {};
        shared_ptr<vector<DependNodeList::ScheduleNodeInfoList>> scheduleNodeInfoList_ {};
      };

      virtual bool empty() const override { return this->dependNodeList_ == nullptr; };
      // dependNodeList Field Functions 
      bool hasDependNodeList() const { return this->dependNodeList_ != nullptr;};
      void deleteDependNodeList() { this->dependNodeList_ = nullptr;};
      inline const vector<ParseResult::DependNodeList> & getDependNodeList() const { DARABONBA_PTR_GET_CONST(dependNodeList_, vector<ParseResult::DependNodeList>) };
      inline vector<ParseResult::DependNodeList> getDependNodeList() { DARABONBA_PTR_GET(dependNodeList_, vector<ParseResult::DependNodeList>) };
      inline ParseResult& setDependNodeList(const vector<ParseResult::DependNodeList> & dependNodeList) { DARABONBA_PTR_SET_VALUE(dependNodeList_, dependNodeList) };
      inline ParseResult& setDependNodeList(vector<ParseResult::DependNodeList> && dependNodeList) { DARABONBA_PTR_SET_RVALUE(dependNodeList_, dependNodeList) };


    protected:
      shared_ptr<vector<ParseResult::DependNodeList>> dependNodeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->parseResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ParseBatchTaskDependencyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ParseBatchTaskDependencyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ParseBatchTaskDependencyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // parseResult Field Functions 
    bool hasParseResult() const { return this->parseResult_ != nullptr;};
    void deleteParseResult() { this->parseResult_ = nullptr;};
    inline const ParseBatchTaskDependencyResponseBody::ParseResult & getParseResult() const { DARABONBA_PTR_GET_CONST(parseResult_, ParseBatchTaskDependencyResponseBody::ParseResult) };
    inline ParseBatchTaskDependencyResponseBody::ParseResult getParseResult() { DARABONBA_PTR_GET(parseResult_, ParseBatchTaskDependencyResponseBody::ParseResult) };
    inline ParseBatchTaskDependencyResponseBody& setParseResult(const ParseBatchTaskDependencyResponseBody::ParseResult & parseResult) { DARABONBA_PTR_SET_VALUE(parseResult_, parseResult) };
    inline ParseBatchTaskDependencyResponseBody& setParseResult(ParseBatchTaskDependencyResponseBody::ParseResult && parseResult) { DARABONBA_PTR_SET_RVALUE(parseResult_, parseResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ParseBatchTaskDependencyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ParseBatchTaskDependencyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ParseBatchTaskDependencyResponseBody::ParseResult> parseResult_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
