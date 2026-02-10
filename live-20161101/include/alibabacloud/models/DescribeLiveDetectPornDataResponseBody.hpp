// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectPornDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectPornDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetectPornData, detectPornData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectPornDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectPornData, detectPornData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDetectPornDataResponseBody() = default ;
    DescribeLiveDetectPornDataResponseBody(const DescribeLiveDetectPornDataResponseBody &) = default ;
    DescribeLiveDetectPornDataResponseBody(DescribeLiveDetectPornDataResponseBody &&) = default ;
    DescribeLiveDetectPornDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectPornDataResponseBody() = default ;
    DescribeLiveDetectPornDataResponseBody& operator=(const DescribeLiveDetectPornDataResponseBody &) = default ;
    DescribeLiveDetectPornDataResponseBody& operator=(DescribeLiveDetectPornDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectPornData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectPornData& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, DetectPornData& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      DetectPornData() = default ;
      DetectPornData(const DetectPornData &) = default ;
      DetectPornData(DetectPornData &&) = default ;
      DetectPornData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectPornData() = default ;
      DetectPornData& operator=(const DetectPornData &) = default ;
      DetectPornData& operator=(DetectPornData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(App, app_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Fee, fee_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(App, app_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Fee, fee_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->app_ == nullptr
        && this->count_ == nullptr && this->domain_ == nullptr && this->fee_ == nullptr && this->region_ == nullptr && this->scene_ == nullptr
        && this->stream_ == nullptr && this->timeStamp_ == nullptr; };
        // app Field Functions 
        bool hasApp() const { return this->app_ != nullptr;};
        void deleteApp() { this->app_ = nullptr;};
        inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
        inline DataModule& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline DataModule& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline string getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
        inline DataModule& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline DataModule& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
        inline DataModule& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> app_ {};
        shared_ptr<int64_t> count_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> fee_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> scene_ {};
        shared_ptr<string> stream_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<DetectPornData::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DetectPornData::DataModule>) };
      inline vector<DetectPornData::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DetectPornData::DataModule>) };
      inline DetectPornData& setDataModule(const vector<DetectPornData::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline DetectPornData& setDataModule(vector<DetectPornData::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<DetectPornData::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->detectPornData_ == nullptr
        && this->requestId_ == nullptr; };
    // detectPornData Field Functions 
    bool hasDetectPornData() const { return this->detectPornData_ != nullptr;};
    void deleteDetectPornData() { this->detectPornData_ = nullptr;};
    inline const DescribeLiveDetectPornDataResponseBody::DetectPornData & getDetectPornData() const { DARABONBA_PTR_GET_CONST(detectPornData_, DescribeLiveDetectPornDataResponseBody::DetectPornData) };
    inline DescribeLiveDetectPornDataResponseBody::DetectPornData getDetectPornData() { DARABONBA_PTR_GET(detectPornData_, DescribeLiveDetectPornDataResponseBody::DetectPornData) };
    inline DescribeLiveDetectPornDataResponseBody& setDetectPornData(const DescribeLiveDetectPornDataResponseBody::DetectPornData & detectPornData) { DARABONBA_PTR_SET_VALUE(detectPornData_, detectPornData) };
    inline DescribeLiveDetectPornDataResponseBody& setDetectPornData(DescribeLiveDetectPornDataResponseBody::DetectPornData && detectPornData) { DARABONBA_PTR_SET_RVALUE(detectPornData_, detectPornData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDetectPornDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveDetectPornDataResponseBody::DetectPornData> detectPornData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
