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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->rescaleLevel_ == nullptr && this->rescaleType_ == nullptr && this->resourceSelector_ == nullptr && this->timeout_ == nullptr && this->toAppVersion_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RescaleApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // rescaleLevel Field Functions 
    bool hasRescaleLevel() const { return this->rescaleLevel_ != nullptr;};
    void deleteRescaleLevel() { this->rescaleLevel_ = nullptr;};
    inline string getRescaleLevel() const { DARABONBA_PTR_GET_DEFAULT(rescaleLevel_, "") };
    inline RescaleApplicationRequest& setRescaleLevel(string rescaleLevel) { DARABONBA_PTR_SET_VALUE(rescaleLevel_, rescaleLevel) };


    // rescaleType Field Functions 
    bool hasRescaleType() const { return this->rescaleType_ != nullptr;};
    void deleteRescaleType() { this->rescaleType_ = nullptr;};
    inline string getRescaleType() const { DARABONBA_PTR_GET_DEFAULT(rescaleType_, "") };
    inline RescaleApplicationRequest& setRescaleType(string rescaleType) { DARABONBA_PTR_SET_VALUE(rescaleType_, rescaleType) };


    // resourceSelector Field Functions 
    bool hasResourceSelector() const { return this->resourceSelector_ != nullptr;};
    void deleteResourceSelector() { this->resourceSelector_ = nullptr;};
    inline string getResourceSelector() const { DARABONBA_PTR_GET_DEFAULT(resourceSelector_, "") };
    inline RescaleApplicationRequest& setResourceSelector(string resourceSelector) { DARABONBA_PTR_SET_VALUE(resourceSelector_, resourceSelector) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline RescaleApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // toAppVersion Field Functions 
    bool hasToAppVersion() const { return this->toAppVersion_ != nullptr;};
    void deleteToAppVersion() { this->toAppVersion_ = nullptr;};
    inline string getToAppVersion() const { DARABONBA_PTR_GET_DEFAULT(toAppVersion_, "") };
    inline RescaleApplicationRequest& setToAppVersion(string toAppVersion) { DARABONBA_PTR_SET_VALUE(toAppVersion_, toAppVersion) };


  protected:
    // The application ID. You can obtain this value by calling the ListApplications operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The level of the scaling region. Valid values:
    // 
    // - AreaIspCode: region ISP.
    // - RegionId: edge zone.
    // - InstanceId: instance. Scale-out indicates resource hosting. Scale-in indicates resource release.
    // 
    // Default value: AreaIspCode.
    shared_ptr<string> rescaleLevel_ {};
    // The scaling action for resources. Valid values:
    // - Add: Provisions new resources.
    // - Del: Releases resources.
    // 
    // This parameter is required.
    shared_ptr<string> rescaleType_ {};
    // The scaling resource requirements. The value is a string in JSON array format.
    // 
    // This parameter is required.
    shared_ptr<string> resourceSelector_ {};
    // The timeout period for asynchronous scaling, in seconds. Default value: 300.
    shared_ptr<int32_t> timeout_ {};
    // The application deployment version for new resources. This parameter takes effect only when resources are added. Default value: the stable version number of the application.
    shared_ptr<string> toAppVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
