// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPUTERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPUTERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateComputeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComputeResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComputeResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateComputeResourceRequest() = default ;
    CreateComputeResourceRequest(const CreateComputeResourceRequest &) = default ;
    CreateComputeResourceRequest(CreateComputeResourceRequest &&) = default ;
    CreateComputeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComputeResourceRequest() = default ;
    CreateComputeResourceRequest& operator=(const CreateComputeResourceRequest &) = default ;
    CreateComputeResourceRequest& operator=(CreateComputeResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string getConnectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline CreateComputeResourceRequest& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // connectionPropertiesMode Field Functions 
    bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
    void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
    inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
    inline CreateComputeResourceRequest& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateComputeResourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateComputeResourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateComputeResourceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateComputeResourceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The connection configuration of the compute resource, including the endpoint, access identity, and environment context. The EnvType field is a member property of this object and specifies the environment of the compute resource. Valid values: DEV (development environment) and PROD (production environment). The EnvType value is case-insensitive.
    // 
    // This parameter is required.
    shared_ptr<string> connectionProperties_ {};
    // The category for adding the compute resource. Different types have different subtypes with different parameter constraints. For example, a Hologres compute resource supports InstanceMode (instance mode) and UrlMode (connection string mode).
    // 
    // This parameter is required.
    shared_ptr<string> connectionPropertiesMode_ {};
    // The description of the compute resource. The description can be up to 3,000 characters in length.
    shared_ptr<string> description_ {};
    // The name of the compute resource. The name can contain letters, digits, and underscores (_), and cannot start with a digit or underscore. The name can be up to 255 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The type of the compute resource. Multiple compute resource types are supported.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
