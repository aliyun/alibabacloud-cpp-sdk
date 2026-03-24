// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDomainRealTimeBpsDataResponseBody(const DescribeDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeBpsDataResponseBody(DescribeDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDomainRealTimeBpsDataResponseBody& operator=(const DescribeDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDomainRealTimeBpsDataResponseBody& operator=(DescribeDomainRealTimeBpsDataResponseBody &&) = default ;
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
        shared_ptr<float> bps_ {};
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
    inline const DescribeDomainRealTimeBpsDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDomainRealTimeBpsDataResponseBody::Data) };
    inline DescribeDomainRealTimeBpsDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDomainRealTimeBpsDataResponseBody::Data) };
    inline DescribeDomainRealTimeBpsDataResponseBody& setData(const DescribeDomainRealTimeBpsDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainRealTimeBpsDataResponseBody& setData(DescribeDomainRealTimeBpsDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDomainRealTimeBpsDataResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
