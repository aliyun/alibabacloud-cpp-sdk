// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYRESOURCEPROGRESSINPROGRESSRESOURCEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKRESPONSEBODYRESOURCEPROGRESSINPROGRESSRESOURCEDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackResponseBodyResourceProgressInProgressResourceDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackResponseBodyResourceProgressInProgressResourceDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ProgressTargetValue, progressTargetValue_);
      DARABONBA_PTR_TO_JSON(ProgressValue, progressValue_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackResponseBodyResourceProgressInProgressResourceDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgressTargetValue, progressTargetValue_);
      DARABONBA_PTR_FROM_JSON(ProgressValue, progressValue_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetStackResponseBodyResourceProgressInProgressResourceDetails() = default ;
    GetStackResponseBodyResourceProgressInProgressResourceDetails(const GetStackResponseBodyResourceProgressInProgressResourceDetails &) = default ;
    GetStackResponseBodyResourceProgressInProgressResourceDetails(GetStackResponseBodyResourceProgressInProgressResourceDetails &&) = default ;
    GetStackResponseBodyResourceProgressInProgressResourceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackResponseBodyResourceProgressInProgressResourceDetails() = default ;
    GetStackResponseBodyResourceProgressInProgressResourceDetails& operator=(const GetStackResponseBodyResourceProgressInProgressResourceDetails &) = default ;
    GetStackResponseBodyResourceProgressInProgressResourceDetails& operator=(GetStackResponseBodyResourceProgressInProgressResourceDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->progressTargetValue_ != nullptr
        && this->progressValue_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr; };
    // progressTargetValue Field Functions 
    bool hasProgressTargetValue() const { return this->progressTargetValue_ != nullptr;};
    void deleteProgressTargetValue() { this->progressTargetValue_ = nullptr;};
    inline float progressTargetValue() const { DARABONBA_PTR_GET_DEFAULT(progressTargetValue_, 0.0) };
    inline GetStackResponseBodyResourceProgressInProgressResourceDetails& setProgressTargetValue(float progressTargetValue) { DARABONBA_PTR_SET_VALUE(progressTargetValue_, progressTargetValue) };


    // progressValue Field Functions 
    bool hasProgressValue() const { return this->progressValue_ != nullptr;};
    void deleteProgressValue() { this->progressValue_ = nullptr;};
    inline float progressValue() const { DARABONBA_PTR_GET_DEFAULT(progressValue_, 0.0) };
    inline GetStackResponseBodyResourceProgressInProgressResourceDetails& setProgressValue(float progressValue) { DARABONBA_PTR_SET_VALUE(progressValue_, progressValue) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetStackResponseBodyResourceProgressInProgressResourceDetails& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetStackResponseBodyResourceProgressInProgressResourceDetails& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The desired progress value of the resource.
    std::shared_ptr<float> progressTargetValue_ = nullptr;
    // The current progress value of the resource.
    std::shared_ptr<float> progressValue_ = nullptr;
    // The resource name.
    std::shared_ptr<string> resourceName_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
