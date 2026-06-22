// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDoctorHDFSDirectoryResponseBody() = default ;
    GetDoctorHDFSDirectoryResponseBody(const GetDoctorHDFSDirectoryResponseBody &) = default ;
    GetDoctorHDFSDirectoryResponseBody(GetDoctorHDFSDirectoryResponseBody &&) = default ;
    GetDoctorHDFSDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSDirectoryResponseBody() = default ;
    GetDoctorHDFSDirectoryResponseBody& operator=(const GetDoctorHDFSDirectoryResponseBody &) = default ;
    GetDoctorHDFSDirectoryResponseBody& operator=(GetDoctorHDFSDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Depth, depth_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Depth, depth_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
          DARABONBA_PTR_TO_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
          DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_TO_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(EmptyFileCount, emptyFileCount_);
          DARABONBA_PTR_TO_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
          DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
          DARABONBA_PTR_TO_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
          DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_TO_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(LargeFileCount, largeFileCount_);
          DARABONBA_PTR_TO_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(MediumFileCount, mediumFileCount_);
          DARABONBA_PTR_TO_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(SmallFileCount, smallFileCount_);
          DARABONBA_PTR_TO_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(TinyFileCount, tinyFileCount_);
          DARABONBA_PTR_TO_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
          DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_TO_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
          DARABONBA_PTR_TO_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
          DARABONBA_PTR_TO_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
          DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
          DARABONBA_PTR_TO_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
          DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
          DARABONBA_PTR_FROM_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(EmptyFileCount, emptyFileCount_);
          DARABONBA_PTR_FROM_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
          DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
          DARABONBA_PTR_FROM_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
          DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
          DARABONBA_PTR_FROM_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(LargeFileCount, largeFileCount_);
          DARABONBA_PTR_FROM_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(MediumFileCount, mediumFileCount_);
          DARABONBA_PTR_FROM_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(SmallFileCount, smallFileCount_);
          DARABONBA_PTR_FROM_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(TinyFileCount, tinyFileCount_);
          DARABONBA_PTR_FROM_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
          DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
          DARABONBA_PTR_FROM_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
          DARABONBA_PTR_FROM_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
          DARABONBA_PTR_FROM_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
          DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
          DARABONBA_PTR_FROM_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
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
        class WarmDataSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WarmDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WarmDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WarmDataSizeDayGrowthRatio() = default ;
          WarmDataSizeDayGrowthRatio(const WarmDataSizeDayGrowthRatio &) = default ;
          WarmDataSizeDayGrowthRatio(WarmDataSizeDayGrowthRatio &&) = default ;
          WarmDataSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WarmDataSizeDayGrowthRatio() = default ;
          WarmDataSizeDayGrowthRatio& operator=(const WarmDataSizeDayGrowthRatio &) = default ;
          WarmDataSizeDayGrowthRatio& operator=(WarmDataSizeDayGrowthRatio &&) = default ;
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
          inline WarmDataSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WarmDataSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WarmDataSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline WarmDataSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class WarmDataDayGrowthSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WarmDataDayGrowthSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WarmDataDayGrowthSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WarmDataDayGrowthSize() = default ;
          WarmDataDayGrowthSize(const WarmDataDayGrowthSize &) = default ;
          WarmDataDayGrowthSize(WarmDataDayGrowthSize &&) = default ;
          WarmDataDayGrowthSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WarmDataDayGrowthSize() = default ;
          WarmDataDayGrowthSize& operator=(const WarmDataDayGrowthSize &) = default ;
          WarmDataDayGrowthSize& operator=(WarmDataDayGrowthSize &&) = default ;
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
          inline WarmDataDayGrowthSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WarmDataDayGrowthSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WarmDataDayGrowthSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline WarmDataDayGrowthSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TotalFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalFileDayGrowthCount() = default ;
          TotalFileDayGrowthCount(const TotalFileDayGrowthCount &) = default ;
          TotalFileDayGrowthCount(TotalFileDayGrowthCount &&) = default ;
          TotalFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalFileDayGrowthCount() = default ;
          TotalFileDayGrowthCount& operator=(const TotalFileDayGrowthCount &) = default ;
          TotalFileDayGrowthCount& operator=(TotalFileDayGrowthCount &&) = default ;
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
          inline TotalFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TotalFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalFileCountDayGrowthRatio() = default ;
          TotalFileCountDayGrowthRatio(const TotalFileCountDayGrowthRatio &) = default ;
          TotalFileCountDayGrowthRatio(TotalFileCountDayGrowthRatio &&) = default ;
          TotalFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalFileCountDayGrowthRatio() = default ;
          TotalFileCountDayGrowthRatio& operator=(const TotalFileCountDayGrowthRatio &) = default ;
          TotalFileCountDayGrowthRatio& operator=(TotalFileCountDayGrowthRatio &&) = default ;
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
          inline TotalFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline TotalFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TotalFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalFileCount() = default ;
          TotalFileCount(const TotalFileCount &) = default ;
          TotalFileCount(TotalFileCount &&) = default ;
          TotalFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalFileCount() = default ;
          TotalFileCount& operator=(const TotalFileCount &) = default ;
          TotalFileCount& operator=(TotalFileCount &&) = default ;
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
          inline TotalFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TotalDataSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalDataSizeDayGrowthRatio() = default ;
          TotalDataSizeDayGrowthRatio(const TotalDataSizeDayGrowthRatio &) = default ;
          TotalDataSizeDayGrowthRatio(TotalDataSizeDayGrowthRatio &&) = default ;
          TotalDataSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalDataSizeDayGrowthRatio() = default ;
          TotalDataSizeDayGrowthRatio& operator=(const TotalDataSizeDayGrowthRatio &) = default ;
          TotalDataSizeDayGrowthRatio& operator=(TotalDataSizeDayGrowthRatio &&) = default ;
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
          inline TotalDataSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalDataSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalDataSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline TotalDataSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TotalDataDayGrowthSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalDataDayGrowthSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TotalDataDayGrowthSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TotalDataDayGrowthSize() = default ;
          TotalDataDayGrowthSize(const TotalDataDayGrowthSize &) = default ;
          TotalDataDayGrowthSize(TotalDataDayGrowthSize &&) = default ;
          TotalDataDayGrowthSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalDataDayGrowthSize() = default ;
          TotalDataDayGrowthSize& operator=(const TotalDataDayGrowthSize &) = default ;
          TotalDataDayGrowthSize& operator=(TotalDataDayGrowthSize &&) = default ;
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
          inline TotalDataDayGrowthSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TotalDataDayGrowthSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TotalDataDayGrowthSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TotalDataDayGrowthSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TinyFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TinyFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TinyFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TinyFileDayGrowthCount() = default ;
          TinyFileDayGrowthCount(const TinyFileDayGrowthCount &) = default ;
          TinyFileDayGrowthCount(TinyFileDayGrowthCount &&) = default ;
          TinyFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TinyFileDayGrowthCount() = default ;
          TinyFileDayGrowthCount& operator=(const TinyFileDayGrowthCount &) = default ;
          TinyFileDayGrowthCount& operator=(TinyFileDayGrowthCount &&) = default ;
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
          inline TinyFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TinyFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TinyFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TinyFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TinyFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TinyFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TinyFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TinyFileCountDayGrowthRatio() = default ;
          TinyFileCountDayGrowthRatio(const TinyFileCountDayGrowthRatio &) = default ;
          TinyFileCountDayGrowthRatio(TinyFileCountDayGrowthRatio &&) = default ;
          TinyFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TinyFileCountDayGrowthRatio() = default ;
          TinyFileCountDayGrowthRatio& operator=(const TinyFileCountDayGrowthRatio &) = default ;
          TinyFileCountDayGrowthRatio& operator=(TinyFileCountDayGrowthRatio &&) = default ;
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
          inline TinyFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TinyFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TinyFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline TinyFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class TinyFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TinyFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TinyFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TinyFileCount() = default ;
          TinyFileCount(const TinyFileCount &) = default ;
          TinyFileCount(TinyFileCount &&) = default ;
          TinyFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TinyFileCount() = default ;
          TinyFileCount& operator=(const TinyFileCount &) = default ;
          TinyFileCount& operator=(TinyFileCount &&) = default ;
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
          inline TinyFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TinyFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline TinyFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline TinyFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class SmallFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SmallFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SmallFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SmallFileDayGrowthCount() = default ;
          SmallFileDayGrowthCount(const SmallFileDayGrowthCount &) = default ;
          SmallFileDayGrowthCount(SmallFileDayGrowthCount &&) = default ;
          SmallFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SmallFileDayGrowthCount() = default ;
          SmallFileDayGrowthCount& operator=(const SmallFileDayGrowthCount &) = default ;
          SmallFileDayGrowthCount& operator=(SmallFileDayGrowthCount &&) = default ;
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
          inline SmallFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SmallFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline SmallFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline SmallFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class SmallFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SmallFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SmallFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SmallFileCountDayGrowthRatio() = default ;
          SmallFileCountDayGrowthRatio(const SmallFileCountDayGrowthRatio &) = default ;
          SmallFileCountDayGrowthRatio(SmallFileCountDayGrowthRatio &&) = default ;
          SmallFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SmallFileCountDayGrowthRatio() = default ;
          SmallFileCountDayGrowthRatio& operator=(const SmallFileCountDayGrowthRatio &) = default ;
          SmallFileCountDayGrowthRatio& operator=(SmallFileCountDayGrowthRatio &&) = default ;
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
          inline SmallFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SmallFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline SmallFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline SmallFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class SmallFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SmallFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SmallFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SmallFileCount() = default ;
          SmallFileCount(const SmallFileCount &) = default ;
          SmallFileCount(SmallFileCount &&) = default ;
          SmallFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SmallFileCount() = default ;
          SmallFileCount& operator=(const SmallFileCount &) = default ;
          SmallFileCount& operator=(SmallFileCount &&) = default ;
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
          inline SmallFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SmallFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline SmallFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline SmallFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MediumFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediumFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MediumFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MediumFileDayGrowthCount() = default ;
          MediumFileDayGrowthCount(const MediumFileDayGrowthCount &) = default ;
          MediumFileDayGrowthCount(MediumFileDayGrowthCount &&) = default ;
          MediumFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediumFileDayGrowthCount() = default ;
          MediumFileDayGrowthCount& operator=(const MediumFileDayGrowthCount &) = default ;
          MediumFileDayGrowthCount& operator=(MediumFileDayGrowthCount &&) = default ;
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
          inline MediumFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MediumFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MediumFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MediumFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MediumFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediumFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MediumFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MediumFileCountDayGrowthRatio() = default ;
          MediumFileCountDayGrowthRatio(const MediumFileCountDayGrowthRatio &) = default ;
          MediumFileCountDayGrowthRatio(MediumFileCountDayGrowthRatio &&) = default ;
          MediumFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediumFileCountDayGrowthRatio() = default ;
          MediumFileCountDayGrowthRatio& operator=(const MediumFileCountDayGrowthRatio &) = default ;
          MediumFileCountDayGrowthRatio& operator=(MediumFileCountDayGrowthRatio &&) = default ;
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
          inline MediumFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MediumFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MediumFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline MediumFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MediumFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MediumFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MediumFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MediumFileCount() = default ;
          MediumFileCount(const MediumFileCount &) = default ;
          MediumFileCount(MediumFileCount &&) = default ;
          MediumFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MediumFileCount() = default ;
          MediumFileCount& operator=(const MediumFileCount &) = default ;
          MediumFileCount& operator=(MediumFileCount &&) = default ;
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
          inline MediumFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MediumFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MediumFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MediumFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class LargeFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LargeFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LargeFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LargeFileDayGrowthCount() = default ;
          LargeFileDayGrowthCount(const LargeFileDayGrowthCount &) = default ;
          LargeFileDayGrowthCount(LargeFileDayGrowthCount &&) = default ;
          LargeFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LargeFileDayGrowthCount() = default ;
          LargeFileDayGrowthCount& operator=(const LargeFileDayGrowthCount &) = default ;
          LargeFileDayGrowthCount& operator=(LargeFileDayGrowthCount &&) = default ;
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
          inline LargeFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LargeFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline LargeFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline LargeFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class LargeFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LargeFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LargeFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LargeFileCountDayGrowthRatio() = default ;
          LargeFileCountDayGrowthRatio(const LargeFileCountDayGrowthRatio &) = default ;
          LargeFileCountDayGrowthRatio(LargeFileCountDayGrowthRatio &&) = default ;
          LargeFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LargeFileCountDayGrowthRatio() = default ;
          LargeFileCountDayGrowthRatio& operator=(const LargeFileCountDayGrowthRatio &) = default ;
          LargeFileCountDayGrowthRatio& operator=(LargeFileCountDayGrowthRatio &&) = default ;
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
          inline LargeFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LargeFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline LargeFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline LargeFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class LargeFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LargeFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LargeFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LargeFileCount() = default ;
          LargeFileCount(const LargeFileCount &) = default ;
          LargeFileCount(LargeFileCount &&) = default ;
          LargeFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LargeFileCount() = default ;
          LargeFileCount& operator=(const LargeFileCount &) = default ;
          LargeFileCount& operator=(LargeFileCount &&) = default ;
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
          inline LargeFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LargeFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline LargeFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline LargeFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class HotDataSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HotDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HotDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HotDataSizeDayGrowthRatio() = default ;
          HotDataSizeDayGrowthRatio(const HotDataSizeDayGrowthRatio &) = default ;
          HotDataSizeDayGrowthRatio(HotDataSizeDayGrowthRatio &&) = default ;
          HotDataSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HotDataSizeDayGrowthRatio() = default ;
          HotDataSizeDayGrowthRatio& operator=(const HotDataSizeDayGrowthRatio &) = default ;
          HotDataSizeDayGrowthRatio& operator=(HotDataSizeDayGrowthRatio &&) = default ;
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
          inline HotDataSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HotDataSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline HotDataSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline HotDataSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class HotDataDayGrowthSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HotDataDayGrowthSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HotDataDayGrowthSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HotDataDayGrowthSize() = default ;
          HotDataDayGrowthSize(const HotDataDayGrowthSize &) = default ;
          HotDataDayGrowthSize(HotDataDayGrowthSize &&) = default ;
          HotDataDayGrowthSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HotDataDayGrowthSize() = default ;
          HotDataDayGrowthSize& operator=(const HotDataDayGrowthSize &) = default ;
          HotDataDayGrowthSize& operator=(HotDataDayGrowthSize &&) = default ;
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
          inline HotDataDayGrowthSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HotDataDayGrowthSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline HotDataDayGrowthSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline HotDataDayGrowthSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class FreezeDataSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreezeDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FreezeDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FreezeDataSizeDayGrowthRatio() = default ;
          FreezeDataSizeDayGrowthRatio(const FreezeDataSizeDayGrowthRatio &) = default ;
          FreezeDataSizeDayGrowthRatio(FreezeDataSizeDayGrowthRatio &&) = default ;
          FreezeDataSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreezeDataSizeDayGrowthRatio() = default ;
          FreezeDataSizeDayGrowthRatio& operator=(const FreezeDataSizeDayGrowthRatio &) = default ;
          FreezeDataSizeDayGrowthRatio& operator=(FreezeDataSizeDayGrowthRatio &&) = default ;
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
          inline FreezeDataSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FreezeDataSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline FreezeDataSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline FreezeDataSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class FreezeDataDayGrowthSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FreezeDataDayGrowthSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FreezeDataDayGrowthSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FreezeDataDayGrowthSize() = default ;
          FreezeDataDayGrowthSize(const FreezeDataDayGrowthSize &) = default ;
          FreezeDataDayGrowthSize(FreezeDataDayGrowthSize &&) = default ;
          FreezeDataDayGrowthSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FreezeDataDayGrowthSize() = default ;
          FreezeDataDayGrowthSize& operator=(const FreezeDataDayGrowthSize &) = default ;
          FreezeDataDayGrowthSize& operator=(FreezeDataDayGrowthSize &&) = default ;
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
          inline FreezeDataDayGrowthSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline FreezeDataDayGrowthSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline FreezeDataDayGrowthSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline FreezeDataDayGrowthSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class EmptyFileDayGrowthCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmptyFileDayGrowthCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EmptyFileDayGrowthCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          EmptyFileDayGrowthCount() = default ;
          EmptyFileDayGrowthCount(const EmptyFileDayGrowthCount &) = default ;
          EmptyFileDayGrowthCount(EmptyFileDayGrowthCount &&) = default ;
          EmptyFileDayGrowthCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmptyFileDayGrowthCount() = default ;
          EmptyFileDayGrowthCount& operator=(const EmptyFileDayGrowthCount &) = default ;
          EmptyFileDayGrowthCount& operator=(EmptyFileDayGrowthCount &&) = default ;
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
          inline EmptyFileDayGrowthCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EmptyFileDayGrowthCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline EmptyFileDayGrowthCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline EmptyFileDayGrowthCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class EmptyFileCountDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmptyFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EmptyFileCountDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          EmptyFileCountDayGrowthRatio() = default ;
          EmptyFileCountDayGrowthRatio(const EmptyFileCountDayGrowthRatio &) = default ;
          EmptyFileCountDayGrowthRatio(EmptyFileCountDayGrowthRatio &&) = default ;
          EmptyFileCountDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmptyFileCountDayGrowthRatio() = default ;
          EmptyFileCountDayGrowthRatio& operator=(const EmptyFileCountDayGrowthRatio &) = default ;
          EmptyFileCountDayGrowthRatio& operator=(EmptyFileCountDayGrowthRatio &&) = default ;
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
          inline EmptyFileCountDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EmptyFileCountDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline EmptyFileCountDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline EmptyFileCountDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class EmptyFileCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EmptyFileCount& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EmptyFileCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          EmptyFileCount() = default ;
          EmptyFileCount(const EmptyFileCount &) = default ;
          EmptyFileCount(EmptyFileCount &&) = default ;
          EmptyFileCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EmptyFileCount() = default ;
          EmptyFileCount& operator=(const EmptyFileCount &) = default ;
          EmptyFileCount& operator=(EmptyFileCount &&) = default ;
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
          inline EmptyFileCount& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EmptyFileCount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline EmptyFileCount& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline EmptyFileCount& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ColdDataSizeDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColdDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ColdDataSizeDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ColdDataSizeDayGrowthRatio() = default ;
          ColdDataSizeDayGrowthRatio(const ColdDataSizeDayGrowthRatio &) = default ;
          ColdDataSizeDayGrowthRatio(ColdDataSizeDayGrowthRatio &&) = default ;
          ColdDataSizeDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColdDataSizeDayGrowthRatio() = default ;
          ColdDataSizeDayGrowthRatio& operator=(const ColdDataSizeDayGrowthRatio &) = default ;
          ColdDataSizeDayGrowthRatio& operator=(ColdDataSizeDayGrowthRatio &&) = default ;
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
          inline ColdDataSizeDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColdDataSizeDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ColdDataSizeDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline ColdDataSizeDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ColdDataDayGrowthSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ColdDataDayGrowthSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ColdDataDayGrowthSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ColdDataDayGrowthSize() = default ;
          ColdDataDayGrowthSize(const ColdDataDayGrowthSize &) = default ;
          ColdDataDayGrowthSize(ColdDataDayGrowthSize &&) = default ;
          ColdDataDayGrowthSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ColdDataDayGrowthSize() = default ;
          ColdDataDayGrowthSize& operator=(const ColdDataDayGrowthSize &) = default ;
          ColdDataDayGrowthSize& operator=(ColdDataDayGrowthSize &&) = default ;
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
          inline ColdDataDayGrowthSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ColdDataDayGrowthSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ColdDataDayGrowthSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline ColdDataDayGrowthSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && this->coldDataSize_ == nullptr && this->coldDataSizeDayGrowthRatio_ == nullptr && this->emptyFileCount_ == nullptr && this->emptyFileCountDayGrowthRatio_ == nullptr && this->emptyFileDayGrowthCount_ == nullptr
        && this->freezeDataDayGrowthSize_ == nullptr && this->freezeDataSize_ == nullptr && this->freezeDataSizeDayGrowthRatio_ == nullptr && this->hotDataDayGrowthSize_ == nullptr && this->hotDataSize_ == nullptr
        && this->hotDataSizeDayGrowthRatio_ == nullptr && this->largeFileCount_ == nullptr && this->largeFileCountDayGrowthRatio_ == nullptr && this->largeFileDayGrowthCount_ == nullptr && this->mediumFileCount_ == nullptr
        && this->mediumFileCountDayGrowthRatio_ == nullptr && this->mediumFileDayGrowthCount_ == nullptr && this->smallFileCount_ == nullptr && this->smallFileCountDayGrowthRatio_ == nullptr && this->smallFileDayGrowthCount_ == nullptr
        && this->tinyFileCount_ == nullptr && this->tinyFileCountDayGrowthRatio_ == nullptr && this->tinyFileDayGrowthCount_ == nullptr && this->totalDataDayGrowthSize_ == nullptr && this->totalDataSize_ == nullptr
        && this->totalDataSizeDayGrowthRatio_ == nullptr && this->totalFileCount_ == nullptr && this->totalFileCountDayGrowthRatio_ == nullptr && this->totalFileDayGrowthCount_ == nullptr && this->warmDataDayGrowthSize_ == nullptr
        && this->warmDataSize_ == nullptr && this->warmDataSizeDayGrowthRatio_ == nullptr; };
        // coldDataDayGrowthSize Field Functions 
        bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
        void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
        inline const Metrics::ColdDataDayGrowthSize & getColdDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Metrics::ColdDataDayGrowthSize) };
        inline Metrics::ColdDataDayGrowthSize getColdDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Metrics::ColdDataDayGrowthSize) };
        inline Metrics& setColdDataDayGrowthSize(const Metrics::ColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
        inline Metrics& setColdDataDayGrowthSize(Metrics::ColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


        // coldDataSize Field Functions 
        bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
        void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
        inline const Metrics::ColdDataSize & getColdDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Metrics::ColdDataSize) };
        inline Metrics::ColdDataSize getColdDataSize() { DARABONBA_PTR_GET(coldDataSize_, Metrics::ColdDataSize) };
        inline Metrics& setColdDataSize(const Metrics::ColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
        inline Metrics& setColdDataSize(Metrics::ColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


        // coldDataSizeDayGrowthRatio Field Functions 
        bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
        void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::ColdDataSizeDayGrowthRatio & getColdDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Metrics::ColdDataSizeDayGrowthRatio) };
        inline Metrics::ColdDataSizeDayGrowthRatio getColdDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Metrics::ColdDataSizeDayGrowthRatio) };
        inline Metrics& setColdDataSizeDayGrowthRatio(const Metrics::ColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
        inline Metrics& setColdDataSizeDayGrowthRatio(Metrics::ColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


        // emptyFileCount Field Functions 
        bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
        void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
        inline const Metrics::EmptyFileCount & getEmptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Metrics::EmptyFileCount) };
        inline Metrics::EmptyFileCount getEmptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Metrics::EmptyFileCount) };
        inline Metrics& setEmptyFileCount(const Metrics::EmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
        inline Metrics& setEmptyFileCount(Metrics::EmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


        // emptyFileCountDayGrowthRatio Field Functions 
        bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
        void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::EmptyFileCountDayGrowthRatio & getEmptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Metrics::EmptyFileCountDayGrowthRatio) };
        inline Metrics::EmptyFileCountDayGrowthRatio getEmptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Metrics::EmptyFileCountDayGrowthRatio) };
        inline Metrics& setEmptyFileCountDayGrowthRatio(const Metrics::EmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
        inline Metrics& setEmptyFileCountDayGrowthRatio(Metrics::EmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


        // emptyFileDayGrowthCount Field Functions 
        bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
        void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
        inline const Metrics::EmptyFileDayGrowthCount & getEmptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Metrics::EmptyFileDayGrowthCount) };
        inline Metrics::EmptyFileDayGrowthCount getEmptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Metrics::EmptyFileDayGrowthCount) };
        inline Metrics& setEmptyFileDayGrowthCount(const Metrics::EmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
        inline Metrics& setEmptyFileDayGrowthCount(Metrics::EmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


        // freezeDataDayGrowthSize Field Functions 
        bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
        void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
        inline const Metrics::FreezeDataDayGrowthSize & getFreezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Metrics::FreezeDataDayGrowthSize) };
        inline Metrics::FreezeDataDayGrowthSize getFreezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Metrics::FreezeDataDayGrowthSize) };
        inline Metrics& setFreezeDataDayGrowthSize(const Metrics::FreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
        inline Metrics& setFreezeDataDayGrowthSize(Metrics::FreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


        // freezeDataSize Field Functions 
        bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
        void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
        inline const Metrics::FreezeDataSize & getFreezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Metrics::FreezeDataSize) };
        inline Metrics::FreezeDataSize getFreezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Metrics::FreezeDataSize) };
        inline Metrics& setFreezeDataSize(const Metrics::FreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
        inline Metrics& setFreezeDataSize(Metrics::FreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


        // freezeDataSizeDayGrowthRatio Field Functions 
        bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
        void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::FreezeDataSizeDayGrowthRatio & getFreezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Metrics::FreezeDataSizeDayGrowthRatio) };
        inline Metrics::FreezeDataSizeDayGrowthRatio getFreezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Metrics::FreezeDataSizeDayGrowthRatio) };
        inline Metrics& setFreezeDataSizeDayGrowthRatio(const Metrics::FreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
        inline Metrics& setFreezeDataSizeDayGrowthRatio(Metrics::FreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


        // hotDataDayGrowthSize Field Functions 
        bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
        void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
        inline const Metrics::HotDataDayGrowthSize & getHotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Metrics::HotDataDayGrowthSize) };
        inline Metrics::HotDataDayGrowthSize getHotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Metrics::HotDataDayGrowthSize) };
        inline Metrics& setHotDataDayGrowthSize(const Metrics::HotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
        inline Metrics& setHotDataDayGrowthSize(Metrics::HotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


        // hotDataSize Field Functions 
        bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
        void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
        inline const Metrics::HotDataSize & getHotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Metrics::HotDataSize) };
        inline Metrics::HotDataSize getHotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Metrics::HotDataSize) };
        inline Metrics& setHotDataSize(const Metrics::HotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
        inline Metrics& setHotDataSize(Metrics::HotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


        // hotDataSizeDayGrowthRatio Field Functions 
        bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
        void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::HotDataSizeDayGrowthRatio & getHotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Metrics::HotDataSizeDayGrowthRatio) };
        inline Metrics::HotDataSizeDayGrowthRatio getHotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Metrics::HotDataSizeDayGrowthRatio) };
        inline Metrics& setHotDataSizeDayGrowthRatio(const Metrics::HotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
        inline Metrics& setHotDataSizeDayGrowthRatio(Metrics::HotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


        // largeFileCount Field Functions 
        bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
        void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
        inline const Metrics::LargeFileCount & getLargeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Metrics::LargeFileCount) };
        inline Metrics::LargeFileCount getLargeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Metrics::LargeFileCount) };
        inline Metrics& setLargeFileCount(const Metrics::LargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
        inline Metrics& setLargeFileCount(Metrics::LargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


        // largeFileCountDayGrowthRatio Field Functions 
        bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
        void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::LargeFileCountDayGrowthRatio & getLargeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Metrics::LargeFileCountDayGrowthRatio) };
        inline Metrics::LargeFileCountDayGrowthRatio getLargeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Metrics::LargeFileCountDayGrowthRatio) };
        inline Metrics& setLargeFileCountDayGrowthRatio(const Metrics::LargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
        inline Metrics& setLargeFileCountDayGrowthRatio(Metrics::LargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


        // largeFileDayGrowthCount Field Functions 
        bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
        void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
        inline const Metrics::LargeFileDayGrowthCount & getLargeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Metrics::LargeFileDayGrowthCount) };
        inline Metrics::LargeFileDayGrowthCount getLargeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Metrics::LargeFileDayGrowthCount) };
        inline Metrics& setLargeFileDayGrowthCount(const Metrics::LargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
        inline Metrics& setLargeFileDayGrowthCount(Metrics::LargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


        // mediumFileCount Field Functions 
        bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
        void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
        inline const Metrics::MediumFileCount & getMediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Metrics::MediumFileCount) };
        inline Metrics::MediumFileCount getMediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Metrics::MediumFileCount) };
        inline Metrics& setMediumFileCount(const Metrics::MediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
        inline Metrics& setMediumFileCount(Metrics::MediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


        // mediumFileCountDayGrowthRatio Field Functions 
        bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
        void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::MediumFileCountDayGrowthRatio & getMediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Metrics::MediumFileCountDayGrowthRatio) };
        inline Metrics::MediumFileCountDayGrowthRatio getMediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Metrics::MediumFileCountDayGrowthRatio) };
        inline Metrics& setMediumFileCountDayGrowthRatio(const Metrics::MediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
        inline Metrics& setMediumFileCountDayGrowthRatio(Metrics::MediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


        // mediumFileDayGrowthCount Field Functions 
        bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
        void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
        inline const Metrics::MediumFileDayGrowthCount & getMediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Metrics::MediumFileDayGrowthCount) };
        inline Metrics::MediumFileDayGrowthCount getMediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Metrics::MediumFileDayGrowthCount) };
        inline Metrics& setMediumFileDayGrowthCount(const Metrics::MediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
        inline Metrics& setMediumFileDayGrowthCount(Metrics::MediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


        // smallFileCount Field Functions 
        bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
        void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
        inline const Metrics::SmallFileCount & getSmallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Metrics::SmallFileCount) };
        inline Metrics::SmallFileCount getSmallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Metrics::SmallFileCount) };
        inline Metrics& setSmallFileCount(const Metrics::SmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
        inline Metrics& setSmallFileCount(Metrics::SmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


        // smallFileCountDayGrowthRatio Field Functions 
        bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
        void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::SmallFileCountDayGrowthRatio & getSmallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Metrics::SmallFileCountDayGrowthRatio) };
        inline Metrics::SmallFileCountDayGrowthRatio getSmallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Metrics::SmallFileCountDayGrowthRatio) };
        inline Metrics& setSmallFileCountDayGrowthRatio(const Metrics::SmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
        inline Metrics& setSmallFileCountDayGrowthRatio(Metrics::SmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


        // smallFileDayGrowthCount Field Functions 
        bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
        void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
        inline const Metrics::SmallFileDayGrowthCount & getSmallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Metrics::SmallFileDayGrowthCount) };
        inline Metrics::SmallFileDayGrowthCount getSmallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Metrics::SmallFileDayGrowthCount) };
        inline Metrics& setSmallFileDayGrowthCount(const Metrics::SmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
        inline Metrics& setSmallFileDayGrowthCount(Metrics::SmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


        // tinyFileCount Field Functions 
        bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
        void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
        inline const Metrics::TinyFileCount & getTinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Metrics::TinyFileCount) };
        inline Metrics::TinyFileCount getTinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Metrics::TinyFileCount) };
        inline Metrics& setTinyFileCount(const Metrics::TinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
        inline Metrics& setTinyFileCount(Metrics::TinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


        // tinyFileCountDayGrowthRatio Field Functions 
        bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
        void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::TinyFileCountDayGrowthRatio & getTinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Metrics::TinyFileCountDayGrowthRatio) };
        inline Metrics::TinyFileCountDayGrowthRatio getTinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Metrics::TinyFileCountDayGrowthRatio) };
        inline Metrics& setTinyFileCountDayGrowthRatio(const Metrics::TinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
        inline Metrics& setTinyFileCountDayGrowthRatio(Metrics::TinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


        // tinyFileDayGrowthCount Field Functions 
        bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
        void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
        inline const Metrics::TinyFileDayGrowthCount & getTinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Metrics::TinyFileDayGrowthCount) };
        inline Metrics::TinyFileDayGrowthCount getTinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Metrics::TinyFileDayGrowthCount) };
        inline Metrics& setTinyFileDayGrowthCount(const Metrics::TinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
        inline Metrics& setTinyFileDayGrowthCount(Metrics::TinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


        // totalDataDayGrowthSize Field Functions 
        bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
        void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
        inline const Metrics::TotalDataDayGrowthSize & getTotalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Metrics::TotalDataDayGrowthSize) };
        inline Metrics::TotalDataDayGrowthSize getTotalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Metrics::TotalDataDayGrowthSize) };
        inline Metrics& setTotalDataDayGrowthSize(const Metrics::TotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
        inline Metrics& setTotalDataDayGrowthSize(Metrics::TotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


        // totalDataSize Field Functions 
        bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
        void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
        inline const Metrics::TotalDataSize & getTotalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics::TotalDataSize getTotalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Metrics::TotalDataSize) };
        inline Metrics& setTotalDataSize(const Metrics::TotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
        inline Metrics& setTotalDataSize(Metrics::TotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


        // totalDataSizeDayGrowthRatio Field Functions 
        bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
        void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::TotalDataSizeDayGrowthRatio & getTotalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Metrics::TotalDataSizeDayGrowthRatio) };
        inline Metrics::TotalDataSizeDayGrowthRatio getTotalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Metrics::TotalDataSizeDayGrowthRatio) };
        inline Metrics& setTotalDataSizeDayGrowthRatio(const Metrics::TotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
        inline Metrics& setTotalDataSizeDayGrowthRatio(Metrics::TotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


        // totalFileCount Field Functions 
        bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
        void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
        inline const Metrics::TotalFileCount & getTotalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Metrics::TotalFileCount) };
        inline Metrics::TotalFileCount getTotalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Metrics::TotalFileCount) };
        inline Metrics& setTotalFileCount(const Metrics::TotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
        inline Metrics& setTotalFileCount(Metrics::TotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


        // totalFileCountDayGrowthRatio Field Functions 
        bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
        void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
        inline const Metrics::TotalFileCountDayGrowthRatio & getTotalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Metrics::TotalFileCountDayGrowthRatio) };
        inline Metrics::TotalFileCountDayGrowthRatio getTotalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Metrics::TotalFileCountDayGrowthRatio) };
        inline Metrics& setTotalFileCountDayGrowthRatio(const Metrics::TotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
        inline Metrics& setTotalFileCountDayGrowthRatio(Metrics::TotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


        // totalFileDayGrowthCount Field Functions 
        bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
        void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
        inline const Metrics::TotalFileDayGrowthCount & getTotalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Metrics::TotalFileDayGrowthCount) };
        inline Metrics::TotalFileDayGrowthCount getTotalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Metrics::TotalFileDayGrowthCount) };
        inline Metrics& setTotalFileDayGrowthCount(const Metrics::TotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
        inline Metrics& setTotalFileDayGrowthCount(Metrics::TotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


        // warmDataDayGrowthSize Field Functions 
        bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
        void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
        inline const Metrics::WarmDataDayGrowthSize & getWarmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Metrics::WarmDataDayGrowthSize) };
        inline Metrics::WarmDataDayGrowthSize getWarmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Metrics::WarmDataDayGrowthSize) };
        inline Metrics& setWarmDataDayGrowthSize(const Metrics::WarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
        inline Metrics& setWarmDataDayGrowthSize(Metrics::WarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


        // warmDataSize Field Functions 
        bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
        void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
        inline const Metrics::WarmDataSize & getWarmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Metrics::WarmDataSize) };
        inline Metrics::WarmDataSize getWarmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Metrics::WarmDataSize) };
        inline Metrics& setWarmDataSize(const Metrics::WarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
        inline Metrics& setWarmDataSize(Metrics::WarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


        // warmDataSizeDayGrowthRatio Field Functions 
        bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
        void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
        inline const Metrics::WarmDataSizeDayGrowthRatio & getWarmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Metrics::WarmDataSizeDayGrowthRatio) };
        inline Metrics::WarmDataSizeDayGrowthRatio getWarmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Metrics::WarmDataSizeDayGrowthRatio) };
        inline Metrics& setWarmDataSizeDayGrowthRatio(const Metrics::WarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
        inline Metrics& setWarmDataSizeDayGrowthRatio(Metrics::WarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


      protected:
        // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
        shared_ptr<Metrics::ColdDataDayGrowthSize> coldDataDayGrowthSize_ {};
        // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
        shared_ptr<Metrics::ColdDataSize> coldDataSize_ {};
        // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
        shared_ptr<Metrics::ColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ {};
        // The number of empty files. Empty files are those with a size of 0 MB.
        shared_ptr<Metrics::EmptyFileCount> emptyFileCount_ {};
        // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
        shared_ptr<Metrics::EmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ {};
        // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
        shared_ptr<Metrics::EmptyFileDayGrowthCount> emptyFileDayGrowthCount_ {};
        // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
        shared_ptr<Metrics::FreezeDataDayGrowthSize> freezeDataDayGrowthSize_ {};
        // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
        shared_ptr<Metrics::FreezeDataSize> freezeDataSize_ {};
        // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
        shared_ptr<Metrics::FreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ {};
        // The daily increment of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
        shared_ptr<Metrics::HotDataDayGrowthSize> hotDataDayGrowthSize_ {};
        // The amount of hot data. Hot data refers to data that is accessed in previous seven days.
        shared_ptr<Metrics::HotDataSize> hotDataSize_ {};
        // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
        shared_ptr<Metrics::HotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ {};
        // The number of large files. Large files are those with a size greater than 1 GB.
        shared_ptr<Metrics::LargeFileCount> largeFileCount_ {};
        // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
        shared_ptr<Metrics::LargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ {};
        // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
        shared_ptr<Metrics::LargeFileDayGrowthCount> largeFileDayGrowthCount_ {};
        // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
        shared_ptr<Metrics::MediumFileCount> mediumFileCount_ {};
        // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
        shared_ptr<Metrics::MediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ {};
        // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
        shared_ptr<Metrics::MediumFileDayGrowthCount> mediumFileDayGrowthCount_ {};
        // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
        shared_ptr<Metrics::SmallFileCount> smallFileCount_ {};
        // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
        shared_ptr<Metrics::SmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ {};
        // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
        shared_ptr<Metrics::SmallFileDayGrowthCount> smallFileDayGrowthCount_ {};
        // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
        shared_ptr<Metrics::TinyFileCount> tinyFileCount_ {};
        // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
        shared_ptr<Metrics::TinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ {};
        // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
        shared_ptr<Metrics::TinyFileDayGrowthCount> tinyFileDayGrowthCount_ {};
        // The daily incremental of the total amount of data.
        shared_ptr<Metrics::TotalDataDayGrowthSize> totalDataDayGrowthSize_ {};
        // The total amount of data.
        shared_ptr<Metrics::TotalDataSize> totalDataSize_ {};
        // The day-to-day growth rate of the total data volume.
        shared_ptr<Metrics::TotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ {};
        // The total number of files.
        shared_ptr<Metrics::TotalFileCount> totalFileCount_ {};
        // The day-to-day growth rate of the total number of files.
        shared_ptr<Metrics::TotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ {};
        // The daily increment of the total number of files.
        shared_ptr<Metrics::TotalFileDayGrowthCount> totalFileDayGrowthCount_ {};
        // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
        shared_ptr<Metrics::WarmDataDayGrowthSize> warmDataDayGrowthSize_ {};
        // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
        shared_ptr<Metrics::WarmDataSize> warmDataSize_ {};
        // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
        shared_ptr<Metrics::WarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ {};
      };

      virtual bool empty() const override { return this->depth_ == nullptr
        && this->group_ == nullptr && this->metrics_ == nullptr && this->user_ == nullptr; };
      // depth Field Functions 
      bool hasDepth() const { return this->depth_ != nullptr;};
      void deleteDepth() { this->depth_ = nullptr;};
      inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
      inline Data& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Data& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The directory level.
      shared_ptr<int32_t> depth_ {};
      // The group to which the directory belongs.
      shared_ptr<string> group_ {};
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
      // The directory owner.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDoctorHDFSDirectoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDoctorHDFSDirectoryResponseBody::Data) };
    inline GetDoctorHDFSDirectoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDoctorHDFSDirectoryResponseBody::Data) };
    inline GetDoctorHDFSDirectoryResponseBody& setData(const GetDoctorHDFSDirectoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDoctorHDFSDirectoryResponseBody& setData(GetDoctorHDFSDirectoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDoctorHDFSDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The analysis results of the HDFS directory.
    shared_ptr<GetDoctorHDFSDirectoryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
