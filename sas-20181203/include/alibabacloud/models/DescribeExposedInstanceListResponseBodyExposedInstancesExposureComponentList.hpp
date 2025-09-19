// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODYEXPOSEDINSTANCESEXPOSURECOMPONENTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODYEXPOSEDINSTANCESEXPOSURECOMPONENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentBizType, componentBizType_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_TO_JSON(ListenPort, listenPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentBizType, componentBizType_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_FROM_JSON(ListenPort, listenPort_);
    };
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList() = default ;
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList(const DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList &) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList(DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList &&) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList() = default ;
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& operator=(const DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList &) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& operator=(DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentBizType_ != nullptr
        && this->componentName_ != nullptr && this->componentVersion_ != nullptr && this->listenPort_ != nullptr; };
    // componentBizType Field Functions 
    bool hasComponentBizType() const { return this->componentBizType_ != nullptr;};
    void deleteComponentBizType() { this->componentBizType_ = nullptr;};
    inline string componentBizType() const { DARABONBA_PTR_GET_DEFAULT(componentBizType_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& setComponentBizType(string componentBizType) { DARABONBA_PTR_SET_VALUE(componentBizType_, componentBizType) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string componentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // componentVersion Field Functions 
    bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
    void deleteComponentVersion() { this->componentVersion_ = nullptr;};
    inline string componentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


    // listenPort Field Functions 
    bool hasListenPort() const { return this->listenPort_ != nullptr;};
    void deleteListenPort() { this->listenPort_ = nullptr;};
    inline string listenPort() const { DARABONBA_PTR_GET_DEFAULT(listenPort_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList& setListenPort(string listenPort) { DARABONBA_PTR_SET_VALUE(listenPort_, listenPort) };


  protected:
    // Expose component type.
    std::shared_ptr<string> componentBizType_ = nullptr;
    // Expose components.
    std::shared_ptr<string> componentName_ = nullptr;
    // Expose component version.
    std::shared_ptr<string> componentVersion_ = nullptr;
    // Exposed port.
    std::shared_ptr<string> listenPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
