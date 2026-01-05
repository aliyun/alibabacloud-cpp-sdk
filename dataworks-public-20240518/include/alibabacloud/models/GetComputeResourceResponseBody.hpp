// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetComputeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetComputeResourceResponseBody() = default ;
    GetComputeResourceResponseBody(const GetComputeResourceResponseBody &) = default ;
    GetComputeResourceResponseBody(GetComputeResourceResponseBody &&) = default ;
    GetComputeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeResourceResponseBody() = default ;
    GetComputeResourceResponseBody& operator=(const GetComputeResourceResponseBody &) = default ;
    GetComputeResourceResponseBody& operator=(GetComputeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComputeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeResource& obj) { 
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
        DARABONBA_PTR_TO_JSON(WhetherDefault, whetherDefault_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeResource& obj) { 
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
        DARABONBA_PTR_FROM_JSON(WhetherDefault, whetherDefault_);
      };
      ComputeResource() = default ;
      ComputeResource(const ComputeResource &) = default ;
      ComputeResource(ComputeResource &&) = default ;
      ComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeResource() = default ;
      ComputeResource& operator=(const ComputeResource &) = default ;
      ComputeResource& operator=(ComputeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->name_ == nullptr && this->projectId_ == nullptr && this->qualifiedName_ == nullptr
        && this->type_ == nullptr && this->whetherDefault_ == nullptr; };
      // connectionProperties Field Functions 
      bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
      void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
      inline       const Darabonba::Json & getConnectionProperties() const { DARABONBA_GET(connectionProperties_) };
      Darabonba::Json & getConnectionProperties() { DARABONBA_GET(connectionProperties_) };
      inline ComputeResource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
      inline ComputeResource& setConnectionProperties(Darabonba::Json && connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


      // connectionPropertiesMode Field Functions 
      bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
      void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
      inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
      inline ComputeResource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ComputeResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline ComputeResource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ComputeResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ComputeResource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline ComputeResource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline ComputeResource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ComputeResource& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // qualifiedName Field Functions 
      bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
      void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
      inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
      inline ComputeResource& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ComputeResource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whetherDefault Field Functions 
      bool hasWhetherDefault() const { return this->whetherDefault_ != nullptr;};
      void deleteWhetherDefault() { this->whetherDefault_ = nullptr;};
      inline bool getWhetherDefault() const { DARABONBA_PTR_GET_DEFAULT(whetherDefault_, false) };
      inline ComputeResource& setWhetherDefault(bool whetherDefault) { DARABONBA_PTR_SET_VALUE(whetherDefault_, whetherDefault) };


    protected:
      // The specific connection configuration details for the computing resource, including the connection address, access identity, and environment information. envType, which specifies the computing resource environment, is a property of this object. Valid values:
      // 
      // *   Dev
      // *   Prod Different types of computing resources have different attribute specifications under various configuration modes (ConnectionPropertiesMode).
      Darabonba::Json connectionProperties_ {};
      // The addition category of the computing resource. Different types will have different subtypes, each with corresponding parameter constraints. For instance:
      // 
      // *   InstanceMode: Instance mode
      // *   UrlMode: Connection String Mode
      // *   CdhMode: CDH mode
      shared_ptr<string> connectionPropertiesMode_ {};
      // The creation time, in timestamp format.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the creator.
      shared_ptr<string> createUser_ {};
      // The description of the computing resource.
      shared_ptr<string> description_ {};
      // The ID of the computing resource.
      shared_ptr<int64_t> id_ {};
      // The last modification time, in timestamp format.
      shared_ptr<int64_t> modifyTime_ {};
      // The ID of the modifier.
      shared_ptr<string> modifyUser_ {};
      // The name of the computing resource.
      shared_ptr<string> name_ {};
      // The ID of the workspace to which the computing resource belongs.
      shared_ptr<int64_t> projectId_ {};
      // The business unique key for the computing resource. For example, the format for Hologres is ${tenantOwnerId}:${regionId}:${type}:${instanceId}:${database}.
      shared_ptr<string> qualifiedName_ {};
      // The type of the computing resource.
      shared_ptr<string> type_ {};
      // Specifies whether it is the default computing resource.
      shared_ptr<bool> whetherDefault_ {};
    };

    virtual bool empty() const override { return this->computeResource_ == nullptr
        && this->requestId_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const GetComputeResourceResponseBody::ComputeResource & getComputeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, GetComputeResourceResponseBody::ComputeResource) };
    inline GetComputeResourceResponseBody::ComputeResource getComputeResource() { DARABONBA_PTR_GET(computeResource_, GetComputeResourceResponseBody::ComputeResource) };
    inline GetComputeResourceResponseBody& setComputeResource(const GetComputeResourceResponseBody::ComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetComputeResourceResponseBody& setComputeResource(GetComputeResourceResponseBody::ComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the computing resource.
    shared_ptr<GetComputeResourceResponseBody::ComputeResource> computeResource_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
