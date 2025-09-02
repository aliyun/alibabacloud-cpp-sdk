// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENTPROJECTMETA_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVECONTENTPROJECTMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& obj) { 
      DARABONBA_PTR_TO_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_TO_JSON(ObjectMetaList, objectMetaList_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxComputeProjectName, maxComputeProjectName_);
      DARABONBA_PTR_FROM_JSON(ObjectMetaList, objectMetaList_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxComputeProjectName_ != nullptr
        && this->objectMetaList_ != nullptr && this->workspaceId_ != nullptr; };
    // maxComputeProjectName Field Functions 
    bool hasMaxComputeProjectName() const { return this->maxComputeProjectName_ != nullptr;};
    void deleteMaxComputeProjectName() { this->maxComputeProjectName_ = nullptr;};
    inline string maxComputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxComputeProjectName_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& setMaxComputeProjectName(string maxComputeProjectName) { DARABONBA_PTR_SET_VALUE(maxComputeProjectName_, maxComputeProjectName) };


    // objectMetaList Field Functions 
    bool hasObjectMetaList() const { return this->objectMetaList_ != nullptr;};
    void deleteObjectMetaList() { this->objectMetaList_ = nullptr;};
    inline const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList> & objectMetaList() const { DARABONBA_PTR_GET_CONST(objectMetaList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList>) };
    inline vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList> objectMetaList() { DARABONBA_PTR_GET(objectMetaList_, vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList>) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& setObjectMetaList(const vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList> & objectMetaList) { DARABONBA_PTR_SET_VALUE(objectMetaList_, objectMetaList) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& setObjectMetaList(vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList> && objectMetaList) { DARABONBA_PTR_SET_RVALUE(objectMetaList_, objectMetaList) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int32_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMeta& setWorkspaceId(int32_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The MaxCompute project to which the object on which you request permissions belongs.
    std::shared_ptr<string> maxComputeProjectName_ = nullptr;
    // The details about the object on which you request permissions.
    std::shared_ptr<vector<Models::GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveContentProjectMetaObjectMetaList>> objectMetaList_ = nullptr;
    // The ID of the DataWorks workspace that is associated with the object on which you request permissions.
    std::shared_ptr<int32_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
