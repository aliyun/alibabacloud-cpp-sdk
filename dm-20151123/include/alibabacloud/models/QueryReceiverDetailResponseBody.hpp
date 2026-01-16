// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODY_HPP_
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
  class QueryReceiverDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSchema, dataSchema_);
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSchema, dataSchema_);
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryReceiverDetailResponseBody() = default ;
    QueryReceiverDetailResponseBody(const QueryReceiverDetailResponseBody &) = default ;
    QueryReceiverDetailResponseBody(QueryReceiverDetailResponseBody &&) = default ;
    QueryReceiverDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverDetailResponseBody() = default ;
    QueryReceiverDetailResponseBody& operator=(const QueryReceiverDetailResponseBody &) = default ;
    QueryReceiverDetailResponseBody& operator=(QueryReceiverDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(detail, detail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(detail, detail_);
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
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->data_ == nullptr && this->email_ == nullptr && this->utcCreateTime_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Detail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
        inline Detail& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Detail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // utcCreateTime Field Functions 
        bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
        void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
        inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
        inline Detail& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


      protected:
        // Creation Time
        shared_ptr<string> createTime_ {};
        // Content
        shared_ptr<string> data_ {};
        // Recipient address
        shared_ptr<string> email_ {};
        // Creation time in UTC format
        shared_ptr<int64_t> utcCreateTime_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const vector<Data::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Data::Detail>) };
      inline vector<Data::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Data::Detail>) };
      inline Data& setDetail(const vector<Data::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Data& setDetail(vector<Data::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    protected:
      shared_ptr<vector<Data::Detail>> detail_ {};
    };

    virtual bool empty() const override { return this->dataSchema_ == nullptr
        && this->nextStart_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // dataSchema Field Functions 
    bool hasDataSchema() const { return this->dataSchema_ != nullptr;};
    void deleteDataSchema() { this->dataSchema_ = nullptr;};
    inline string getDataSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSchema_, "") };
    inline QueryReceiverDetailResponseBody& setDataSchema(string dataSchema) { DARABONBA_PTR_SET_VALUE(dataSchema_, dataSchema) };


    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string getNextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryReceiverDetailResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReceiverDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryReceiverDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryReceiverDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryReceiverDetailResponseBody::Data) };
    inline QueryReceiverDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryReceiverDetailResponseBody::Data) };
    inline QueryReceiverDetailResponseBody& setData(const QueryReceiverDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryReceiverDetailResponseBody& setData(QueryReceiverDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Field name for the Data of recipients
    shared_ptr<string> dataSchema_ {};
    // Used for pagination. If there are more results, set this returned value to the NextStart in the next request.
    shared_ptr<string> nextStart_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count (deprecated field, kept for historical compatibility)
    shared_ptr<int32_t> totalCount_ {};
    // Detailed information
    shared_ptr<QueryReceiverDetailResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
