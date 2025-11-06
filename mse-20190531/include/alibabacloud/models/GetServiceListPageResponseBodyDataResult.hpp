// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListPageResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetServiceListPageResponseBodyDataResult() = default ;
    GetServiceListPageResponseBodyDataResult(const GetServiceListPageResponseBodyDataResult &) = default ;
    GetServiceListPageResponseBodyDataResult(GetServiceListPageResponseBodyDataResult &&) = default ;
    GetServiceListPageResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageResponseBodyDataResult() = default ;
    GetServiceListPageResponseBodyDataResult& operator=(const GetServiceListPageResponseBodyDataResult &) = default ;
    GetServiceListPageResponseBodyDataResult& operator=(GetServiceListPageResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->gmtModifyTime_ == nullptr && return this->group_ == nullptr && return this->instanceNum_ == nullptr && return this->serviceName_ == nullptr
        && return this->serviceType_ == nullptr && return this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetServiceListPageResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetServiceListPageResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline GetServiceListPageResponseBodyDataResult& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetServiceListPageResponseBodyDataResult& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline GetServiceListPageResponseBodyDataResult& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListPageResponseBodyDataResult& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceListPageResponseBodyDataResult& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceListPageResponseBodyDataResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the service was last updated.
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    // The group to which the service belongs.
    std::shared_ptr<string> group_ = nullptr;
    // The number of service nodes.
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    std::shared_ptr<string> serviceType_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
