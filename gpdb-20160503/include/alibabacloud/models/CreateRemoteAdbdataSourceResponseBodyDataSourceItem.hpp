// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCERESPONSEBODYDATASOURCEITEM_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMOTEADBDATASOURCERESPONSEBODYDATASOURCEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateRemoteADBDataSourceResponseBodyDataSourceItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRemoteADBDataSourceResponseBodyDataSourceItem& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateRemoteADBDataSourceResponseBodyDataSourceItem& obj) { 
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
    CreateRemoteADBDataSourceResponseBodyDataSourceItem() = default ;
    CreateRemoteADBDataSourceResponseBodyDataSourceItem(const CreateRemoteADBDataSourceResponseBodyDataSourceItem &) = default ;
    CreateRemoteADBDataSourceResponseBodyDataSourceItem(CreateRemoteADBDataSourceResponseBodyDataSourceItem &&) = default ;
    CreateRemoteADBDataSourceResponseBodyDataSourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRemoteADBDataSourceResponseBodyDataSourceItem() = default ;
    CreateRemoteADBDataSourceResponseBodyDataSourceItem& operator=(const CreateRemoteADBDataSourceResponseBodyDataSourceItem &) = default ;
    CreateRemoteADBDataSourceResponseBodyDataSourceItem& operator=(CreateRemoteADBDataSourceResponseBodyDataSourceItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceName_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->localDatabase_ != nullptr && this->localInstanceName_ != nullptr && this->managerUserName_ != nullptr
        && this->regionId_ != nullptr && this->remoteDatabase_ != nullptr && this->remoteInstanceName_ != nullptr && this->status_ != nullptr && this->userName_ != nullptr; };
    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // localDatabase Field Functions 
    bool hasLocalDatabase() const { return this->localDatabase_ != nullptr;};
    void deleteLocalDatabase() { this->localDatabase_ = nullptr;};
    inline string localDatabase() const { DARABONBA_PTR_GET_DEFAULT(localDatabase_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setLocalDatabase(string localDatabase) { DARABONBA_PTR_SET_VALUE(localDatabase_, localDatabase) };


    // localInstanceName Field Functions 
    bool hasLocalInstanceName() const { return this->localInstanceName_ != nullptr;};
    void deleteLocalInstanceName() { this->localInstanceName_ = nullptr;};
    inline string localInstanceName() const { DARABONBA_PTR_GET_DEFAULT(localInstanceName_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setLocalInstanceName(string localInstanceName) { DARABONBA_PTR_SET_VALUE(localInstanceName_, localInstanceName) };


    // managerUserName Field Functions 
    bool hasManagerUserName() const { return this->managerUserName_ != nullptr;};
    void deleteManagerUserName() { this->managerUserName_ = nullptr;};
    inline string managerUserName() const { DARABONBA_PTR_GET_DEFAULT(managerUserName_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setManagerUserName(string managerUserName) { DARABONBA_PTR_SET_VALUE(managerUserName_, managerUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteDatabase Field Functions 
    bool hasRemoteDatabase() const { return this->remoteDatabase_ != nullptr;};
    void deleteRemoteDatabase() { this->remoteDatabase_ = nullptr;};
    inline string remoteDatabase() const { DARABONBA_PTR_GET_DEFAULT(remoteDatabase_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setRemoteDatabase(string remoteDatabase) { DARABONBA_PTR_SET_VALUE(remoteDatabase_, remoteDatabase) };


    // remoteInstanceName Field Functions 
    bool hasRemoteInstanceName() const { return this->remoteInstanceName_ != nullptr;};
    void deleteRemoteInstanceName() { this->remoteInstanceName_ = nullptr;};
    inline string remoteInstanceName() const { DARABONBA_PTR_GET_DEFAULT(remoteInstanceName_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setRemoteInstanceName(string remoteInstanceName) { DARABONBA_PTR_SET_VALUE(remoteInstanceName_, remoteInstanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateRemoteADBDataSourceResponseBodyDataSourceItem& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


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
    // Management account user name
    std::shared_ptr<string> managerUserName_ = nullptr;
    // Region ID.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Remote database name
    std::shared_ptr<string> remoteDatabase_ = nullptr;
    // Remote instance name
    std::shared_ptr<string> remoteInstanceName_ = nullptr;
    // Synchronization status
    std::shared_ptr<string> status_ = nullptr;
    // User name
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
