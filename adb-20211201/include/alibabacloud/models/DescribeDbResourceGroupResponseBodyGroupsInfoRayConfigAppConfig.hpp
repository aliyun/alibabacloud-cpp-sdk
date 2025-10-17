// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFORAYCONFIGAPPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFORAYCONFIGAPPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ImageSelector, imageSelector_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ImageSelector, imageSelector_);
    };
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig(const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig(DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig &&) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& operator=(const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& operator=(DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appType_ == nullptr && return this->imageSelector_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // imageSelector Field Functions 
    bool hasImageSelector() const { return this->imageSelector_ != nullptr;};
    void deleteImageSelector() { this->imageSelector_ = nullptr;};
    inline const Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector & imageSelector() const { DARABONBA_PTR_GET_CONST(imageSelector_, Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector) };
    inline Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector imageSelector() { DARABONBA_PTR_GET(imageSelector_, Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& setImageSelector(const Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector & imageSelector) { DARABONBA_PTR_SET_VALUE(imageSelector_, imageSelector) };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfig& setImageSelector(Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector && imageSelector) { DARABONBA_PTR_SET_RVALUE(imageSelector_, imageSelector) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<Models::DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector> imageSelector_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
