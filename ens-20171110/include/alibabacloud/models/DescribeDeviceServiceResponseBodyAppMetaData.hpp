// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYAPPMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODYAPPMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeDeviceServiceResponseBodyAppMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBodyAppMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppStableVersion, appStableVersion_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBodyAppMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppStableVersion, appStableVersion_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    DescribeDeviceServiceResponseBodyAppMetaData() = default ;
    DescribeDeviceServiceResponseBodyAppMetaData(const DescribeDeviceServiceResponseBodyAppMetaData &) = default ;
    DescribeDeviceServiceResponseBodyAppMetaData(DescribeDeviceServiceResponseBodyAppMetaData &&) = default ;
    DescribeDeviceServiceResponseBodyAppMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBodyAppMetaData() = default ;
    DescribeDeviceServiceResponseBodyAppMetaData& operator=(const DescribeDeviceServiceResponseBodyAppMetaData &) = default ;
    DescribeDeviceServiceResponseBodyAppMetaData& operator=(DescribeDeviceServiceResponseBodyAppMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->appStableVersion_ == nullptr && return this->appType_ == nullptr && return this->clusterName_ == nullptr && return this->createTime_ == nullptr
        && return this->description_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appStableVersion Field Functions 
    bool hasAppStableVersion() const { return this->appStableVersion_ != nullptr;};
    void deleteAppStableVersion() { this->appStableVersion_ = nullptr;};
    inline string appStableVersion() const { DARABONBA_PTR_GET_DEFAULT(appStableVersion_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setAppStableVersion(string appStableVersion) { DARABONBA_PTR_SET_VALUE(appStableVersion_, appStableVersion) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDeviceServiceResponseBodyAppMetaData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The stable version number of the application.
    std::shared_ptr<string> appStableVersion_ = nullptr;
    // The type of the application. The value is of the enumeration type. Valid values:
    // 
    // *   Common
    // *   Scheduler
    std::shared_ptr<string> appType_ = nullptr;
    // The name of the application cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
