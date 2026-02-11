// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOMATERESPONSECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAutomateResponseConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutomateResponseConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutomateResponseConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAutomateResponseConfigsResponseBody() = default ;
    ListAutomateResponseConfigsResponseBody(const ListAutomateResponseConfigsResponseBody &) = default ;
    ListAutomateResponseConfigsResponseBody(ListAutomateResponseConfigsResponseBody &&) = default ;
    ListAutomateResponseConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutomateResponseConfigsResponseBody() = default ;
    ListAutomateResponseConfigsResponseBody& operator=(const ListAutomateResponseConfigsResponseBody &) = default ;
    ListAutomateResponseConfigsResponseBody& operator=(ListAutomateResponseConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(ActionConfig, actionConfig_);
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(AutoResponseType, autoResponseType_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(ExecutionCondition, executionCondition_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ResponseRuleType, responseRuleType_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionConfig, actionConfig_);
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(AutoResponseType, autoResponseType_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(ExecutionCondition, executionCondition_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ResponseRuleType, responseRuleType_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionConfig_ == nullptr
        && this->actionType_ == nullptr && this->aliuid_ == nullptr && this->autoResponseType_ == nullptr && this->dataType_ == nullptr && this->executionCondition_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->responseRuleType_ == nullptr && this->ruleName_ == nullptr
        && this->status_ == nullptr && this->subUserId_ == nullptr; };
        // actionConfig Field Functions 
        bool hasActionConfig() const { return this->actionConfig_ != nullptr;};
        void deleteActionConfig() { this->actionConfig_ = nullptr;};
        inline string getActionConfig() const { DARABONBA_PTR_GET_DEFAULT(actionConfig_, "") };
        inline ResponseData& setActionConfig(string actionConfig) { DARABONBA_PTR_SET_VALUE(actionConfig_, actionConfig) };


        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
        inline ResponseData& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // autoResponseType Field Functions 
        bool hasAutoResponseType() const { return this->autoResponseType_ != nullptr;};
        void deleteAutoResponseType() { this->autoResponseType_ = nullptr;};
        inline string getAutoResponseType() const { DARABONBA_PTR_GET_DEFAULT(autoResponseType_, "") };
        inline ResponseData& setAutoResponseType(string autoResponseType) { DARABONBA_PTR_SET_VALUE(autoResponseType_, autoResponseType) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
        inline ResponseData& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // executionCondition Field Functions 
        bool hasExecutionCondition() const { return this->executionCondition_ != nullptr;};
        void deleteExecutionCondition() { this->executionCondition_ = nullptr;};
        inline string getExecutionCondition() const { DARABONBA_PTR_GET_DEFAULT(executionCondition_, "") };
        inline ResponseData& setExecutionCondition(string executionCondition) { DARABONBA_PTR_SET_VALUE(executionCondition_, executionCondition) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // responseRuleType Field Functions 
        bool hasResponseRuleType() const { return this->responseRuleType_ != nullptr;};
        void deleteResponseRuleType() { this->responseRuleType_ = nullptr;};
        inline string getResponseRuleType() const { DARABONBA_PTR_GET_DEFAULT(responseRuleType_, "") };
        inline ResponseData& setResponseRuleType(string responseRuleType) { DARABONBA_PTR_SET_VALUE(responseRuleType_, responseRuleType) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ResponseData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
        inline ResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      protected:
        // The configuration of the action that is performed after the automated response rule is hit. The value is in the JSON format.
        shared_ptr<string> actionConfig_ {};
        // The type of the handling action. Multiple types are separated by commas (,). Valid values:
        // 
        // *   **doPlaybook**: runs the playbook.
        // *   **changeEventStatus**: changes the event status.
        // *   **changeThreatLevel**: changes the risk level of the event.
        shared_ptr<string> actionType_ {};
        // The ID of the Alibaba Cloud account that is associated with the rule in SIEM.
        shared_ptr<int64_t> aliuid_ {};
        // The type of the automated response rule. Valid values:
        // 
        // *   **event**
        // *   **alert**
        shared_ptr<string> autoResponseType_ {};
        // The type of the view. Valid values:
        // 
        // 0: the current Alibaba Cloud account
        // 1: the global account
        shared_ptr<int32_t> dataType_ {};
        // The trigger condition of the automated response rule. The value is in the JSON format.
        shared_ptr<string> executionCondition_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The update time.
        shared_ptr<string> gmtModified_ {};
        // The ID of the automated response rule.
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> responseRuleType_ {};
        // The name of the automated response rule.
        shared_ptr<string> ruleName_ {};
        // The status of the rule. Valid values:
        // 
        // *   **0**: disabled.
        // *   **100**: enabled.
        shared_ptr<int32_t> status_ {};
        // The ID of the user who created the rule.
        shared_ptr<int64_t> subUserId_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAutomateResponseConfigsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAutomateResponseConfigsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAutomateResponseConfigsResponseBody::Data) };
    inline ListAutomateResponseConfigsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAutomateResponseConfigsResponseBody::Data) };
    inline ListAutomateResponseConfigsResponseBody& setData(const ListAutomateResponseConfigsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAutomateResponseConfigsResponseBody& setData(ListAutomateResponseConfigsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAutomateResponseConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutomateResponseConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAutomateResponseConfigsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<ListAutomateResponseConfigsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
