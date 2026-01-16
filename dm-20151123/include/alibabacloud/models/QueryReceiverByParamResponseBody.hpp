// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryReceiverByParamResponseBody() = default ;
    QueryReceiverByParamResponseBody(const QueryReceiverByParamResponseBody &) = default ;
    QueryReceiverByParamResponseBody(QueryReceiverByParamResponseBody &&) = default ;
    QueryReceiverByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverByParamResponseBody() = default ;
    QueryReceiverByParamResponseBody& operator=(const QueryReceiverByParamResponseBody &) = default ;
    QueryReceiverByParamResponseBody& operator=(QueryReceiverByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(receiver, receiver_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(receiver, receiver_);
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
      class Receiver : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Receiver& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
          DARABONBA_PTR_TO_JSON(ReceiversAlias, receiversAlias_);
          DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
          DARABONBA_PTR_TO_JSON(ReceiversStatus, receiversStatus_);
          DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Receiver& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
          DARABONBA_PTR_FROM_JSON(ReceiversAlias, receiversAlias_);
          DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
          DARABONBA_PTR_FROM_JSON(ReceiversStatus, receiversStatus_);
          DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
        };
        Receiver() = default ;
        Receiver(const Receiver &) = default ;
        Receiver(Receiver &&) = default ;
        Receiver(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Receiver() = default ;
        Receiver& operator=(const Receiver &) = default ;
        Receiver& operator=(Receiver &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->createTime_ == nullptr && this->desc_ == nullptr && this->receiverId_ == nullptr && this->receiversAlias_ == nullptr && this->receiversName_ == nullptr
        && this->receiversStatus_ == nullptr && this->utcCreateTime_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline Receiver& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Receiver& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Receiver& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // receiverId Field Functions 
        bool hasReceiverId() const { return this->receiverId_ != nullptr;};
        void deleteReceiverId() { this->receiverId_ = nullptr;};
        inline string getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
        inline Receiver& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


        // receiversAlias Field Functions 
        bool hasReceiversAlias() const { return this->receiversAlias_ != nullptr;};
        void deleteReceiversAlias() { this->receiversAlias_ = nullptr;};
        inline string getReceiversAlias() const { DARABONBA_PTR_GET_DEFAULT(receiversAlias_, "") };
        inline Receiver& setReceiversAlias(string receiversAlias) { DARABONBA_PTR_SET_VALUE(receiversAlias_, receiversAlias) };


        // receiversName Field Functions 
        bool hasReceiversName() const { return this->receiversName_ != nullptr;};
        void deleteReceiversName() { this->receiversName_ = nullptr;};
        inline string getReceiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
        inline Receiver& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


        // receiversStatus Field Functions 
        bool hasReceiversStatus() const { return this->receiversStatus_ != nullptr;};
        void deleteReceiversStatus() { this->receiversStatus_ = nullptr;};
        inline string getReceiversStatus() const { DARABONBA_PTR_GET_DEFAULT(receiversStatus_, "") };
        inline Receiver& setReceiversStatus(string receiversStatus) { DARABONBA_PTR_SET_VALUE(receiversStatus_, receiversStatus) };


        // utcCreateTime Field Functions 
        bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
        void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
        inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
        inline Receiver& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


      protected:
        // Total number of recipient addresses
        shared_ptr<string> count_ {};
        // Creation time
        shared_ptr<string> createTime_ {};
        // Description
        shared_ptr<string> desc_ {};
        // Recipient list ID
        shared_ptr<string> receiverId_ {};
        // Recipient list alias
        shared_ptr<string> receiversAlias_ {};
        // Recipient list name
        shared_ptr<string> receiversName_ {};
        // List status. Values:
        // 
        // - 0: Uploading
        // - 1: Upload completed
        shared_ptr<string> receiversStatus_ {};
        // UTC formatted creation time
        shared_ptr<int64_t> utcCreateTime_ {};
      };

      virtual bool empty() const override { return this->receiver_ == nullptr; };
      // receiver Field Functions 
      bool hasReceiver() const { return this->receiver_ != nullptr;};
      void deleteReceiver() { this->receiver_ = nullptr;};
      inline const vector<Data::Receiver> & getReceiver() const { DARABONBA_PTR_GET_CONST(receiver_, vector<Data::Receiver>) };
      inline vector<Data::Receiver> getReceiver() { DARABONBA_PTR_GET(receiver_, vector<Data::Receiver>) };
      inline Data& setReceiver(const vector<Data::Receiver> & receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };
      inline Data& setReceiver(vector<Data::Receiver> && receiver) { DARABONBA_PTR_SET_RVALUE(receiver_, receiver) };


    protected:
      shared_ptr<vector<Data::Receiver>> receiver_ {};
    };

    virtual bool empty() const override { return this->nextStart_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string getNextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryReceiverByParamResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryReceiverByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReceiverByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryReceiverByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryReceiverByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryReceiverByParamResponseBody::Data) };
    inline QueryReceiverByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryReceiverByParamResponseBody::Data) };
    inline QueryReceiverByParamResponseBody& setData(const QueryReceiverByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryReceiverByParamResponseBody& setData(QueryReceiverByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    shared_ptr<string> nextStart_ {};
    // Number of items displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // Detailed information of the recipient list
    shared_ptr<QueryReceiverByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
