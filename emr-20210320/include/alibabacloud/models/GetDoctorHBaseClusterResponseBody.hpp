// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASECLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHBaseClusterResponseBody() = default ;
    GetDoctorHBaseClusterResponseBody(const GetDoctorHBaseClusterResponseBody &) = default ;
    GetDoctorHBaseClusterResponseBody(GetDoctorHBaseClusterResponseBody &&) = default ;
    GetDoctorHBaseClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseClusterResponseBody() = default ;
    GetDoctorHBaseClusterResponseBody& operator=(const GetDoctorHBaseClusterResponseBody &) = default ;
    GetDoctorHBaseClusterResponseBody& operator=(GetDoctorHBaseClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
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
          DARABONBA_PTR_TO_JSON(AvgLoad, avgLoad_);
          DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_TO_JSON(MemHeap, memHeap_);
          DARABONBA_PTR_TO_JSON(NormalAvgLoad, normalAvgLoad_);
          DARABONBA_PTR_TO_JSON(RegionBalance, regionBalance_);
          DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
          DARABONBA_PTR_TO_JSON(RegionServerCount, regionServerCount_);
          DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
          DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
          DARABONBA_PTR_TO_JSON(TotalRequest, totalRequest_);
          DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgLoad, avgLoad_);
          DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_FROM_JSON(MemHeap, memHeap_);
          DARABONBA_PTR_FROM_JSON(NormalAvgLoad, normalAvgLoad_);
          DARABONBA_PTR_FROM_JSON(RegionBalance, regionBalance_);
          DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
          DARABONBA_PTR_FROM_JSON(RegionServerCount, regionServerCount_);
          DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
          DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_FROM_JSON(TotalReadRequest, totalReadRequest_);
          DARABONBA_PTR_FROM_JSON(TotalRequest, totalRequest_);
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
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class TotalRequest : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalRequest& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalRequest& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalRequest() = default ;
          TotalRequest(const TotalRequest &) = default ;
          TotalRequest(TotalRequest &&) = default ;
          TotalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalRequest() = default ;
          TotalRequest& operator=(const TotalRequest &) = default ;
          TotalRequest& operator=(TotalRequest &&) = default ;
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
          inline TotalRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalRequest& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalRequest& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
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
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class TotalDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalDataSize() = default ;
          TotalDataSize(const TotalDataSize &) = default ;
          TotalDataSize(TotalDataSize &&) = default ;
          TotalDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalDataSize() = default ;
          TotalDataSize& operator=(const TotalDataSize &) = default ;
          TotalDataSize& operator=(TotalDataSize &&) = default ;
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
          inline TotalDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class TableCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TableCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TableCount() = default ;
          TableCount(const TableCount &) = default ;
          TableCount(TableCount &&) = default ;
          TableCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableCount() = default ;
          TableCount& operator=(const TableCount &) = default ;
          TableCount& operator=(TableCount &&) = default ;
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
          inline TableCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TableCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TableCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TableCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
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
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class RegionServerCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionServerCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RegionServerCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RegionServerCount() = default ;
          RegionServerCount(const RegionServerCount &) = default ;
          RegionServerCount(RegionServerCount &&) = default ;
          RegionServerCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionServerCount() = default ;
          RegionServerCount& operator=(const RegionServerCount &) = default ;
          RegionServerCount& operator=(RegionServerCount &&) = default ;
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
          inline RegionServerCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RegionServerCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline RegionServerCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline RegionServerCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class RegionCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RegionCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RegionCount() = default ;
          RegionCount(const RegionCount &) = default ;
          RegionCount(RegionCount &&) = default ;
          RegionCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionCount() = default ;
          RegionCount& operator=(const RegionCount &) = default ;
          RegionCount& operator=(RegionCount &&) = default ;
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
          inline RegionCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RegionCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline RegionCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline RegionCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class RegionBalance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionBalance& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RegionBalance& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RegionBalance() = default ;
          RegionBalance(const RegionBalance &) = default ;
          RegionBalance(RegionBalance &&) = default ;
          RegionBalance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionBalance() = default ;
          RegionBalance& operator=(const RegionBalance &) = default ;
          RegionBalance& operator=(RegionBalance &&) = default ;
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
          inline RegionBalance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RegionBalance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline RegionBalance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline RegionBalance& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<float> value_ {};
        };

        class NormalAvgLoad : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NormalAvgLoad& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NormalAvgLoad& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NormalAvgLoad() = default ;
          NormalAvgLoad(const NormalAvgLoad &) = default ;
          NormalAvgLoad(NormalAvgLoad &&) = default ;
          NormalAvgLoad(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NormalAvgLoad() = default ;
          NormalAvgLoad& operator=(const NormalAvgLoad &) = default ;
          NormalAvgLoad& operator=(NormalAvgLoad &&) = default ;
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
          inline NormalAvgLoad& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline NormalAvgLoad& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline NormalAvgLoad& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline NormalAvgLoad& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<float> value_ {};
        };

        class MemHeap : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemHeap& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemHeap& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemHeap() = default ;
          MemHeap(const MemHeap &) = default ;
          MemHeap(MemHeap &&) = default ;
          MemHeap(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemHeap() = default ;
          MemHeap& operator=(const MemHeap &) = default ;
          MemHeap& operator=(MemHeap &&) = default ;
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
          inline MemHeap& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemHeap& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemHeap& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MemHeap& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
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
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
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
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class AvgLoad : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvgLoad& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AvgLoad& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AvgLoad() = default ;
          AvgLoad(const AvgLoad &) = default ;
          AvgLoad(AvgLoad &&) = default ;
          AvgLoad(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvgLoad() = default ;
          AvgLoad& operator=(const AvgLoad &) = default ;
          AvgLoad& operator=(AvgLoad &&) = default ;
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
          inline AvgLoad& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AvgLoad& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline AvgLoad& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline AvgLoad& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<float> value_ {};
        };

        virtual bool empty() const override { return this->avgLoad_ == nullptr
        && this->dailyReadRequest_ == nullptr && this->dailyWriteRequest_ == nullptr && this->memHeap_ == nullptr && this->normalAvgLoad_ == nullptr && this->regionBalance_ == nullptr
        && this->regionCount_ == nullptr && this->regionServerCount_ == nullptr && this->storeFileCount_ == nullptr && this->tableCount_ == nullptr && this->totalDataSize_ == nullptr
        && this->totalReadRequest_ == nullptr && this->totalRequest_ == nullptr && this->totalWriteRequest_ == nullptr; };
        // avgLoad Field Functions 
        bool hasAvgLoad() const { return this->avgLoad_ != nullptr;};
        void deleteAvgLoad() { this->avgLoad_ = nullptr;};
        inline const Metrics::AvgLoad & getAvgLoad() const { DARABONBA_PTR_GET_CONST(avgLoad_, Metrics::AvgLoad) };
        inline Metrics::AvgLoad getAvgLoad() { DARABONBA_PTR_GET(avgLoad_, Metrics::AvgLoad) };
        inline Metrics& setAvgLoad(const Metrics::AvgLoad & avgLoad) { DARABONBA_PTR_SET_VALUE(avgLoad_, avgLoad) };
        inline Metrics& setAvgLoad(Metrics::AvgLoad && avgLoad) { DARABONBA_PTR_SET_RVALUE(avgLoad_, avgLoad) };


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


        // memHeap Field Functions 
        bool hasMemHeap() const { return this->memHeap_ != nullptr;};
        void deleteMemHeap() { this->memHeap_ = nullptr;};
        inline const Metrics::MemHeap & getMemHeap() const { DARABONBA_PTR_GET_CONST(memHeap_, Metrics::MemHeap) };
        inline Metrics::MemHeap getMemHeap() { DARABONBA_PTR_GET(memHeap_, Metrics::MemHeap) };
        inline Metrics& setMemHeap(const Metrics::MemHeap & memHeap) { DARABONBA_PTR_SET_VALUE(memHeap_, memHeap) };
        inline Metrics& setMemHeap(Metrics::MemHeap && memHeap) { DARABONBA_PTR_SET_RVALUE(memHeap_, memHeap) };


        // normalAvgLoad Field Functions 
        bool hasNormalAvgLoad() const { return this->normalAvgLoad_ != nullptr;};
        void deleteNormalAvgLoad() { this->normalAvgLoad_ = nullptr;};
        inline const Metrics::NormalAvgLoad & getNormalAvgLoad() const { DARABONBA_PTR_GET_CONST(normalAvgLoad_, Metrics::NormalAvgLoad) };
        inline Metrics::NormalAvgLoad getNormalAvgLoad() { DARABONBA_PTR_GET(normalAvgLoad_, Metrics::NormalAvgLoad) };
        inline Metrics& setNormalAvgLoad(const Metrics::NormalAvgLoad & normalAvgLoad) { DARABONBA_PTR_SET_VALUE(normalAvgLoad_, normalAvgLoad) };
        inline Metrics& setNormalAvgLoad(Metrics::NormalAvgLoad && normalAvgLoad) { DARABONBA_PTR_SET_RVALUE(normalAvgLoad_, normalAvgLoad) };


        // regionBalance Field Functions 
        bool hasRegionBalance() const { return this->regionBalance_ != nullptr;};
        void deleteRegionBalance() { this->regionBalance_ = nullptr;};
        inline const Metrics::RegionBalance & getRegionBalance() const { DARABONBA_PTR_GET_CONST(regionBalance_, Metrics::RegionBalance) };
        inline Metrics::RegionBalance getRegionBalance() { DARABONBA_PTR_GET(regionBalance_, Metrics::RegionBalance) };
        inline Metrics& setRegionBalance(const Metrics::RegionBalance & regionBalance) { DARABONBA_PTR_SET_VALUE(regionBalance_, regionBalance) };
        inline Metrics& setRegionBalance(Metrics::RegionBalance && regionBalance) { DARABONBA_PTR_SET_RVALUE(regionBalance_, regionBalance) };


        // regionCount Field Functions 
        bool hasRegionCount() const { return this->regionCount_ != nullptr;};
        void deleteRegionCount() { this->regionCount_ = nullptr;};
        inline const Metrics::RegionCount & getRegionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Metrics::RegionCount) };
        inline Metrics::RegionCount getRegionCount() { DARABONBA_PTR_GET(regionCount_, Metrics::RegionCount) };
        inline Metrics& setRegionCount(const Metrics::RegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
        inline Metrics& setRegionCount(Metrics::RegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


        // regionServerCount Field Functions 
        bool hasRegionServerCount() const { return this->regionServerCount_ != nullptr;};
        void deleteRegionServerCount() { this->regionServerCount_ = nullptr;};
        inline const Metrics::RegionServerCount & getRegionServerCount() const { DARABONBA_PTR_GET_CONST(regionServerCount_, Metrics::RegionServerCount) };
        inline Metrics::RegionServerCount getRegionServerCount() { DARABONBA_PTR_GET(regionServerCount_, Metrics::RegionServerCount) };
        inline Metrics& setRegionServerCount(const Metrics::RegionServerCount & regionServerCount) { DARABONBA_PTR_SET_VALUE(regionServerCount_, regionServerCount) };
        inline Metrics& setRegionServerCount(Metrics::RegionServerCount && regionServerCount) { DARABONBA_PTR_SET_RVALUE(regionServerCount_, regionServerCount) };


        // storeFileCount Field Functions 
        bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
        void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
        inline const Metrics::StoreFileCount & getStoreFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics::StoreFileCount getStoreFileCount() { DARABONBA_PTR_GET(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics& setStoreFileCount(const Metrics::StoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
        inline Metrics& setStoreFileCount(Metrics::StoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


        // tableCount Field Functions 
        bool hasTableCount() const { return this->tableCount_ != nullptr;};
        void deleteTableCount() { this->tableCount_ = nullptr;};
        inline const Metrics::TableCount & getTableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, Metrics::TableCount) };
        inline Metrics::TableCount getTableCount() { DARABONBA_PTR_GET(tableCount_, Metrics::TableCount) };
        inline Metrics& setTableCount(const Metrics::TableCount & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
        inline Metrics& setTableCount(Metrics::TableCount && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


        // totalDataSize Field Functions 
        bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
        void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
        inline const Metrics::TotalDataSize & getTotalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics::TotalDataSize getTotalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics& setTotalDataSize(const Metrics::TotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
        inline Metrics& setTotalDataSize(Metrics::TotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


        // totalReadRequest Field Functions 
        bool hasTotalReadRequest() const { return this->totalReadRequest_ != nullptr;};
        void deleteTotalReadRequest() { this->totalReadRequest_ = nullptr;};
        inline const Metrics::TotalReadRequest & getTotalReadRequest() const { DARABONBA_PTR_GET_CONST(totalReadRequest_, Metrics::TotalReadRequest) };
        inline Metrics::TotalReadRequest getTotalReadRequest() { DARABONBA_PTR_GET(totalReadRequest_, Metrics::TotalReadRequest) };
        inline Metrics& setTotalReadRequest(const Metrics::TotalReadRequest & totalReadRequest) { DARABONBA_PTR_SET_VALUE(totalReadRequest_, totalReadRequest) };
        inline Metrics& setTotalReadRequest(Metrics::TotalReadRequest && totalReadRequest) { DARABONBA_PTR_SET_RVALUE(totalReadRequest_, totalReadRequest) };


        // totalRequest Field Functions 
        bool hasTotalRequest() const { return this->totalRequest_ != nullptr;};
        void deleteTotalRequest() { this->totalRequest_ = nullptr;};
        inline const Metrics::TotalRequest & getTotalRequest() const { DARABONBA_PTR_GET_CONST(totalRequest_, Metrics::TotalRequest) };
        inline Metrics::TotalRequest getTotalRequest() { DARABONBA_PTR_GET(totalRequest_, Metrics::TotalRequest) };
        inline Metrics& setTotalRequest(const Metrics::TotalRequest & totalRequest) { DARABONBA_PTR_SET_VALUE(totalRequest_, totalRequest) };
        inline Metrics& setTotalRequest(Metrics::TotalRequest && totalRequest) { DARABONBA_PTR_SET_RVALUE(totalRequest_, totalRequest) };


        // totalWriteRequest Field Functions 
        bool hasTotalWriteRequest() const { return this->totalWriteRequest_ != nullptr;};
        void deleteTotalWriteRequest() { this->totalWriteRequest_ = nullptr;};
        inline const Metrics::TotalWriteRequest & getTotalWriteRequest() const { DARABONBA_PTR_GET_CONST(totalWriteRequest_, Metrics::TotalWriteRequest) };
        inline Metrics::TotalWriteRequest getTotalWriteRequest() { DARABONBA_PTR_GET(totalWriteRequest_, Metrics::TotalWriteRequest) };
        inline Metrics& setTotalWriteRequest(const Metrics::TotalWriteRequest & totalWriteRequest) { DARABONBA_PTR_SET_VALUE(totalWriteRequest_, totalWriteRequest) };
        inline Metrics& setTotalWriteRequest(Metrics::TotalWriteRequest && totalWriteRequest) { DARABONBA_PTR_SET_RVALUE(totalWriteRequest_, totalWriteRequest) };


      protected:
        // The average load.
        shared_ptr<Metrics::AvgLoad> avgLoad_ {};
        // The number of read requests in a day.
        shared_ptr<Metrics::DailyReadRequest> dailyReadRequest_ {};
        // The number of write requests in a day.
        shared_ptr<Metrics::DailyWriteRequest> dailyWriteRequest_ {};
        // The memory size.
        shared_ptr<Metrics::MemHeap> memHeap_ {};
        // The normal average load.
        shared_ptr<Metrics::NormalAvgLoad> normalAvgLoad_ {};
        // The region balance degree.
        shared_ptr<Metrics::RegionBalance> regionBalance_ {};
        // The number of regions.
        shared_ptr<Metrics::RegionCount> regionCount_ {};
        // The number of region servers.
        shared_ptr<Metrics::RegionServerCount> regionServerCount_ {};
        // The number of StoreFiles.
        shared_ptr<Metrics::StoreFileCount> storeFileCount_ {};
        // The number of tables.
        shared_ptr<Metrics::TableCount> tableCount_ {};
        // The size of the cluster.
        shared_ptr<Metrics::TotalDataSize> totalDataSize_ {};
        // The total number of read requests.
        shared_ptr<Metrics::TotalReadRequest> totalReadRequest_ {};
        // The total number of requests in the cluster.
        shared_ptr<Metrics::TotalRequest> totalRequest_ {};
        // The total number of write requests.
        shared_ptr<Metrics::TotalWriteRequest> totalWriteRequest_ {};
      };

      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(HbaseScore, hbaseScore_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(HbaseScore, hbaseScore_);
        };
        Analysis() = default ;
        Analysis(const Analysis &) = default ;
        Analysis(Analysis &&) = default ;
        Analysis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Analysis() = default ;
        Analysis& operator=(const Analysis &) = default ;
        Analysis& operator=(Analysis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hbaseScore_ == nullptr; };
        // hbaseScore Field Functions 
        bool hasHbaseScore() const { return this->hbaseScore_ != nullptr;};
        void deleteHbaseScore() { this->hbaseScore_ = nullptr;};
        inline int32_t getHbaseScore() const { DARABONBA_PTR_GET_DEFAULT(hbaseScore_, 0) };
        inline Analysis& setHbaseScore(int32_t hbaseScore) { DARABONBA_PTR_SET_VALUE(hbaseScore_, hbaseScore) };


      protected:
        // The overall score of the HBase cluster.
        shared_ptr<int32_t> hbaseScore_ {};
      };

      virtual bool empty() const override { return this->analysis_ == nullptr
        && this->metrics_ == nullptr; };
      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline const Data::Analysis & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, Data::Analysis) };
      inline Data::Analysis getAnalysis() { DARABONBA_PTR_GET(analysis_, Data::Analysis) };
      inline Data& setAnalysis(const Data::Analysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
      inline Data& setAnalysis(Data::Analysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    protected:
      // The analysis result.
      shared_ptr<Data::Analysis> analysis_ {};
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHBaseClusterResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHBaseClusterResponseBody::Data) };
    inline GetDoctorHBaseClusterResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorHBaseClusterResponseBody::Data) };
    inline GetDoctorHBaseClusterResponseBody& setData(const GetDoctorHBaseClusterResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHBaseClusterResponseBody& setData(GetDoctorHBaseClusterResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHBaseClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetDoctorHBaseClusterResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
