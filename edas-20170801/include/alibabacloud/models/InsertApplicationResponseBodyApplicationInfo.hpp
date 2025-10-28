// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTAPPLICATIONRESPONSEBODYAPPLICATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_INSERTAPPLICATIONRESPONSEBODYAPPLICATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertApplicationResponseBodyApplicationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertApplicationResponseBodyApplicationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertApplicationResponseBodyApplicationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(Dockerize, dockerize_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    InsertApplicationResponseBodyApplicationInfo() = default ;
    InsertApplicationResponseBodyApplicationInfo(const InsertApplicationResponseBodyApplicationInfo &) = default ;
    InsertApplicationResponseBodyApplicationInfo(InsertApplicationResponseBodyApplicationInfo &&) = default ;
    InsertApplicationResponseBodyApplicationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertApplicationResponseBodyApplicationInfo() = default ;
    InsertApplicationResponseBodyApplicationInfo& operator=(const InsertApplicationResponseBodyApplicationInfo &) = default ;
    InsertApplicationResponseBodyApplicationInfo& operator=(InsertApplicationResponseBodyApplicationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->changeOrderId_ == nullptr && return this->dockerize_ == nullptr && return this->owner_ == nullptr && return this->port_ == nullptr
        && return this->regionName_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // dockerize Field Functions 
    bool hasDockerize() const { return this->dockerize_ != nullptr;};
    void deleteDockerize() { this->dockerize_ = nullptr;};
    inline bool dockerize() const { DARABONBA_PTR_GET_DEFAULT(dockerize_, false) };
    inline InsertApplicationResponseBodyApplicationInfo& setDockerize(bool dockerize) { DARABONBA_PTR_SET_VALUE(dockerize_, dockerize) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline InsertApplicationResponseBodyApplicationInfo& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionName Field Functions 
    bool hasRegionName() const { return this->regionName_ != nullptr;};
    void deleteRegionName() { this->regionName_ = nullptr;};
    inline string regionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline InsertApplicationResponseBodyApplicationInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application. The ID is the unique identifier of the application in EDAS.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the change process.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // Indicates whether the application is a Docker application. Valid values:
    // 
    // *   **true**: The application is a Docker application.
    // *   **false**: The application is not a Docker application.
    std::shared_ptr<bool> dockerize_ = nullptr;
    // The owner of the application. The owner is the user who created the application.
    std::shared_ptr<string> owner_ = nullptr;
    // The port used by the created application. Default value: 8080. You can call the UpdateContainerConfiguration operation to change the port. For more information, see [UpdateContainerConfiguration](https://help.aliyun.com/document_detail/149403.html).
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> regionName_ = nullptr;
    // The ID of the user who created the application.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
