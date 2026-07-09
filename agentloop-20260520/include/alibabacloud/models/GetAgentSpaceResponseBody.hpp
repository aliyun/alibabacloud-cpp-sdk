// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetAgentSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_TO_JSON(cmsWorkspaceBindType, cmsWorkspaceBindType_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(mseNamespace, mseNamespace_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_FROM_JSON(cmsWorkspaceBindType, cmsWorkspaceBindType_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(mseNamespace, mseNamespace_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetAgentSpaceResponseBody() = default ;
    GetAgentSpaceResponseBody(const GetAgentSpaceResponseBody &) = default ;
    GetAgentSpaceResponseBody(GetAgentSpaceResponseBody &&) = default ;
    GetAgentSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSpaceResponseBody() = default ;
    GetAgentSpaceResponseBody& operator=(const GetAgentSpaceResponseBody &) = default ;
    GetAgentSpaceResponseBody& operator=(GetAgentSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MseNamespace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MseNamespace& obj) { 
        DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
      };
      friend void from_json(const Darabonba::Json& j, MseNamespace& obj) { 
        DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
      };
      MseNamespace() = default ;
      MseNamespace(const MseNamespace &) = default ;
      MseNamespace(MseNamespace &&) = default ;
      MseNamespace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MseNamespace() = default ;
      MseNamespace& operator=(const MseNamespace &) = default ;
      MseNamespace& operator=(MseNamespace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->namespaceName_ == nullptr; };
      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline MseNamespace& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline MseNamespace& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    protected:
      // The ID of the MSE namespace.
      shared_ptr<string> namespaceId_ {};
      // The name of the MSE namespace.
      shared_ptr<string> namespaceName_ {};
    };

    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->cmsWorkspace_ == nullptr && this->cmsWorkspaceBindType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->mseNamespace_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->slsProject_ == nullptr && this->updateTime_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline GetAgentSpaceResponseBody& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // cmsWorkspace Field Functions 
    bool hasCmsWorkspace() const { return this->cmsWorkspace_ != nullptr;};
    void deleteCmsWorkspace() { this->cmsWorkspace_ = nullptr;};
    inline string getCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspace_, "") };
    inline GetAgentSpaceResponseBody& setCmsWorkspace(string cmsWorkspace) { DARABONBA_PTR_SET_VALUE(cmsWorkspace_, cmsWorkspace) };


    // cmsWorkspaceBindType Field Functions 
    bool hasCmsWorkspaceBindType() const { return this->cmsWorkspaceBindType_ != nullptr;};
    void deleteCmsWorkspaceBindType() { this->cmsWorkspaceBindType_ = nullptr;};
    inline string getCmsWorkspaceBindType() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceBindType_, "") };
    inline GetAgentSpaceResponseBody& setCmsWorkspaceBindType(string cmsWorkspaceBindType) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceBindType_, cmsWorkspaceBindType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAgentSpaceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAgentSpaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mseNamespace Field Functions 
    bool hasMseNamespace() const { return this->mseNamespace_ != nullptr;};
    void deleteMseNamespace() { this->mseNamespace_ = nullptr;};
    inline const GetAgentSpaceResponseBody::MseNamespace & getMseNamespace() const { DARABONBA_PTR_GET_CONST(mseNamespace_, GetAgentSpaceResponseBody::MseNamespace) };
    inline GetAgentSpaceResponseBody::MseNamespace getMseNamespace() { DARABONBA_PTR_GET(mseNamespace_, GetAgentSpaceResponseBody::MseNamespace) };
    inline GetAgentSpaceResponseBody& setMseNamespace(const GetAgentSpaceResponseBody::MseNamespace & mseNamespace) { DARABONBA_PTR_SET_VALUE(mseNamespace_, mseNamespace) };
    inline GetAgentSpaceResponseBody& setMseNamespace(GetAgentSpaceResponseBody::MseNamespace && mseNamespace) { DARABONBA_PTR_SET_RVALUE(mseNamespace_, mseNamespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAgentSpaceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline GetAgentSpaceResponseBody& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAgentSpaceResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The name of the AgentSpace.
    shared_ptr<string> agentSpace_ {};
    // The CloudMonitor workspace.
    shared_ptr<string> cmsWorkspace_ {};
    // The binding type of the CloudMonitor 2.0 workspace.
    shared_ptr<string> cmsWorkspaceBindType_ {};
    // The time when the AgentSpace was created.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The Microservices Engine (MSE) namespace.
    shared_ptr<GetAgentSpaceResponseBody::MseNamespace> mseNamespace_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the Simple Log Service project.
    shared_ptr<string> slsProject_ {};
    // The time when the AgentSpace was last updated.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
