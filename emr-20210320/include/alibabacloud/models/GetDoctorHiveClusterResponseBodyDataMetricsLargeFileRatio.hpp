// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATAMETRICSLARGEFILERATIO_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVECLUSTERRESPONSEBODYDATAMETRICSLARGEFILERATIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio() = default ;
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio(const GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio &) = default ;
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio(GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio &&) = default ;
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio() = default ;
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& operator=(const GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio &) = default ;
    GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& operator=(GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio &&) = default ;
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
    inline GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline GetDoctorHiveClusterResponseBodyDataMetricsLargeFileRatio& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the metric.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the metric.
    std::shared_ptr<string> name_ = nullptr;
    // The unit of the metric.
    std::shared_ptr<string> unit_ = nullptr;
    // The value of the metric.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
