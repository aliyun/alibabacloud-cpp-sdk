// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUESTCOMPONENTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYREQUESTCOMPONENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryRequestComponentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryRequestComponentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryRequestComponentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
    };
    GetDoctorComputeSummaryRequestComponentInfo() = default ;
    GetDoctorComputeSummaryRequestComponentInfo(const GetDoctorComputeSummaryRequestComponentInfo &) = default ;
    GetDoctorComputeSummaryRequestComponentInfo(GetDoctorComputeSummaryRequestComponentInfo &&) = default ;
    GetDoctorComputeSummaryRequestComponentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryRequestComponentInfo() = default ;
    GetDoctorComputeSummaryRequestComponentInfo& operator=(const GetDoctorComputeSummaryRequestComponentInfo &) = default ;
    GetDoctorComputeSummaryRequestComponentInfo& operator=(GetDoctorComputeSummaryRequestComponentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentName_ == nullptr
        && return this->componentType_ == nullptr; };
    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline GetDoctorComputeSummaryRequestComponentInfo& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline GetDoctorComputeSummaryRequestComponentInfo& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


  protected:
    // Set the filter condition name based on the value of ComponentType. For example, if you set ComponentType to queue, you can specify a specific queue name to obtain the resource usage of a specific queue.
    std::shared_ptr<string> componentName_ = nullptr;
    // The resource type for filtering. Valid values:
    // 
    // *   engine: filters results by engine.
    // *   queue: filters results by queue.
    // *   cluster: displays the results at the cluster level.
    // 
    // If you do not specify this parameter, the information at the cluster level is displayed by default.
    std::shared_ptr<string> componentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
