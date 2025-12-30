// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBrokerDemandRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBrokerDemandRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBrokerDemandRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryBrokerDemandRecordResponseBody() = default ;
    QueryBrokerDemandRecordResponseBody(const QueryBrokerDemandRecordResponseBody &) = default ;
    QueryBrokerDemandRecordResponseBody(QueryBrokerDemandRecordResponseBody &&) = default ;
    QueryBrokerDemandRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBrokerDemandRecordResponseBody() = default ;
    QueryBrokerDemandRecordResponseBody& operator=(const QueryBrokerDemandRecordResponseBody &) = default ;
    QueryBrokerDemandRecordResponseBody& operator=(QueryBrokerDemandRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BrokerDemandRecord, brokerDemandRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BrokerDemandRecord, brokerDemandRecord_);
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
      class BrokerDemandRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BrokerDemandRecord& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
        };
        friend void from_json(const Darabonba::Json& j, BrokerDemandRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
        };
        BrokerDemandRecord() = default ;
        BrokerDemandRecord(const BrokerDemandRecord &) = default ;
        BrokerDemandRecord(BrokerDemandRecord &&) = default ;
        BrokerDemandRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BrokerDemandRecord() = default ;
        BrokerDemandRecord& operator=(const BrokerDemandRecord &) = default ;
        BrokerDemandRecord& operator=(BrokerDemandRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline BrokerDemandRecord& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline BrokerDemandRecord& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BrokerDemandRecord& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      protected:
        shared_ptr<string> bizId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
      };

      virtual bool empty() const override { return this->brokerDemandRecord_ == nullptr; };
      // brokerDemandRecord Field Functions 
      bool hasBrokerDemandRecord() const { return this->brokerDemandRecord_ != nullptr;};
      void deleteBrokerDemandRecord() { this->brokerDemandRecord_ = nullptr;};
      inline const vector<Data::BrokerDemandRecord> & getBrokerDemandRecord() const { DARABONBA_PTR_GET_CONST(brokerDemandRecord_, vector<Data::BrokerDemandRecord>) };
      inline vector<Data::BrokerDemandRecord> getBrokerDemandRecord() { DARABONBA_PTR_GET(brokerDemandRecord_, vector<Data::BrokerDemandRecord>) };
      inline Data& setBrokerDemandRecord(const vector<Data::BrokerDemandRecord> & brokerDemandRecord) { DARABONBA_PTR_SET_VALUE(brokerDemandRecord_, brokerDemandRecord) };
      inline Data& setBrokerDemandRecord(vector<Data::BrokerDemandRecord> && brokerDemandRecord) { DARABONBA_PTR_SET_RVALUE(brokerDemandRecord_, brokerDemandRecord) };


    protected:
      shared_ptr<vector<Data::BrokerDemandRecord>> brokerDemandRecord_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryBrokerDemandRecordResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryBrokerDemandRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryBrokerDemandRecordResponseBody::Data) };
    inline QueryBrokerDemandRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryBrokerDemandRecordResponseBody::Data) };
    inline QueryBrokerDemandRecordResponseBody& setData(const QueryBrokerDemandRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBrokerDemandRecordResponseBody& setData(QueryBrokerDemandRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBrokerDemandRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBrokerDemandRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryBrokerDemandRecordResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryBrokerDemandRecordResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryBrokerDemandRecordResponseBody::Data> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
