// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetWorkspaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetWorkspaceResponseBodyData() = default ;
    GetWorkspaceResponseBodyData(const GetWorkspaceResponseBodyData &) = default ;
    GetWorkspaceResponseBodyData(GetWorkspaceResponseBodyData &&) = default ;
    GetWorkspaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceResponseBodyData() = default ;
    GetWorkspaceResponseBodyData& operator=(const GetWorkspaceResponseBodyData &) = default ;
    GetWorkspaceResponseBodyData& operator=(GetWorkspaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->serviceAccountId_ != nullptr && this->tid_ != nullptr && this->vpcId_ != nullptr
        && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkspaceResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetWorkspaceResponseBodyData& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetWorkspaceResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceAccountId Field Functions 
    bool hasServiceAccountId() const { return this->serviceAccountId_ != nullptr;};
    void deleteServiceAccountId() { this->serviceAccountId_ = nullptr;};
    inline string serviceAccountId() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountId_, "") };
    inline GetWorkspaceResponseBodyData& setServiceAccountId(string serviceAccountId) { DARABONBA_PTR_SET_VALUE(serviceAccountId_, serviceAccountId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetWorkspaceResponseBodyData& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetWorkspaceResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline GetWorkspaceResponseBodyData& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetWorkspaceResponseBodyData& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> serviceAccountId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
