// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHBASEREGIONSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHBaseRegionServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHBaseRegionServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHBaseRegionServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHBaseRegionServerResponseBody() = default ;
    GetDoctorHBaseRegionServerResponseBody(const GetDoctorHBaseRegionServerResponseBody &) = default ;
    GetDoctorHBaseRegionServerResponseBody(GetDoctorHBaseRegionServerResponseBody &&) = default ;
    GetDoctorHBaseRegionServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHBaseRegionServerResponseBody() = default ;
    GetDoctorHBaseRegionServerResponseBody& operator=(const GetDoctorHBaseRegionServerResponseBody &) = default ;
    GetDoctorHBaseRegionServerResponseBody& operator=(GetDoctorHBaseRegionServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(AvgGc, avgGc_);
          DARABONBA_PTR_TO_JSON(CacheRatio, cacheRatio_);
          DARABONBA_PTR_TO_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_TO_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_TO_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(RegionCount, regionCount_);
          DARABONBA_PTR_TO_JSON(TotalReadRequest, totalReadRequest_);
          DARABONBA_PTR_TO_JSON(TotalRequest, totalRequest_);
          DARABONBA_PTR_TO_JSON(TotalWriteRequest, totalWriteRequest_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgGc, avgGc_);
          DARABONBA_PTR_FROM_JSON(CacheRatio, cacheRatio_);
          DARABONBA_PTR_FROM_JSON(DailyReadRequest, dailyReadRequest_);
          DARABONBA_PTR_FROM_JSON(DailyReadRequestDayGrowthRatio, dailyReadRequestDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequest, dailyWriteRequest_);
          DARABONBA_PTR_FROM_JSON(DailyWriteRequestDayGrowthRatio, dailyWriteRequestDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(RegionCount, regionCount_);
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

        class CacheRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CacheRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, CacheRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          CacheRatio() = default ;
          CacheRatio(const CacheRatio &) = default ;
          CacheRatio(CacheRatio &&) = default ;
          CacheRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CacheRatio() = default ;
          CacheRatio& operator=(const CacheRatio &) = default ;
          CacheRatio& operator=(CacheRatio &&) = default ;
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
          inline CacheRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CacheRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline CacheRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline CacheRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class AvgGc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvgGc& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AvgGc& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AvgGc() = default ;
          AvgGc(const AvgGc &) = default ;
          AvgGc(AvgGc &&) = default ;
          AvgGc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvgGc() = default ;
          AvgGc& operator=(const AvgGc &) = default ;
          AvgGc& operator=(AvgGc &&) = default ;
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
          inline AvgGc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AvgGc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline AvgGc& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline AvgGc& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        virtual bool empty() const override { return this->avgGc_ == nullptr
        && this->cacheRatio_ == nullptr && this->dailyReadRequest_ == nullptr && this->dailyReadRequestDayGrowthRatio_ == nullptr && this->dailyWriteRequest_ == nullptr && this->dailyWriteRequestDayGrowthRatio_ == nullptr
        && this->regionCount_ == nullptr && this->totalReadRequest_ == nullptr && this->totalRequest_ == nullptr && this->totalWriteRequest_ == nullptr; };
        // avgGc Field Functions 
        bool hasAvgGc() const { return this->avgGc_ != nullptr;};
        void deleteAvgGc() { this->avgGc_ = nullptr;};
        inline const Metrics::AvgGc & getAvgGc() const { DARABONBA_PTR_GET_CONST(avgGc_, Metrics::AvgGc) };
        inline Metrics::AvgGc getAvgGc() { DARABONBA_PTR_GET(avgGc_, Metrics::AvgGc) };
        inline Metrics& setAvgGc(const Metrics::AvgGc & avgGc) { DARABONBA_PTR_SET_VALUE(avgGc_, avgGc) };
        inline Metrics& setAvgGc(Metrics::AvgGc && avgGc) { DARABONBA_PTR_SET_RVALUE(avgGc_, avgGc) };


        // cacheRatio Field Functions 
        bool hasCacheRatio() const { return this->cacheRatio_ != nullptr;};
        void deleteCacheRatio() { this->cacheRatio_ = nullptr;};
        inline const Metrics::CacheRatio & getCacheRatio() const { DARABONBA_PTR_GET_CONST(cacheRatio_, Metrics::CacheRatio) };
        inline Metrics::CacheRatio getCacheRatio() { DARABONBA_PTR_GET(cacheRatio_, Metrics::CacheRatio) };
        inline Metrics& setCacheRatio(const Metrics::CacheRatio & cacheRatio) { DARABONBA_PTR_SET_VALUE(cacheRatio_, cacheRatio) };
        inline Metrics& setCacheRatio(Metrics::CacheRatio && cacheRatio) { DARABONBA_PTR_SET_RVALUE(cacheRatio_, cacheRatio) };


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


        // regionCount Field Functions 
        bool hasRegionCount() const { return this->regionCount_ != nullptr;};
        void deleteRegionCount() { this->regionCount_ = nullptr;};
        inline const Metrics::RegionCount & getRegionCount() const { DARABONBA_PTR_GET_CONST(regionCount_, Metrics::RegionCount) };
        inline Metrics::RegionCount getRegionCount() { DARABONBA_PTR_GET(regionCount_, Metrics::RegionCount) };
        inline Metrics& setRegionCount(const Metrics::RegionCount & regionCount) { DARABONBA_PTR_SET_VALUE(regionCount_, regionCount) };
        inline Metrics& setRegionCount(Metrics::RegionCount && regionCount) { DARABONBA_PTR_SET_RVALUE(regionCount_, regionCount) };


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
        // The average garbage collection (GC) duration.
        shared_ptr<Metrics::AvgGc> avgGc_ {};
        // The cache hit ratio.
        shared_ptr<Metrics::CacheRatio> cacheRatio_ {};
        // The number of daily read requests.
        shared_ptr<Metrics::DailyReadRequest> dailyReadRequest_ {};
        // The day-to-day increment rate of the number of daily read requests.
        shared_ptr<Metrics::DailyReadRequestDayGrowthRatio> dailyReadRequestDayGrowthRatio_ {};
        // The number of daily write requests.
        shared_ptr<Metrics::DailyWriteRequest> dailyWriteRequest_ {};
        // The day-to-day increment rate of the number of daily write requests.
        shared_ptr<Metrics::DailyWriteRequestDayGrowthRatio> dailyWriteRequestDayGrowthRatio_ {};
        // The number of regions.
        shared_ptr<Metrics::RegionCount> regionCount_ {};
        // The cumulative number of read requests.
        shared_ptr<Metrics::TotalReadRequest> totalReadRequest_ {};
        // The cumulative number of total requests.
        shared_ptr<Metrics::TotalRequest> totalRequest_ {};
        // The cumulative number of write requests.
        shared_ptr<Metrics::TotalWriteRequest> totalWriteRequest_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    protected:
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHBaseRegionServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHBaseRegionServerResponseBody::Data) };
    inline GetDoctorHBaseRegionServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorHBaseRegionServerResponseBody::Data) };
    inline GetDoctorHBaseRegionServerResponseBody& setData(const GetDoctorHBaseRegionServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHBaseRegionServerResponseBody& setData(GetDoctorHBaseRegionServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHBaseRegionServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetDoctorHBaseRegionServerResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
