// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMOTEADBDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListRemoteADBDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemoteADBDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemoteADBDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceItems, dataSourceItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListRemoteADBDataSourcesResponseBody() = default ;
    ListRemoteADBDataSourcesResponseBody(const ListRemoteADBDataSourcesResponseBody &) = default ;
    ListRemoteADBDataSourcesResponseBody(ListRemoteADBDataSourcesResponseBody &&) = default ;
    ListRemoteADBDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemoteADBDataSourcesResponseBody() = default ;
    ListRemoteADBDataSourcesResponseBody& operator=(const ListRemoteADBDataSourcesResponseBody &) = default ;
    ListRemoteADBDataSourcesResponseBody& operator=(ListRemoteADBDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceItems& obj) { 
        DARABONBA_PTR_TO_JSON(RemoteDataSources, remoteDataSources_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceItems& obj) { 
        DARABONBA_PTR_FROM_JSON(RemoteDataSources, remoteDataSources_);
      };
      DataSourceItems() = default ;
      DataSourceItems(const DataSourceItems &) = default ;
      DataSourceItems(DataSourceItems &&) = default ;
      DataSourceItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceItems() = default ;
      DataSourceItems& operator=(const DataSourceItems &) = default ;
      DataSourceItems& operator=(DataSourceItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemoteDataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemoteDataSources& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RemoteDataSources& obj) { 
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
        RemoteDataSources() = default ;
        RemoteDataSources(const RemoteDataSources &) = default ;
        RemoteDataSources(RemoteDataSources &&) = default ;
        RemoteDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemoteDataSources() = default ;
        RemoteDataSources& operator=(const RemoteDataSources &) = default ;
        RemoteDataSources& operator=(RemoteDataSources &&) = default ;
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
        inline RemoteDataSources& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RemoteDataSources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RemoteDataSources& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // localDatabase Field Functions 
        bool hasLocalDatabase() const { return this->localDatabase_ != nullptr;};
        void deleteLocalDatabase() { this->localDatabase_ = nullptr;};
        inline string getLocalDatabase() const { DARABONBA_PTR_GET_DEFAULT(localDatabase_, "") };
        inline RemoteDataSources& setLocalDatabase(string localDatabase) { DARABONBA_PTR_SET_VALUE(localDatabase_, localDatabase) };


        // localInstanceName Field Functions 
        bool hasLocalInstanceName() const { return this->localInstanceName_ != nullptr;};
        void deleteLocalInstanceName() { this->localInstanceName_ = nullptr;};
        inline string getLocalInstanceName() const { DARABONBA_PTR_GET_DEFAULT(localInstanceName_, "") };
        inline RemoteDataSources& setLocalInstanceName(string localInstanceName) { DARABONBA_PTR_SET_VALUE(localInstanceName_, localInstanceName) };


        // managerUserName Field Functions 
        bool hasManagerUserName() const { return this->managerUserName_ != nullptr;};
        void deleteManagerUserName() { this->managerUserName_ = nullptr;};
        inline string getManagerUserName() const { DARABONBA_PTR_GET_DEFAULT(managerUserName_, "") };
        inline RemoteDataSources& setManagerUserName(string managerUserName) { DARABONBA_PTR_SET_VALUE(managerUserName_, managerUserName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RemoteDataSources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // remoteDatabase Field Functions 
        bool hasRemoteDatabase() const { return this->remoteDatabase_ != nullptr;};
        void deleteRemoteDatabase() { this->remoteDatabase_ = nullptr;};
        inline string getRemoteDatabase() const { DARABONBA_PTR_GET_DEFAULT(remoteDatabase_, "") };
        inline RemoteDataSources& setRemoteDatabase(string remoteDatabase) { DARABONBA_PTR_SET_VALUE(remoteDatabase_, remoteDatabase) };


        // remoteInstanceName Field Functions 
        bool hasRemoteInstanceName() const { return this->remoteInstanceName_ != nullptr;};
        void deleteRemoteInstanceName() { this->remoteInstanceName_ = nullptr;};
        inline string getRemoteInstanceName() const { DARABONBA_PTR_GET_DEFAULT(remoteInstanceName_, "") };
        inline RemoteDataSources& setRemoteInstanceName(string remoteInstanceName) { DARABONBA_PTR_SET_VALUE(remoteInstanceName_, remoteInstanceName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RemoteDataSources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline RemoteDataSources& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // Data source name
        shared_ptr<string> dataSourceName_ {};
        // Description.
        shared_ptr<string> description_ {};
        // ID.
        shared_ptr<int64_t> id_ {};
        // Local database name
        shared_ptr<string> localDatabase_ {};
        // Local instance name
        shared_ptr<string> localInstanceName_ {};
        // Manager user name
        shared_ptr<string> managerUserName_ {};
        // Region ID.
        // 
        // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) API to view available region IDs.
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

      virtual bool empty() const override { return this->remoteDataSources_ == nullptr; };
      // remoteDataSources Field Functions 
      bool hasRemoteDataSources() const { return this->remoteDataSources_ != nullptr;};
      void deleteRemoteDataSources() { this->remoteDataSources_ = nullptr;};
      inline const vector<DataSourceItems::RemoteDataSources> & getRemoteDataSources() const { DARABONBA_PTR_GET_CONST(remoteDataSources_, vector<DataSourceItems::RemoteDataSources>) };
      inline vector<DataSourceItems::RemoteDataSources> getRemoteDataSources() { DARABONBA_PTR_GET(remoteDataSources_, vector<DataSourceItems::RemoteDataSources>) };
      inline DataSourceItems& setRemoteDataSources(const vector<DataSourceItems::RemoteDataSources> & remoteDataSources) { DARABONBA_PTR_SET_VALUE(remoteDataSources_, remoteDataSources) };
      inline DataSourceItems& setRemoteDataSources(vector<DataSourceItems::RemoteDataSources> && remoteDataSources) { DARABONBA_PTR_SET_RVALUE(remoteDataSources_, remoteDataSources) };


    protected:
      shared_ptr<vector<DataSourceItems::RemoteDataSources>> remoteDataSources_ {};
    };

    virtual bool empty() const override { return this->dataSourceItems_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // dataSourceItems Field Functions 
    bool hasDataSourceItems() const { return this->dataSourceItems_ != nullptr;};
    void deleteDataSourceItems() { this->dataSourceItems_ = nullptr;};
    inline const ListRemoteADBDataSourcesResponseBody::DataSourceItems & getDataSourceItems() const { DARABONBA_PTR_GET_CONST(dataSourceItems_, ListRemoteADBDataSourcesResponseBody::DataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBody::DataSourceItems getDataSourceItems() { DARABONBA_PTR_GET(dataSourceItems_, ListRemoteADBDataSourcesResponseBody::DataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBody& setDataSourceItems(const ListRemoteADBDataSourcesResponseBody::DataSourceItems & dataSourceItems) { DARABONBA_PTR_SET_VALUE(dataSourceItems_, dataSourceItems) };
    inline ListRemoteADBDataSourcesResponseBody& setDataSourceItems(ListRemoteADBDataSourcesResponseBody::DataSourceItems && dataSourceItems) { DARABONBA_PTR_SET_RVALUE(dataSourceItems_, dataSourceItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemoteADBDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline ListRemoteADBDataSourcesResponseBody& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Returns the successfully added data sharing service data.
    shared_ptr<ListRemoteADBDataSourcesResponseBody::DataSourceItems> dataSourceItems_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Task ID.
    shared_ptr<int32_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
