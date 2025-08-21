// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESCALEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESCALEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RescaleApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RescaleApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RescaleLevel, rescaleLevel_);
      DARABONBA_PTR_TO_JSON(RescaleType, rescaleType_);
      DARABONBA_PTR_TO_JSON(ResourceSelector, resourceSelector_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(ToAppVersion, toAppVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RescaleApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RescaleLevel, rescaleLevel_);
      DARABONBA_PTR_FROM_JSON(RescaleType, rescaleType_);
      DARABONBA_PTR_FROM_JSON(ResourceSelector, resourceSelector_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(ToAppVersion, toAppVersion_);
    };
    RescaleApplicationRequest() = default ;
    RescaleApplicationRequest(const RescaleApplicationRequest &) = default ;
    RescaleApplicationRequest(RescaleApplicationRequest &&) = default ;
    RescaleApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RescaleApplicationRequest() = default ;
    RescaleApplicationRequest& operator=(const RescaleApplicationRequest &) = default ;
    RescaleApplicationRequest& operator=(RescaleApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->rescaleLevel_ != nullptr && this->rescaleType_ != nullptr && this->resourceSelector_ != nullptr && this->timeout_ != nullptr && this->toAppVersion_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RescaleApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // rescaleLevel Field Functions 
    bool hasRescaleLevel() const { return this->rescaleLevel_ != nullptr;};
    void deleteRescaleLevel() { this->rescaleLevel_ = nullptr;};
    inline string rescaleLevel() const { DARABONBA_PTR_GET_DEFAULT(rescaleLevel_, "") };
    inline RescaleApplicationRequest& setRescaleLevel(string rescaleLevel) { DARABONBA_PTR_SET_VALUE(rescaleLevel_, rescaleLevel) };


    // rescaleType Field Functions 
    bool hasRescaleType() const { return this->rescaleType_ != nullptr;};
    void deleteRescaleType() { this->rescaleType_ = nullptr;};
    inline string rescaleType() const { DARABONBA_PTR_GET_DEFAULT(rescaleType_, "") };
    inline RescaleApplicationRequest& setRescaleType(string rescaleType) { DARABONBA_PTR_SET_VALUE(rescaleType_, rescaleType) };


    // resourceSelector Field Functions 
    bool hasResourceSelector() const { return this->resourceSelector_ != nullptr;};
    void deleteResourceSelector() { this->resourceSelector_ = nullptr;};
    inline string resourceSelector() const { DARABONBA_PTR_GET_DEFAULT(resourceSelector_, "") };
    inline RescaleApplicationRequest& setResourceSelector(string resourceSelector) { DARABONBA_PTR_SET_VALUE(resourceSelector_, resourceSelector) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline RescaleApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // toAppVersion Field Functions 
    bool hasToAppVersion() const { return this->toAppVersion_ != nullptr;};
    void deleteToAppVersion() { this->toAppVersion_ = nullptr;};
    inline string toAppVersion() const { DARABONBA_PTR_GET_DEFAULT(toAppVersion_, "") };
    inline RescaleApplicationRequest& setToAppVersion(string toAppVersion) { DARABONBA_PTR_SET_VALUE(toAppVersion_, toAppVersion) };


  protected:
    // The ID of the application. You can query the application ID by calling the ListApplications operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The level of resource scaling. The value is of the enumeration type. Valid values:
    // 
    // *   AreaIspCode (default): scales resources based on the Internet service provider (ISP).
    // *   RegionId: scales resources based on the edge node.
    // *   InstanceId: scales resources based on the instance ID. Resource scale-out specifies resource hosting and scale-in specifies resource release.
    // 
    // Default value: AreaIspCode.
    std::shared_ptr<string> rescaleLevel_ = nullptr;
    // The scaling operation. The value must be of the enumerated data type. Valid values:
    // 
    // *   Add: adds new resources.
    // *   Del: releases resources.
    // 
    // This parameter is required.
    std::shared_ptr<string> rescaleType_ = nullptr;
    // The required resources. The value must be a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceSelector_ = nullptr;
    // The timeout period for asynchronous scaling. Unit: seconds. Default value: 300.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The version number of the application deployment package. By default, the stable version number is used. This parameter takes effect only when you perform resource scale-out.
    std::shared_ptr<string> toAppVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
