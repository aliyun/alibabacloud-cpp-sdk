// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListQueuesResponseBody() = default ;
    ClinkListQueuesResponseBody(const ClinkListQueuesResponseBody &) = default ;
    ClinkListQueuesResponseBody(ClinkListQueuesResponseBody &&) = default ;
    ClinkListQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListQueuesResponseBody() = default ;
    ClinkListQueuesResponseBody& operator=(const ClinkListQueuesResponseBody &) = default ;
    ClinkListQueuesResponseBody& operator=(ClinkListQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Queues, queues_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Queues, queues_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Queues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Queues& obj) { 
          DARABONBA_PTR_TO_JSON(CallClientNum, callClientNum_);
          DARABONBA_PTR_TO_JSON(ChatClientNum, chatClientNum_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OmniClientNum, omniClientNum_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
        };
        friend void from_json(const Darabonba::Json& j, Queues& obj) { 
          DARABONBA_PTR_FROM_JSON(CallClientNum, callClientNum_);
          DARABONBA_PTR_FROM_JSON(ChatClientNum, chatClientNum_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OmniClientNum, omniClientNum_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
        };
        Queues() = default ;
        Queues(const Queues &) = default ;
        Queues(Queues &&) = default ;
        Queues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Queues() = default ;
        Queues& operator=(const Queues &) = default ;
        Queues& operator=(Queues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callClientNum_ == nullptr
        && this->chatClientNum_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->omniClientNum_ == nullptr && this->qno_ == nullptr; };
        // callClientNum Field Functions 
        bool hasCallClientNum() const { return this->callClientNum_ != nullptr;};
        void deleteCallClientNum() { this->callClientNum_ = nullptr;};
        inline int64_t getCallClientNum() const { DARABONBA_PTR_GET_DEFAULT(callClientNum_, 0L) };
        inline Queues& setCallClientNum(int64_t callClientNum) { DARABONBA_PTR_SET_VALUE(callClientNum_, callClientNum) };


        // chatClientNum Field Functions 
        bool hasChatClientNum() const { return this->chatClientNum_ != nullptr;};
        void deleteChatClientNum() { this->chatClientNum_ = nullptr;};
        inline int64_t getChatClientNum() const { DARABONBA_PTR_GET_DEFAULT(chatClientNum_, 0L) };
        inline Queues& setChatClientNum(int64_t chatClientNum) { DARABONBA_PTR_SET_VALUE(chatClientNum_, chatClientNum) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Queues& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Queues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // omniClientNum Field Functions 
        bool hasOmniClientNum() const { return this->omniClientNum_ != nullptr;};
        void deleteOmniClientNum() { this->omniClientNum_ = nullptr;};
        inline int64_t getOmniClientNum() const { DARABONBA_PTR_GET_DEFAULT(omniClientNum_, 0L) };
        inline Queues& setOmniClientNum(int64_t omniClientNum) { DARABONBA_PTR_SET_VALUE(omniClientNum_, omniClientNum) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline Queues& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


      protected:
        // 呼叫中心座席数
        shared_ptr<int64_t> callClientNum_ {};
        // 在线客服数
        shared_ptr<int64_t> chatClientNum_ {};
        // 队列 Id
        shared_ptr<int64_t> id_ {};
        // 队列名
        shared_ptr<string> name_ {};
        // 全渠道座席数
        shared_ptr<int64_t> omniClientNum_ {};
        // 队列号
        shared_ptr<string> qno_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queues_ == nullptr && this->totalCount_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // queues Field Functions 
      bool hasQueues() const { return this->queues_ != nullptr;};
      void deleteQueues() { this->queues_ = nullptr;};
      inline const vector<Data::Queues> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<Data::Queues>) };
      inline vector<Data::Queues> getQueues() { DARABONBA_PTR_GET(queues_, vector<Data::Queues>) };
      inline Data& setQueues(const vector<Data::Queues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
      inline Data& setQueues(vector<Data::Queues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 本次请求id
      shared_ptr<string> clinkRequestId_ {};
      shared_ptr<int64_t> pageNumber_ {};
      // 分页大小
      shared_ptr<int64_t> pageSize_ {};
      // queues
      shared_ptr<vector<Data::Queues>> queues_ {};
      // 总数
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListQueuesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListQueuesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListQueuesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListQueuesResponseBody::Data) };
    inline ClinkListQueuesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListQueuesResponseBody::Data) };
    inline ClinkListQueuesResponseBody& setData(const ClinkListQueuesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListQueuesResponseBody& setData(ClinkListQueuesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListQueuesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListQueuesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
