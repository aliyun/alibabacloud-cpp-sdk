// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTAGRAMPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTAGRAMPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListInstagramPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstagramPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstagramPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInstagramPageResponseBody() = default ;
    ListInstagramPageResponseBody(const ListInstagramPageResponseBody &) = default ;
    ListInstagramPageResponseBody(ListInstagramPageResponseBody &&) = default ;
    ListInstagramPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstagramPageResponseBody() = default ;
    ListInstagramPageResponseBody& operator=(const ListInstagramPageResponseBody &) = default ;
    ListInstagramPageResponseBody& operator=(ListInstagramPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentInfo, agentInfo_);
        DARABONBA_PTR_TO_JSON(BeebotInfo, beebotInfo_);
        DARABONBA_PTR_TO_JSON(InstagramInfo, instagramInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentInfo, agentInfo_);
        DARABONBA_PTR_FROM_JSON(BeebotInfo, beebotInfo_);
        DARABONBA_PTR_FROM_JSON(InstagramInfo, instagramInfo_);
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
      class InstagramInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstagramInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
          DARABONBA_PTR_TO_JSON(HttpFlag, httpFlag_);
          DARABONBA_PTR_TO_JSON(PageId, pageId_);
          DARABONBA_PTR_TO_JSON(PageName, pageName_);
          DARABONBA_PTR_TO_JSON(QueueFlag, queueFlag_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(StatusCallbackUrl, statusCallbackUrl_);
          DARABONBA_PTR_TO_JSON(StatusQueue, statusQueue_);
          DARABONBA_PTR_TO_JSON(UpCallbackUrl, upCallbackUrl_);
          DARABONBA_PTR_TO_JSON(UpQueue, upQueue_);
        };
        friend void from_json(const Darabonba::Json& j, InstagramInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
          DARABONBA_PTR_FROM_JSON(HttpFlag, httpFlag_);
          DARABONBA_PTR_FROM_JSON(PageId, pageId_);
          DARABONBA_PTR_FROM_JSON(PageName, pageName_);
          DARABONBA_PTR_FROM_JSON(QueueFlag, queueFlag_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(StatusCallbackUrl, statusCallbackUrl_);
          DARABONBA_PTR_FROM_JSON(StatusQueue, statusQueue_);
          DARABONBA_PTR_FROM_JSON(UpCallbackUrl, upCallbackUrl_);
          DARABONBA_PTR_FROM_JSON(UpQueue, upQueue_);
        };
        InstagramInfo() = default ;
        InstagramInfo(const InstagramInfo &) = default ;
        InstagramInfo(InstagramInfo &&) = default ;
        InstagramInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstagramInfo() = default ;
        InstagramInfo& operator=(const InstagramInfo &) = default ;
        InstagramInfo& operator=(InstagramInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->connectionStatus_ == nullptr && this->httpFlag_ == nullptr && this->pageId_ == nullptr && this->pageName_ == nullptr
        && this->queueFlag_ == nullptr && this->queueName_ == nullptr && this->statusCallbackUrl_ == nullptr && this->statusQueue_ == nullptr && this->upCallbackUrl_ == nullptr
        && this->upQueue_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
        inline InstagramInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline InstagramInfo& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // connectionStatus Field Functions 
        bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
        void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
        inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
        inline InstagramInfo& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


        // httpFlag Field Functions 
        bool hasHttpFlag() const { return this->httpFlag_ != nullptr;};
        void deleteHttpFlag() { this->httpFlag_ = nullptr;};
        inline string getHttpFlag() const { DARABONBA_PTR_GET_DEFAULT(httpFlag_, "") };
        inline InstagramInfo& setHttpFlag(string httpFlag) { DARABONBA_PTR_SET_VALUE(httpFlag_, httpFlag) };


        // pageId Field Functions 
        bool hasPageId() const { return this->pageId_ != nullptr;};
        void deletePageId() { this->pageId_ = nullptr;};
        inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
        inline InstagramInfo& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


        // pageName Field Functions 
        bool hasPageName() const { return this->pageName_ != nullptr;};
        void deletePageName() { this->pageName_ = nullptr;};
        inline string getPageName() const { DARABONBA_PTR_GET_DEFAULT(pageName_, "") };
        inline InstagramInfo& setPageName(string pageName) { DARABONBA_PTR_SET_VALUE(pageName_, pageName) };


        // queueFlag Field Functions 
        bool hasQueueFlag() const { return this->queueFlag_ != nullptr;};
        void deleteQueueFlag() { this->queueFlag_ = nullptr;};
        inline string getQueueFlag() const { DARABONBA_PTR_GET_DEFAULT(queueFlag_, "") };
        inline InstagramInfo& setQueueFlag(string queueFlag) { DARABONBA_PTR_SET_VALUE(queueFlag_, queueFlag) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline InstagramInfo& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // statusCallbackUrl Field Functions 
        bool hasStatusCallbackUrl() const { return this->statusCallbackUrl_ != nullptr;};
        void deleteStatusCallbackUrl() { this->statusCallbackUrl_ = nullptr;};
        inline string getStatusCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(statusCallbackUrl_, "") };
        inline InstagramInfo& setStatusCallbackUrl(string statusCallbackUrl) { DARABONBA_PTR_SET_VALUE(statusCallbackUrl_, statusCallbackUrl) };


        // statusQueue Field Functions 
        bool hasStatusQueue() const { return this->statusQueue_ != nullptr;};
        void deleteStatusQueue() { this->statusQueue_ = nullptr;};
        inline string getStatusQueue() const { DARABONBA_PTR_GET_DEFAULT(statusQueue_, "") };
        inline InstagramInfo& setStatusQueue(string statusQueue) { DARABONBA_PTR_SET_VALUE(statusQueue_, statusQueue) };


        // upCallbackUrl Field Functions 
        bool hasUpCallbackUrl() const { return this->upCallbackUrl_ != nullptr;};
        void deleteUpCallbackUrl() { this->upCallbackUrl_ = nullptr;};
        inline string getUpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(upCallbackUrl_, "") };
        inline InstagramInfo& setUpCallbackUrl(string upCallbackUrl) { DARABONBA_PTR_SET_VALUE(upCallbackUrl_, upCallbackUrl) };


        // upQueue Field Functions 
        bool hasUpQueue() const { return this->upQueue_ != nullptr;};
        void deleteUpQueue() { this->upQueue_ = nullptr;};
        inline string getUpQueue() const { DARABONBA_PTR_GET_DEFAULT(upQueue_, "") };
        inline InstagramInfo& setUpQueue(string upQueue) { DARABONBA_PTR_SET_VALUE(upQueue_, upQueue) };


      protected:
        shared_ptr<string> accountId_ {};
        shared_ptr<string> accountName_ {};
        shared_ptr<string> connectionStatus_ {};
        shared_ptr<string> httpFlag_ {};
        shared_ptr<string> pageId_ {};
        shared_ptr<string> pageName_ {};
        shared_ptr<string> queueFlag_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<string> statusCallbackUrl_ {};
        shared_ptr<string> statusQueue_ {};
        shared_ptr<string> upCallbackUrl_ {};
        shared_ptr<string> upQueue_ {};
      };

      class BeebotInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BeebotInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BeebotInstanceId, beebotInstanceId_);
          DARABONBA_PTR_TO_JSON(BeebotNamespaceId, beebotNamespaceId_);
        };
        friend void from_json(const Darabonba::Json& j, BeebotInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BeebotInstanceId, beebotInstanceId_);
          DARABONBA_PTR_FROM_JSON(BeebotNamespaceId, beebotNamespaceId_);
        };
        BeebotInfo() = default ;
        BeebotInfo(const BeebotInfo &) = default ;
        BeebotInfo(BeebotInfo &&) = default ;
        BeebotInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BeebotInfo() = default ;
        BeebotInfo& operator=(const BeebotInfo &) = default ;
        BeebotInfo& operator=(BeebotInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beebotInstanceId_ == nullptr
        && this->beebotNamespaceId_ == nullptr; };
        // beebotInstanceId Field Functions 
        bool hasBeebotInstanceId() const { return this->beebotInstanceId_ != nullptr;};
        void deleteBeebotInstanceId() { this->beebotInstanceId_ = nullptr;};
        inline string getBeebotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(beebotInstanceId_, "") };
        inline BeebotInfo& setBeebotInstanceId(string beebotInstanceId) { DARABONBA_PTR_SET_VALUE(beebotInstanceId_, beebotInstanceId) };


        // beebotNamespaceId Field Functions 
        bool hasBeebotNamespaceId() const { return this->beebotNamespaceId_ != nullptr;};
        void deleteBeebotNamespaceId() { this->beebotNamespaceId_ = nullptr;};
        inline string getBeebotNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(beebotNamespaceId_, "") };
        inline BeebotInfo& setBeebotNamespaceId(string beebotNamespaceId) { DARABONBA_PTR_SET_VALUE(beebotNamespaceId_, beebotNamespaceId) };


      protected:
        shared_ptr<string> beebotInstanceId_ {};
        shared_ptr<string> beebotNamespaceId_ {};
      };

      class AgentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AgentKeywords, agentKeywords_);
          DARABONBA_PTR_TO_JSON(AgentNoKeywords, agentNoKeywords_);
        };
        friend void from_json(const Darabonba::Json& j, AgentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentKeywords, agentKeywords_);
          DARABONBA_PTR_FROM_JSON(AgentNoKeywords, agentNoKeywords_);
        };
        AgentInfo() = default ;
        AgentInfo(const AgentInfo &) = default ;
        AgentInfo(AgentInfo &&) = default ;
        AgentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentInfo() = default ;
        AgentInfo& operator=(const AgentInfo &) = default ;
        AgentInfo& operator=(AgentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentKeywords_ == nullptr
        && this->agentNoKeywords_ == nullptr; };
        // agentKeywords Field Functions 
        bool hasAgentKeywords() const { return this->agentKeywords_ != nullptr;};
        void deleteAgentKeywords() { this->agentKeywords_ = nullptr;};
        inline string getAgentKeywords() const { DARABONBA_PTR_GET_DEFAULT(agentKeywords_, "") };
        inline AgentInfo& setAgentKeywords(string agentKeywords) { DARABONBA_PTR_SET_VALUE(agentKeywords_, agentKeywords) };


        // agentNoKeywords Field Functions 
        bool hasAgentNoKeywords() const { return this->agentNoKeywords_ != nullptr;};
        void deleteAgentNoKeywords() { this->agentNoKeywords_ = nullptr;};
        inline string getAgentNoKeywords() const { DARABONBA_PTR_GET_DEFAULT(agentNoKeywords_, "") };
        inline AgentInfo& setAgentNoKeywords(string agentNoKeywords) { DARABONBA_PTR_SET_VALUE(agentNoKeywords_, agentNoKeywords) };


      protected:
        shared_ptr<string> agentKeywords_ {};
        shared_ptr<string> agentNoKeywords_ {};
      };

      virtual bool empty() const override { return this->agentInfo_ == nullptr
        && this->beebotInfo_ == nullptr && this->instagramInfo_ == nullptr; };
      // agentInfo Field Functions 
      bool hasAgentInfo() const { return this->agentInfo_ != nullptr;};
      void deleteAgentInfo() { this->agentInfo_ = nullptr;};
      inline const Data::AgentInfo & getAgentInfo() const { DARABONBA_PTR_GET_CONST(agentInfo_, Data::AgentInfo) };
      inline Data::AgentInfo getAgentInfo() { DARABONBA_PTR_GET(agentInfo_, Data::AgentInfo) };
      inline Data& setAgentInfo(const Data::AgentInfo & agentInfo) { DARABONBA_PTR_SET_VALUE(agentInfo_, agentInfo) };
      inline Data& setAgentInfo(Data::AgentInfo && agentInfo) { DARABONBA_PTR_SET_RVALUE(agentInfo_, agentInfo) };


      // beebotInfo Field Functions 
      bool hasBeebotInfo() const { return this->beebotInfo_ != nullptr;};
      void deleteBeebotInfo() { this->beebotInfo_ = nullptr;};
      inline const Data::BeebotInfo & getBeebotInfo() const { DARABONBA_PTR_GET_CONST(beebotInfo_, Data::BeebotInfo) };
      inline Data::BeebotInfo getBeebotInfo() { DARABONBA_PTR_GET(beebotInfo_, Data::BeebotInfo) };
      inline Data& setBeebotInfo(const Data::BeebotInfo & beebotInfo) { DARABONBA_PTR_SET_VALUE(beebotInfo_, beebotInfo) };
      inline Data& setBeebotInfo(Data::BeebotInfo && beebotInfo) { DARABONBA_PTR_SET_RVALUE(beebotInfo_, beebotInfo) };


      // instagramInfo Field Functions 
      bool hasInstagramInfo() const { return this->instagramInfo_ != nullptr;};
      void deleteInstagramInfo() { this->instagramInfo_ = nullptr;};
      inline const Data::InstagramInfo & getInstagramInfo() const { DARABONBA_PTR_GET_CONST(instagramInfo_, Data::InstagramInfo) };
      inline Data::InstagramInfo getInstagramInfo() { DARABONBA_PTR_GET(instagramInfo_, Data::InstagramInfo) };
      inline Data& setInstagramInfo(const Data::InstagramInfo & instagramInfo) { DARABONBA_PTR_SET_VALUE(instagramInfo_, instagramInfo) };
      inline Data& setInstagramInfo(Data::InstagramInfo && instagramInfo) { DARABONBA_PTR_SET_RVALUE(instagramInfo_, instagramInfo) };


    protected:
      shared_ptr<Data::AgentInfo> agentInfo_ {};
      shared_ptr<Data::BeebotInfo> beebotInfo_ {};
      shared_ptr<Data::InstagramInfo> instagramInfo_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListInstagramPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstagramPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstagramPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstagramPageResponseBody::Data) };
    inline ListInstagramPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstagramPageResponseBody::Data) };
    inline ListInstagramPageResponseBody& setData(const ListInstagramPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstagramPageResponseBody& setData(ListInstagramPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstagramPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstagramPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstagramPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ListInstagramPageResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
