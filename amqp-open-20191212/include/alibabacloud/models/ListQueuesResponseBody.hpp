// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListQueuesResponseBody() = default ;
    ListQueuesResponseBody(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody(ListQueuesResponseBody &&) = default ;
    ListQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBody() = default ;
    ListQueuesResponseBody& operator=(const ListQueuesResponseBody &) = default ;
    ListQueuesResponseBody& operator=(ListQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Queues, queues_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Queues, queues_);
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
          DARABONBA_ANY_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExclusiveState, exclusiveState_);
          DARABONBA_PTR_TO_JSON(LastConsumeTime, lastConsumeTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(VHostName, VHostName_);
        };
        friend void from_json(const Darabonba::Json& j, Queues& obj) { 
          DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExclusiveState, exclusiveState_);
          DARABONBA_PTR_FROM_JSON(LastConsumeTime, lastConsumeTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(VHostName, VHostName_);
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
        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->autoDeleteState_ == nullptr && this->createTime_ == nullptr && this->exclusiveState_ == nullptr && this->lastConsumeTime_ == nullptr && this->name_ == nullptr
        && this->ownerId_ == nullptr && this->VHostName_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline         const Darabonba::Json & getAttributes() const { DARABONBA_GET(attributes_) };
        Darabonba::Json & getAttributes() { DARABONBA_GET(attributes_) };
        inline Queues& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
        inline Queues& setAttributes(Darabonba::Json && attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


        // autoDeleteState Field Functions 
        bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
        void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
        inline bool getAutoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
        inline Queues& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Queues& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // exclusiveState Field Functions 
        bool hasExclusiveState() const { return this->exclusiveState_ != nullptr;};
        void deleteExclusiveState() { this->exclusiveState_ = nullptr;};
        inline bool getExclusiveState() const { DARABONBA_PTR_GET_DEFAULT(exclusiveState_, false) };
        inline Queues& setExclusiveState(bool exclusiveState) { DARABONBA_PTR_SET_VALUE(exclusiveState_, exclusiveState) };


        // lastConsumeTime Field Functions 
        bool hasLastConsumeTime() const { return this->lastConsumeTime_ != nullptr;};
        void deleteLastConsumeTime() { this->lastConsumeTime_ = nullptr;};
        inline int64_t getLastConsumeTime() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTime_, 0L) };
        inline Queues& setLastConsumeTime(int64_t lastConsumeTime) { DARABONBA_PTR_SET_VALUE(lastConsumeTime_, lastConsumeTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Queues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Queues& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // VHostName Field Functions 
        bool hasVHostName() const { return this->VHostName_ != nullptr;};
        void deleteVHostName() { this->VHostName_ = nullptr;};
        inline string getVHostName() const { DARABONBA_PTR_GET_DEFAULT(VHostName_, "") };
        inline Queues& setVHostName(string VHostName) { DARABONBA_PTR_SET_VALUE(VHostName_, VHostName) };


      protected:
        // The attributes.
        Darabonba::Json attributes_ {};
        // The auto-delete status.
        shared_ptr<bool> autoDeleteState_ {};
        // The time when the queue was created.
        shared_ptr<int64_t> createTime_ {};
        // Indicates whether the queue is an exclusive queue.
        shared_ptr<bool> exclusiveState_ {};
        // The last time a message was consumed from the queue.
        shared_ptr<int64_t> lastConsumeTime_ {};
        // The queue name.
        shared_ptr<string> name_ {};
        // The ID of the instance to which the queue belongs.
        shared_ptr<string> ownerId_ {};
        // The vhost name.
        shared_ptr<string> VHostName_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->queues_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // queues Field Functions 
      bool hasQueues() const { return this->queues_ != nullptr;};
      void deleteQueues() { this->queues_ = nullptr;};
      inline const vector<Data::Queues> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<Data::Queues>) };
      inline vector<Data::Queues> getQueues() { DARABONBA_PTR_GET(queues_, vector<Data::Queues>) };
      inline Data& setQueues(const vector<Data::Queues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
      inline Data& setQueues(vector<Data::Queues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    protected:
      // The maximum number of results returned.
      shared_ptr<int32_t> maxResults_ {};
      // The token that is used to retrieve the next page of results. If this parameter is empty, all results have been returned.
      shared_ptr<string> nextToken_ {};
      // The queues.
      shared_ptr<vector<Data::Queues>> queues_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQueuesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQueuesResponseBody::Data) };
    inline ListQueuesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQueuesResponseBody::Data) };
    inline ListQueuesResponseBody& setData(const ListQueuesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQueuesResponseBody& setData(ListQueuesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListQueuesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
