// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSESSIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSESSIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationSessionLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSessionLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSessionLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeApplicationSessionLogsResponseBody() = default ;
    DescribeApplicationSessionLogsResponseBody(const DescribeApplicationSessionLogsResponseBody &) = default ;
    DescribeApplicationSessionLogsResponseBody(DescribeApplicationSessionLogsResponseBody &&) = default ;
    DescribeApplicationSessionLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSessionLogsResponseBody() = default ;
    DescribeApplicationSessionLogsResponseBody& operator=(const DescribeApplicationSessionLogsResponseBody &) = default ;
    DescribeApplicationSessionLogsResponseBody& operator=(DescribeApplicationSessionLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItemsItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemsItem& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(Api, api_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(DetailDurationMs, detailDurationMs_);
          DARABONBA_PTR_TO_JSON(DetailIsError, detailIsError_);
          DARABONBA_PTR_TO_JSON(DetailStatus, detailStatus_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StopReason, stopReason_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Thinking, thinking_);
          DARABONBA_PTR_TO_JSON(ThinkingSignature, thinkingSignature_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(ToolName, toolName_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UsageCacheRead, usageCacheRead_);
          DARABONBA_PTR_TO_JSON(UsageCacheWrite, usageCacheWrite_);
          DARABONBA_PTR_TO_JSON(UsageCostCacheRead, usageCostCacheRead_);
          DARABONBA_PTR_TO_JSON(UsageCostCacheWrite, usageCostCacheWrite_);
          DARABONBA_PTR_TO_JSON(UsageCostInput, usageCostInput_);
          DARABONBA_PTR_TO_JSON(UsageCostOutput, usageCostOutput_);
          DARABONBA_PTR_TO_JSON(UsageCostTotal, usageCostTotal_);
          DARABONBA_PTR_TO_JSON(UsageInput, usageInput_);
          DARABONBA_PTR_TO_JSON(UsageOutput, usageOutput_);
          DARABONBA_PTR_TO_JSON(UsageTotalTokens, usageTotalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, ItemsItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(Api, api_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(DetailDurationMs, detailDurationMs_);
          DARABONBA_PTR_FROM_JSON(DetailIsError, detailIsError_);
          DARABONBA_PTR_FROM_JSON(DetailStatus, detailStatus_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StopReason, stopReason_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Thinking, thinking_);
          DARABONBA_PTR_FROM_JSON(ThinkingSignature, thinkingSignature_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UsageCacheRead, usageCacheRead_);
          DARABONBA_PTR_FROM_JSON(UsageCacheWrite, usageCacheWrite_);
          DARABONBA_PTR_FROM_JSON(UsageCostCacheRead, usageCostCacheRead_);
          DARABONBA_PTR_FROM_JSON(UsageCostCacheWrite, usageCostCacheWrite_);
          DARABONBA_PTR_FROM_JSON(UsageCostInput, usageCostInput_);
          DARABONBA_PTR_FROM_JSON(UsageCostOutput, usageCostOutput_);
          DARABONBA_PTR_FROM_JSON(UsageCostTotal, usageCostTotal_);
          DARABONBA_PTR_FROM_JSON(UsageInput, usageInput_);
          DARABONBA_PTR_FROM_JSON(UsageOutput, usageOutput_);
          DARABONBA_PTR_FROM_JSON(UsageTotalTokens, usageTotalTokens_);
        };
        ItemsItem() = default ;
        ItemsItem(const ItemsItem &) = default ;
        ItemsItem(ItemsItem &&) = default ;
        ItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemsItem() = default ;
        ItemsItem& operator=(const ItemsItem &) = default ;
        ItemsItem& operator=(ItemsItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agent_ == nullptr
        && this->api_ == nullptr && this->content_ == nullptr && this->detailDurationMs_ == nullptr && this->detailIsError_ == nullptr && this->detailStatus_ == nullptr
        && this->id_ == nullptr && this->model_ == nullptr && this->parentId_ == nullptr && this->provider_ == nullptr && this->role_ == nullptr
        && this->sessionId_ == nullptr && this->status_ == nullptr && this->stopReason_ == nullptr && this->text_ == nullptr && this->thinking_ == nullptr
        && this->thinkingSignature_ == nullptr && this->time_ == nullptr && this->timestamp_ == nullptr && this->toolName_ == nullptr && this->totalTokens_ == nullptr
        && this->type_ == nullptr && this->usageCacheRead_ == nullptr && this->usageCacheWrite_ == nullptr && this->usageCostCacheRead_ == nullptr && this->usageCostCacheWrite_ == nullptr
        && this->usageCostInput_ == nullptr && this->usageCostOutput_ == nullptr && this->usageCostTotal_ == nullptr && this->usageInput_ == nullptr && this->usageOutput_ == nullptr
        && this->usageTotalTokens_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline string getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
        inline ItemsItem& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


        // api Field Functions 
        bool hasApi() const { return this->api_ != nullptr;};
        void deleteApi() { this->api_ = nullptr;};
        inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
        inline ItemsItem& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ItemsItem& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // detailDurationMs Field Functions 
        bool hasDetailDurationMs() const { return this->detailDurationMs_ != nullptr;};
        void deleteDetailDurationMs() { this->detailDurationMs_ = nullptr;};
        inline int64_t getDetailDurationMs() const { DARABONBA_PTR_GET_DEFAULT(detailDurationMs_, 0L) };
        inline ItemsItem& setDetailDurationMs(int64_t detailDurationMs) { DARABONBA_PTR_SET_VALUE(detailDurationMs_, detailDurationMs) };


        // detailIsError Field Functions 
        bool hasDetailIsError() const { return this->detailIsError_ != nullptr;};
        void deleteDetailIsError() { this->detailIsError_ = nullptr;};
        inline bool getDetailIsError() const { DARABONBA_PTR_GET_DEFAULT(detailIsError_, false) };
        inline ItemsItem& setDetailIsError(bool detailIsError) { DARABONBA_PTR_SET_VALUE(detailIsError_, detailIsError) };


        // detailStatus Field Functions 
        bool hasDetailStatus() const { return this->detailStatus_ != nullptr;};
        void deleteDetailStatus() { this->detailStatus_ = nullptr;};
        inline string getDetailStatus() const { DARABONBA_PTR_GET_DEFAULT(detailStatus_, "") };
        inline ItemsItem& setDetailStatus(string detailStatus) { DARABONBA_PTR_SET_VALUE(detailStatus_, detailStatus) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ItemsItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline ItemsItem& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline ItemsItem& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline ItemsItem& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline ItemsItem& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline ItemsItem& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ItemsItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stopReason Field Functions 
        bool hasStopReason() const { return this->stopReason_ != nullptr;};
        void deleteStopReason() { this->stopReason_ = nullptr;};
        inline string getStopReason() const { DARABONBA_PTR_GET_DEFAULT(stopReason_, "") };
        inline ItemsItem& setStopReason(string stopReason) { DARABONBA_PTR_SET_VALUE(stopReason_, stopReason) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline ItemsItem& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // thinking Field Functions 
        bool hasThinking() const { return this->thinking_ != nullptr;};
        void deleteThinking() { this->thinking_ = nullptr;};
        inline string getThinking() const { DARABONBA_PTR_GET_DEFAULT(thinking_, "") };
        inline ItemsItem& setThinking(string thinking) { DARABONBA_PTR_SET_VALUE(thinking_, thinking) };


        // thinkingSignature Field Functions 
        bool hasThinkingSignature() const { return this->thinkingSignature_ != nullptr;};
        void deleteThinkingSignature() { this->thinkingSignature_ = nullptr;};
        inline string getThinkingSignature() const { DARABONBA_PTR_GET_DEFAULT(thinkingSignature_, "") };
        inline ItemsItem& setThinkingSignature(string thinkingSignature) { DARABONBA_PTR_SET_VALUE(thinkingSignature_, thinkingSignature) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ItemsItem& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline ItemsItem& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // toolName Field Functions 
        bool hasToolName() const { return this->toolName_ != nullptr;};
        void deleteToolName() { this->toolName_ = nullptr;};
        inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
        inline ItemsItem& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline ItemsItem& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ItemsItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // usageCacheRead Field Functions 
        bool hasUsageCacheRead() const { return this->usageCacheRead_ != nullptr;};
        void deleteUsageCacheRead() { this->usageCacheRead_ = nullptr;};
        inline int64_t getUsageCacheRead() const { DARABONBA_PTR_GET_DEFAULT(usageCacheRead_, 0L) };
        inline ItemsItem& setUsageCacheRead(int64_t usageCacheRead) { DARABONBA_PTR_SET_VALUE(usageCacheRead_, usageCacheRead) };


        // usageCacheWrite Field Functions 
        bool hasUsageCacheWrite() const { return this->usageCacheWrite_ != nullptr;};
        void deleteUsageCacheWrite() { this->usageCacheWrite_ = nullptr;};
        inline int64_t getUsageCacheWrite() const { DARABONBA_PTR_GET_DEFAULT(usageCacheWrite_, 0L) };
        inline ItemsItem& setUsageCacheWrite(int64_t usageCacheWrite) { DARABONBA_PTR_SET_VALUE(usageCacheWrite_, usageCacheWrite) };


        // usageCostCacheRead Field Functions 
        bool hasUsageCostCacheRead() const { return this->usageCostCacheRead_ != nullptr;};
        void deleteUsageCostCacheRead() { this->usageCostCacheRead_ = nullptr;};
        inline int64_t getUsageCostCacheRead() const { DARABONBA_PTR_GET_DEFAULT(usageCostCacheRead_, 0L) };
        inline ItemsItem& setUsageCostCacheRead(int64_t usageCostCacheRead) { DARABONBA_PTR_SET_VALUE(usageCostCacheRead_, usageCostCacheRead) };


        // usageCostCacheWrite Field Functions 
        bool hasUsageCostCacheWrite() const { return this->usageCostCacheWrite_ != nullptr;};
        void deleteUsageCostCacheWrite() { this->usageCostCacheWrite_ = nullptr;};
        inline int64_t getUsageCostCacheWrite() const { DARABONBA_PTR_GET_DEFAULT(usageCostCacheWrite_, 0L) };
        inline ItemsItem& setUsageCostCacheWrite(int64_t usageCostCacheWrite) { DARABONBA_PTR_SET_VALUE(usageCostCacheWrite_, usageCostCacheWrite) };


        // usageCostInput Field Functions 
        bool hasUsageCostInput() const { return this->usageCostInput_ != nullptr;};
        void deleteUsageCostInput() { this->usageCostInput_ = nullptr;};
        inline int64_t getUsageCostInput() const { DARABONBA_PTR_GET_DEFAULT(usageCostInput_, 0L) };
        inline ItemsItem& setUsageCostInput(int64_t usageCostInput) { DARABONBA_PTR_SET_VALUE(usageCostInput_, usageCostInput) };


        // usageCostOutput Field Functions 
        bool hasUsageCostOutput() const { return this->usageCostOutput_ != nullptr;};
        void deleteUsageCostOutput() { this->usageCostOutput_ = nullptr;};
        inline int64_t getUsageCostOutput() const { DARABONBA_PTR_GET_DEFAULT(usageCostOutput_, 0L) };
        inline ItemsItem& setUsageCostOutput(int64_t usageCostOutput) { DARABONBA_PTR_SET_VALUE(usageCostOutput_, usageCostOutput) };


        // usageCostTotal Field Functions 
        bool hasUsageCostTotal() const { return this->usageCostTotal_ != nullptr;};
        void deleteUsageCostTotal() { this->usageCostTotal_ = nullptr;};
        inline int64_t getUsageCostTotal() const { DARABONBA_PTR_GET_DEFAULT(usageCostTotal_, 0L) };
        inline ItemsItem& setUsageCostTotal(int64_t usageCostTotal) { DARABONBA_PTR_SET_VALUE(usageCostTotal_, usageCostTotal) };


        // usageInput Field Functions 
        bool hasUsageInput() const { return this->usageInput_ != nullptr;};
        void deleteUsageInput() { this->usageInput_ = nullptr;};
        inline int64_t getUsageInput() const { DARABONBA_PTR_GET_DEFAULT(usageInput_, 0L) };
        inline ItemsItem& setUsageInput(int64_t usageInput) { DARABONBA_PTR_SET_VALUE(usageInput_, usageInput) };


        // usageOutput Field Functions 
        bool hasUsageOutput() const { return this->usageOutput_ != nullptr;};
        void deleteUsageOutput() { this->usageOutput_ = nullptr;};
        inline int64_t getUsageOutput() const { DARABONBA_PTR_GET_DEFAULT(usageOutput_, 0L) };
        inline ItemsItem& setUsageOutput(int64_t usageOutput) { DARABONBA_PTR_SET_VALUE(usageOutput_, usageOutput) };


        // usageTotalTokens Field Functions 
        bool hasUsageTotalTokens() const { return this->usageTotalTokens_ != nullptr;};
        void deleteUsageTotalTokens() { this->usageTotalTokens_ = nullptr;};
        inline int64_t getUsageTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(usageTotalTokens_, 0L) };
        inline ItemsItem& setUsageTotalTokens(int64_t usageTotalTokens) { DARABONBA_PTR_SET_VALUE(usageTotalTokens_, usageTotalTokens) };


      protected:
        shared_ptr<string> agent_ {};
        shared_ptr<string> api_ {};
        shared_ptr<string> content_ {};
        shared_ptr<int64_t> detailDurationMs_ {};
        shared_ptr<bool> detailIsError_ {};
        shared_ptr<string> detailStatus_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> model_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<string> provider_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> stopReason_ {};
        shared_ptr<string> text_ {};
        shared_ptr<string> thinking_ {};
        shared_ptr<string> thinkingSignature_ {};
        shared_ptr<string> time_ {};
        shared_ptr<string> timestamp_ {};
        shared_ptr<string> toolName_ {};
        shared_ptr<int64_t> totalTokens_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> usageCacheRead_ {};
        shared_ptr<int64_t> usageCacheWrite_ {};
        shared_ptr<int64_t> usageCostCacheRead_ {};
        shared_ptr<int64_t> usageCostCacheWrite_ {};
        shared_ptr<int64_t> usageCostInput_ {};
        shared_ptr<int64_t> usageCostOutput_ {};
        shared_ptr<int64_t> usageCostTotal_ {};
        shared_ptr<int64_t> usageInput_ {};
        shared_ptr<int64_t> usageOutput_ {};
        shared_ptr<int64_t> usageTotalTokens_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Items::ItemsItem> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Items::ItemsItem>) };
      inline vector<Items::ItemsItem> getItems() { DARABONBA_PTR_GET(items_, vector<Items::ItemsItem>) };
      inline Items& setItems(const vector<Items::ItemsItem> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Items& setItems(vector<Items::ItemsItem> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<Items::ItemsItem>> items_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationSessionLogsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeApplicationSessionLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeApplicationSessionLogsResponseBody::Items) };
    inline DescribeApplicationSessionLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeApplicationSessionLogsResponseBody::Items) };
    inline DescribeApplicationSessionLogsResponseBody& setItems(const DescribeApplicationSessionLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeApplicationSessionLogsResponseBody& setItems(DescribeApplicationSessionLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApplicationSessionLogsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int64_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0L) };
    inline DescribeApplicationSessionLogsResponseBody& setPageRecordCount(int64_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationSessionLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeApplicationSessionLogsResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    shared_ptr<DescribeApplicationSessionLogsResponseBody::Items> items_ {};
    // The current page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of log records returned on the current page.
    shared_ptr<int64_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of log records that meet the query conditions.
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
