// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListExecutorGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListExecutorGroupResponseBody() = default ;
    ListExecutorGroupResponseBody(const ListExecutorGroupResponseBody &) = default ;
    ListExecutorGroupResponseBody(ListExecutorGroupResponseBody &&) = default ;
    ListExecutorGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorGroupResponseBody() = default ;
    ListExecutorGroupResponseBody& operator=(const ListExecutorGroupResponseBody &) = default ;
    ListExecutorGroupResponseBody& operator=(ListExecutorGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
          DARABONBA_PTR_TO_JSON(CiteList, citeList_);
          DARABONBA_PTR_TO_JSON(CmsWorkspaceId, cmsWorkspaceId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(ResolvedWorkers, resolvedWorkers_);
          DARABONBA_PTR_TO_JSON(WorkerId, workerId_);
          DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
          DARABONBA_PTR_TO_JSON(Workers, workers_);
          DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
          DARABONBA_PTR_FROM_JSON(CiteList, citeList_);
          DARABONBA_PTR_FROM_JSON(CmsWorkspaceId, cmsWorkspaceId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(ResolvedWorkers, resolvedWorkers_);
          DARABONBA_PTR_FROM_JSON(WorkerId, workerId_);
          DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
          DARABONBA_PTR_FROM_JSON(Workers, workers_);
          DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CiteList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CiteList& obj) { 
            DARABONBA_PTR_TO_JSON(AppName, appName_);
            DARABONBA_PTR_TO_JSON(Description, description_);
          };
          friend void from_json(const Darabonba::Json& j, CiteList& obj) { 
            DARABONBA_PTR_FROM_JSON(AppName, appName_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
          };
          CiteList() = default ;
          CiteList(const CiteList &) = default ;
          CiteList(CiteList &&) = default ;
          CiteList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CiteList() = default ;
          CiteList& operator=(const CiteList &) = default ;
          CiteList& operator=(CiteList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appName_ == nullptr
        && this->description_ == nullptr; };
          // appName Field Functions 
          bool hasAppName() const { return this->appName_ != nullptr;};
          void deleteAppName() { this->appName_ = nullptr;};
          inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
          inline CiteList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline CiteList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        protected:
          shared_ptr<string> appName_ {};
          shared_ptr<string> description_ {};
        };

        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->authType_ == nullptr && this->autoScale_ == nullptr && this->citeList_ == nullptr && this->cmsWorkspaceId_ == nullptr && this->description_ == nullptr
        && this->integrationType_ == nullptr && this->name_ == nullptr && this->network_ == nullptr && this->protocol_ == nullptr && this->resolvedWorkers_ == nullptr
        && this->workerId_ == nullptr && this->workerType_ == nullptr && this->workers_ == nullptr && this->XAttrs_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline Records& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline Records& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // autoScale Field Functions 
        bool hasAutoScale() const { return this->autoScale_ != nullptr;};
        void deleteAutoScale() { this->autoScale_ = nullptr;};
        inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
        inline Records& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


        // citeList Field Functions 
        bool hasCiteList() const { return this->citeList_ != nullptr;};
        void deleteCiteList() { this->citeList_ = nullptr;};
        inline const vector<Records::CiteList> & getCiteList() const { DARABONBA_PTR_GET_CONST(citeList_, vector<Records::CiteList>) };
        inline vector<Records::CiteList> getCiteList() { DARABONBA_PTR_GET(citeList_, vector<Records::CiteList>) };
        inline Records& setCiteList(const vector<Records::CiteList> & citeList) { DARABONBA_PTR_SET_VALUE(citeList_, citeList) };
        inline Records& setCiteList(vector<Records::CiteList> && citeList) { DARABONBA_PTR_SET_RVALUE(citeList_, citeList) };


        // cmsWorkspaceId Field Functions 
        bool hasCmsWorkspaceId() const { return this->cmsWorkspaceId_ != nullptr;};
        void deleteCmsWorkspaceId() { this->cmsWorkspaceId_ = nullptr;};
        inline string getCmsWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceId_, "") };
        inline Records& setCmsWorkspaceId(string cmsWorkspaceId) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceId_, cmsWorkspaceId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Records& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // integrationType Field Functions 
        bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
        void deleteIntegrationType() { this->integrationType_ = nullptr;};
        inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
        inline Records& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Records& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
        inline Records& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Records& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // resolvedWorkers Field Functions 
        bool hasResolvedWorkers() const { return this->resolvedWorkers_ != nullptr;};
        void deleteResolvedWorkers() { this->resolvedWorkers_ = nullptr;};
        inline string getResolvedWorkers() const { DARABONBA_PTR_GET_DEFAULT(resolvedWorkers_, "") };
        inline Records& setResolvedWorkers(string resolvedWorkers) { DARABONBA_PTR_SET_VALUE(resolvedWorkers_, resolvedWorkers) };


        // workerId Field Functions 
        bool hasWorkerId() const { return this->workerId_ != nullptr;};
        void deleteWorkerId() { this->workerId_ = nullptr;};
        inline int64_t getWorkerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, 0L) };
        inline Records& setWorkerId(int64_t workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


        // workerType Field Functions 
        bool hasWorkerType() const { return this->workerType_ != nullptr;};
        void deleteWorkerType() { this->workerType_ = nullptr;};
        inline string getWorkerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
        inline Records& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


        // workers Field Functions 
        bool hasWorkers() const { return this->workers_ != nullptr;};
        void deleteWorkers() { this->workers_ = nullptr;};
        inline string getWorkers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
        inline Records& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


        // XAttrs Field Functions 
        bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
        void deleteXAttrs() { this->XAttrs_ = nullptr;};
        inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
        inline Records& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<string> authType_ {};
        shared_ptr<bool> autoScale_ {};
        shared_ptr<vector<Records::CiteList>> citeList_ {};
        shared_ptr<string> cmsWorkspaceId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> integrationType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> network_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> resolvedWorkers_ {};
        shared_ptr<int64_t> workerId_ {};
        shared_ptr<string> workerType_ {};
        shared_ptr<string> workers_ {};
        shared_ptr<string> XAttrs_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListExecutorGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListExecutorGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListExecutorGroupResponseBody::Data) };
    inline ListExecutorGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListExecutorGroupResponseBody::Data) };
    inline ListExecutorGroupResponseBody& setData(const ListExecutorGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExecutorGroupResponseBody& setData(ListExecutorGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutorGroupResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListExecutorGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutorGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExecutorGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListExecutorGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListExecutorGroupResponseBody::Data> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
