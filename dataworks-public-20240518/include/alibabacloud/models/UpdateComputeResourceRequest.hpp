// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateComputeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateComputeResourceRequest() = default ;
    UpdateComputeResourceRequest(const UpdateComputeResourceRequest &) = default ;
    UpdateComputeResourceRequest(UpdateComputeResourceRequest &&) = default ;
    UpdateComputeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeResourceRequest() = default ;
    UpdateComputeResourceRequest& operator=(const UpdateComputeResourceRequest &) = default ;
    UpdateComputeResourceRequest& operator=(UpdateComputeResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->projectId_ == nullptr; };
    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string getConnectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline UpdateComputeResourceRequest& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // connectionPropertiesMode Field Functions 
    bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
    void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
    inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
    inline UpdateComputeResourceRequest& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateComputeResourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateComputeResourceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateComputeResourceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The specific connection configuration of the computing resource, including the connection address, access identity, and environment information. The environment type (EnvType) of the computing resource is a member attribute of this object, including DEV (development environment) and PROD (production environment). The value is not case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> connectionProperties_ {};
    // The category of the computing resource to be added. Different types have different subtypes and corresponding parameter schema constraints. Examples: InstanceMode and UrlMode.
    shared_ptr<string> connectionPropertiesMode_ {};
    // The description of the computing resource. The maximum length is 3000 characters.
    shared_ptr<string> description_ {};
    // The ID of the computing resource.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
