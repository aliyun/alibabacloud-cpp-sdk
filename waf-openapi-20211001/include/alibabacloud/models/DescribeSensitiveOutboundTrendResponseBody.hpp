// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSensitiveOutboundTrendResponseBody() = default ;
    DescribeSensitiveOutboundTrendResponseBody(const DescribeSensitiveOutboundTrendResponseBody &) = default ;
    DescribeSensitiveOutboundTrendResponseBody(DescribeSensitiveOutboundTrendResponseBody &&) = default ;
    DescribeSensitiveOutboundTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundTrendResponseBody() = default ;
    DescribeSensitiveOutboundTrendResponseBody& operator=(const DescribeSensitiveOutboundTrendResponseBody &) = default ;
    DescribeSensitiveOutboundTrendResponseBody& operator=(DescribeSensitiveOutboundTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_TO_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_TO_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
        DARABONBA_PTR_FROM_JSON(InfoOutboundCount, infoOutboundCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveOutboundCount, sensitiveOutboundCount_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      virtual bool empty() const override { return this->infoCount_ == nullptr
        && this->infoOutboundCount_ == nullptr && this->sensitiveOutboundCount_ == nullptr && this->timestamp_ == nullptr; };
      // infoCount Field Functions 
      bool hasInfoCount() const { return this->infoCount_ != nullptr;};
      void deleteInfoCount() { this->infoCount_ = nullptr;};
      inline int64_t getInfoCount() const { DARABONBA_PTR_GET_DEFAULT(infoCount_, 0L) };
      inline Data& setInfoCount(int64_t infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };


      // infoOutboundCount Field Functions 
      bool hasInfoOutboundCount() const { return this->infoOutboundCount_ != nullptr;};
      void deleteInfoOutboundCount() { this->infoOutboundCount_ = nullptr;};
      inline int64_t getInfoOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(infoOutboundCount_, 0L) };
      inline Data& setInfoOutboundCount(int64_t infoOutboundCount) { DARABONBA_PTR_SET_VALUE(infoOutboundCount_, infoOutboundCount) };


      // sensitiveOutboundCount Field Functions 
      bool hasSensitiveOutboundCount() const { return this->sensitiveOutboundCount_ != nullptr;};
      void deleteSensitiveOutboundCount() { this->sensitiveOutboundCount_ = nullptr;};
      inline int64_t getSensitiveOutboundCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveOutboundCount_, 0L) };
      inline Data& setSensitiveOutboundCount(int64_t sensitiveOutboundCount) { DARABONBA_PTR_SET_VALUE(sensitiveOutboundCount_, sensitiveOutboundCount) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The total number of personal information records.
      shared_ptr<int64_t> infoCount_ {};
      // The total number of personal information records involved in cross-border data transfer.
      shared_ptr<int64_t> infoOutboundCount_ {};
      // The total number of sensitive information records involved in cross-border data transfer.
      shared_ptr<int64_t> sensitiveOutboundCount_ {};
      // The time of cross-border data transfer. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSensitiveOutboundTrendResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSensitiveOutboundTrendResponseBody::Data>) };
    inline vector<DescribeSensitiveOutboundTrendResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSensitiveOutboundTrendResponseBody::Data>) };
    inline DescribeSensitiveOutboundTrendResponseBody& setData(const vector<DescribeSensitiveOutboundTrendResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSensitiveOutboundTrendResponseBody& setData(vector<DescribeSensitiveOutboundTrendResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSensitiveOutboundTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSensitiveOutboundTrendResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information records involved in cross-border data transfer.
    shared_ptr<vector<DescribeSensitiveOutboundTrendResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
