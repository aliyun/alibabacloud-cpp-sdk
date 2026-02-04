// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRealTimeQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeQpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(const DescribeDcdnDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(DescribeDcdnDomainRealTimeQpsDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeQpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody& operator=(const DescribeDcdnDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody& operator=(DescribeDcdnDomainRealTimeQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(QpsModel, qpsModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(QpsModel, qpsModel_);
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
      class QpsModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QpsModel& obj) { 
          DARABONBA_PTR_TO_JSON(Qps, qps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, QpsModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Qps, qps_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        QpsModel() = default ;
        QpsModel(const QpsModel &) = default ;
        QpsModel(QpsModel &&) = default ;
        QpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QpsModel() = default ;
        QpsModel& operator=(const QpsModel &) = default ;
        QpsModel& operator=(QpsModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->qps_ == nullptr
        && this->timeStamp_ == nullptr; };
        // qps Field Functions 
        bool hasQps() const { return this->qps_ != nullptr;};
        void deleteQps() { this->qps_ = nullptr;};
        inline float getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0.0) };
        inline QpsModel& setQps(float qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline QpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of queries per second (QPS).
        shared_ptr<float> qps_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->qpsModel_ == nullptr; };
      // qpsModel Field Functions 
      bool hasQpsModel() const { return this->qpsModel_ != nullptr;};
      void deleteQpsModel() { this->qpsModel_ = nullptr;};
      inline const vector<Data::QpsModel> & getQpsModel() const { DARABONBA_PTR_GET_CONST(qpsModel_, vector<Data::QpsModel>) };
      inline vector<Data::QpsModel> getQpsModel() { DARABONBA_PTR_GET(qpsModel_, vector<Data::QpsModel>) };
      inline Data& setQpsModel(const vector<Data::QpsModel> & qpsModel) { DARABONBA_PTR_SET_VALUE(qpsModel_, qpsModel) };
      inline Data& setQpsModel(vector<Data::QpsModel> && qpsModel) { DARABONBA_PTR_SET_RVALUE(qpsModel_, qpsModel) };


    protected:
      shared_ptr<vector<Data::QpsModel>> qpsModel_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeQpsDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeQpsDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeQpsDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setData(const DescribeDcdnDomainRealTimeQpsDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setData(DescribeDcdnDomainRealTimeQpsDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the backup set.
    shared_ptr<DescribeDcdnDomainRealTimeQpsDataResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
