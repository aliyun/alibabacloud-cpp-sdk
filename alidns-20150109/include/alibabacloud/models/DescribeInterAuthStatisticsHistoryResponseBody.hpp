// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInterAuthStatisticsHistoryResponseBody() = default ;
    DescribeInterAuthStatisticsHistoryResponseBody(const DescribeInterAuthStatisticsHistoryResponseBody &) = default ;
    DescribeInterAuthStatisticsHistoryResponseBody(DescribeInterAuthStatisticsHistoryResponseBody &&) = default ;
    DescribeInterAuthStatisticsHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsHistoryResponseBody() = default ;
    DescribeInterAuthStatisticsHistoryResponseBody& operator=(const DescribeInterAuthStatisticsHistoryResponseBody &) = default ;
    DescribeInterAuthStatisticsHistoryResponseBody& operator=(DescribeInterAuthStatisticsHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Qtype, qtype_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Qtype, qtype_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->domainName_ == nullptr && this->protocol_ == nullptr && this->qtype_ == nullptr && this->ratio_ == nullptr && this->timestamp_ == nullptr
        && this->zoneName_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Data& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // qtype Field Functions 
      bool hasQtype() const { return this->qtype_ != nullptr;};
      void deleteQtype() { this->qtype_ = nullptr;};
      inline string getQtype() const { DARABONBA_PTR_GET_DEFAULT(qtype_, "") };
      inline Data& setQtype(string qtype) { DARABONBA_PTR_SET_VALUE(qtype_, qtype) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline int64_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0L) };
      inline Data& setRatio(int64_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline Data& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> qtype_ {};
      shared_ptr<int64_t> ratio_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInterAuthStatisticsHistoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInterAuthStatisticsHistoryResponseBody::Data>) };
    inline vector<DescribeInterAuthStatisticsHistoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInterAuthStatisticsHistoryResponseBody::Data>) };
    inline DescribeInterAuthStatisticsHistoryResponseBody& setData(const vector<DescribeInterAuthStatisticsHistoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInterAuthStatisticsHistoryResponseBody& setData(vector<DescribeInterAuthStatisticsHistoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInterAuthStatisticsHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeInterAuthStatisticsHistoryResponseBody::Data>> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
