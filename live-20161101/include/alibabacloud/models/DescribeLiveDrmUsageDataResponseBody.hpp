// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODY_HPP_
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
  class DescribeLiveDrmUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDrmUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DrmUsageData, drmUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDrmUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DrmUsageData, drmUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDrmUsageDataResponseBody() = default ;
    DescribeLiveDrmUsageDataResponseBody(const DescribeLiveDrmUsageDataResponseBody &) = default ;
    DescribeLiveDrmUsageDataResponseBody(DescribeLiveDrmUsageDataResponseBody &&) = default ;
    DescribeLiveDrmUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDrmUsageDataResponseBody() = default ;
    DescribeLiveDrmUsageDataResponseBody& operator=(const DescribeLiveDrmUsageDataResponseBody &) = default ;
    DescribeLiveDrmUsageDataResponseBody& operator=(DescribeLiveDrmUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DrmUsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DrmUsageData& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, DrmUsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      DrmUsageData() = default ;
      DrmUsageData(const DrmUsageData &) = default ;
      DrmUsageData(DrmUsageData &&) = default ;
      DrmUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DrmUsageData() = default ;
      DrmUsageData& operator=(const DrmUsageData &) = default ;
      DrmUsageData& operator=(DrmUsageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(DrmType, drmType_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(DrmType, drmType_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
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
        virtual bool empty() const override { return this->count_ == nullptr
        && this->domain_ == nullptr && this->drmType_ == nullptr && this->region_ == nullptr && this->timeStamp_ == nullptr; };
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


        // drmType Field Functions 
        bool hasDrmType() const { return this->drmType_ != nullptr;};
        void deleteDrmType() { this->drmType_ = nullptr;};
        inline string getDrmType() const { DARABONBA_PTR_GET_DEFAULT(drmType_, "") };
        inline DataModule& setDrmType(string drmType) { DARABONBA_PTR_SET_VALUE(drmType_, drmType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline DataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<int64_t> count_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> drmType_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<DrmUsageData::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DrmUsageData::DataModule>) };
      inline vector<DrmUsageData::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DrmUsageData::DataModule>) };
      inline DrmUsageData& setDataModule(const vector<DrmUsageData::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline DrmUsageData& setDataModule(vector<DrmUsageData::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<DrmUsageData::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->drmUsageData_ == nullptr
        && this->requestId_ == nullptr; };
    // drmUsageData Field Functions 
    bool hasDrmUsageData() const { return this->drmUsageData_ != nullptr;};
    void deleteDrmUsageData() { this->drmUsageData_ = nullptr;};
    inline const DescribeLiveDrmUsageDataResponseBody::DrmUsageData & getDrmUsageData() const { DARABONBA_PTR_GET_CONST(drmUsageData_, DescribeLiveDrmUsageDataResponseBody::DrmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBody::DrmUsageData getDrmUsageData() { DARABONBA_PTR_GET(drmUsageData_, DescribeLiveDrmUsageDataResponseBody::DrmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBody& setDrmUsageData(const DescribeLiveDrmUsageDataResponseBody::DrmUsageData & drmUsageData) { DARABONBA_PTR_SET_VALUE(drmUsageData_, drmUsageData) };
    inline DescribeLiveDrmUsageDataResponseBody& setDrmUsageData(DescribeLiveDrmUsageDataResponseBody::DrmUsageData && drmUsageData) { DARABONBA_PTR_SET_RVALUE(drmUsageData_, drmUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDrmUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveDrmUsageDataResponseBody::DrmUsageData> drmUsageData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
