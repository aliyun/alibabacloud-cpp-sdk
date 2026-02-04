// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(const DescribeDcdnDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(DescribeDcdnDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody& operator=(const DescribeDcdnDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody& operator=(DescribeDcdnDomainRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BpsModel, bpsModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BpsModel, bpsModel_);
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
      class BpsModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BpsModel& obj) { 
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, BpsModel& obj) { 
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        BpsModel() = default ;
        BpsModel(const BpsModel &) = default ;
        BpsModel(BpsModel &&) = default ;
        BpsModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BpsModel() = default ;
        BpsModel& operator=(const BpsModel &) = default ;
        BpsModel& operator=(BpsModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bps_ == nullptr
        && this->timeStamp_ == nullptr; };
        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline float getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
        inline BpsModel& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline BpsModel& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The bandwidth. Unit: bit/s.
        shared_ptr<float> bps_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->bpsModel_ == nullptr; };
      // bpsModel Field Functions 
      bool hasBpsModel() const { return this->bpsModel_ != nullptr;};
      void deleteBpsModel() { this->bpsModel_ = nullptr;};
      inline const vector<Data::BpsModel> & getBpsModel() const { DARABONBA_PTR_GET_CONST(bpsModel_, vector<Data::BpsModel>) };
      inline vector<Data::BpsModel> getBpsModel() { DARABONBA_PTR_GET(bpsModel_, vector<Data::BpsModel>) };
      inline Data& setBpsModel(const vector<Data::BpsModel> & bpsModel) { DARABONBA_PTR_SET_VALUE(bpsModel_, bpsModel) };
      inline Data& setBpsModel(vector<Data::BpsModel> && bpsModel) { DARABONBA_PTR_SET_RVALUE(bpsModel_, bpsModel) };


    protected:
      shared_ptr<vector<Data::BpsModel>> bpsModel_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeBpsDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeBpsDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeBpsDataResponseBody::Data) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setData(const DescribeDcdnDomainRealTimeBpsDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setData(DescribeDcdnDomainRealTimeBpsDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeDcdnDomainRealTimeBpsDataResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
