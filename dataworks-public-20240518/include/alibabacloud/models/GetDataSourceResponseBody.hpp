// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody(GetDataSourceResponseBody &&) = default ;
    GetDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceResponseBody() = default ;
    GetDataSourceResponseBody& operator=(const GetDataSourceResponseBody &) = default ;
    GetDataSourceResponseBody& operator=(GetDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
        DARABONBA_ANY_TO_JSON(ConnectionProperties, connectionProperties_);
        DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
        DARABONBA_ANY_FROM_JSON(ConnectionProperties, connectionProperties_);
        DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DataSource() = default ;
      DataSource(const DataSource &) = default ;
      DataSource(DataSource &&) = default ;
      DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSource() = default ;
      DataSource& operator=(const DataSource &) = default ;
      DataSource& operator=(DataSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->qualifiedName_ == nullptr
        && this->type_ == nullptr; };
      // connectionProperties Field Functions 
      bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
      void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
      inline       const Darabonba::Json & getConnectionProperties() const { DARABONBA_GET(connectionProperties_) };
      Darabonba::Json & getConnectionProperties() { DARABONBA_GET(connectionProperties_) };
      inline DataSource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
      inline DataSource& setConnectionProperties(Darabonba::Json && connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


      // connectionPropertiesMode Field Functions 
      bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
      void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
      inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
      inline DataSource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline DataSource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataSource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataSource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline DataSource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline DataSource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataSource& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // qualifiedName Field Functions 
      bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
      void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
      inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
      inline DataSource& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The connection configurations of the data source, including the connection address, access identity, and environment information. The envType parameter specifies the environment in which the data source is used. Valid values of the envType parameter:
      // 
      // *   Dev: development environment
      // *   Prod: production environment
      // 
      // The parameters that you need to configure for the data source vary based on the mode in which the data source is added. For more information, see [Data source connection information (ConnectionProperties)](https://help.aliyun.com/document_detail/2852465.html).
      Darabonba::Json connectionProperties_ {};
      // The mode in which the data source is added. The mode varies based on the data source type. Valid values:
      // 
      // *   InstanceMode: instance mode
      // *   UrlMode: connection string mode
      // *   CdhMode: CDH cluster mode
      shared_ptr<string> connectionPropertiesMode_ {};
      // The time when the data source was added. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the user who adds the data source.
      shared_ptr<string> createUser_ {};
      // The description of the data source.
      shared_ptr<string> description_ {};
      // The data source ID.
      shared_ptr<int64_t> id_ {};
      // The time when the data source was last modified. This value is a UNIX timestamp.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the user who modifies the data source.
      shared_ptr<string> modifyUser_ {};
      // The name of the data source.
      shared_ptr<string> name_ {};
      // The ID of the workspace with which the data source is associated.
      shared_ptr<int64_t> projectId_ {};
      // The unique business key of the data source. For example, the unique business key of a Hologres data source is in the `${tenantOwnerId}:${regionId}:${type}:${instanceId}:${database}` format.
      shared_ptr<string> qualifiedName_ {};
      // The type of the data source.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->requestId_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const GetDataSourceResponseBody::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, GetDataSourceResponseBody::DataSource) };
    inline GetDataSourceResponseBody::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, GetDataSourceResponseBody::DataSource) };
    inline GetDataSourceResponseBody& setDataSource(const GetDataSourceResponseBody::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline GetDataSourceResponseBody& setDataSource(GetDataSourceResponseBody::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data source.
    shared_ptr<GetDataSourceResponseBody::DataSource> dataSource_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
