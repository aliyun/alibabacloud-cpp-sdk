// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATAMETRICSFREEZEDATASIZE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHDFSDIRECTORYRESPONSEBODYDATAMETRICSFREEZEDATASIZE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize() = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize(const GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize &) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize(GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize &&) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize() = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& operator=(const GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize &) = default ;
    GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& operator=(GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->unit_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline GetDoctorHDFSDirectoryResponseBodyDataMetricsFreezeDataSize& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the metric.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the metric.
    std::shared_ptr<string> name_ = nullptr;
    // The unit of the metric.
    std::shared_ptr<string> unit_ = nullptr;
    // The value of the metric.
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
