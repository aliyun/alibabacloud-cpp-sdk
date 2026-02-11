// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSEANDPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeAndPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeAndPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeAndPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDisposeAndPlaybookResponseBody() = default ;
    DescribeDisposeAndPlaybookResponseBody(const DescribeDisposeAndPlaybookResponseBody &) = default ;
    DescribeDisposeAndPlaybookResponseBody(DescribeDisposeAndPlaybookResponseBody &&) = default ;
    DescribeDisposeAndPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeAndPlaybookResponseBody() = default ;
    DescribeDisposeAndPlaybookResponseBody& operator=(const DescribeDisposeAndPlaybookResponseBody &) = default ;
    DescribeDisposeAndPlaybookResponseBody& operator=(DescribeDisposeAndPlaybookResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_TO_JSON(Dispose, dispose_);
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_ANY_TO_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(OpcodeMap, opcodeMap_);
          DARABONBA_PTR_TO_JSON(OpcodeSet, opcodeSet_);
          DARABONBA_PTR_TO_JSON(PlaybookList, playbookList_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
          DARABONBA_PTR_FROM_JSON(Dispose, dispose_);
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_ANY_FROM_JSON(EntityInfo, entityInfo_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(OpcodeMap, opcodeMap_);
          DARABONBA_PTR_FROM_JSON(OpcodeSet, opcodeSet_);
          DARABONBA_PTR_FROM_JSON(PlaybookList, playbookList_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
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
        class PlaybookList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PlaybookList& obj) { 
            DARABONBA_PTR_TO_JSON(Available, available_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OpCode, opCode_);
            DARABONBA_PTR_TO_JSON(OpLevel, opLevel_);
            DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
            DARABONBA_PTR_TO_JSON(TaskConfig, taskConfig_);
            DARABONBA_PTR_TO_JSON(Uuid, uuid_);
            DARABONBA_PTR_TO_JSON(WafPlaybook, wafPlaybook_);
          };
          friend void from_json(const Darabonba::Json& j, PlaybookList& obj) { 
            DARABONBA_PTR_FROM_JSON(Available, available_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OpCode, opCode_);
            DARABONBA_PTR_FROM_JSON(OpLevel, opLevel_);
            DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
            DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfig_);
            DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
            DARABONBA_PTR_FROM_JSON(WafPlaybook, wafPlaybook_);
          };
          PlaybookList() = default ;
          PlaybookList(const PlaybookList &) = default ;
          PlaybookList(PlaybookList &&) = default ;
          PlaybookList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PlaybookList() = default ;
          PlaybookList& operator=(const PlaybookList &) = default ;
          PlaybookList& operator=(PlaybookList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->available_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->name_ == nullptr && this->opCode_ == nullptr && this->opLevel_ == nullptr
        && this->paramConfig_ == nullptr && this->taskConfig_ == nullptr && this->uuid_ == nullptr && this->wafPlaybook_ == nullptr; };
          // available Field Functions 
          bool hasAvailable() const { return this->available_ != nullptr;};
          void deleteAvailable() { this->available_ = nullptr;};
          inline string getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
          inline PlaybookList& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline PlaybookList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline PlaybookList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline PlaybookList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // opCode Field Functions 
          bool hasOpCode() const { return this->opCode_ != nullptr;};
          void deleteOpCode() { this->opCode_ = nullptr;};
          inline string getOpCode() const { DARABONBA_PTR_GET_DEFAULT(opCode_, "") };
          inline PlaybookList& setOpCode(string opCode) { DARABONBA_PTR_SET_VALUE(opCode_, opCode) };


          // opLevel Field Functions 
          bool hasOpLevel() const { return this->opLevel_ != nullptr;};
          void deleteOpLevel() { this->opLevel_ = nullptr;};
          inline string getOpLevel() const { DARABONBA_PTR_GET_DEFAULT(opLevel_, "") };
          inline PlaybookList& setOpLevel(string opLevel) { DARABONBA_PTR_SET_VALUE(opLevel_, opLevel) };


          // paramConfig Field Functions 
          bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
          void deleteParamConfig() { this->paramConfig_ = nullptr;};
          inline const vector<Darabonba::Json> & getParamConfig() const { DARABONBA_PTR_GET_CONST(paramConfig_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getParamConfig() { DARABONBA_PTR_GET(paramConfig_, vector<Darabonba::Json>) };
          inline PlaybookList& setParamConfig(const vector<Darabonba::Json> & paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };
          inline PlaybookList& setParamConfig(vector<Darabonba::Json> && paramConfig) { DARABONBA_PTR_SET_RVALUE(paramConfig_, paramConfig) };


          // taskConfig Field Functions 
          bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
          void deleteTaskConfig() { this->taskConfig_ = nullptr;};
          inline string getTaskConfig() const { DARABONBA_PTR_GET_DEFAULT(taskConfig_, "") };
          inline PlaybookList& setTaskConfig(string taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline PlaybookList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


          // wafPlaybook Field Functions 
          bool hasWafPlaybook() const { return this->wafPlaybook_ != nullptr;};
          void deleteWafPlaybook() { this->wafPlaybook_ = nullptr;};
          inline bool getWafPlaybook() const { DARABONBA_PTR_GET_DEFAULT(wafPlaybook_, false) };
          inline PlaybookList& setWafPlaybook(bool wafPlaybook) { DARABONBA_PTR_SET_VALUE(wafPlaybook_, wafPlaybook) };


        protected:
          shared_ptr<string> available_ {};
          // The playbook description.
          shared_ptr<string> description_ {};
          // The display name of the playbook.
          shared_ptr<string> displayName_ {};
          // The playbook name, which is the unique identifier of the playbook.
          shared_ptr<string> name_ {};
          // The opcode of the playbook, which corresponds to the opcode of the playbook recommended for entity handling.
          shared_ptr<string> opCode_ {};
          // Indicates whether quick event handling is selected by default. Valid values:
          // 
          // *   2: Quick event handling is selected.
          // *   1: Quick event handling is displayed but not selected.
          shared_ptr<string> opLevel_ {};
          // The playbook parameters and the corresponding properties.
          shared_ptr<vector<Darabonba::Json>> paramConfig_ {};
          // The opcode configuration.
          shared_ptr<string> taskConfig_ {};
          shared_ptr<string> uuid_ {};
          // Indicates whether the playbook is intended for Web Application Firewall (WAF). Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> wafPlaybook_ {};
        };

        virtual bool empty() const override { return this->alertNum_ == nullptr
        && this->dispose_ == nullptr && this->entityId_ == nullptr && this->entityInfo_ == nullptr && this->entityType_ == nullptr && this->opcodeMap_ == nullptr
        && this->opcodeSet_ == nullptr && this->playbookList_ == nullptr && this->scope_ == nullptr; };
        // alertNum Field Functions 
        bool hasAlertNum() const { return this->alertNum_ != nullptr;};
        void deleteAlertNum() { this->alertNum_ = nullptr;};
        inline int32_t getAlertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
        inline ResponseData& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


        // dispose Field Functions 
        bool hasDispose() const { return this->dispose_ != nullptr;};
        void deleteDispose() { this->dispose_ = nullptr;};
        inline string getDispose() const { DARABONBA_PTR_GET_DEFAULT(dispose_, "") };
        inline ResponseData& setDispose(string dispose) { DARABONBA_PTR_SET_VALUE(dispose_, dispose) };


        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
        inline ResponseData& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityInfo Field Functions 
        bool hasEntityInfo() const { return this->entityInfo_ != nullptr;};
        void deleteEntityInfo() { this->entityInfo_ = nullptr;};
        inline         const Darabonba::Json & getEntityInfo() const { DARABONBA_GET(entityInfo_) };
        Darabonba::Json & getEntityInfo() { DARABONBA_GET(entityInfo_) };
        inline ResponseData& setEntityInfo(const Darabonba::Json & entityInfo) { DARABONBA_SET_VALUE(entityInfo_, entityInfo) };
        inline ResponseData& setEntityInfo(Darabonba::Json && entityInfo) { DARABONBA_SET_RVALUE(entityInfo_, entityInfo) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline ResponseData& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // opcodeMap Field Functions 
        bool hasOpcodeMap() const { return this->opcodeMap_ != nullptr;};
        void deleteOpcodeMap() { this->opcodeMap_ = nullptr;};
        inline const map<string, string> & getOpcodeMap() const { DARABONBA_PTR_GET_CONST(opcodeMap_, map<string, string>) };
        inline map<string, string> getOpcodeMap() { DARABONBA_PTR_GET(opcodeMap_, map<string, string>) };
        inline ResponseData& setOpcodeMap(const map<string, string> & opcodeMap) { DARABONBA_PTR_SET_VALUE(opcodeMap_, opcodeMap) };
        inline ResponseData& setOpcodeMap(map<string, string> && opcodeMap) { DARABONBA_PTR_SET_RVALUE(opcodeMap_, opcodeMap) };


        // opcodeSet Field Functions 
        bool hasOpcodeSet() const { return this->opcodeSet_ != nullptr;};
        void deleteOpcodeSet() { this->opcodeSet_ = nullptr;};
        inline const vector<string> & getOpcodeSet() const { DARABONBA_PTR_GET_CONST(opcodeSet_, vector<string>) };
        inline vector<string> getOpcodeSet() { DARABONBA_PTR_GET(opcodeSet_, vector<string>) };
        inline ResponseData& setOpcodeSet(const vector<string> & opcodeSet) { DARABONBA_PTR_SET_VALUE(opcodeSet_, opcodeSet) };
        inline ResponseData& setOpcodeSet(vector<string> && opcodeSet) { DARABONBA_PTR_SET_RVALUE(opcodeSet_, opcodeSet) };


        // playbookList Field Functions 
        bool hasPlaybookList() const { return this->playbookList_ != nullptr;};
        void deletePlaybookList() { this->playbookList_ = nullptr;};
        inline const vector<ResponseData::PlaybookList> & getPlaybookList() const { DARABONBA_PTR_GET_CONST(playbookList_, vector<ResponseData::PlaybookList>) };
        inline vector<ResponseData::PlaybookList> getPlaybookList() { DARABONBA_PTR_GET(playbookList_, vector<ResponseData::PlaybookList>) };
        inline ResponseData& setPlaybookList(const vector<ResponseData::PlaybookList> & playbookList) { DARABONBA_PTR_SET_VALUE(playbookList_, playbookList) };
        inline ResponseData& setPlaybookList(vector<ResponseData::PlaybookList> && playbookList) { DARABONBA_PTR_SET_RVALUE(playbookList_, playbookList) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline const vector<Darabonba::Json> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getScope() { DARABONBA_PTR_GET(scope_, vector<Darabonba::Json>) };
        inline ResponseData& setScope(const vector<Darabonba::Json> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
        inline ResponseData& setScope(vector<Darabonba::Json> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


      protected:
        // The number of alerts that are associated with the entity.
        shared_ptr<int32_t> alertNum_ {};
        // The object for handling.
        shared_ptr<string> dispose_ {};
        // The entity ID
        shared_ptr<int64_t> entityId_ {};
        // The entity information.
        Darabonba::Json entityInfo_ {};
        shared_ptr<string> entityType_ {};
        // The key-value pairs each of which consists of opcode and oplevel.
        shared_ptr<map<string, string>> opcodeMap_ {};
        // The codes of the playbooks that are recommended for entity handling.
        shared_ptr<vector<string>> opcodeSet_ {};
        // The playbooks that can handle the entity.
        shared_ptr<vector<ResponseData::PlaybookList>> playbookList_ {};
        // The IDs of the users who can handle objects.
        shared_ptr<vector<Darabonba::Json>> scope_ {};
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
    inline DescribeDisposeAndPlaybookResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDisposeAndPlaybookResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDisposeAndPlaybookResponseBody::Data) };
    inline DescribeDisposeAndPlaybookResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDisposeAndPlaybookResponseBody::Data) };
    inline DescribeDisposeAndPlaybookResponseBody& setData(const DescribeDisposeAndPlaybookResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDisposeAndPlaybookResponseBody& setData(DescribeDisposeAndPlaybookResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDisposeAndPlaybookResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisposeAndPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDisposeAndPlaybookResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeDisposeAndPlaybookResponseBody::Data> data_ {};
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
