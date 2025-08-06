// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINFORESPONSEBODYAPPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINFORESPONSEBODYAPPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAppInfoResponseBodyAppInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInfoResponseBodyAppInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInfoResponseBodyAppInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAppInfoResponseBodyAppInfoList() = default ;
    ListAppInfoResponseBodyAppInfoList(const ListAppInfoResponseBodyAppInfoList &) = default ;
    ListAppInfoResponseBodyAppInfoList(ListAppInfoResponseBodyAppInfoList &&) = default ;
    ListAppInfoResponseBodyAppInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInfoResponseBodyAppInfoList() = default ;
    ListAppInfoResponseBodyAppInfoList& operator=(const ListAppInfoResponseBodyAppInfoList &) = default ;
    ListAppInfoResponseBodyAppInfoList& operator=(ListAppInfoResponseBodyAppInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->modificationTime_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAppInfoResponseBodyAppInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the application was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The last time when the application was modified. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the application. Valid values:
    // 
    // *   **Normal**
    // *   **Disable**
    std::shared_ptr<string> status_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   **System**
    // *   **Custom**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
