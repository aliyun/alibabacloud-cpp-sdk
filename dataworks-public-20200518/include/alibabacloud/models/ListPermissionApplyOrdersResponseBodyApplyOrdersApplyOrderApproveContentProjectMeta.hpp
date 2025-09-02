// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDERAPPROVECONTENTPROJECTMETA_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONAPPLYORDERSRESPONSEBODYAPPLYORDERSAPPLYORDERAPPROVECONTENTPROJECTMETA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectMetaList, objectMetaList_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectMetaList, objectMetaList_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta &&) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta() = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& operator=(const ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta &) = default ;
    ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& operator=(ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objectMetaList_ != nullptr
        && this->workspaceName_ != nullptr; };
    // objectMetaList Field Functions 
    bool hasObjectMetaList() const { return this->objectMetaList_ != nullptr;};
    void deleteObjectMetaList() { this->objectMetaList_ = nullptr;};
    inline const vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList> & objectMetaList() const { DARABONBA_PTR_GET_CONST(objectMetaList_, vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList>) };
    inline vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList> objectMetaList() { DARABONBA_PTR_GET(objectMetaList_, vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList>) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& setObjectMetaList(const vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList> & objectMetaList) { DARABONBA_PTR_SET_VALUE(objectMetaList_, objectMetaList) };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& setObjectMetaList(vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList> && objectMetaList) { DARABONBA_PTR_SET_RVALUE(objectMetaList_, objectMetaList) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMeta& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The information about the object on which you requested permissions.
    std::shared_ptr<vector<Models::ListPermissionApplyOrdersResponseBodyApplyOrdersApplyOrderApproveContentProjectMetaObjectMetaList>> objectMetaList_ = nullptr;
    // The name of the DataWorks workspace that is associated with the MaxCompute project in which you requested permissions on a table.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
