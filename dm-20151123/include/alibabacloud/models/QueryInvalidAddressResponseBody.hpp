// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODY_HPP_
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
  class QueryInvalidAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvalidAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextStart, nextStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvalidAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextStart, nextStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryInvalidAddressResponseBody() = default ;
    QueryInvalidAddressResponseBody(const QueryInvalidAddressResponseBody &) = default ;
    QueryInvalidAddressResponseBody(QueryInvalidAddressResponseBody &&) = default ;
    QueryInvalidAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvalidAddressResponseBody() = default ;
    QueryInvalidAddressResponseBody& operator=(const QueryInvalidAddressResponseBody &) = default ;
    QueryInvalidAddressResponseBody& operator=(QueryInvalidAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(mailDetail, mailDetail_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(mailDetail, mailDetail_);
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
      class MailDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MailDetail& obj) { 
          DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_TO_JSON(ToAddress, toAddress_);
          DARABONBA_PTR_TO_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
        };
        friend void from_json(const Darabonba::Json& j, MailDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
          DARABONBA_PTR_FROM_JSON(ToAddress, toAddress_);
          DARABONBA_PTR_FROM_JSON(UtcLastUpdateTime, utcLastUpdateTime_);
        };
        MailDetail() = default ;
        MailDetail(const MailDetail &) = default ;
        MailDetail(MailDetail &&) = default ;
        MailDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MailDetail() = default ;
        MailDetail& operator=(const MailDetail &) = default ;
        MailDetail& operator=(MailDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lastUpdateTime_ == nullptr
        && this->toAddress_ == nullptr && this->utcLastUpdateTime_ == nullptr; };
        // lastUpdateTime Field Functions 
        bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
        void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
        inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
        inline MailDetail& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


        // toAddress Field Functions 
        bool hasToAddress() const { return this->toAddress_ != nullptr;};
        void deleteToAddress() { this->toAddress_ = nullptr;};
        inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
        inline MailDetail& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


        // utcLastUpdateTime Field Functions 
        bool hasUtcLastUpdateTime() const { return this->utcLastUpdateTime_ != nullptr;};
        void deleteUtcLastUpdateTime() { this->utcLastUpdateTime_ = nullptr;};
        inline int64_t getUtcLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(utcLastUpdateTime_, 0L) };
        inline MailDetail& setUtcLastUpdateTime(int64_t utcLastUpdateTime) { DARABONBA_PTR_SET_VALUE(utcLastUpdateTime_, utcLastUpdateTime) };


      protected:
        // Update time.
        shared_ptr<string> lastUpdateTime_ {};
        // Recipient address.
        shared_ptr<string> toAddress_ {};
        // Update time (in timestamp format).
        shared_ptr<int64_t> utcLastUpdateTime_ {};
      };

      virtual bool empty() const override { return this->mailDetail_ == nullptr; };
      // mailDetail Field Functions 
      bool hasMailDetail() const { return this->mailDetail_ != nullptr;};
      void deleteMailDetail() { this->mailDetail_ = nullptr;};
      inline const vector<Data::MailDetail> & getMailDetail() const { DARABONBA_PTR_GET_CONST(mailDetail_, vector<Data::MailDetail>) };
      inline vector<Data::MailDetail> getMailDetail() { DARABONBA_PTR_GET(mailDetail_, vector<Data::MailDetail>) };
      inline Data& setMailDetail(const vector<Data::MailDetail> & mailDetail) { DARABONBA_PTR_SET_VALUE(mailDetail_, mailDetail) };
      inline Data& setMailDetail(vector<Data::MailDetail> && mailDetail) { DARABONBA_PTR_SET_RVALUE(mailDetail_, mailDetail) };


    protected:
      shared_ptr<vector<Data::MailDetail>> mailDetail_ {};
    };

    virtual bool empty() const override { return this->nextStart_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // nextStart Field Functions 
    bool hasNextStart() const { return this->nextStart_ != nullptr;};
    void deleteNextStart() { this->nextStart_ = nullptr;};
    inline string getNextStart() const { DARABONBA_PTR_GET_DEFAULT(nextStart_, "") };
    inline QueryInvalidAddressResponseBody& setNextStart(string nextStart) { DARABONBA_PTR_SET_VALUE(nextStart_, nextStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInvalidAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryInvalidAddressResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInvalidAddressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryInvalidAddressResponseBody::Data) };
    inline QueryInvalidAddressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryInvalidAddressResponseBody::Data) };
    inline QueryInvalidAddressResponseBody& setData(const QueryInvalidAddressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInvalidAddressResponseBody& setData(QueryInvalidAddressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Next request starting position.
    shared_ptr<string> nextStart_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total count.
    shared_ptr<int32_t> totalCount_ {};
    // Records.
    shared_ptr<QueryInvalidAddressResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
