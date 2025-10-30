// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCERESPONSEBODYDATASOURCEITEM_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCERESPONSEBODYDATASOURCEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyRemoteADBDataSourceResponseBodyDataSourceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRemoteADBDataSourceResponseBodyDataSourceItem& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LocalDatabase, localDatabase_);
      DARABONBA_PTR_TO_JSON(LocalInstanceName, localInstanceName_);
      DARABONBA_PTR_TO_JSON(ManagerUserName, managerUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteDatabase, remoteDatabase_);
      DARABONBA_PTR_TO_JSON(RemoteInstanceName, remoteInstanceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRemoteADBDataSourceResponseBodyDataSourceItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LocalDatabase, localDatabase_);
      DARABONBA_PTR_FROM_JSON(LocalInstanceName, localInstanceName_);
      DARABONBA_PTR_FROM_JSON(ManagerUserName, managerUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteDatabase, remoteDatabase_);
      DARABONBA_PTR_FROM_JSON(RemoteInstanceName, remoteInstanceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem() = default ;
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem(const ModifyRemoteADBDataSourceResponseBodyDataSourceItem &) = default ;
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem(ModifyRemoteADBDataSourceResponseBodyDataSourceItem &&) = default ;
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRemoteADBDataSourceResponseBodyDataSourceItem() = default ;
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem& operator=(const ModifyRemoteADBDataSourceResponseBodyDataSourceItem &) = default ;
    ModifyRemoteADBDataSourceResponseBodyDataSourceItem& operator=(ModifyRemoteADBDataSourceResponseBodyDataSourceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceName_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->localDatabase_ == nullptr && return this->localInstanceName_ == nullptr && return this->managerUserName_ == nullptr
        && return this->regionId_ == nullptr && return this->remoteDatabase_ == nullptr && return this->remoteInstanceName_ == nullptr && return this->status_ == nullptr && return this->userName_ == nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // localDatabase Field Functions 
    bool hasLocalDatabase() const { return this->localDatabase_ != nullptr;};
    void deleteLocalDatabase() { this->localDatabase_ = nullptr;};
    inline string localDatabase() const { DARABONBA_PTR_GET_DEFAULT(localDatabase_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setLocalDatabase(string localDatabase) { DARABONBA_PTR_SET_VALUE(localDatabase_, localDatabase) };


    // localInstanceName Field Functions 
    bool hasLocalInstanceName() const { return this->localInstanceName_ != nullptr;};
    void deleteLocalInstanceName() { this->localInstanceName_ = nullptr;};
    inline string localInstanceName() const { DARABONBA_PTR_GET_DEFAULT(localInstanceName_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setLocalInstanceName(string localInstanceName) { DARABONBA_PTR_SET_VALUE(localInstanceName_, localInstanceName) };


    // managerUserName Field Functions 
    bool hasManagerUserName() const { return this->managerUserName_ != nullptr;};
    void deleteManagerUserName() { this->managerUserName_ = nullptr;};
    inline string managerUserName() const { DARABONBA_PTR_GET_DEFAULT(managerUserName_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setManagerUserName(string managerUserName) { DARABONBA_PTR_SET_VALUE(managerUserName_, managerUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteDatabase Field Functions 
    bool hasRemoteDatabase() const { return this->remoteDatabase_ != nullptr;};
    void deleteRemoteDatabase() { this->remoteDatabase_ = nullptr;};
    inline string remoteDatabase() const { DARABONBA_PTR_GET_DEFAULT(remoteDatabase_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setRemoteDatabase(string remoteDatabase) { DARABONBA_PTR_SET_VALUE(remoteDatabase_, remoteDatabase) };


    // remoteInstanceName Field Functions 
    bool hasRemoteInstanceName() const { return this->remoteInstanceName_ != nullptr;};
    void deleteRemoteInstanceName() { this->remoteInstanceName_ = nullptr;};
    inline string remoteInstanceName() const { DARABONBA_PTR_GET_DEFAULT(remoteInstanceName_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setRemoteInstanceName(string remoteInstanceName) { DARABONBA_PTR_SET_VALUE(remoteInstanceName_, remoteInstanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ModifyRemoteADBDataSourceResponseBodyDataSourceItem& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Data source name.
    std::shared_ptr<string> dataSourceName_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Local database name
    std::shared_ptr<string> localDatabase_ = nullptr;
    // Local instance name
    std::shared_ptr<string> localInstanceName_ = nullptr;
    // Manager user name
    std::shared_ptr<string> managerUserName_ = nullptr;
    // Region ID where the instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // Remote database name
    std::shared_ptr<string> remoteDatabase_ = nullptr;
    // Remote instance name
    std::shared_ptr<string> remoteInstanceName_ = nullptr;
    // Data source status
    std::shared_ptr<string> status_ = nullptr;
    // User name
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
