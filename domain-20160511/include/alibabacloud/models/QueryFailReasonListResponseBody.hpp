// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILREASONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILREASONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryFailReasonListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailReasonListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailReasonListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryFailReasonListResponseBody() = default ;
    QueryFailReasonListResponseBody(const QueryFailReasonListResponseBody &) = default ;
    QueryFailReasonListResponseBody(QueryFailReasonListResponseBody &&) = default ;
    QueryFailReasonListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailReasonListResponseBody() = default ;
    QueryFailReasonListResponseBody& operator=(const QueryFailReasonListResponseBody &) = default ;
    QueryFailReasonListResponseBody& operator=(QueryFailReasonListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailRecord, failRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailRecord, failRecord_);
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
      class FailRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailRecord& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(FailReason, failReason_);
        };
        friend void from_json(const Darabonba::Json& j, FailRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
        };
        FailRecord() = default ;
        FailRecord(const FailRecord &) = default ;
        FailRecord(FailRecord &&) = default ;
        FailRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailRecord() = default ;
        FailRecord& operator=(const FailRecord &) = default ;
        FailRecord& operator=(FailRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->failReason_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline FailRecord& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // failReason Field Functions 
        bool hasFailReason() const { return this->failReason_ != nullptr;};
        void deleteFailReason() { this->failReason_ = nullptr;};
        inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
        inline FailRecord& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<string> failReason_ {};
      };

      virtual bool empty() const override { return this->failRecord_ == nullptr; };
      // failRecord Field Functions 
      bool hasFailRecord() const { return this->failRecord_ != nullptr;};
      void deleteFailRecord() { this->failRecord_ = nullptr;};
      inline const vector<Data::FailRecord> & getFailRecord() const { DARABONBA_PTR_GET_CONST(failRecord_, vector<Data::FailRecord>) };
      inline vector<Data::FailRecord> getFailRecord() { DARABONBA_PTR_GET(failRecord_, vector<Data::FailRecord>) };
      inline Data& setFailRecord(const vector<Data::FailRecord> & failRecord) { DARABONBA_PTR_SET_VALUE(failRecord_, failRecord) };
      inline Data& setFailRecord(vector<Data::FailRecord> && failRecord) { DARABONBA_PTR_SET_RVALUE(failRecord_, failRecord) };


    protected:
      shared_ptr<vector<Data::FailRecord>> failRecord_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFailReasonListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFailReasonListResponseBody::Data) };
    inline QueryFailReasonListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFailReasonListResponseBody::Data) };
    inline QueryFailReasonListResponseBody& setData(const QueryFailReasonListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFailReasonListResponseBody& setData(QueryFailReasonListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFailReasonListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryFailReasonListResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
