// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeByteHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody(DescribeDcdnDomainRealTimeByteHitRateDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeByteHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& operator=(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& operator=(DescribeDcdnDomainRealTimeByteHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ByteHitRateDataModel, byteHitRateDataModel_);
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
      class ByteHitRateDataModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ByteHitRateDataModel& obj) { 
          DARABONBA_PTR_TO_JSON(ByteHitRate, byteHitRate_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, ByteHitRateDataModel& obj) { 
          DARABONBA_PTR_FROM_JSON(ByteHitRate, byteHitRate_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        ByteHitRateDataModel() = default ;
        ByteHitRateDataModel(const ByteHitRateDataModel &) = default ;
        ByteHitRateDataModel(ByteHitRateDataModel &&) = default ;
        ByteHitRateDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ByteHitRateDataModel() = default ;
        ByteHitRateDataModel& operator=(const ByteHitRateDataModel &) = default ;
        ByteHitRateDataModel& operator=(ByteHitRateDataModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->byteHitRate_ == nullptr
        && this->timeStamp_ == nullptr; };
        // byteHitRate Field Functions 
        bool hasByteHitRate() const { return this->byteHitRate_ != nullptr;};
        void deleteByteHitRate() { this->byteHitRate_ = nullptr;};
        inline float getByteHitRate() const { DARABONBA_PTR_GET_DEFAULT(byteHitRate_, 0.0) };
        inline ByteHitRateDataModel& setByteHitRate(float byteHitRate) { DARABONBA_PTR_SET_VALUE(byteHitRate_, byteHitRate) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline ByteHitRateDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The byte hit ratio.
        shared_ptr<float> byteHitRate_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->byteHitRateDataModel_ == nullptr; };
      // byteHitRateDataModel Field Functions 
      bool hasByteHitRateDataModel() const { return this->byteHitRateDataModel_ != nullptr;};
      void deleteByteHitRateDataModel() { this->byteHitRateDataModel_ = nullptr;};
      inline const vector<Data::ByteHitRateDataModel> & getByteHitRateDataModel() const { DARABONBA_PTR_GET_CONST(byteHitRateDataModel_, vector<Data::ByteHitRateDataModel>) };
      inline vector<Data::ByteHitRateDataModel> getByteHitRateDataModel() { DARABONBA_PTR_GET(byteHitRateDataModel_, vector<Data::ByteHitRateDataModel>) };
      inline Data& setByteHitRateDataModel(const vector<Data::ByteHitRateDataModel> & byteHitRateDataModel) { DARABONBA_PTR_SET_VALUE(byteHitRateDataModel_, byteHitRateDataModel) };
      inline Data& setByteHitRateDataModel(vector<Data::ByteHitRateDataModel> && byteHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(byteHitRateDataModel_, byteHitRateDataModel) };


    protected:
      shared_ptr<vector<Data::ByteHitRateDataModel>> byteHitRateDataModel_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& setData(const DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& setData(DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeByteHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of byte hit ratios.
    shared_ptr<DescribeDcdnDomainRealTimeByteHitRateDataResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
