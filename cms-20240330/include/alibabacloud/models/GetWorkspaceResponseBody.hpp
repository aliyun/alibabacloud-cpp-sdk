// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(lastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(lastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody(GetWorkspaceResponseBody &&) = default ;
    GetWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody& operator=(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody& operator=(GetWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->lastModifyTime_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->slsProject_ == nullptr && return this->workspaceName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetWorkspaceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkspaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetWorkspaceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline GetWorkspaceResponseBody& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetWorkspaceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline GetWorkspaceResponseBody& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> createTime_ = nullptr;
    // 工作空间描述
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // 地域ID
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // 工作空间绑定的日志服务项目名称
    std::shared_ptr<string> slsProject_ = nullptr;
    // 工作空间名称
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
