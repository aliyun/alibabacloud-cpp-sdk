// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlLogStatisticResponseBody() = default ;
    DescribeSqlLogStatisticResponseBody(const DescribeSqlLogStatisticResponseBody &) = default ;
    DescribeSqlLogStatisticResponseBody(DescribeSqlLogStatisticResponseBody &&) = default ;
    DescribeSqlLogStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogStatisticResponseBody() = default ;
    DescribeSqlLogStatisticResponseBody& operator=(const DescribeSqlLogStatisticResponseBody &) = default ;
    DescribeSqlLogStatisticResponseBody& operator=(DescribeSqlLogStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColdSqlSize, coldSqlSize_);
        DARABONBA_PTR_TO_JSON(FreeColdSqlSize, freeColdSqlSize_);
        DARABONBA_PTR_TO_JSON(FreeHotSqlSize, freeHotSqlSize_);
        DARABONBA_PTR_TO_JSON(HotSqlSize, hotSqlSize_);
        DARABONBA_PTR_TO_JSON(ImportSqlSize, importSqlSize_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalSqlSize, totalSqlSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdSqlSize, coldSqlSize_);
        DARABONBA_PTR_FROM_JSON(FreeColdSqlSize, freeColdSqlSize_);
        DARABONBA_PTR_FROM_JSON(FreeHotSqlSize, freeHotSqlSize_);
        DARABONBA_PTR_FROM_JSON(HotSqlSize, hotSqlSize_);
        DARABONBA_PTR_FROM_JSON(ImportSqlSize, importSqlSize_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalSqlSize, totalSqlSize_);
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
      virtual bool empty() const override { return this->coldSqlSize_ == nullptr
        && this->freeColdSqlSize_ == nullptr && this->freeHotSqlSize_ == nullptr && this->hotSqlSize_ == nullptr && this->importSqlSize_ == nullptr && this->timestamp_ == nullptr
        && this->totalSqlSize_ == nullptr; };
      // coldSqlSize Field Functions 
      bool hasColdSqlSize() const { return this->coldSqlSize_ != nullptr;};
      void deleteColdSqlSize() { this->coldSqlSize_ = nullptr;};
      inline int64_t getColdSqlSize() const { DARABONBA_PTR_GET_DEFAULT(coldSqlSize_, 0L) };
      inline Data& setColdSqlSize(int64_t coldSqlSize) { DARABONBA_PTR_SET_VALUE(coldSqlSize_, coldSqlSize) };


      // freeColdSqlSize Field Functions 
      bool hasFreeColdSqlSize() const { return this->freeColdSqlSize_ != nullptr;};
      void deleteFreeColdSqlSize() { this->freeColdSqlSize_ = nullptr;};
      inline int64_t getFreeColdSqlSize() const { DARABONBA_PTR_GET_DEFAULT(freeColdSqlSize_, 0L) };
      inline Data& setFreeColdSqlSize(int64_t freeColdSqlSize) { DARABONBA_PTR_SET_VALUE(freeColdSqlSize_, freeColdSqlSize) };


      // freeHotSqlSize Field Functions 
      bool hasFreeHotSqlSize() const { return this->freeHotSqlSize_ != nullptr;};
      void deleteFreeHotSqlSize() { this->freeHotSqlSize_ = nullptr;};
      inline int64_t getFreeHotSqlSize() const { DARABONBA_PTR_GET_DEFAULT(freeHotSqlSize_, 0L) };
      inline Data& setFreeHotSqlSize(int64_t freeHotSqlSize) { DARABONBA_PTR_SET_VALUE(freeHotSqlSize_, freeHotSqlSize) };


      // hotSqlSize Field Functions 
      bool hasHotSqlSize() const { return this->hotSqlSize_ != nullptr;};
      void deleteHotSqlSize() { this->hotSqlSize_ = nullptr;};
      inline int64_t getHotSqlSize() const { DARABONBA_PTR_GET_DEFAULT(hotSqlSize_, 0L) };
      inline Data& setHotSqlSize(int64_t hotSqlSize) { DARABONBA_PTR_SET_VALUE(hotSqlSize_, hotSqlSize) };


      // importSqlSize Field Functions 
      bool hasImportSqlSize() const { return this->importSqlSize_ != nullptr;};
      void deleteImportSqlSize() { this->importSqlSize_ = nullptr;};
      inline int64_t getImportSqlSize() const { DARABONBA_PTR_GET_DEFAULT(importSqlSize_, 0L) };
      inline Data& setImportSqlSize(int64_t importSqlSize) { DARABONBA_PTR_SET_VALUE(importSqlSize_, importSqlSize) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalSqlSize Field Functions 
      bool hasTotalSqlSize() const { return this->totalSqlSize_ != nullptr;};
      void deleteTotalSqlSize() { this->totalSqlSize_ = nullptr;};
      inline int64_t getTotalSqlSize() const { DARABONBA_PTR_GET_DEFAULT(totalSqlSize_, 0L) };
      inline Data& setTotalSqlSize(int64_t totalSqlSize) { DARABONBA_PTR_SET_VALUE(totalSqlSize_, totalSqlSize) };


    protected:
      // The size of the SQL Explorer and Audit data that is stored in cold storage. Unit: bytes.
      shared_ptr<int64_t> coldSqlSize_ {};
      // The free quota for cold data storage. Unit: bytes.
      shared_ptr<int64_t> freeColdSqlSize_ {};
      // The free quota for hot data storage. Unit: bytes.
      shared_ptr<int64_t> freeHotSqlSize_ {};
      // The size of the SQL Explorer and Audit data that is stored in hot storage. Unit: bytes.
      shared_ptr<int64_t> hotSqlSize_ {};
      // The size of the SQL Explorer and Audit data that was generated in the most recent day. Unit: bytes.
      shared_ptr<int64_t> importSqlSize_ {};
      // The timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<int64_t> totalSqlSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlLogStatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlLogStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlLogStatisticResponseBody::Data) };
    inline DescribeSqlLogStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlLogStatisticResponseBody::Data) };
    inline DescribeSqlLogStatisticResponseBody& setData(const DescribeSqlLogStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlLogStatisticResponseBody& setData(DescribeSqlLogStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlLogStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlLogStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlLogStatisticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeSqlLogStatisticResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
