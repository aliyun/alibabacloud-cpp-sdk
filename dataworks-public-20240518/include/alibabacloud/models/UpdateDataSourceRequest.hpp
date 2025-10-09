// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionProperties_ != nullptr
        && this->connectionPropertiesMode_ != nullptr && this->description_ != nullptr && this->id_ != nullptr && this->projectId_ != nullptr; };
    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string connectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline UpdateDataSourceRequest& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // connectionPropertiesMode Field Functions 
    bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
    void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
    inline string connectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
    inline UpdateDataSourceRequest& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataSourceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataSourceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The connection configurations of the data source, including the connection address, access identity, and environment information. The envType parameter specifies the environment in which the data source is used. Valid values of the envType parameter:
    // 
    // *   Dev: development environment
    // *   Prod: production environment
    // 
    // The parameters that you need to configure for the data source vary based on the mode in which the data source is added. For more information, see [Data source connection information (ConnectionProperties)](https://help.aliyun.com/document_detail/2852465.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionProperties_ = nullptr;
    // The mode in which the data source is added. The mode varies based on the data source type. Valid values:
    // 
    // *   InstanceMode: instance mode
    // *   UrlMode: connection string mode
    std::shared_ptr<string> connectionPropertiesMode_ = nullptr;
    // The description of the data source. The description cannot exceed 3,000 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
