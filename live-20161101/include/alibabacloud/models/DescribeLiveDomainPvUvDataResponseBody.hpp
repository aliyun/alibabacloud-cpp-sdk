// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPVUVDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainPvUvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPvUvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PvUvDataInfos, pvUvDataInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPvUvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PvUvDataInfos, pvUvDataInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainPvUvDataResponseBody() = default ;
    DescribeLiveDomainPvUvDataResponseBody(const DescribeLiveDomainPvUvDataResponseBody &) = default ;
    DescribeLiveDomainPvUvDataResponseBody(DescribeLiveDomainPvUvDataResponseBody &&) = default ;
    DescribeLiveDomainPvUvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPvUvDataResponseBody() = default ;
    DescribeLiveDomainPvUvDataResponseBody& operator=(const DescribeLiveDomainPvUvDataResponseBody &) = default ;
    DescribeLiveDomainPvUvDataResponseBody& operator=(DescribeLiveDomainPvUvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PvUvDataInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PvUvDataInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PvUvDataInfo, pvUvDataInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PvUvDataInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PvUvDataInfo, pvUvDataInfo_);
      };
      PvUvDataInfos() = default ;
      PvUvDataInfos(const PvUvDataInfos &) = default ;
      PvUvDataInfos(PvUvDataInfos &&) = default ;
      PvUvDataInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PvUvDataInfos() = default ;
      PvUvDataInfos& operator=(const PvUvDataInfos &) = default ;
      PvUvDataInfos& operator=(PvUvDataInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PvUvDataInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PvUvDataInfo& obj) { 
          DARABONBA_PTR_TO_JSON(PV, PV_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(UV, UV_);
        };
        friend void from_json(const Darabonba::Json& j, PvUvDataInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(PV, PV_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(UV, UV_);
        };
        PvUvDataInfo() = default ;
        PvUvDataInfo(const PvUvDataInfo &) = default ;
        PvUvDataInfo(PvUvDataInfo &&) = default ;
        PvUvDataInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PvUvDataInfo() = default ;
        PvUvDataInfo& operator=(const PvUvDataInfo &) = default ;
        PvUvDataInfo& operator=(PvUvDataInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->PV_ == nullptr
        && this->timeStamp_ == nullptr && this->UV_ == nullptr; };
        // PV Field Functions 
        bool hasPV() const { return this->PV_ != nullptr;};
        void deletePV() { this->PV_ = nullptr;};
        inline string getPV() const { DARABONBA_PTR_GET_DEFAULT(PV_, "") };
        inline PvUvDataInfo& setPV(string PV) { DARABONBA_PTR_SET_VALUE(PV_, PV) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline PvUvDataInfo& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // UV Field Functions 
        bool hasUV() const { return this->UV_ != nullptr;};
        void deleteUV() { this->UV_ = nullptr;};
        inline string getUV() const { DARABONBA_PTR_GET_DEFAULT(UV_, "") };
        inline PvUvDataInfo& setUV(string UV) { DARABONBA_PTR_SET_VALUE(UV_, UV) };


      protected:
        // The number of PVs.
        shared_ptr<string> PV_ {};
        // The timestamp of the data returned. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ssZ* format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
        // The number of UVs.
        shared_ptr<string> UV_ {};
      };

      virtual bool empty() const override { return this->pvUvDataInfo_ == nullptr; };
      // pvUvDataInfo Field Functions 
      bool hasPvUvDataInfo() const { return this->pvUvDataInfo_ != nullptr;};
      void deletePvUvDataInfo() { this->pvUvDataInfo_ = nullptr;};
      inline const vector<PvUvDataInfos::PvUvDataInfo> & getPvUvDataInfo() const { DARABONBA_PTR_GET_CONST(pvUvDataInfo_, vector<PvUvDataInfos::PvUvDataInfo>) };
      inline vector<PvUvDataInfos::PvUvDataInfo> getPvUvDataInfo() { DARABONBA_PTR_GET(pvUvDataInfo_, vector<PvUvDataInfos::PvUvDataInfo>) };
      inline PvUvDataInfos& setPvUvDataInfo(const vector<PvUvDataInfos::PvUvDataInfo> & pvUvDataInfo) { DARABONBA_PTR_SET_VALUE(pvUvDataInfo_, pvUvDataInfo) };
      inline PvUvDataInfos& setPvUvDataInfo(vector<PvUvDataInfos::PvUvDataInfo> && pvUvDataInfo) { DARABONBA_PTR_SET_RVALUE(pvUvDataInfo_, pvUvDataInfo) };


    protected:
      shared_ptr<vector<PvUvDataInfos::PvUvDataInfo>> pvUvDataInfo_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->pvUvDataInfos_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pvUvDataInfos Field Functions 
    bool hasPvUvDataInfos() const { return this->pvUvDataInfos_ != nullptr;};
    void deletePvUvDataInfos() { this->pvUvDataInfos_ = nullptr;};
    inline const DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos & getPvUvDataInfos() const { DARABONBA_PTR_GET_CONST(pvUvDataInfos_, DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos getPvUvDataInfos() { DARABONBA_PTR_GET(pvUvDataInfos_, DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBody& setPvUvDataInfos(const DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos & pvUvDataInfos) { DARABONBA_PTR_SET_VALUE(pvUvDataInfos_, pvUvDataInfos) };
    inline DescribeLiveDomainPvUvDataResponseBody& setPvUvDataInfos(DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos && pvUvDataInfos) { DARABONBA_PTR_SET_RVALUE(pvUvDataInfos_, pvUvDataInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainPvUvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the entries returned. Unit: seconds. Default value: 3600.
    shared_ptr<string> dataInterval_ {};
    // The streaming domain.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ssZ* format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The data of PVs and UVs.
    shared_ptr<DescribeLiveDomainPvUvDataResponseBody::PvUvDataInfos> pvUvDataInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which the data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ssZ* format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
