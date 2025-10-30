// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPPPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPPPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyAppPermissionsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyAppPermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyAppPermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceMyAppPermissionsResponseBodyPageResult() = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResult(const ListDataServiceMyAppPermissionsResponseBodyPageResult &) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResult(ListDataServiceMyAppPermissionsResponseBodyPageResult &&) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyAppPermissionsResponseBodyPageResult() = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResult& operator=(const ListDataServiceMyAppPermissionsResponseBodyPageResult &) = default ;
    ListDataServiceMyAppPermissionsResponseBodyPageResult& operator=(ListDataServiceMyAppPermissionsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissionList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // permissionList Field Functions 
    bool hasPermissionList() const { return this->permissionList_ != nullptr;};
    void deletePermissionList() { this->permissionList_ = nullptr;};
    inline const vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList> & permissionList() const { DARABONBA_PTR_GET_CONST(permissionList_, vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList>) };
    inline vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList> permissionList() { DARABONBA_PTR_GET(permissionList_, vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList>) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResult& setPermissionList(const vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList> & permissionList) { DARABONBA_PTR_SET_VALUE(permissionList_, permissionList) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResult& setPermissionList(vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList> && permissionList) { DARABONBA_PTR_SET_RVALUE(permissionList_, permissionList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceMyAppPermissionsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceMyAppPermissionsResponseBodyPageResultPermissionList>> permissionList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
