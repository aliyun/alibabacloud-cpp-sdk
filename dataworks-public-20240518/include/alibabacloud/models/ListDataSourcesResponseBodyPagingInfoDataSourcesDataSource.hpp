// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFODATASOURCESDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFODATASOURCESDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& obj) { 
      DARABONBA_ANY_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& obj) { 
      DARABONBA_ANY_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource() = default ;
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource(const ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource &) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource(ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource &&) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource() = default ;
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& operator=(const ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource &) = default ;
    ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& operator=(ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && return this->connectionPropertiesMode_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->qualifiedName_ == nullptr; };
    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline     const Darabonba::Json & connectionProperties() const { DARABONBA_GET(connectionProperties_) };
    Darabonba::Json & connectionProperties() { DARABONBA_GET(connectionProperties_) };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setConnectionProperties(Darabonba::Json & connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


    // connectionPropertiesMode Field Functions 
    bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
    void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
    inline string connectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    // The connection configurations of the data source, including the connection address, access identity, and environment information. The envType parameter specifies the environment in which the data source is used. Valid values of the envType parameter:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    // 
    // The parameters that you need to configure for the data source vary based on the mode in which the data source is added. For more information, see [Data source connection information (ConnectionProperties)](https://help.aliyun.com/document_detail/2852465.html).
    Darabonba::Json connectionProperties_ = nullptr;
    // The mode in which the data source is added. The mode varies based on the data source type. Valid values:
    // 
    // *   InstanceMode: instance mode
    // *   UrlMode: connection string mode
    std::shared_ptr<string> connectionPropertiesMode_ = nullptr;
    // The time when the data source was added. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who adds the data source.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description of the data source.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the data source.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the data source was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The ID of the user who modifies the data source.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The unique business key of the data source. For example, the unique business key of a Hologres data source is in the `${tenantOwnerId}:${regionId}:${type}:${instanceId}:${database}` format.
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
