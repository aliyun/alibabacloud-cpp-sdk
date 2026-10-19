// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMARTIFACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMARTIFACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListWorkItemArtifactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemArtifactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemArtifactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListWorkItemArtifactsResponseBody() = default ;
    ListWorkItemArtifactsResponseBody(const ListWorkItemArtifactsResponseBody &) = default ;
    ListWorkItemArtifactsResponseBody(ListWorkItemArtifactsResponseBody &&) = default ;
    ListWorkItemArtifactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemArtifactsResponseBody() = default ;
    ListWorkItemArtifactsResponseBody& operator=(const ListWorkItemArtifactsResponseBody &) = default ;
    ListWorkItemArtifactsResponseBody& operator=(ListWorkItemArtifactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
        DARABONBA_PTR_TO_JSON(artifactKey, artifactKey_);
        DARABONBA_PTR_TO_JSON(attemptSeq, attemptSeq_);
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(nodeKey, nodeKey_);
        DARABONBA_PTR_TO_JSON(planId, planId_);
        DARABONBA_PTR_TO_JSON(ref, ref_);
        DARABONBA_PTR_TO_JSON(runId, runId_);
        DARABONBA_PTR_TO_JSON(sha256, sha256_);
        DARABONBA_PTR_TO_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_PTR_TO_JSON(title, title_);
        DARABONBA_PTR_TO_JSON(turnSeq, turnSeq_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(workItemId, workItemId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
        DARABONBA_PTR_FROM_JSON(artifactKey, artifactKey_);
        DARABONBA_PTR_FROM_JSON(attemptSeq, attemptSeq_);
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(nodeKey, nodeKey_);
        DARABONBA_PTR_FROM_JSON(planId, planId_);
        DARABONBA_PTR_FROM_JSON(ref, ref_);
        DARABONBA_PTR_FROM_JSON(runId, runId_);
        DARABONBA_PTR_FROM_JSON(sha256, sha256_);
        DARABONBA_PTR_FROM_JSON(sizeBytes, sizeBytes_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_PTR_FROM_JSON(title, title_);
        DARABONBA_PTR_FROM_JSON(turnSeq, turnSeq_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(workItemId, workItemId_);
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
      class Ref : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ref& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(kind, kind_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Ref& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(kind, kind_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Ref() = default ;
        Ref(const Ref &) = default ;
        Ref(Ref &&) = default ;
        Ref(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ref() = default ;
        Ref& operator=(const Ref &) = default ;
        Ref& operator=(Ref &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->kind_ == nullptr && this->url_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Ref& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline Ref& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Ref& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // 产物ID
        shared_ptr<string> id_ {};
        // 引用类型
        shared_ptr<string> kind_ {};
        // OpenAPI 产物访问入口
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->artifactKey_ == nullptr && this->attemptSeq_ == nullptr && this->contentType_ == nullptr && this->createdAt_ == nullptr && this->nodeKey_ == nullptr
        && this->planId_ == nullptr && this->ref_ == nullptr && this->runId_ == nullptr && this->sha256_ == nullptr && this->sizeBytes_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr && this->turnSeq_ == nullptr && this->type_ == nullptr && this->workItemId_ == nullptr; };
      // artifactId Field Functions 
      bool hasArtifactId() const { return this->artifactId_ != nullptr;};
      void deleteArtifactId() { this->artifactId_ = nullptr;};
      inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
      inline Items& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


      // artifactKey Field Functions 
      bool hasArtifactKey() const { return this->artifactKey_ != nullptr;};
      void deleteArtifactKey() { this->artifactKey_ = nullptr;};
      inline string getArtifactKey() const { DARABONBA_PTR_GET_DEFAULT(artifactKey_, "") };
      inline Items& setArtifactKey(string artifactKey) { DARABONBA_PTR_SET_VALUE(artifactKey_, artifactKey) };


      // attemptSeq Field Functions 
      bool hasAttemptSeq() const { return this->attemptSeq_ != nullptr;};
      void deleteAttemptSeq() { this->attemptSeq_ = nullptr;};
      inline int64_t getAttemptSeq() const { DARABONBA_PTR_GET_DEFAULT(attemptSeq_, 0L) };
      inline Items& setAttemptSeq(int64_t attemptSeq) { DARABONBA_PTR_SET_VALUE(attemptSeq_, attemptSeq) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Items& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // nodeKey Field Functions 
      bool hasNodeKey() const { return this->nodeKey_ != nullptr;};
      void deleteNodeKey() { this->nodeKey_ = nullptr;};
      inline string getNodeKey() const { DARABONBA_PTR_GET_DEFAULT(nodeKey_, "") };
      inline Items& setNodeKey(string nodeKey) { DARABONBA_PTR_SET_VALUE(nodeKey_, nodeKey) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline Items& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // ref Field Functions 
      bool hasRef() const { return this->ref_ != nullptr;};
      void deleteRef() { this->ref_ = nullptr;};
      inline const Items::Ref & getRef() const { DARABONBA_PTR_GET_CONST(ref_, Items::Ref) };
      inline Items::Ref getRef() { DARABONBA_PTR_GET(ref_, Items::Ref) };
      inline Items& setRef(const Items::Ref & ref) { DARABONBA_PTR_SET_VALUE(ref_, ref) };
      inline Items& setRef(Items::Ref && ref) { DARABONBA_PTR_SET_RVALUE(ref_, ref) };


      // runId Field Functions 
      bool hasRunId() const { return this->runId_ != nullptr;};
      void deleteRunId() { this->runId_ = nullptr;};
      inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
      inline Items& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Items& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


      // sizeBytes Field Functions 
      bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
      void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
      inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
      inline Items& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Items& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // turnSeq Field Functions 
      bool hasTurnSeq() const { return this->turnSeq_ != nullptr;};
      void deleteTurnSeq() { this->turnSeq_ = nullptr;};
      inline int64_t getTurnSeq() const { DARABONBA_PTR_GET_DEFAULT(turnSeq_, 0L) };
      inline Items& setTurnSeq(int64_t turnSeq) { DARABONBA_PTR_SET_VALUE(turnSeq_, turnSeq) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // workItemId Field Functions 
      bool hasWorkItemId() const { return this->workItemId_ != nullptr;};
      void deleteWorkItemId() { this->workItemId_ = nullptr;};
      inline string getWorkItemId() const { DARABONBA_PTR_GET_DEFAULT(workItemId_, "") };
      inline Items& setWorkItemId(string workItemId) { DARABONBA_PTR_SET_VALUE(workItemId_, workItemId) };


    protected:
      // 产物ID
      shared_ptr<string> artifactId_ {};
      // 产物键
      shared_ptr<string> artifactKey_ {};
      // 节点尝试序号
      shared_ptr<int64_t> attemptSeq_ {};
      // 内容类型
      shared_ptr<string> contentType_ {};
      // 创建时间(ISO8601)
      shared_ptr<string> createdAt_ {};
      // 节点键
      shared_ptr<string> nodeKey_ {};
      // 计划ID
      shared_ptr<string> planId_ {};
      // 引用信息
      shared_ptr<Items::Ref> ref_ {};
      // 运行ID
      shared_ptr<string> runId_ {};
      // 内容SHA-256
      shared_ptr<string> sha256_ {};
      // 产物大小(字节)
      shared_ptr<int64_t> sizeBytes_ {};
      // 产物摘要
      shared_ptr<string> summary_ {};
      // 产物标题
      shared_ptr<string> title_ {};
      // 会话轮次序号
      shared_ptr<int64_t> turnSeq_ {};
      // 产物类型
      shared_ptr<string> type_ {};
      // 工作项ID
      shared_ptr<string> workItemId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListWorkItemArtifactsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListWorkItemArtifactsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListWorkItemArtifactsResponseBody::Items>) };
    inline vector<ListWorkItemArtifactsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListWorkItemArtifactsResponseBody::Items>) };
    inline ListWorkItemArtifactsResponseBody& setItems(const vector<ListWorkItemArtifactsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListWorkItemArtifactsResponseBody& setItems(vector<ListWorkItemArtifactsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWorkItemArtifactsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkItemArtifactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWorkItemArtifactsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // 业务状态码；成功为200
    shared_ptr<string> code_ {};
    // 历史产物列表
    shared_ptr<vector<ListWorkItemArtifactsResponseBody::Items>> items_ {};
    // 错误描述
    shared_ptr<string> message_ {};
    // 请求追踪ID
    shared_ptr<string> requestId_ {};
    // 返回产物数量
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
