// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODY_HPP_
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
  class DescribeLiveDomainTimeShiftDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTimeShiftDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeShiftData, timeShiftData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTimeShiftDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeShiftData, timeShiftData_);
    };
    DescribeLiveDomainTimeShiftDataResponseBody() = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(const DescribeLiveDomainTimeShiftDataResponseBody &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(DescribeLiveDomainTimeShiftDataResponseBody &&) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTimeShiftDataResponseBody() = default ;
    DescribeLiveDomainTimeShiftDataResponseBody& operator=(const DescribeLiveDomainTimeShiftDataResponseBody &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody& operator=(DescribeLiveDomainTimeShiftDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeShiftData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeShiftData& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, TimeShiftData& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      TimeShiftData() = default ;
      TimeShiftData(const TimeShiftData &) = default ;
      TimeShiftData(TimeShiftData &&) = default ;
      TimeShiftData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeShiftData() = default ;
      TimeShiftData& operator=(const TimeShiftData &) = default ;
      TimeShiftData& operator=(TimeShiftData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->size_ == nullptr
        && this->timeStamp_ == nullptr && this->type_ == nullptr; };
        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline DataModule& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> size_ {};
        shared_ptr<string> timeStamp_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<TimeShiftData::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<TimeShiftData::DataModule>) };
      inline vector<TimeShiftData::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<TimeShiftData::DataModule>) };
      inline TimeShiftData& setDataModule(const vector<TimeShiftData::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline TimeShiftData& setDataModule(vector<TimeShiftData::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<TimeShiftData::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeShiftData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeShiftData Field Functions 
    bool hasTimeShiftData() const { return this->timeShiftData_ != nullptr;};
    void deleteTimeShiftData() { this->timeShiftData_ = nullptr;};
    inline const DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData & getTimeShiftData() const { DARABONBA_PTR_GET_CONST(timeShiftData_, DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData getTimeShiftData() { DARABONBA_PTR_GET(timeShiftData_, DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setTimeShiftData(const DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData & timeShiftData) { DARABONBA_PTR_SET_VALUE(timeShiftData_, timeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setTimeShiftData(DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData && timeShiftData) { DARABONBA_PTR_SET_RVALUE(timeShiftData_, timeShiftData) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeLiveDomainTimeShiftDataResponseBody::TimeShiftData> timeShiftData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
