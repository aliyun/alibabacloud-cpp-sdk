// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHBaseRegionResponseBody() = default ;
    GetDoctorHBaseRegionResponseBody(const GetDoctorHBaseRegionResponseBody &) = default ;
    GetDoctorHBaseRegionResponseBody(GetDoctorHBaseRegionResponseBody &&) = default ;
    GetDoctorHBaseRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionResponseBody() = default ;
    GetDoctorHBaseRegionResponseBody& operator=(const GetDoctorHBaseRegionResponseBody &) = default ;
    GetDoctorHBaseRegionResponseBody& operator=(GetDoctorHBaseRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(RegionServerHost, regionServerHost_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(RegionServerHost, regionServerHost_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
          DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_FROM_JSON(TotalReadRequest, totalReadRequest_);
          DARABONBA_PTR_FROM_JSON(TotalWriteRequest, totalWriteRequest_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TotalWriteRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalWriteRequest& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalWriteRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalWriteRequest() = default ;
          TotalWriteRequest(const TotalWriteRequest &) = default ;
          TotalWriteRequest(TotalWriteRequest &&) = default ;
          TotalWriteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalWriteRequest() = default ;
          TotalWriteRequest& operator=(const TotalWriteRequest &) = default ;
          TotalWriteRequest& operator=(TotalWriteRequest &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TotalWriteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalWriteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalWriteRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalWriteRequest& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Metric description.
          shared_ptr<string> description_ {};
          // Metric name.
          shared_ptr<string> name_ {};
          // Metric unit.
          shared_ptr<string> unit_ {};
          // Metric value.
          shared_ptr<int64_t> value_ {};
        };

        class TotalReadRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalReadRequest& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalReadRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalReadRequest() = default ;
          TotalReadRequest(const TotalReadRequest &) = default ;
          TotalReadRequest(TotalReadRequest &&) = default ;
          TotalReadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalReadRequest() = default ;
          TotalReadRequest& operator=(const TotalReadRequest &) = default ;
          TotalReadRequest& operator=(TotalReadRequest &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline TotalReadRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalReadRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalReadRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalReadRequest& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Metric description.
          shared_ptr<string> description_ {};
          // Metric name.
          shared_ptr<string> name_ {};
          // Metric unit.
          shared_ptr<string> unit_ {};
          // Metric value.
          shared_ptr<int64_t> value_ {};
        };

        class StoreFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StoreFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, StoreFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          StoreFileCount() = default ;
          StoreFileCount(const StoreFileCount &) = default ;
          StoreFileCount(StoreFileCount &&) = default ;
          StoreFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StoreFileCount() = default ;
          StoreFileCount& operator=(const StoreFileCount &) = default ;
          StoreFileCount& operator=(StoreFileCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline StoreFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StoreFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline StoreFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline StoreFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Description of the metric.
          shared_ptr<string> description_ {};
          // Metric name.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class DailyWriteRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyWriteRequest& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DailyWriteRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DailyWriteRequest() = default ;
          DailyWriteRequest(const DailyWriteRequest &) = default ;
          DailyWriteRequest(DailyWriteRequest &&) = default ;
          DailyWriteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyWriteRequest() = default ;
          DailyWriteRequest& operator=(const DailyWriteRequest &) = default ;
          DailyWriteRequest& operator=(DailyWriteRequest &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DailyWriteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DailyWriteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline DailyWriteRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline DailyWriteRequest& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Description of the metric.
          shared_ptr<string> description_ {};
          // Name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class DailyReadRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyReadRequest& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DailyReadRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DailyReadRequest() = default ;
          DailyReadRequest(const DailyReadRequest &) = default ;
          DailyReadRequest(DailyReadRequest &&) = default ;
          DailyReadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyReadRequest() = default ;
          DailyReadRequest& operator=(const DailyReadRequest &) = default ;
          DailyReadRequest& operator=(DailyReadRequest &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DailyReadRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DailyReadRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline DailyReadRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline DailyReadRequest& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // Description of the metric.
          shared_ptr<string> description_ {};
          // Name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        virtual bool empty() const override { return this->dailyReadRequest_ == nullptr
        && this->dailyWriteRequest_ == nullptr && this->storeFileCount_ == nullptr && this->totalReadRequest_ == nullptr && this->totalWriteRequest_ == nullptr; };
        // dailyReadRequest Field Functions 
        bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
        void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
        inline const Metrics::DailyReadRequest & getDailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Metrics::DailyReadRequest) };
        inline Metrics::DailyReadRequest getDailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Metrics::DailyReadRequest) };
        inline Metrics& setDailyReadRequest(const Metrics::DailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
        inline Metrics& setDailyReadRequest(Metrics::DailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


        // dailyWriteRequest Field Functions 
        bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
        void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
        inline const Metrics::DailyWriteRequest & getDailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Metrics::DailyWriteRequest) };
        inline Metrics::DailyWriteRequest getDailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Metrics::DailyWriteRequest) };
        inline Metrics& setDailyWriteRequest(const Metrics::DailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
        inline Metrics& setDailyWriteRequest(Metrics::DailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


        // storeFileCount Field Functions 
        bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
        void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
        inline const Metrics::StoreFileCount & getStoreFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics::StoreFileCount getStoreFileCount() { DARABONBA_PTR_GET(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics& setStoreFileCount(const Metrics::StoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
        inline Metrics& setStoreFileCount(Metrics::StoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


        // totalReadRequest Field Functions 
        bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
        void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
        inline const Metrics::TotalReadRequest & getTotalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Metrics::TotalReadRequest) };
        inline Metrics::TotalReadRequest getTotalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Metrics::TotalReadRequest) };
        inline Metrics& setTotalReadRequest(const Metrics::TotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
        inline Metrics& setTotalReadRequest(Metrics::TotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


        // totalWriteRequest Field Functions 
        bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
        void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
        inline const Metrics::TotalWriteRequest & getTotalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Metrics::TotalWriteRequest) };
        inline Metrics::TotalWriteRequest getTotalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Metrics::TotalWriteRequest) };
        inline Metrics& setTotalWriteRequest(const Metrics::TotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
        inline Metrics& setTotalWriteRequest(Metrics::TotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


      protected:
        // Number of read requests in a single day.
        shared_ptr<Metrics::DailyReadRequest> dailyReadRequest_ {};
        // Number of write requests in a single day.
        shared_ptr<Metrics::DailyWriteRequest> dailyWriteRequest_ {};
        // Store file count.
        shared_ptr<Metrics::StoreFileCount> storeFileCount_ {};
        // Total read request count
        shared_ptr<Metrics::TotalReadRequest> totalReadRequest_ {};
        // Total write request count
        shared_ptr<Metrics::TotalWriteRequest> totalWriteRequest_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->regionServerHost_ == nullptr && this->tableName_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // regionServerHost Field Functions 
      bool hasRegionServerHost() const { return this->regionServerHost_ != nullptr;};
      void deleteRegionServerHost() { this->regionServerHost_ = nullptr;};
      inline string getRegionServerHost() const { DARABONBA_PTR_GET_DEFAULT(regionServerHost_, "") };
      inline Data& setRegionServerHost(string regionServerHost) { DARABONBA_PTR_SET_VALUE(regionServerHost_, regionServerHost) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // Metrics information.
      shared_ptr<Data::Metrics> metrics_ {};
      // Host of the RegionServer.
      shared_ptr<string> regionServerHost_ {};
      // Table name.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHBaseRegionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHBaseRegionResponseBody::Data) };
    inline GetDoctorHBaseRegionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorHBaseRegionResponseBody::Data) };
    inline GetDoctorHBaseRegionResponseBody& setData(const GetDoctorHBaseRegionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHBaseRegionResponseBody& setData(GetDoctorHBaseRegionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHBaseRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<GetDoctorHBaseRegionResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
