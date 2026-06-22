// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORCOMPUTESUMMARYRESPONSEBODY_HPP_
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
  class ListDoctorComputeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorComputeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorComputeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorComputeSummaryResponseBody() = default ;
    ListDoctorComputeSummaryResponseBody(const ListDoctorComputeSummaryResponseBody &) = default ;
    ListDoctorComputeSummaryResponseBody(ListDoctorComputeSummaryResponseBody &&) = default ;
    ListDoctorComputeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorComputeSummaryResponseBody() = default ;
    ListDoctorComputeSummaryResponseBody& operator=(const ListDoctorComputeSummaryResponseBody &) = default ;
    ListDoctorComputeSummaryResponseBody& operator=(ListDoctorComputeSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
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
          DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_TO_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_TO_JSON(ReadSize, readSize_);
          DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
          DARABONBA_PTR_TO_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
          DARABONBA_PTR_TO_JSON(WriteSize, writeSize_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_FROM_JSON(MemSecondsDayGrowthRatio, memSecondsDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_FROM_JSON(ReadSize, readSize_);
          DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
          DARABONBA_PTR_FROM_JSON(VcoreSecondsDayGrowthRatio, vcoreSecondsDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
          DARABONBA_PTR_FROM_JSON(WriteSize, writeSize_);
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
        class WriteSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WriteSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, WriteSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          WriteSize() = default ;
          WriteSize(const WriteSize &) = default ;
          WriteSize(WriteSize &&) = default ;
          WriteSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WriteSize() = default ;
          WriteSize& operator=(const WriteSize &) = default ;
          WriteSize& operator=(WriteSize &&) = default ;
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
          inline WriteSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline WriteSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline WriteSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline WriteSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class VcoreUtilization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreUtilization& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreUtilization& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreUtilization() = default ;
          VcoreUtilization(const VcoreUtilization &) = default ;
          VcoreUtilization(VcoreUtilization &&) = default ;
          VcoreUtilization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreUtilization() = default ;
          VcoreUtilization& operator=(const VcoreUtilization &) = default ;
          VcoreUtilization& operator=(VcoreUtilization &&) = default ;
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
          inline VcoreUtilization& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreUtilization& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreUtilization& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline VcoreUtilization& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class VcoreSecondsDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreSecondsDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreSecondsDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreSecondsDayGrowthRatio() = default ;
          VcoreSecondsDayGrowthRatio(const VcoreSecondsDayGrowthRatio &) = default ;
          VcoreSecondsDayGrowthRatio(VcoreSecondsDayGrowthRatio &&) = default ;
          VcoreSecondsDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreSecondsDayGrowthRatio() = default ;
          VcoreSecondsDayGrowthRatio& operator=(const VcoreSecondsDayGrowthRatio &) = default ;
          VcoreSecondsDayGrowthRatio& operator=(VcoreSecondsDayGrowthRatio &&) = default ;
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
          inline VcoreSecondsDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreSecondsDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreSecondsDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline VcoreSecondsDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class VcoreSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreSeconds() = default ;
          VcoreSeconds(const VcoreSeconds &) = default ;
          VcoreSeconds(VcoreSeconds &&) = default ;
          VcoreSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreSeconds() = default ;
          VcoreSeconds& operator=(const VcoreSeconds &) = default ;
          VcoreSeconds& operator=(VcoreSeconds &&) = default ;
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
          inline VcoreSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline VcoreSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class ReadSize : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReadSize& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ReadSize& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ReadSize() = default ;
          ReadSize(const ReadSize &) = default ;
          ReadSize(ReadSize &&) = default ;
          ReadSize(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReadSize() = default ;
          ReadSize& operator=(const ReadSize &) = default ;
          ReadSize& operator=(ReadSize &&) = default ;
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
          inline ReadSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ReadSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline ReadSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline ReadSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MemUtilization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemUtilization& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemUtilization& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemUtilization() = default ;
          MemUtilization(const MemUtilization &) = default ;
          MemUtilization(MemUtilization &&) = default ;
          MemUtilization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemUtilization() = default ;
          MemUtilization& operator=(const MemUtilization &) = default ;
          MemUtilization& operator=(MemUtilization &&) = default ;
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
          inline MemUtilization& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemUtilization& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemUtilization& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline MemUtilization& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MemSecondsDayGrowthRatio : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemSecondsDayGrowthRatio& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemSecondsDayGrowthRatio& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemSecondsDayGrowthRatio() = default ;
          MemSecondsDayGrowthRatio(const MemSecondsDayGrowthRatio &) = default ;
          MemSecondsDayGrowthRatio(MemSecondsDayGrowthRatio &&) = default ;
          MemSecondsDayGrowthRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemSecondsDayGrowthRatio() = default ;
          MemSecondsDayGrowthRatio& operator=(const MemSecondsDayGrowthRatio &) = default ;
          MemSecondsDayGrowthRatio& operator=(MemSecondsDayGrowthRatio &&) = default ;
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
          inline MemSecondsDayGrowthRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemSecondsDayGrowthRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemSecondsDayGrowthRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline MemSecondsDayGrowthRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        class MemSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemSeconds() = default ;
          MemSeconds(const MemSeconds &) = default ;
          MemSeconds(MemSeconds &&) = default ;
          MemSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemSeconds() = default ;
          MemSeconds& operator=(const MemSeconds &) = default ;
          MemSeconds& operator=(MemSeconds &&) = default ;
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
          inline MemSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MemSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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

        virtual bool empty() const override { return this->memSeconds_ == nullptr
        && this->memSecondsDayGrowthRatio_ == nullptr && this->memUtilization_ == nullptr && this->readSize_ == nullptr && this->vcoreSeconds_ == nullptr && this->vcoreSecondsDayGrowthRatio_ == nullptr
        && this->vcoreUtilization_ == nullptr && this->writeSize_ == nullptr; };
        // memSeconds Field Functions 
        bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
        void deleteMemSeconds() { this->memSeconds_ = nullptr;};
        inline const Metrics::MemSeconds & getMemSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Metrics::MemSeconds) };
        inline Metrics::MemSeconds getMemSeconds() { DARABONBA_PTR_GET(memSeconds_, Metrics::MemSeconds) };
        inline Metrics& setMemSeconds(const Metrics::MemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
        inline Metrics& setMemSeconds(Metrics::MemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


        // memSecondsDayGrowthRatio Field Functions 
        bool hasMemSecondsDayGrowthRatio() const { return this->memSecondsDayGrowthRatio_ != nullptr;};
        void deleteMemSecondsDayGrowthRatio() { this->memSecondsDayGrowthRatio_ = nullptr;};
        inline const Metrics::MemSecondsDayGrowthRatio & getMemSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(memSecondsDayGrowthRatio_, Metrics::MemSecondsDayGrowthRatio) };
        inline Metrics::MemSecondsDayGrowthRatio getMemSecondsDayGrowthRatio() { DARABONBA_PTR_GET(memSecondsDayGrowthRatio_, Metrics::MemSecondsDayGrowthRatio) };
        inline Metrics& setMemSecondsDayGrowthRatio(const Metrics::MemSecondsDayGrowthRatio & memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };
        inline Metrics& setMemSecondsDayGrowthRatio(Metrics::MemSecondsDayGrowthRatio && memSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(memSecondsDayGrowthRatio_, memSecondsDayGrowthRatio) };


        // memUtilization Field Functions 
        bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
        void deleteMemUtilization() { this->memUtilization_ = nullptr;};
        inline const Metrics::MemUtilization & getMemUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Metrics::MemUtilization) };
        inline Metrics::MemUtilization getMemUtilization() { DARABONBA_PTR_GET(memUtilization_, Metrics::MemUtilization) };
        inline Metrics& setMemUtilization(const Metrics::MemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
        inline Metrics& setMemUtilization(Metrics::MemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


        // readSize Field Functions 
        bool hasReadSize() const { return this->readSize_ != nullptr;};
        void deleteReadSize() { this->readSize_ = nullptr;};
        inline const Metrics::ReadSize & getReadSize() const { DARABONBA_PTR_GET_CONST(readSize_, Metrics::ReadSize) };
        inline Metrics::ReadSize getReadSize() { DARABONBA_PTR_GET(readSize_, Metrics::ReadSize) };
        inline Metrics& setReadSize(const Metrics::ReadSize & readSize) { DARABONBA_PTR_SET_VALUE(readSize_, readSize) };
        inline Metrics& setReadSize(Metrics::ReadSize && readSize) { DARABONBA_PTR_SET_RVALUE(readSize_, readSize) };


        // vcoreSeconds Field Functions 
        bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
        void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
        inline const Metrics::VcoreSeconds & getVcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics::VcoreSeconds getVcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics& setVcoreSeconds(const Metrics::VcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
        inline Metrics& setVcoreSeconds(Metrics::VcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


        // vcoreSecondsDayGrowthRatio Field Functions 
        bool hasVcoreSecondsDayGrowthRatio() const { return this->vcoreSecondsDayGrowthRatio_ != nullptr;};
        void deleteVcoreSecondsDayGrowthRatio() { this->vcoreSecondsDayGrowthRatio_ = nullptr;};
        inline const Metrics::VcoreSecondsDayGrowthRatio & getVcoreSecondsDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(vcoreSecondsDayGrowthRatio_, Metrics::VcoreSecondsDayGrowthRatio) };
        inline Metrics::VcoreSecondsDayGrowthRatio getVcoreSecondsDayGrowthRatio() { DARABONBA_PTR_GET(vcoreSecondsDayGrowthRatio_, Metrics::VcoreSecondsDayGrowthRatio) };
        inline Metrics& setVcoreSecondsDayGrowthRatio(const Metrics::VcoreSecondsDayGrowthRatio & vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };
        inline Metrics& setVcoreSecondsDayGrowthRatio(Metrics::VcoreSecondsDayGrowthRatio && vcoreSecondsDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(vcoreSecondsDayGrowthRatio_, vcoreSecondsDayGrowthRatio) };


        // vcoreUtilization Field Functions 
        bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
        void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
        inline const Metrics::VcoreUtilization & getVcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Metrics::VcoreUtilization) };
        inline Metrics::VcoreUtilization getVcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Metrics::VcoreUtilization) };
        inline Metrics& setVcoreUtilization(const Metrics::VcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
        inline Metrics& setVcoreUtilization(Metrics::VcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


        // writeSize Field Functions 
        bool hasWriteSize() const { return this->writeSize_ != nullptr;};
        void deleteWriteSize() { this->writeSize_ = nullptr;};
        inline const Metrics::WriteSize & getWriteSize() const { DARABONBA_PTR_GET_CONST(writeSize_, Metrics::WriteSize) };
        inline Metrics::WriteSize getWriteSize() { DARABONBA_PTR_GET(writeSize_, Metrics::WriteSize) };
        inline Metrics& setWriteSize(const Metrics::WriteSize & writeSize) { DARABONBA_PTR_SET_VALUE(writeSize_, writeSize) };
        inline Metrics& setWriteSize(Metrics::WriteSize && writeSize) { DARABONBA_PTR_SET_RVALUE(writeSize_, writeSize) };


      protected:
        // The total memory consumption over time in seconds.
        shared_ptr<Metrics::MemSeconds> memSeconds_ {};
        // The day-to-day growth rate of the total memory consumption over time in seconds.
        shared_ptr<Metrics::MemSecondsDayGrowthRatio> memSecondsDayGrowthRatio_ {};
        // The average memory usage.
        shared_ptr<Metrics::MemUtilization> memUtilization_ {};
        // The total amount of data read from the file system.
        shared_ptr<Metrics::ReadSize> readSize_ {};
        // The total CPU consumption over time in seconds.
        shared_ptr<Metrics::VcoreSeconds> vcoreSeconds_ {};
        // The day-to-day growth rate of the total CPU consumption over time in seconds.
        shared_ptr<Metrics::VcoreSecondsDayGrowthRatio> vcoreSecondsDayGrowthRatio_ {};
        // The average CPU utilization. The meaning is the same as the %CPU parameter in the output of the top command in Linux.
        shared_ptr<Metrics::VcoreUtilization> vcoreUtilization_ {};
        // The total amount of data written to the file system.
        shared_ptr<Metrics::WriteSize> writeSize_ {};
      };

      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(HealthyJobCount, healthyJobCount_);
          DARABONBA_PTR_TO_JSON(NeedAttentionJobCount, needAttentionJobCount_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(ScoreDayGrowthRatio, scoreDayGrowthRatio_);
          DARABONBA_PTR_TO_JSON(SubHealthyJobCount, subHealthyJobCount_);
          DARABONBA_PTR_TO_JSON(UnhealthyJobCount, unhealthyJobCount_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthyJobCount, healthyJobCount_);
          DARABONBA_PTR_FROM_JSON(NeedAttentionJobCount, needAttentionJobCount_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(ScoreDayGrowthRatio, scoreDayGrowthRatio_);
          DARABONBA_PTR_FROM_JSON(SubHealthyJobCount, subHealthyJobCount_);
          DARABONBA_PTR_FROM_JSON(UnhealthyJobCount, unhealthyJobCount_);
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
        virtual bool empty() const override { return this->healthyJobCount_ == nullptr
        && this->needAttentionJobCount_ == nullptr && this->score_ == nullptr && this->scoreDayGrowthRatio_ == nullptr && this->subHealthyJobCount_ == nullptr && this->unhealthyJobCount_ == nullptr; };
        // healthyJobCount Field Functions 
        bool hasHealthyJobCount() const { return this->healthyJobCount_ != nullptr;};
        void deleteHealthyJobCount() { this->healthyJobCount_ = nullptr;};
        inline int64_t getHealthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(healthyJobCount_, 0L) };
        inline Analysis& setHealthyJobCount(int64_t healthyJobCount) { DARABONBA_PTR_SET_VALUE(healthyJobCount_, healthyJobCount) };


        // needAttentionJobCount Field Functions 
        bool hasNeedAttentionJobCount() const { return this->needAttentionJobCount_ != nullptr;};
        void deleteNeedAttentionJobCount() { this->needAttentionJobCount_ = nullptr;};
        inline int64_t getNeedAttentionJobCount() const { DARABONBA_PTR_GET_DEFAULT(needAttentionJobCount_, 0L) };
        inline Analysis& setNeedAttentionJobCount(int64_t needAttentionJobCount) { DARABONBA_PTR_SET_VALUE(needAttentionJobCount_, needAttentionJobCount) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline Analysis& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // scoreDayGrowthRatio Field Functions 
        bool hasScoreDayGrowthRatio() const { return this->scoreDayGrowthRatio_ != nullptr;};
        void deleteScoreDayGrowthRatio() { this->scoreDayGrowthRatio_ = nullptr;};
        inline float getScoreDayGrowthRatio() const { DARABONBA_PTR_GET_DEFAULT(scoreDayGrowthRatio_, 0.0) };
        inline Analysis& setScoreDayGrowthRatio(float scoreDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(scoreDayGrowthRatio_, scoreDayGrowthRatio) };


        // subHealthyJobCount Field Functions 
        bool hasSubHealthyJobCount() const { return this->subHealthyJobCount_ != nullptr;};
        void deleteSubHealthyJobCount() { this->subHealthyJobCount_ = nullptr;};
        inline int64_t getSubHealthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(subHealthyJobCount_, 0L) };
        inline Analysis& setSubHealthyJobCount(int64_t subHealthyJobCount) { DARABONBA_PTR_SET_VALUE(subHealthyJobCount_, subHealthyJobCount) };


        // unhealthyJobCount Field Functions 
        bool hasUnhealthyJobCount() const { return this->unhealthyJobCount_ != nullptr;};
        void deleteUnhealthyJobCount() { this->unhealthyJobCount_ = nullptr;};
        inline int64_t getUnhealthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(unhealthyJobCount_, 0L) };
        inline Analysis& setUnhealthyJobCount(int64_t unhealthyJobCount) { DARABONBA_PTR_SET_VALUE(unhealthyJobCount_, unhealthyJobCount) };


      protected:
        // The total number of healthy jobs.
        shared_ptr<int64_t> healthyJobCount_ {};
        // The total number of jobs that require attention.
        shared_ptr<int64_t> needAttentionJobCount_ {};
        // The score for jobs.
        shared_ptr<int32_t> score_ {};
        // The day-to-day growth rate of the score for jobs.
        shared_ptr<float> scoreDayGrowthRatio_ {};
        // The total number of sub-healthy jobs.
        shared_ptr<int64_t> subHealthyJobCount_ {};
        // The total number of unhealthy jobs.
        shared_ptr<int64_t> unhealthyJobCount_ {};
      };

      virtual bool empty() const override { return this->analysis_ == nullptr
        && this->componentName_ == nullptr && this->metrics_ == nullptr; };
      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline const Data::Analysis & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, Data::Analysis) };
      inline Data::Analysis getAnalysis() { DARABONBA_PTR_GET(analysis_, Data::Analysis) };
      inline Data& setAnalysis(const Data::Analysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
      inline Data& setAnalysis(Data::Analysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Data& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    protected:
      // The resource analysis results.
      shared_ptr<Data::Analysis> analysis_ {};
      // The name of the resource whose details are obtained based on the value of ComponentTypes. For example, if the value of ComponentTypes is Queue, the value of this parameter is a queue, such as DW.
      shared_ptr<string> componentName_ {};
      // The metric information.
      shared_ptr<Data::Metrics> metrics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorComputeSummaryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorComputeSummaryResponseBody::Data>) };
    inline vector<ListDoctorComputeSummaryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorComputeSummaryResponseBody::Data>) };
    inline ListDoctorComputeSummaryResponseBody& setData(const vector<ListDoctorComputeSummaryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorComputeSummaryResponseBody& setData(vector<ListDoctorComputeSummaryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorComputeSummaryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorComputeSummaryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorComputeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorComputeSummaryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of resource usage.
    shared_ptr<vector<ListDoctorComputeSummaryResponseBody::Data>> data_ {};
    // The maximum number of entries that are returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
