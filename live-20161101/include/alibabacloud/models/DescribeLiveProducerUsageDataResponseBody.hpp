// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeLiveProducerUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveProducerUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillProducerData, billProducerData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveProducerUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillProducerData, billProducerData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveProducerUsageDataResponseBody() = default ;
    DescribeLiveProducerUsageDataResponseBody(const DescribeLiveProducerUsageDataResponseBody &) = default ;
    DescribeLiveProducerUsageDataResponseBody(DescribeLiveProducerUsageDataResponseBody &&) = default ;
    DescribeLiveProducerUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveProducerUsageDataResponseBody() = default ;
    DescribeLiveProducerUsageDataResponseBody& operator=(const DescribeLiveProducerUsageDataResponseBody &) = default ;
    DescribeLiveProducerUsageDataResponseBody& operator=(DescribeLiveProducerUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillProducerData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillProducerData& obj) { 
        DARABONBA_PTR_TO_JSON(BillProducerDataItem, billProducerDataItem_);
      };
      friend void from_json(const Darabonba::Json& j, BillProducerData& obj) { 
        DARABONBA_PTR_FROM_JSON(BillProducerDataItem, billProducerDataItem_);
      };
      BillProducerData() = default ;
      BillProducerData(const BillProducerData &) = default ;
      BillProducerData(BillProducerData &&) = default ;
      BillProducerData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillProducerData() = default ;
      BillProducerData& operator=(const BillProducerData &) = default ;
      BillProducerData& operator=(BillProducerData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BillProducerDataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BillProducerDataItem& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Instance, instance_);
          DARABONBA_PTR_TO_JSON(OutputHdDuration, outputHdDuration_);
          DARABONBA_PTR_TO_JSON(OutputLdDuration, outputLdDuration_);
          DARABONBA_PTR_TO_JSON(OutputSdDuration, outputSdDuration_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TranHdDuration, tranHdDuration_);
          DARABONBA_PTR_TO_JSON(TranLdDuration, tranLdDuration_);
          DARABONBA_PTR_TO_JSON(TranSdDuration, tranSdDuration_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, BillProducerDataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
          DARABONBA_PTR_FROM_JSON(OutputHdDuration, outputHdDuration_);
          DARABONBA_PTR_FROM_JSON(OutputLdDuration, outputLdDuration_);
          DARABONBA_PTR_FROM_JSON(OutputSdDuration, outputSdDuration_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TranHdDuration, tranHdDuration_);
          DARABONBA_PTR_FROM_JSON(TranLdDuration, tranLdDuration_);
          DARABONBA_PTR_FROM_JSON(TranSdDuration, tranSdDuration_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        BillProducerDataItem() = default ;
        BillProducerDataItem(const BillProducerDataItem &) = default ;
        BillProducerDataItem(BillProducerDataItem &&) = default ;
        BillProducerDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BillProducerDataItem() = default ;
        BillProducerDataItem& operator=(const BillProducerDataItem &) = default ;
        BillProducerDataItem& operator=(BillProducerDataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->instance_ == nullptr && this->outputHdDuration_ == nullptr && this->outputLdDuration_ == nullptr && this->outputSdDuration_ == nullptr && this->region_ == nullptr
        && this->timeStamp_ == nullptr && this->tranHdDuration_ == nullptr && this->tranLdDuration_ == nullptr && this->tranSdDuration_ == nullptr && this->type_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline BillProducerDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline BillProducerDataItem& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // outputHdDuration Field Functions 
        bool hasOutputHdDuration() const { return this->outputHdDuration_ != nullptr;};
        void deleteOutputHdDuration() { this->outputHdDuration_ = nullptr;};
        inline int64_t getOutputHdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputHdDuration_, 0L) };
        inline BillProducerDataItem& setOutputHdDuration(int64_t outputHdDuration) { DARABONBA_PTR_SET_VALUE(outputHdDuration_, outputHdDuration) };


        // outputLdDuration Field Functions 
        bool hasOutputLdDuration() const { return this->outputLdDuration_ != nullptr;};
        void deleteOutputLdDuration() { this->outputLdDuration_ = nullptr;};
        inline int64_t getOutputLdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputLdDuration_, 0L) };
        inline BillProducerDataItem& setOutputLdDuration(int64_t outputLdDuration) { DARABONBA_PTR_SET_VALUE(outputLdDuration_, outputLdDuration) };


        // outputSdDuration Field Functions 
        bool hasOutputSdDuration() const { return this->outputSdDuration_ != nullptr;};
        void deleteOutputSdDuration() { this->outputSdDuration_ = nullptr;};
        inline int64_t getOutputSdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputSdDuration_, 0L) };
        inline BillProducerDataItem& setOutputSdDuration(int64_t outputSdDuration) { DARABONBA_PTR_SET_VALUE(outputSdDuration_, outputSdDuration) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline BillProducerDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline BillProducerDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // tranHdDuration Field Functions 
        bool hasTranHdDuration() const { return this->tranHdDuration_ != nullptr;};
        void deleteTranHdDuration() { this->tranHdDuration_ = nullptr;};
        inline int64_t getTranHdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranHdDuration_, 0L) };
        inline BillProducerDataItem& setTranHdDuration(int64_t tranHdDuration) { DARABONBA_PTR_SET_VALUE(tranHdDuration_, tranHdDuration) };


        // tranLdDuration Field Functions 
        bool hasTranLdDuration() const { return this->tranLdDuration_ != nullptr;};
        void deleteTranLdDuration() { this->tranLdDuration_ = nullptr;};
        inline int64_t getTranLdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranLdDuration_, 0L) };
        inline BillProducerDataItem& setTranLdDuration(int64_t tranLdDuration) { DARABONBA_PTR_SET_VALUE(tranLdDuration_, tranLdDuration) };


        // tranSdDuration Field Functions 
        bool hasTranSdDuration() const { return this->tranSdDuration_ != nullptr;};
        void deleteTranSdDuration() { this->tranSdDuration_ = nullptr;};
        inline int64_t getTranSdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranSdDuration_, 0L) };
        inline BillProducerDataItem& setTranSdDuration(int64_t tranSdDuration) { DARABONBA_PTR_SET_VALUE(tranSdDuration_, tranSdDuration) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BillProducerDataItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<string> instance_ {};
        shared_ptr<int64_t> outputHdDuration_ {};
        shared_ptr<int64_t> outputLdDuration_ {};
        shared_ptr<int64_t> outputSdDuration_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<int64_t> tranHdDuration_ {};
        shared_ptr<int64_t> tranLdDuration_ {};
        shared_ptr<int64_t> tranSdDuration_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->billProducerDataItem_ == nullptr; };
      // billProducerDataItem Field Functions 
      bool hasBillProducerDataItem() const { return this->billProducerDataItem_ != nullptr;};
      void deleteBillProducerDataItem() { this->billProducerDataItem_ = nullptr;};
      inline const vector<BillProducerData::BillProducerDataItem> & getBillProducerDataItem() const { DARABONBA_PTR_GET_CONST(billProducerDataItem_, vector<BillProducerData::BillProducerDataItem>) };
      inline vector<BillProducerData::BillProducerDataItem> getBillProducerDataItem() { DARABONBA_PTR_GET(billProducerDataItem_, vector<BillProducerData::BillProducerDataItem>) };
      inline BillProducerData& setBillProducerDataItem(const vector<BillProducerData::BillProducerDataItem> & billProducerDataItem) { DARABONBA_PTR_SET_VALUE(billProducerDataItem_, billProducerDataItem) };
      inline BillProducerData& setBillProducerDataItem(vector<BillProducerData::BillProducerDataItem> && billProducerDataItem) { DARABONBA_PTR_SET_RVALUE(billProducerDataItem_, billProducerDataItem) };


    protected:
      shared_ptr<vector<BillProducerData::BillProducerDataItem>> billProducerDataItem_ {};
    };

    virtual bool empty() const override { return this->billProducerData_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // billProducerData Field Functions 
    bool hasBillProducerData() const { return this->billProducerData_ != nullptr;};
    void deleteBillProducerData() { this->billProducerData_ = nullptr;};
    inline const DescribeLiveProducerUsageDataResponseBody::BillProducerData & getBillProducerData() const { DARABONBA_PTR_GET_CONST(billProducerData_, DescribeLiveProducerUsageDataResponseBody::BillProducerData) };
    inline DescribeLiveProducerUsageDataResponseBody::BillProducerData getBillProducerData() { DARABONBA_PTR_GET(billProducerData_, DescribeLiveProducerUsageDataResponseBody::BillProducerData) };
    inline DescribeLiveProducerUsageDataResponseBody& setBillProducerData(const DescribeLiveProducerUsageDataResponseBody::BillProducerData & billProducerData) { DARABONBA_PTR_SET_VALUE(billProducerData_, billProducerData) };
    inline DescribeLiveProducerUsageDataResponseBody& setBillProducerData(DescribeLiveProducerUsageDataResponseBody::BillProducerData && billProducerData) { DARABONBA_PTR_SET_RVALUE(billProducerData_, billProducerData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<DescribeLiveProducerUsageDataResponseBody::BillProducerData> billProducerData_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
