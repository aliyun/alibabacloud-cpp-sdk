// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetaDBInfoResponseBody() = default ;
    GetMetaDBInfoResponseBody(const GetMetaDBInfoResponseBody &) = default ;
    GetMetaDBInfoResponseBody(GetMetaDBInfoResponseBody &&) = default ;
    GetMetaDBInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBInfoResponseBody() = default ;
    GetMetaDBInfoResponseBody& operator=(const GetMetaDBInfoResponseBody &) = default ;
    GetMetaDBInfoResponseBody& operator=(GetMetaDBInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppGuid, appGuid_);
        DARABONBA_PTR_TO_JSON(ClusterBizId, clusterBizId_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ProjectNameCn, projectNameCn_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppGuid, appGuid_);
        DARABONBA_PTR_FROM_JSON(ClusterBizId, clusterBizId_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ProjectNameCn, projectNameCn_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appGuid_ == nullptr
        && this->clusterBizId_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->endpoint_ == nullptr && this->envType_ == nullptr
        && this->location_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->ownerName_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->projectNameCn_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr; };
      // appGuid Field Functions 
      bool hasAppGuid() const { return this->appGuid_ != nullptr;};
      void deleteAppGuid() { this->appGuid_ = nullptr;};
      inline string getAppGuid() const { DARABONBA_PTR_GET_DEFAULT(appGuid_, "") };
      inline Data& setAppGuid(string appGuid) { DARABONBA_PTR_SET_VALUE(appGuid_, appGuid) };


      // clusterBizId Field Functions 
      bool hasClusterBizId() const { return this->clusterBizId_ != nullptr;};
      void deleteClusterBizId() { this->clusterBizId_ = nullptr;};
      inline string getClusterBizId() const { DARABONBA_PTR_GET_DEFAULT(clusterBizId_, "") };
      inline Data& setClusterBizId(string clusterBizId) { DARABONBA_PTR_SET_VALUE(clusterBizId_, clusterBizId) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline Data& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
      inline Data& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline Data& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline Data& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // projectNameCn Field Functions 
      bool hasProjectNameCn() const { return this->projectNameCn_ != nullptr;};
      void deleteProjectNameCn() { this->projectNameCn_ = nullptr;};
      inline string getProjectNameCn() const { DARABONBA_PTR_GET_DEFAULT(projectNameCn_, "") };
      inline Data& setProjectNameCn(string projectNameCn) { DARABONBA_PTR_SET_VALUE(projectNameCn_, projectNameCn) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The compute engine instance ID. Specify the ID in the `Engine type.Engine name` format.
      shared_ptr<string> appGuid_ {};
      // The EMR cluster ID.
      shared_ptr<string> clusterBizId_ {};
      // The comment.
      shared_ptr<string> comment_ {};
      // The time when the compute engine instance was created.
      shared_ptr<int64_t> createTime_ {};
      // The endpoint of the service.
      shared_ptr<string> endpoint_ {};
      // The type of the environment. Valid values: 0 and 1. The value 0 indicates the development environment. The value 1 indicates the production environment.
      shared_ptr<int32_t> envType_ {};
      // The storage path of the metadatabase of the EMR cluster.
      shared_ptr<string> location_ {};
      // The time when the compute engine instance was modified.
      shared_ptr<int64_t> modifyTime_ {};
      // The name of the database.
      shared_ptr<string> name_ {};
      // The ID of the Alibaba Cloud account used by the workspace owner.
      shared_ptr<string> ownerId_ {};
      // The name of the workspace owner.
      shared_ptr<string> ownerName_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The name of the workspace.
      shared_ptr<string> projectName_ {};
      // The display name of the workspace.
      shared_ptr<string> projectNameCn_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
      // The type of the metadatabase.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaDBInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaDBInfoResponseBody::Data) };
    inline GetMetaDBInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaDBInfoResponseBody::Data) };
    inline GetMetaDBInfoResponseBody& setData(const GetMetaDBInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaDBInfoResponseBody& setData(GetMetaDBInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaDBInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic metadata information.
    shared_ptr<GetMetaDBInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
