// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLISTAPP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPLISTAPP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppsResponseBodyAppListAppServiceAreas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppsResponseBodyAppListApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyAppListApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ServiceAreas, serviceAreas_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyAppListApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ServiceAreas, serviceAreas_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeAppsResponseBodyAppListApp() = default ;
    DescribeAppsResponseBodyAppListApp(const DescribeAppsResponseBodyAppListApp &) = default ;
    DescribeAppsResponseBodyAppListApp(DescribeAppsResponseBodyAppListApp &&) = default ;
    DescribeAppsResponseBodyAppListApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyAppListApp() = default ;
    DescribeAppsResponseBodyAppListApp& operator=(const DescribeAppsResponseBodyAppListApp &) = default ;
    DescribeAppsResponseBodyAppListApp& operator=(DescribeAppsResponseBodyAppListApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->billType_ != nullptr && this->createTime_ != nullptr && this->serviceAreas_ != nullptr
        && this->status_ != nullptr && this->version_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppsResponseBodyAppListApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsResponseBodyAppListApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeAppsResponseBodyAppListApp& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline DescribeAppsResponseBodyAppListApp& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAppsResponseBodyAppListApp& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // serviceAreas Field Functions 
    bool hasServiceAreas() const { return this->serviceAreas_ != nullptr;};
    void deleteServiceAreas() { this->serviceAreas_ = nullptr;};
    inline const Models::DescribeAppsResponseBodyAppListAppServiceAreas & serviceAreas() const { DARABONBA_PTR_GET_CONST(serviceAreas_, Models::DescribeAppsResponseBodyAppListAppServiceAreas) };
    inline Models::DescribeAppsResponseBodyAppListAppServiceAreas serviceAreas() { DARABONBA_PTR_GET(serviceAreas_, Models::DescribeAppsResponseBodyAppListAppServiceAreas) };
    inline DescribeAppsResponseBodyAppListApp& setServiceAreas(const Models::DescribeAppsResponseBodyAppListAppServiceAreas & serviceAreas) { DARABONBA_PTR_SET_VALUE(serviceAreas_, serviceAreas) };
    inline DescribeAppsResponseBodyAppListApp& setServiceAreas(Models::DescribeAppsResponseBodyAppListAppServiceAreas && serviceAreas) { DARABONBA_PTR_SET_RVALUE(serviceAreas_, serviceAreas) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeAppsResponseBodyAppListApp& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAppsResponseBodyAppListApp& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> billType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<Models::DescribeAppsResponseBodyAppListAppServiceAreas> serviceAreas_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
