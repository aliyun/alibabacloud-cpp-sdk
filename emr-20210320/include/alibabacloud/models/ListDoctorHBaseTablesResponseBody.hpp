// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASETABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorHBaseTablesResponseBody() = default ;
    ListDoctorHBaseTablesResponseBody(const ListDoctorHBaseTablesResponseBody &) = default ;
    ListDoctorHBaseTablesResponseBody(ListDoctorHBaseTablesResponseBody &&) = default ;
    ListDoctorHBaseTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseTablesResponseBody() = default ;
    ListDoctorHBaseTablesResponseBody& operator=(const ListDoctorHBaseTablesResponseBody &) = default ;
    ListDoctorHBaseTablesResponseBody& operator=(ListDoctorHBaseTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
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
          DARABONBA_PTR_TO_JSON(ColdAccessDay, coldAccessDay_);
          DARABONBA_PTR_TO_JSON(ColdConfigDay, coldConfigDay_);
          DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_TO_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(FreezeConfigDay, freezeConfigDay_);
          DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
          DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_TO_JSON(Locality, locality_);
          DARABONBA_PTR_TO_JSON(ReadRequestBalance, readRequestBalance_);
          DARABONBA_PTR_TO_JSON(RegionBalance, regionBalance_);
          DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
          DARABONBA_PTR_TO_JSON(RegionCountDayGrowthRatio, regionCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(RegionServerCount, regionServerCount_);
          DARABONBA_PTR_TO_JSON(RequestBalance, requestBalance_);
          DARABONBA_PTR_TO_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_TO_JSON(StoreFileCountDayGrowthRatio, storeFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(TableSize, tableSize_);
          DARABONBA_PTR_TO_JSON(TableSizeDayGrowthRatio, tableSizeDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(WarmConfigDay, warmConfigDay_);
          DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
          DARABONBA_PTR_TO_JSON(WriteRequestBalance, writeRequestBalance_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(ColdAccessDay, coldAccessDay_);
          DARABONBA_PTR_FROM_JSON(ColdConfigDay, coldConfigDay_);
          DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_FROM_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(FreezeConfigDay, freezeConfigDay_);
          DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
          DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_FROM_JSON(Locality, locality_);
          DARABONBA_PTR_FROM_JSON(ReadRequestBalance, readRequestBalance_);
          DARABONBA_PTR_FROM_JSON(RegionBalance, regionBalance_);
          DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
          DARABONBA_PTR_FROM_JSON(RegionCountDayGrowthRatio, regionCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(RegionServerCount, regionServerCount_);
          DARABONBA_PTR_FROM_JSON(RequestBalance, requestBalance_);
          DARABONBA_PTR_FROM_JSON(StoreFileCount, storeFileCount_);
          DARABONBA_PTR_FROM_JSON(StoreFileCountDayGrowthRatio, storeFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(TableSize, tableSize_);
          DARABONBA_PTR_FROM_JSON(TableSizeDayGrowthRatio, tableSizeDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(WarmConfigDay, warmConfigDay_);
          DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
          DARABONBA_PTR_FROM_JSON(WriteRequestBalance, writeRequestBalance_);
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
        class WriteRequestBalance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WriteRequestBalance& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WriteRequestBalance& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WriteRequestBalance() = default ;
          WriteRequestBalance(const WriteRequestBalance &) = default ;
          WriteRequestBalance(WriteRequestBalance &&) = default ;
          WriteRequestBalance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WriteRequestBalance() = default ;
          WriteRequestBalance& operator=(const WriteRequestBalance &) = default ;
          WriteRequestBalance& operator=(WriteRequestBalance &&) = default ;
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
          inline WriteRequestBalance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WriteRequestBalance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WriteRequestBalance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline WriteRequestBalance& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class WarmDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WarmDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WarmDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WarmDataSize() = default ;
          WarmDataSize(const WarmDataSize &) = default ;
          WarmDataSize(WarmDataSize &&) = default ;
          WarmDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WarmDataSize() = default ;
          WarmDataSize& operator=(const WarmDataSize &) = default ;
          WarmDataSize& operator=(WarmDataSize &&) = default ;
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
          inline WarmDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WarmDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WarmDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline WarmDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class WarmConfigDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WarmConfigDay& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WarmConfigDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WarmConfigDay() = default ;
          WarmConfigDay(const WarmConfigDay &) = default ;
          WarmConfigDay(WarmConfigDay &&) = default ;
          WarmConfigDay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WarmConfigDay() = default ;
          WarmConfigDay& operator=(const WarmConfigDay &) = default ;
          WarmConfigDay& operator=(WarmConfigDay &&) = default ;
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
          inline WarmConfigDay& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WarmConfigDay& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WarmConfigDay& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline WarmConfigDay& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TableSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TableSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TableSizeDayGrowthRatio() = default ;
          TableSizeDayGrowthRatio(const TableSizeDayGrowthRatio &) = default ;
          TableSizeDayGrowthRatio(TableSizeDayGrowthRatio &&) = default ;
          TableSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableSizeDayGrowthRatio() = default ;
          TableSizeDayGrowthRatio& operator=(const TableSizeDayGrowthRatio &) = default ;
          TableSizeDayGrowthRatio& operator=(TableSizeDayGrowthRatio &&) = default ;
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
          inline TableSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TableSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TableSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline TableSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TableSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TableSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TableSize() = default ;
          TableSize(const TableSize &) = default ;
          TableSize(TableSize &&) = default ;
          TableSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableSize() = default ;
          TableSize& operator=(const TableSize &) = default ;
          TableSize& operator=(TableSize &&) = default ;
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
          inline TableSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TableSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TableSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TableSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class StoreFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StoreFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, StoreFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          StoreFileCountDayGrowthRatio() = default ;
          StoreFileCountDayGrowthRatio(const StoreFileCountDayGrowthRatio &) = default ;
          StoreFileCountDayGrowthRatio(StoreFileCountDayGrowthRatio &&) = default ;
          StoreFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StoreFileCountDayGrowthRatio() = default ;
          StoreFileCountDayGrowthRatio& operator=(const StoreFileCountDayGrowthRatio &) = default ;
          StoreFileCountDayGrowthRatio& operator=(StoreFileCountDayGrowthRatio &&) = default ;
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
          inline StoreFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StoreFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline StoreFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline StoreFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class RequestBalance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestBalance& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RequestBalance& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RequestBalance() = default ;
          RequestBalance(const RequestBalance &) = default ;
          RequestBalance(RequestBalance &&) = default ;
          RequestBalance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestBalance() = default ;
          RequestBalance& operator=(const RequestBalance &) = default ;
          RequestBalance& operator=(RequestBalance &&) = default ;
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
          inline RequestBalance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RequestBalance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline RequestBalance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline RequestBalance& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class RegionCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RegionCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RegionCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RegionCountDayGrowthRatio() = default ;
          RegionCountDayGrowthRatio(const RegionCountDayGrowthRatio &) = default ;
          RegionCountDayGrowthRatio(RegionCountDayGrowthRatio &&) = default ;
          RegionCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RegionCountDayGrowthRatio() = default ;
          RegionCountDayGrowthRatio& operator=(const RegionCountDayGrowthRatio &) = default ;
          RegionCountDayGrowthRatio& operator=(RegionCountDayGrowthRatio &&) = default ;
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
          inline RegionCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RegionCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline RegionCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline RegionCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ReadRequestBalance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadRequestBalance& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ReadRequestBalance& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ReadRequestBalance() = default ;
          ReadRequestBalance(const ReadRequestBalance &) = default ;
          ReadRequestBalance(ReadRequestBalance &&) = default ;
          ReadRequestBalance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadRequestBalance() = default ;
          ReadRequestBalance& operator=(const ReadRequestBalance &) = default ;
          ReadRequestBalance& operator=(ReadRequestBalance &&) = default ;
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
          inline ReadRequestBalance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ReadRequestBalance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ReadRequestBalance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline ReadRequestBalance& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class Locality : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Locality& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Locality& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Locality() = default ;
          Locality(const Locality &) = default ;
          Locality(Locality &&) = default ;
          Locality(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Locality() = default ;
          Locality& operator=(const Locality &) = default ;
          Locality& operator=(Locality &&) = default ;
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
          inline Locality& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Locality& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline Locality& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline Locality& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class HotDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HotDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HotDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HotDataSize() = default ;
          HotDataSize(const HotDataSize &) = default ;
          HotDataSize(HotDataSize &&) = default ;
          HotDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HotDataSize() = default ;
          HotDataSize& operator=(const HotDataSize &) = default ;
          HotDataSize& operator=(HotDataSize &&) = default ;
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
          inline HotDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HotDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline HotDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline HotDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class FreezeDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreezeDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FreezeDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FreezeDataSize() = default ;
          FreezeDataSize(const FreezeDataSize &) = default ;
          FreezeDataSize(FreezeDataSize &&) = default ;
          FreezeDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreezeDataSize() = default ;
          FreezeDataSize& operator=(const FreezeDataSize &) = default ;
          FreezeDataSize& operator=(FreezeDataSize &&) = default ;
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
          inline FreezeDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FreezeDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline FreezeDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline FreezeDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class FreezeConfigDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreezeConfigDay& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FreezeConfigDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FreezeConfigDay() = default ;
          FreezeConfigDay(const FreezeConfigDay &) = default ;
          FreezeConfigDay(FreezeConfigDay &&) = default ;
          FreezeConfigDay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreezeConfigDay() = default ;
          FreezeConfigDay& operator=(const FreezeConfigDay &) = default ;
          FreezeConfigDay& operator=(FreezeConfigDay &&) = default ;
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
          inline FreezeConfigDay& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FreezeConfigDay& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline FreezeConfigDay& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline FreezeConfigDay& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class DailyWriteRequestDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyWriteRequestDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DailyWriteRequestDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DailyWriteRequestDayGrowthRatio() = default ;
          DailyWriteRequestDayGrowthRatio(const DailyWriteRequestDayGrowthRatio &) = default ;
          DailyWriteRequestDayGrowthRatio(DailyWriteRequestDayGrowthRatio &&) = default ;
          DailyWriteRequestDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyWriteRequestDayGrowthRatio() = default ;
          DailyWriteRequestDayGrowthRatio& operator=(const DailyWriteRequestDayGrowthRatio &) = default ;
          DailyWriteRequestDayGrowthRatio& operator=(DailyWriteRequestDayGrowthRatio &&) = default ;
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
          inline DailyWriteRequestDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DailyWriteRequestDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline DailyWriteRequestDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline DailyWriteRequestDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class DailyReadRequestDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyReadRequestDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DailyReadRequestDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DailyReadRequestDayGrowthRatio() = default ;
          DailyReadRequestDayGrowthRatio(const DailyReadRequestDayGrowthRatio &) = default ;
          DailyReadRequestDayGrowthRatio(DailyReadRequestDayGrowthRatio &&) = default ;
          DailyReadRequestDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyReadRequestDayGrowthRatio() = default ;
          DailyReadRequestDayGrowthRatio& operator=(const DailyReadRequestDayGrowthRatio &) = default ;
          DailyReadRequestDayGrowthRatio& operator=(DailyReadRequestDayGrowthRatio &&) = default ;
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
          inline DailyReadRequestDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DailyReadRequestDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline DailyReadRequestDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline DailyReadRequestDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ColdDataSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColdDataSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ColdDataSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ColdDataSize() = default ;
          ColdDataSize(const ColdDataSize &) = default ;
          ColdDataSize(ColdDataSize &&) = default ;
          ColdDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColdDataSize() = default ;
          ColdDataSize& operator=(const ColdDataSize &) = default ;
          ColdDataSize& operator=(ColdDataSize &&) = default ;
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
          inline ColdDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColdDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ColdDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline ColdDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ColdConfigDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColdConfigDay& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ColdConfigDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ColdConfigDay() = default ;
          ColdConfigDay(const ColdConfigDay &) = default ;
          ColdConfigDay(ColdConfigDay &&) = default ;
          ColdConfigDay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColdConfigDay() = default ;
          ColdConfigDay& operator=(const ColdConfigDay &) = default ;
          ColdConfigDay& operator=(ColdConfigDay &&) = default ;
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
          inline ColdConfigDay& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColdConfigDay& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ColdConfigDay& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline ColdConfigDay& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ColdAccessDay : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColdAccessDay& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ColdAccessDay& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ColdAccessDay() = default ;
          ColdAccessDay(const ColdAccessDay &) = default ;
          ColdAccessDay(ColdAccessDay &&) = default ;
          ColdAccessDay(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColdAccessDay() = default ;
          ColdAccessDay& operator=(const ColdAccessDay &) = default ;
          ColdAccessDay& operator=(ColdAccessDay &&) = default ;
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
          inline ColdAccessDay& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColdAccessDay& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ColdAccessDay& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline ColdAccessDay& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        virtual bool empty() const override { return this->coldAccessDay_ == nullptr
        && this->coldConfigDay_ == nullptr && this->coldDataSize_ == nullptr && this->dailyReadRequest_ == nullptr && this->dailyReadRequestDayGrowthRatio_ == nullptr && this->dailyWriteRequest_ == nullptr
        && this->dailyWriteRequestDayGrowthRatio_ == nullptr && this->freezeConfigDay_ == nullptr && this->freezeDataSize_ == nullptr && this->hotDataSize_ == nullptr && this->locality_ == nullptr
        && this->readRequestBalance_ == nullptr && this->regionBalance_ == nullptr && this->regionCount_ == nullptr && this->regionCountDayGrowthRatio_ == nullptr && this->regionServerCount_ == nullptr
        && this->requestBalance_ == nullptr && this->storeFileCount_ == nullptr && this->storeFileCountDayGrowthRatio_ == nullptr && this->tableSize_ == nullptr && this->tableSizeDayGrowthRatio_ == nullptr
        && this->warmConfigDay_ == nullptr && this->warmDataSize_ == nullptr && this->writeRequestBalance_ == nullptr; };
        // coldAccessDay Field Functions 
        bool hasColdAccessDay() const { return this->coldAccessDay_ != nullptr;};
        void deleteColdAccessDay() { this->coldAccessDay_ = nullptr;};
        inline const Metrics::ColdAccessDay & getColdAccessDay() const { DARABONBA_PTR_GET_CONST(coldAccessDay_, Metrics::ColdAccessDay) };
        inline Metrics::ColdAccessDay getColdAccessDay() { DARABONBA_PTR_GET(coldAccessDay_, Metrics::ColdAccessDay) };
        inline Metrics& setColdAccessDay(const Metrics::ColdAccessDay & coldAccessDay) { DARABONBA_PTR_SET_VALUE(coldAccessDay_, coldAccessDay) };
        inline Metrics& setColdAccessDay(Metrics::ColdAccessDay && coldAccessDay) { DARABONBA_PTR_SET_RVALUE(coldAccessDay_, coldAccessDay) };


        // coldConfigDay Field Functions 
        bool hasColdConfigDay() const { return this->coldConfigDay_ != nullptr;};
        void deleteColdConfigDay() { this->coldConfigDay_ = nullptr;};
        inline const Metrics::ColdConfigDay & getColdConfigDay() const { DARABONBA_PTR_GET_CONST(coldConfigDay_, Metrics::ColdConfigDay) };
        inline Metrics::ColdConfigDay getColdConfigDay() { DARABONBA_PTR_GET(coldConfigDay_, Metrics::ColdConfigDay) };
        inline Metrics& setColdConfigDay(const Metrics::ColdConfigDay & coldConfigDay) { DARABONBA_PTR_SET_VALUE(coldConfigDay_, coldConfigDay) };
        inline Metrics& setColdConfigDay(Metrics::ColdConfigDay && coldConfigDay) { DARABONBA_PTR_SET_RVALUE(coldConfigDay_, coldConfigDay) };


        // coldDataSize Field Functions 
        bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
        void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
        inline const Metrics::ColdDataSize & getColdDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Metrics::ColdDataSize) };
        inline Metrics::ColdDataSize getColdDataSize() { DARABONBA_PTR_GET(coldDataSize_, Metrics::ColdDataSize) };
        inline Metrics& setColdDataSize(const Metrics::ColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
        inline Metrics& setColdDataSize(Metrics::ColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


        // dailyReadRequest Field Functions 
        bool hasDailyReadRequest() const { return this->dailyReadRequest_ != nullptr;};
        void deleteDailyReadRequest() { this->dailyReadRequest_ = nullptr;};
        inline const Metrics::DailyReadRequest & getDailyReadRequest() const { DARABONBA_PTR_GET_CONST(dailyReadRequest_, Metrics::DailyReadRequest) };
        inline Metrics::DailyReadRequest getDailyReadRequest() { DARABONBA_PTR_GET(dailyReadRequest_, Metrics::DailyReadRequest) };
        inline Metrics& setDailyReadRequest(const Metrics::DailyReadRequest & dailyReadRequest) { DARABONBA_PTR_SET_VALUE(dailyReadRequest_, dailyReadRequest) };
        inline Metrics& setDailyReadRequest(Metrics::DailyReadRequest && dailyReadRequest) { DARABONBA_PTR_SET_RVALUE(dailyReadRequest_, dailyReadRequest) };


        // dailyReadRequestDayGrowthRatio Field Functions 
        bool hasDailyReadRequestDayGrowthRatio() const { return this->dailyReadRequestDayGrowthRatio_ != nullptr;};
        void deleteDailyReadRequestDayGrowthRatio() { this->dailyReadRequestDayGrowthRatio_ = nullptr;};
        inline const Metrics::DailyReadRequestDayGrowthRatio & getDailyReadRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyReadRequestDayGrowthRatio_, Metrics::DailyReadRequestDayGrowthRatio) };
        inline Metrics::DailyReadRequestDayGrowthRatio getDailyReadRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyReadRequestDayGrowthRatio_, Metrics::DailyReadRequestDayGrowthRatio) };
        inline Metrics& setDailyReadRequestDayGrowthRatio(const Metrics::DailyReadRequestDayGrowthRatio & dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };
        inline Metrics& setDailyReadRequestDayGrowthRatio(Metrics::DailyReadRequestDayGrowthRatio && dailyReadRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyReadRequestDayGrowthRatio_, dailyReadRequestDayGrowthRatio) };


        // dailyWriteRequest Field Functions 
        bool hasDailyWriteRequest() const { return this->dailyWriteRequest_ != nullptr;};
        void deleteDailyWriteRequest() { this->dailyWriteRequest_ = nullptr;};
        inline const Metrics::DailyWriteRequest & getDailyWriteRequest() const { DARABONBA_PTR_GET_CONST(dailyWriteRequest_, Metrics::DailyWriteRequest) };
        inline Metrics::DailyWriteRequest getDailyWriteRequest() { DARABONBA_PTR_GET(dailyWriteRequest_, Metrics::DailyWriteRequest) };
        inline Metrics& setDailyWriteRequest(const Metrics::DailyWriteRequest & dailyWriteRequest) { DARABONBA_PTR_SET_VALUE(dailyWriteRequest_, dailyWriteRequest) };
        inline Metrics& setDailyWriteRequest(Metrics::DailyWriteRequest && dailyWriteRequest) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequest_, dailyWriteRequest) };


        // dailyWriteRequestDayGrowthRatio Field Functions 
        bool hasDailyWriteRequestDayGrowthRatio() const { return this->dailyWriteRequestDayGrowthRatio_ != nullptr;};
        void deleteDailyWriteRequestDayGrowthRatio() { this->dailyWriteRequestDayGrowthRatio_ = nullptr;};
        inline const Metrics::DailyWriteRequestDayGrowthRatio & getDailyWriteRequestDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(dailyWriteRequestDayGrowthRatio_, Metrics::DailyWriteRequestDayGrowthRatio) };
        inline Metrics::DailyWriteRequestDayGrowthRatio getDailyWriteRequestDayGrowthRatio() { DARABONBA_PTR_GET(dailyWriteRequestDayGrowthRatio_, Metrics::DailyWriteRequestDayGrowthRatio) };
        inline Metrics& setDailyWriteRequestDayGrowthRatio(const Metrics::DailyWriteRequestDayGrowthRatio & dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };
        inline Metrics& setDailyWriteRequestDayGrowthRatio(Metrics::DailyWriteRequestDayGrowthRatio && dailyWriteRequestDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(dailyWriteRequestDayGrowthRatio_, dailyWriteRequestDayGrowthRatio) };


        // freezeConfigDay Field Functions 
        bool hasFreezeConfigDay() const { return this->freezeConfigDay_ != nullptr;};
        void deleteFreezeConfigDay() { this->freezeConfigDay_ = nullptr;};
        inline const Metrics::FreezeConfigDay & getFreezeConfigDay() const { DARABONBA_PTR_GET_CONST(freezeConfigDay_, Metrics::FreezeConfigDay) };
        inline Metrics::FreezeConfigDay getFreezeConfigDay() { DARABONBA_PTR_GET(freezeConfigDay_, Metrics::FreezeConfigDay) };
        inline Metrics& setFreezeConfigDay(const Metrics::FreezeConfigDay & freezeConfigDay) { DARABONBA_PTR_SET_VALUE(freezeConfigDay_, freezeConfigDay) };
        inline Metrics& setFreezeConfigDay(Metrics::FreezeConfigDay && freezeConfigDay) { DARABONBA_PTR_SET_RVALUE(freezeConfigDay_, freezeConfigDay) };


        // freezeDataSize Field Functions 
        bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
        void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
        inline const Metrics::FreezeDataSize & getFreezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Metrics::FreezeDataSize) };
        inline Metrics::FreezeDataSize getFreezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Metrics::FreezeDataSize) };
        inline Metrics& setFreezeDataSize(const Metrics::FreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
        inline Metrics& setFreezeDataSize(Metrics::FreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


        // hotDataSize Field Functions 
        bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
        void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
        inline const Metrics::HotDataSize & getHotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Metrics::HotDataSize) };
        inline Metrics::HotDataSize getHotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Metrics::HotDataSize) };
        inline Metrics& setHotDataSize(const Metrics::HotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
        inline Metrics& setHotDataSize(Metrics::HotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


        // locality Field Functions 
        bool hasLocality() const { return this->locality_ != nullptr;};
        void deleteLocality() { this->locality_ = nullptr;};
        inline const Metrics::Locality & getLocality() const { DARABONBA_PTR_GET_CONST(locality_, Metrics::Locality) };
        inline Metrics::Locality getLocality() { DARABONBA_PTR_GET(locality_, Metrics::Locality) };
        inline Metrics& setLocality(const Metrics::Locality & locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };
        inline Metrics& setLocality(Metrics::Locality && locality) { DARABONBA_PTR_SET_RVALUE(locality_, locality) };


        // readRequestBalance Field Functions 
        bool hasReadRequestBalance() const { return this->readRequestBalance_ != nullptr;};
        void deleteReadRequestBalance() { this->readRequestBalance_ = nullptr;};
        inline const Metrics::ReadRequestBalance & getReadRequestBalance() const { DARABONBA_PTR_GET_CONST(readRequestBalance_, Metrics::ReadRequestBalance) };
        inline Metrics::ReadRequestBalance getReadRequestBalance() { DARABONBA_PTR_GET(readRequestBalance_, Metrics::ReadRequestBalance) };
        inline Metrics& setReadRequestBalance(const Metrics::ReadRequestBalance & readRequestBalance) { DARABONBA_PTR_SET_VALUE(readRequestBalance_, readRequestBalance) };
        inline Metrics& setReadRequestBalance(Metrics::ReadRequestBalance && readRequestBalance) { DARABONBA_PTR_SET_RVALUE(readRequestBalance_, readRequestBalance) };


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


        // regionCountDayGrowthRatio Field Functions 
        bool hasRegionCountDayGrowthRatio() const { return this->regionCountDayGrowthRatio_ != nullptr;};
        void deleteRegionCountDayGrowthRatio() { this->regionCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::RegionCountDayGrowthRatio & getRegionCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(regionCountDayGrowthRatio_, Metrics::RegionCountDayGrowthRatio) };
        inline Metrics::RegionCountDayGrowthRatio getRegionCountDayGrowthRatio() { DARABONBA_PTR_GET(regionCountDayGrowthRatio_, Metrics::RegionCountDayGrowthRatio) };
        inline Metrics& setRegionCountDayGrowthRatio(const Metrics::RegionCountDayGrowthRatio & regionCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };
        inline Metrics& setRegionCountDayGrowthRatio(Metrics::RegionCountDayGrowthRatio && regionCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(regionCountDayGrowthRatio_, regionCountDayGrowthRatio) };


        // regionServerCount Field Functions 
        bool hasRegionServerCount() const { return this->regionServerCount_ != nullptr;};
        void deleteRegionServerCount() { this->regionServerCount_ = nullptr;};
        inline const Metrics::RegionServerCount & getRegionServerCount() const { DARABONBA_PTR_GET_CONST(regionServerCount_, Metrics::RegionServerCount) };
        inline Metrics::RegionServerCount getRegionServerCount() { DARABONBA_PTR_GET(regionServerCount_, Metrics::RegionServerCount) };
        inline Metrics& setRegionServerCount(const Metrics::RegionServerCount & regionServerCount) { DARABONBA_PTR_SET_VALUE(regionServerCount_, regionServerCount) };
        inline Metrics& setRegionServerCount(Metrics::RegionServerCount && regionServerCount) { DARABONBA_PTR_SET_RVALUE(regionServerCount_, regionServerCount) };


        // requestBalance Field Functions 
        bool hasRequestBalance() const { return this->requestBalance_ != nullptr;};
        void deleteRequestBalance() { this->requestBalance_ = nullptr;};
        inline const Metrics::RequestBalance & getRequestBalance() const { DARABONBA_PTR_GET_CONST(requestBalance_, Metrics::RequestBalance) };
        inline Metrics::RequestBalance getRequestBalance() { DARABONBA_PTR_GET(requestBalance_, Metrics::RequestBalance) };
        inline Metrics& setRequestBalance(const Metrics::RequestBalance & requestBalance) { DARABONBA_PTR_SET_VALUE(requestBalance_, requestBalance) };
        inline Metrics& setRequestBalance(Metrics::RequestBalance && requestBalance) { DARABONBA_PTR_SET_RVALUE(requestBalance_, requestBalance) };


        // storeFileCount Field Functions 
        bool hasStoreFileCount() const { return this->storeFileCount_ != nullptr;};
        void deleteStoreFileCount() { this->storeFileCount_ = nullptr;};
        inline const Metrics::StoreFileCount & getStoreFileCount() const { DARABONBA_PTR_GET_CONST(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics::StoreFileCount getStoreFileCount() { DARABONBA_PTR_GET(storeFileCount_, Metrics::StoreFileCount) };
        inline Metrics& setStoreFileCount(const Metrics::StoreFileCount & storeFileCount) { DARABONBA_PTR_SET_VALUE(storeFileCount_, storeFileCount) };
        inline Metrics& setStoreFileCount(Metrics::StoreFileCount && storeFileCount) { DARABONBA_PTR_SET_RVALUE(storeFileCount_, storeFileCount) };


        // storeFileCountDayGrowthRatio Field Functions 
        bool hasStoreFileCountDayGrowthRatio() const { return this->storeFileCountDayGrowthRatio_ != nullptr;};
        void deleteStoreFileCountDayGrowthRatio() { this->storeFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::StoreFileCountDayGrowthRatio & getStoreFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(storeFileCountDayGrowthRatio_, Metrics::StoreFileCountDayGrowthRatio) };
        inline Metrics::StoreFileCountDayGrowthRatio getStoreFileCountDayGrowthRatio() { DARABONBA_PTR_GET(storeFileCountDayGrowthRatio_, Metrics::StoreFileCountDayGrowthRatio) };
        inline Metrics& setStoreFileCountDayGrowthRatio(const Metrics::StoreFileCountDayGrowthRatio & storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };
        inline Metrics& setStoreFileCountDayGrowthRatio(Metrics::StoreFileCountDayGrowthRatio && storeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(storeFileCountDayGrowthRatio_, storeFileCountDayGrowthRatio) };


        // tableSize Field Functions 
        bool hasTableSize() const { return this->tableSize_ != nullptr;};
        void deleteTableSize() { this->tableSize_ = nullptr;};
        inline const Metrics::TableSize & getTableSize() const { DARABONBA_PTR_GET_CONST(tableSize_, Metrics::TableSize) };
        inline Metrics::TableSize getTableSize() { DARABONBA_PTR_GET(tableSize_, Metrics::TableSize) };
        inline Metrics& setTableSize(const Metrics::TableSize & tableSize) { DARABONBA_PTR_SET_VALUE(tableSize_, tableSize) };
        inline Metrics& setTableSize(Metrics::TableSize && tableSize) { DARABONBA_PTR_SET_RVALUE(tableSize_, tableSize) };


        // tableSizeDayGrowthRatio Field Functions 
        bool hasTableSizeDayGrowthRatio() const { return this->tableSizeDayGrowthRatio_ != nullptr;};
        void deleteTableSizeDayGrowthRatio() { this->tableSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::TableSizeDayGrowthRatio & getTableSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tableSizeDayGrowthRatio_, Metrics::TableSizeDayGrowthRatio) };
        inline Metrics::TableSizeDayGrowthRatio getTableSizeDayGrowthRatio() { DARABONBA_PTR_GET(tableSizeDayGrowthRatio_, Metrics::TableSizeDayGrowthRatio) };
        inline Metrics& setTableSizeDayGrowthRatio(const Metrics::TableSizeDayGrowthRatio & tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };
        inline Metrics& setTableSizeDayGrowthRatio(Metrics::TableSizeDayGrowthRatio && tableSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tableSizeDayGrowthRatio_, tableSizeDayGrowthRatio) };


        // warmConfigDay Field Functions 
        bool hasWarmConfigDay() const { return this->warmConfigDay_ != nullptr;};
        void deleteWarmConfigDay() { this->warmConfigDay_ = nullptr;};
        inline const Metrics::WarmConfigDay & getWarmConfigDay() const { DARABONBA_PTR_GET_CONST(warmConfigDay_, Metrics::WarmConfigDay) };
        inline Metrics::WarmConfigDay getWarmConfigDay() { DARABONBA_PTR_GET(warmConfigDay_, Metrics::WarmConfigDay) };
        inline Metrics& setWarmConfigDay(const Metrics::WarmConfigDay & warmConfigDay) { DARABONBA_PTR_SET_VALUE(warmConfigDay_, warmConfigDay) };
        inline Metrics& setWarmConfigDay(Metrics::WarmConfigDay && warmConfigDay) { DARABONBA_PTR_SET_RVALUE(warmConfigDay_, warmConfigDay) };


        // warmDataSize Field Functions 
        bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
        void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
        inline const Metrics::WarmDataSize & getWarmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Metrics::WarmDataSize) };
        inline Metrics::WarmDataSize getWarmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Metrics::WarmDataSize) };
        inline Metrics& setWarmDataSize(const Metrics::WarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
        inline Metrics& setWarmDataSize(Metrics::WarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


        // writeRequestBalance Field Functions 
        bool hasWriteRequestBalance() const { return this->writeRequestBalance_ != nullptr;};
        void deleteWriteRequestBalance() { this->writeRequestBalance_ = nullptr;};
        inline const Metrics::WriteRequestBalance & getWriteRequestBalance() const { DARABONBA_PTR_GET_CONST(writeRequestBalance_, Metrics::WriteRequestBalance) };
        inline Metrics::WriteRequestBalance getWriteRequestBalance() { DARABONBA_PTR_GET(writeRequestBalance_, Metrics::WriteRequestBalance) };
        inline Metrics& setWriteRequestBalance(const Metrics::WriteRequestBalance & writeRequestBalance) { DARABONBA_PTR_SET_VALUE(writeRequestBalance_, writeRequestBalance) };
        inline Metrics& setWriteRequestBalance(Metrics::WriteRequestBalance && writeRequestBalance) { DARABONBA_PTR_SET_RVALUE(writeRequestBalance_, writeRequestBalance) };


      protected:
        // The number of days during which the table was not accessed.
        shared_ptr<Metrics::ColdAccessDay> coldAccessDay_ {};
        // The number of consecutive days without access to data before the data is considered as very cold data.
        shared_ptr<Metrics::ColdConfigDay> coldConfigDay_ {};
        // The size of cold data.
        shared_ptr<Metrics::ColdDataSize> coldDataSize_ {};
        // The total number of read requests for the table in a day.
        shared_ptr<Metrics::DailyReadRequest> dailyReadRequest_ {};
        // The daily increment ratio of the number of read requests in a day.
        shared_ptr<Metrics::DailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ {};
        // The total number of write requests for the table in a day.
        shared_ptr<Metrics::DailyWriteRequest> dailyWriteRequest_ {};
        // The daily increment ratio of the number of write requests in a day.
        shared_ptr<Metrics::DailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ {};
        // The number of consecutive days without access to data before the data was considered as very cold data.
        shared_ptr<Metrics::FreezeConfigDay> freezeConfigDay_ {};
        // The size of very cold data.
        shared_ptr<Metrics::FreezeDataSize> freezeDataSize_ {};
        // The size of hot data.
        shared_ptr<Metrics::HotDataSize> hotDataSize_ {};
        // The localization rate.
        shared_ptr<Metrics::Locality> locality_ {};
        // The read balancing degree.
        shared_ptr<Metrics::ReadRequestBalance> readRequestBalance_ {};
        // The balancing degree.
        shared_ptr<Metrics::RegionBalance> regionBalance_ {};
        // The number of regions that host the table.
        shared_ptr<Metrics::RegionCount> regionCount_ {};
        // The daily increment ratio of the number of regions.
        shared_ptr<Metrics::RegionCountDayGrowthRatio> regionCountDayGrowthRatio_ {};
        // The number of region servers that host the table.
        shared_ptr<Metrics::RegionServerCount> regionServerCount_ {};
        // The request balancing degree.
        shared_ptr<Metrics::RequestBalance> requestBalance_ {};
        // The number of StoreFiles.
        shared_ptr<Metrics::StoreFileCount> storeFileCount_ {};
        // The daily increment ratio of the number of StoreFiles.
        shared_ptr<Metrics::StoreFileCountDayGrowthRatio> storeFileCountDayGrowthRatio_ {};
        // The size of the table.
        shared_ptr<Metrics::TableSize> tableSize_ {};
        // The daily increment ratio of the table size.
        shared_ptr<Metrics::TableSizeDayGrowthRatio> tableSizeDayGrowthRatio_ {};
        // The number of consecutive days without access to data before the data is considered as cold data.
        shared_ptr<Metrics::WarmConfigDay> warmConfigDay_ {};
        // The size of warm data.
        shared_ptr<Metrics::WarmDataSize> warmDataSize_ {};
        // The write balancing degree.
        shared_ptr<Metrics::WriteRequestBalance> writeRequestBalance_ {};
      };

      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(ReadRequestHotspotRegionList, readRequestHotspotRegionList_);
          DARABONBA_PTR_TO_JSON(ReadRequestUnbalanceSuggestion, readRequestUnbalanceSuggestion_);
          DARABONBA_PTR_TO_JSON(RequestHotspotRegionList, requestHotspotRegionList_);
          DARABONBA_PTR_TO_JSON(RequestUnbalanceSuggestion, requestUnbalanceSuggestion_);
          DARABONBA_PTR_TO_JSON(TableScore, tableScore_);
          DARABONBA_PTR_TO_JSON(WriteRequestHotspotRegionList, writeRequestHotspotRegionList_);
          DARABONBA_PTR_TO_JSON(WriteRequestUnbalanceSuggestion, writeRequestUnbalanceSuggestion_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(ReadRequestHotspotRegionList, readRequestHotspotRegionList_);
          DARABONBA_PTR_FROM_JSON(ReadRequestUnbalanceSuggestion, readRequestUnbalanceSuggestion_);
          DARABONBA_PTR_FROM_JSON(RequestHotspotRegionList, requestHotspotRegionList_);
          DARABONBA_PTR_FROM_JSON(RequestUnbalanceSuggestion, requestUnbalanceSuggestion_);
          DARABONBA_PTR_FROM_JSON(TableScore, tableScore_);
          DARABONBA_PTR_FROM_JSON(WriteRequestHotspotRegionList, writeRequestHotspotRegionList_);
          DARABONBA_PTR_FROM_JSON(WriteRequestUnbalanceSuggestion, writeRequestUnbalanceSuggestion_);
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
        virtual bool empty() const override { return this->readRequestHotspotRegionList_ == nullptr
        && this->readRequestUnbalanceSuggestion_ == nullptr && this->requestHotspotRegionList_ == nullptr && this->requestUnbalanceSuggestion_ == nullptr && this->tableScore_ == nullptr && this->writeRequestHotspotRegionList_ == nullptr
        && this->writeRequestUnbalanceSuggestion_ == nullptr; };
        // readRequestHotspotRegionList Field Functions 
        bool hasReadRequestHotspotRegionList() const { return this->readRequestHotspotRegionList_ != nullptr;};
        void deleteReadRequestHotspotRegionList() { this->readRequestHotspotRegionList_ = nullptr;};
        inline const vector<string> & getReadRequestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(readRequestHotspotRegionList_, vector<string>) };
        inline vector<string> getReadRequestHotspotRegionList() { DARABONBA_PTR_GET(readRequestHotspotRegionList_, vector<string>) };
        inline Analysis& setReadRequestHotspotRegionList(const vector<string> & readRequestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(readRequestHotspotRegionList_, readRequestHotspotRegionList) };
        inline Analysis& setReadRequestHotspotRegionList(vector<string> && readRequestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(readRequestHotspotRegionList_, readRequestHotspotRegionList) };


        // readRequestUnbalanceSuggestion Field Functions 
        bool hasReadRequestUnbalanceSuggestion() const { return this->readRequestUnbalanceSuggestion_ != nullptr;};
        void deleteReadRequestUnbalanceSuggestion() { this->readRequestUnbalanceSuggestion_ = nullptr;};
        inline string getReadRequestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(readRequestUnbalanceSuggestion_, "") };
        inline Analysis& setReadRequestUnbalanceSuggestion(string readRequestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(readRequestUnbalanceSuggestion_, readRequestUnbalanceSuggestion) };


        // requestHotspotRegionList Field Functions 
        bool hasRequestHotspotRegionList() const { return this->requestHotspotRegionList_ != nullptr;};
        void deleteRequestHotspotRegionList() { this->requestHotspotRegionList_ = nullptr;};
        inline const vector<string> & getRequestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(requestHotspotRegionList_, vector<string>) };
        inline vector<string> getRequestHotspotRegionList() { DARABONBA_PTR_GET(requestHotspotRegionList_, vector<string>) };
        inline Analysis& setRequestHotspotRegionList(const vector<string> & requestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(requestHotspotRegionList_, requestHotspotRegionList) };
        inline Analysis& setRequestHotspotRegionList(vector<string> && requestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(requestHotspotRegionList_, requestHotspotRegionList) };


        // requestUnbalanceSuggestion Field Functions 
        bool hasRequestUnbalanceSuggestion() const { return this->requestUnbalanceSuggestion_ != nullptr;};
        void deleteRequestUnbalanceSuggestion() { this->requestUnbalanceSuggestion_ = nullptr;};
        inline string getRequestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(requestUnbalanceSuggestion_, "") };
        inline Analysis& setRequestUnbalanceSuggestion(string requestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(requestUnbalanceSuggestion_, requestUnbalanceSuggestion) };


        // tableScore Field Functions 
        bool hasTableScore() const { return this->tableScore_ != nullptr;};
        void deleteTableScore() { this->tableScore_ = nullptr;};
        inline int32_t getTableScore() const { DARABONBA_PTR_GET_DEFAULT(tableScore_, 0) };
        inline Analysis& setTableScore(int32_t tableScore) { DARABONBA_PTR_SET_VALUE(tableScore_, tableScore) };


        // writeRequestHotspotRegionList Field Functions 
        bool hasWriteRequestHotspotRegionList() const { return this->writeRequestHotspotRegionList_ != nullptr;};
        void deleteWriteRequestHotspotRegionList() { this->writeRequestHotspotRegionList_ = nullptr;};
        inline const vector<string> & getWriteRequestHotspotRegionList() const { DARABONBA_PTR_GET_CONST(writeRequestHotspotRegionList_, vector<string>) };
        inline vector<string> getWriteRequestHotspotRegionList() { DARABONBA_PTR_GET(writeRequestHotspotRegionList_, vector<string>) };
        inline Analysis& setWriteRequestHotspotRegionList(const vector<string> & writeRequestHotspotRegionList) { DARABONBA_PTR_SET_VALUE(writeRequestHotspotRegionList_, writeRequestHotspotRegionList) };
        inline Analysis& setWriteRequestHotspotRegionList(vector<string> && writeRequestHotspotRegionList) { DARABONBA_PTR_SET_RVALUE(writeRequestHotspotRegionList_, writeRequestHotspotRegionList) };


        // writeRequestUnbalanceSuggestion Field Functions 
        bool hasWriteRequestUnbalanceSuggestion() const { return this->writeRequestUnbalanceSuggestion_ != nullptr;};
        void deleteWriteRequestUnbalanceSuggestion() { this->writeRequestUnbalanceSuggestion_ = nullptr;};
        inline string getWriteRequestUnbalanceSuggestion() const { DARABONBA_PTR_GET_DEFAULT(writeRequestUnbalanceSuggestion_, "") };
        inline Analysis& setWriteRequestUnbalanceSuggestion(string writeRequestUnbalanceSuggestion) { DARABONBA_PTR_SET_VALUE(writeRequestUnbalanceSuggestion_, writeRequestUnbalanceSuggestion) };


      protected:
        // The regions that have read hotspot issues.
        shared_ptr<vector<string>> readRequestHotspotRegionList_ {};
        // The description of read imbalance.
        shared_ptr<string> readRequestUnbalanceSuggestion_ {};
        // The regions that have read/write hotspot issues.
        shared_ptr<vector<string>> requestHotspotRegionList_ {};
        // The description of read/write imbalance.
        shared_ptr<string> requestUnbalanceSuggestion_ {};
        // The score of the table.
        shared_ptr<int32_t> tableScore_ {};
        // The regions that have write hotspot issues.
        shared_ptr<vector<string>> writeRequestHotspotRegionList_ {};
        // The description of write imbalance.
        shared_ptr<string> writeRequestUnbalanceSuggestion_ {};
      };

      virtual bool empty() const override { return this->analysis_ == nullptr
        && this->metrics_ == nullptr && this->tableName_ == nullptr; };
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


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The diagnosis result.
      shared_ptr<Data::Analysis> analysis_ {};
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorHBaseTablesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorHBaseTablesResponseBody::Data>) };
    inline vector<ListDoctorHBaseTablesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorHBaseTablesResponseBody::Data>) };
    inline ListDoctorHBaseTablesResponseBody& setData(const vector<ListDoctorHBaseTablesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorHBaseTablesResponseBody& setData(vector<ListDoctorHBaseTablesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorHBaseTablesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorHBaseTablesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorHBaseTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorHBaseTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data returned.
    shared_ptr<vector<ListDoctorHBaseTablesResponseBody::Data>> data_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The page number of the next page returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
