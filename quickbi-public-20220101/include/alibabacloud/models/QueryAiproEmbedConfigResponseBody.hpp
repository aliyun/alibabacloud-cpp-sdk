// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIPROEMBEDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIPROEMBEDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryAiproEmbedConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiproEmbedConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiproEmbedConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiproEmbedConfigResponseBody() = default ;
    QueryAiproEmbedConfigResponseBody(const QueryAiproEmbedConfigResponseBody &) = default ;
    QueryAiproEmbedConfigResponseBody(QueryAiproEmbedConfigResponseBody &&) = default ;
    QueryAiproEmbedConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiproEmbedConfigResponseBody() = default ;
    QueryAiproEmbedConfigResponseBody& operator=(const QueryAiproEmbedConfigResponseBody &) = default ;
    QueryAiproEmbedConfigResponseBody& operator=(QueryAiproEmbedConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(AiProId, aiProId_);
        DARABONBA_PTR_TO_JSON(ChatHistoryStatus, chatHistoryStatus_);
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(MemoryEnabled, memoryEnabled_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UploadEnabled, uploadEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AiProId, aiProId_);
        DARABONBA_PTR_FROM_JSON(ChatHistoryStatus, chatHistoryStatus_);
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(MemoryEnabled, memoryEnabled_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UploadEnabled, uploadEnabled_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentName_ == nullptr
        && this->aiProId_ == nullptr && this->chatHistoryStatus_ == nullptr && this->config_ == nullptr && this->memoryEnabled_ == nullptr && this->showName_ == nullptr
        && this->status_ == nullptr && this->uploadEnabled_ == nullptr; };
      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Result& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // aiProId Field Functions 
      bool hasAiProId() const { return this->aiProId_ != nullptr;};
      void deleteAiProId() { this->aiProId_ = nullptr;};
      inline string getAiProId() const { DARABONBA_PTR_GET_DEFAULT(aiProId_, "") };
      inline Result& setAiProId(string aiProId) { DARABONBA_PTR_SET_VALUE(aiProId_, aiProId) };


      // chatHistoryStatus Field Functions 
      bool hasChatHistoryStatus() const { return this->chatHistoryStatus_ != nullptr;};
      void deleteChatHistoryStatus() { this->chatHistoryStatus_ = nullptr;};
      inline int32_t getChatHistoryStatus() const { DARABONBA_PTR_GET_DEFAULT(chatHistoryStatus_, 0) };
      inline Result& setChatHistoryStatus(int32_t chatHistoryStatus) { DARABONBA_PTR_SET_VALUE(chatHistoryStatus_, chatHistoryStatus) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Result& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // memoryEnabled Field Functions 
      bool hasMemoryEnabled() const { return this->memoryEnabled_ != nullptr;};
      void deleteMemoryEnabled() { this->memoryEnabled_ = nullptr;};
      inline int32_t getMemoryEnabled() const { DARABONBA_PTR_GET_DEFAULT(memoryEnabled_, 0) };
      inline Result& setMemoryEnabled(int32_t memoryEnabled) { DARABONBA_PTR_SET_VALUE(memoryEnabled_, memoryEnabled) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Result& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // uploadEnabled Field Functions 
      bool hasUploadEnabled() const { return this->uploadEnabled_ != nullptr;};
      void deleteUploadEnabled() { this->uploadEnabled_ = nullptr;};
      inline int32_t getUploadEnabled() const { DARABONBA_PTR_GET_DEFAULT(uploadEnabled_, 0) };
      inline Result& setUploadEnabled(int32_t uploadEnabled) { DARABONBA_PTR_SET_VALUE(uploadEnabled_, uploadEnabled) };


    protected:
      shared_ptr<string> agentName_ {};
      shared_ptr<string> aiProId_ {};
      shared_ptr<int32_t> chatHistoryStatus_ {};
      shared_ptr<string> config_ {};
      shared_ptr<int32_t> memoryEnabled_ {};
      shared_ptr<string> showName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int32_t> uploadEnabled_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiproEmbedConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryAiproEmbedConfigResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryAiproEmbedConfigResponseBody::Result>) };
    inline vector<QueryAiproEmbedConfigResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryAiproEmbedConfigResponseBody::Result>) };
    inline QueryAiproEmbedConfigResponseBody& setResult(const vector<QueryAiproEmbedConfigResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryAiproEmbedConfigResponseBody& setResult(vector<QueryAiproEmbedConfigResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiproEmbedConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryAiproEmbedConfigResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
