// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATSTATISTICRESPONSEBODY_HPP_
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
  class DescribePdnsThreatStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePdnsThreatStatisticResponseBody() = default ;
    DescribePdnsThreatStatisticResponseBody(const DescribePdnsThreatStatisticResponseBody &) = default ;
    DescribePdnsThreatStatisticResponseBody(DescribePdnsThreatStatisticResponseBody &&) = default ;
    DescribePdnsThreatStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatStatisticResponseBody() = default ;
    DescribePdnsThreatStatisticResponseBody& operator=(const DescribePdnsThreatStatisticResponseBody &) = default ;
    DescribePdnsThreatStatisticResponseBody& operator=(DescribePdnsThreatStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DohTotalCount, dohTotalCount_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UdpTotalCount, udpTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DohTotalCount, dohTotalCount_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UdpTotalCount, udpTotalCount_);
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
      virtual bool empty() const override { return this->dohTotalCount_ == nullptr
        && this->threatLevel_ == nullptr && this->threatType_ == nullptr && this->timestamp_ == nullptr && this->totalCount_ == nullptr && this->udpTotalCount_ == nullptr; };
      // dohTotalCount Field Functions 
      bool hasDohTotalCount() const { return this->dohTotalCount_ != nullptr;};
      void deleteDohTotalCount() { this->dohTotalCount_ = nullptr;};
      inline int64_t getDohTotalCount() const { DARABONBA_PTR_GET_DEFAULT(dohTotalCount_, 0L) };
      inline Data& setDohTotalCount(int64_t dohTotalCount) { DARABONBA_PTR_SET_VALUE(dohTotalCount_, dohTotalCount) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Data& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatType Field Functions 
      bool hasThreatType() const { return this->threatType_ != nullptr;};
      void deleteThreatType() { this->threatType_ = nullptr;};
      inline string getThreatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
      inline Data& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // udpTotalCount Field Functions 
      bool hasUdpTotalCount() const { return this->udpTotalCount_ != nullptr;};
      void deleteUdpTotalCount() { this->udpTotalCount_ = nullptr;};
      inline int64_t getUdpTotalCount() const { DARABONBA_PTR_GET_DEFAULT(udpTotalCount_, 0L) };
      inline Data& setUdpTotalCount(int64_t udpTotalCount) { DARABONBA_PTR_SET_VALUE(udpTotalCount_, udpTotalCount) };


    protected:
      shared_ptr<int64_t> dohTotalCount_ {};
      shared_ptr<string> threatLevel_ {};
      shared_ptr<string> threatType_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> udpTotalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribePdnsThreatStatisticResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribePdnsThreatStatisticResponseBody::Data>) };
    inline vector<DescribePdnsThreatStatisticResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribePdnsThreatStatisticResponseBody::Data>) };
    inline DescribePdnsThreatStatisticResponseBody& setData(const vector<DescribePdnsThreatStatisticResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePdnsThreatStatisticResponseBody& setData(vector<DescribePdnsThreatStatisticResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsThreatStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribePdnsThreatStatisticResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
