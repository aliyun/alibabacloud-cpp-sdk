// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENGINESEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENGINESEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiSearchEngine20260417
{
namespace Models
{
  class EngineSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EngineSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, EngineSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    EngineSearchResponseBody() = default ;
    EngineSearchResponseBody(const EngineSearchResponseBody &) = default ;
    EngineSearchResponseBody(EngineSearchResponseBody &&) = default ;
    EngineSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EngineSearchResponseBody() = default ;
    EngineSearchResponseBody& operator=(const EngineSearchResponseBody &) = default ;
    EngineSearchResponseBody& operator=(EngineSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_ANY_TO_JSON(extra, extra_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(total, total_);
        DARABONBA_ANY_TO_JSON(traceInfo, traceInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_ANY_FROM_JSON(extra, extra_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(total, total_);
        DARABONBA_ANY_FROM_JSON(traceInfo, traceInfo_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_ANY_TO_JSON(algorithm, algorithm_);
          DARABONBA_ANY_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_ANY_TO_JSON(traceInfo, traceInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_ANY_FROM_JSON(algorithm, algorithm_);
          DARABONBA_ANY_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_ANY_FROM_JSON(traceInfo, traceInfo_);
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
        virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->content_ == nullptr && this->id_ == nullptr && this->score_ == nullptr && this->traceInfo_ == nullptr; };
        // algorithm Field Functions 
        bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
        void deleteAlgorithm() { this->algorithm_ = nullptr;};
        inline         const Darabonba::Json & getAlgorithm() const { DARABONBA_GET(algorithm_) };
        Darabonba::Json & getAlgorithm() { DARABONBA_GET(algorithm_) };
        inline Items& setAlgorithm(const Darabonba::Json & algorithm) { DARABONBA_SET_VALUE(algorithm_, algorithm) };
        inline Items& setAlgorithm(Darabonba::Json && algorithm) { DARABONBA_SET_RVALUE(algorithm_, algorithm) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline         const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
        Darabonba::Json & getContent() { DARABONBA_GET(content_) };
        inline Items& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
        inline Items& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Items& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // traceInfo Field Functions 
        bool hasTraceInfo() const { return this->traceInfo_ != nullptr;};
        void deleteTraceInfo() { this->traceInfo_ = nullptr;};
        inline         const Darabonba::Json & getTraceInfo() const { DARABONBA_GET(traceInfo_) };
        Darabonba::Json & getTraceInfo() { DARABONBA_GET(traceInfo_) };
        inline Items& setTraceInfo(const Darabonba::Json & traceInfo) { DARABONBA_SET_VALUE(traceInfo_, traceInfo) };
        inline Items& setTraceInfo(Darabonba::Json && traceInfo) { DARABONBA_SET_RVALUE(traceInfo_, traceInfo) };


      protected:
        // 算法内容
        Darabonba::Json algorithm_ {};
        // 内容详情对象（详细结构见下文）
        Darabonba::Json content_ {};
        // 权益绑定 ID
        shared_ptr<string> id_ {};
        // 相关性得分
        shared_ptr<float> score_ {};
        // 回传日志时使用。
        // 
        // 取值：
        // 
        // trace_id=ali。
        Darabonba::Json traceInfo_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->extra_ == nullptr && this->items_ == nullptr && this->page_ == nullptr && this->requestId_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr && this->total_ == nullptr && this->traceInfo_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline       const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
      Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
      inline Data& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
      inline Data& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Data& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // traceInfo Field Functions 
      bool hasTraceInfo() const { return this->traceInfo_ != nullptr;};
      void deleteTraceInfo() { this->traceInfo_ = nullptr;};
      inline       const Darabonba::Json & getTraceInfo() const { DARABONBA_GET(traceInfo_) };
      Darabonba::Json & getTraceInfo() { DARABONBA_GET(traceInfo_) };
      inline Data& setTraceInfo(const Darabonba::Json & traceInfo) { DARABONBA_SET_VALUE(traceInfo_, traceInfo) };
      inline Data& setTraceInfo(Darabonba::Json && traceInfo) { DARABONBA_SET_RVALUE(traceInfo_, traceInfo) };


    protected:
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The additional metadata. 
      // 
      // > Contains the exclude_ids field, which represents the list of IDs that were actually excluded. The format is `Array[String]`.
      // > - Example: ["id_1", "id_2"].
      Darabonba::Json extra_ {};
      // 搜索结果列表
      shared_ptr<vector<Data::Items>> items_ {};
      // The search page number.
      shared_ptr<int32_t> page_ {};
      // The response ID of this request.
      shared_ptr<string> requestId_ {};
      // The number of results returned on the current page.
      shared_ptr<int32_t> size_ {};
      // The execution status.
      // 200: succeeded.
      // 500: failed.
      shared_ptr<string> status_ {};
      // The total number of records.
      shared_ptr<int32_t> total_ {};
      // The Tracing Analysis information.
      Darabonba::Json traceInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline EngineSearchResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EngineSearchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EngineSearchResponseBody::Data) };
    inline EngineSearchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EngineSearchResponseBody::Data) };
    inline EngineSearchResponseBody& setData(const EngineSearchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EngineSearchResponseBody& setData(EngineSearchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EngineSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<int32_t> code_ {};
    // The business data body.
    shared_ptr<EngineSearchResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiSearchEngine20260417
#endif
