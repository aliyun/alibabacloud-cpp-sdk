// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYREMOTEADBDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifyRemoteADBDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRemoteADBDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItem, dataSourceItem_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRemoteADBDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItem, dataSourceItem_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyRemoteADBDataSourceResponseBody() = default ;
    ModifyRemoteADBDataSourceResponseBody(const ModifyRemoteADBDataSourceResponseBody &) = default ;
    ModifyRemoteADBDataSourceResponseBody(ModifyRemoteADBDataSourceResponseBody &&) = default ;
    ModifyRemoteADBDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRemoteADBDataSourceResponseBody() = default ;
    ModifyRemoteADBDataSourceResponseBody& operator=(const ModifyRemoteADBDataSourceResponseBody &) = default ;
    ModifyRemoteADBDataSourceResponseBody& operator=(ModifyRemoteADBDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceItem : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceItem& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataSourceItem& obj) { 
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
      DataSourceItem() = default ;
      DataSourceItem(const DataSourceItem &) = default ;
      DataSourceItem(DataSourceItem &&) = default ;
      DataSourceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceItem() = default ;
      DataSourceItem& operator=(const DataSourceItem &) = default ;
      DataSourceItem& operator=(DataSourceItem &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceName_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->localDatabase_ == nullptr && this->localInstanceName_ == nullptr && this->managerUserName_ == nullptr
        && this->regionId_ == nullptr && this->remoteDatabase_ == nullptr && this->remoteInstanceName_ == nullptr && this->status_ == nullptr && this->userName_ == nullptr; };
      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline DataSourceItem& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataSourceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataSourceItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // localDatabase Field Functions 
      bool hasLocalDatabase() const { return this->localDatabase_ != nullptr;};
      void deleteLocalDatabase() { this->localDatabase_ = nullptr;};
      inline string getLocalDatabase() const { DARABONBA_PTR_GET_DEFAULT(localDatabase_, "") };
      inline DataSourceItem& setLocalDatabase(string localDatabase) { DARABONBA_PTR_SET_VALUE(localDatabase_, localDatabase) };


      // localInstanceName Field Functions 
      bool hasLocalInstanceName() const { return this->localInstanceName_ != nullptr;};
      void deleteLocalInstanceName() { this->localInstanceName_ = nullptr;};
      inline string getLocalInstanceName() const { DARABONBA_PTR_GET_DEFAULT(localInstanceName_, "") };
      inline DataSourceItem& setLocalInstanceName(string localInstanceName) { DARABONBA_PTR_SET_VALUE(localInstanceName_, localInstanceName) };


      // managerUserName Field Functions 
      bool hasManagerUserName() const { return this->managerUserName_ != nullptr;};
      void deleteManagerUserName() { this->managerUserName_ = nullptr;};
      inline string getManagerUserName() const { DARABONBA_PTR_GET_DEFAULT(managerUserName_, "") };
      inline DataSourceItem& setManagerUserName(string managerUserName) { DARABONBA_PTR_SET_VALUE(managerUserName_, managerUserName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataSourceItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // remoteDatabase Field Functions 
      bool hasRemoteDatabase() const { return this->remoteDatabase_ != nullptr;};
      void deleteRemoteDatabase() { this->remoteDatabase_ = nullptr;};
      inline string getRemoteDatabase() const { DARABONBA_PTR_GET_DEFAULT(remoteDatabase_, "") };
      inline DataSourceItem& setRemoteDatabase(string remoteDatabase) { DARABONBA_PTR_SET_VALUE(remoteDatabase_, remoteDatabase) };


      // remoteInstanceName Field Functions 
      bool hasRemoteInstanceName() const { return this->remoteInstanceName_ != nullptr;};
      void deleteRemoteInstanceName() { this->remoteInstanceName_ = nullptr;};
      inline string getRemoteInstanceName() const { DARABONBA_PTR_GET_DEFAULT(remoteInstanceName_, "") };
      inline DataSourceItem& setRemoteInstanceName(string remoteInstanceName) { DARABONBA_PTR_SET_VALUE(remoteInstanceName_, remoteInstanceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataSourceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DataSourceItem& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // Data source name.
      shared_ptr<string> dataSourceName_ {};
      // Description information.
      shared_ptr<string> description_ {};
      // ID
      shared_ptr<int64_t> id_ {};
      // Local database name
      shared_ptr<string> localDatabase_ {};
      // Local instance name
      shared_ptr<string> localInstanceName_ {};
      // Manager user name
      shared_ptr<string> managerUserName_ {};
      // Region ID where the instance is located.
      shared_ptr<string> regionId_ {};
      // Remote database name
      shared_ptr<string> remoteDatabase_ {};
      // Remote instance name
      shared_ptr<string> remoteInstanceName_ {};
      // Data source status
      shared_ptr<string> status_ {};
      // User name
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->dataSourceItem_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // dataSourceItem Field Functions 
    bool hasDataSourceItem() const { return this->dataSourceItem_ != nullptr;};
    void deleteDataSourceItem() { this->dataSourceItem_ = nullptr;};
    inline const ModifyRemoteADBDataSourceResponseBody::DataSourceItem & getDataSourceItem() const { DARABONBA_PTR_GET_CONST(dataSourceItem_, ModifyRemoteADBDataSourceResponseBody::DataSourceItem) };
    inline ModifyRemoteADBDataSourceResponseBody::DataSourceItem getDataSourceItem() { DARABONBA_PTR_GET(dataSourceItem_, ModifyRemoteADBDataSourceResponseBody::DataSourceItem) };
    inline ModifyRemoteADBDataSourceResponseBody& setDataSourceItem(const ModifyRemoteADBDataSourceResponseBody::DataSourceItem & dataSourceItem) { DARABONBA_PTR_SET_VALUE(dataSourceItem_, dataSourceItem) };
    inline ModifyRemoteADBDataSourceResponseBody& setDataSourceItem(ModifyRemoteADBDataSourceResponseBody::DataSourceItem && dataSourceItem) { DARABONBA_PTR_SET_RVALUE(dataSourceItem_, dataSourceItem) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRemoteADBDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ModifyRemoteADBDataSourceResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Returns the successfully modified data sharing service data.
    shared_ptr<ModifyRemoteADBDataSourceResponseBody::DataSourceItem> dataSourceItem_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Task ID.
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
