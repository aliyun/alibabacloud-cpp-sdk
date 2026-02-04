// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRealTimeReqHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& operator=(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& operator=(DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ReqHitRateDataModel, reqHitRateDataModel_);
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
      class ReqHitRateDataModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReqHitRateDataModel& obj) { 
          DARABONBA_PTR_TO_JSON(ReqHitRate, reqHitRate_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, ReqHitRateDataModel& obj) { 
          DARABONBA_PTR_FROM_JSON(ReqHitRate, reqHitRate_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        ReqHitRateDataModel() = default ;
        ReqHitRateDataModel(const ReqHitRateDataModel &) = default ;
        ReqHitRateDataModel(ReqHitRateDataModel &&) = default ;
        ReqHitRateDataModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReqHitRateDataModel() = default ;
        ReqHitRateDataModel& operator=(const ReqHitRateDataModel &) = default ;
        ReqHitRateDataModel& operator=(ReqHitRateDataModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reqHitRate_ == nullptr
        && this->timeStamp_ == nullptr; };
        // reqHitRate Field Functions 
        bool hasReqHitRate() const { return this->reqHitRate_ != nullptr;};
        void deleteReqHitRate() { this->reqHitRate_ = nullptr;};
        inline float getReqHitRate() const { DARABONBA_PTR_GET_DEFAULT(reqHitRate_, 0.0) };
        inline ReqHitRateDataModel& setReqHitRate(float reqHitRate) { DARABONBA_PTR_SET_VALUE(reqHitRate_, reqHitRate) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline ReqHitRateDataModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The request hit ratio.
        shared_ptr<float> reqHitRate_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->reqHitRateDataModel_ == nullptr; };
      // reqHitRateDataModel Field Functions 
      bool hasReqHitRateDataModel() const { return this->reqHitRateDataModel_ != nullptr;};
      void deleteReqHitRateDataModel() { this->reqHitRateDataModel_ = nullptr;};
      inline const vector<Data::ReqHitRateDataModel> & getReqHitRateDataModel() const { DARABONBA_PTR_GET_CONST(reqHitRateDataModel_, vector<Data::ReqHitRateDataModel>) };
      inline vector<Data::ReqHitRateDataModel> getReqHitRateDataModel() { DARABONBA_PTR_GET(reqHitRateDataModel_, vector<Data::ReqHitRateDataModel>) };
      inline Data& setReqHitRateDataModel(const vector<Data::ReqHitRateDataModel> & reqHitRateDataModel) { DARABONBA_PTR_SET_VALUE(reqHitRateDataModel_, reqHitRateDataModel) };
      inline Data& setReqHitRateDataModel(vector<Data::ReqHitRateDataModel> && reqHitRateDataModel) { DARABONBA_PTR_SET_RVALUE(reqHitRateDataModel_, reqHitRateDataModel) };


    protected:
      shared_ptr<vector<Data::ReqHitRateDataModel>> reqHitRateDataModel_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setData(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setData(DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of byte hit ratios.
    shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
