// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEMYAPIPERMISSIONSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceMyApiPermissionsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceMyApiPermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceMyApiPermissionsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionList, permissionList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceMyApiPermissionsResponseBodyPageResult() = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResult(const ListDataServiceMyApiPermissionsResponseBodyPageResult &) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResult(ListDataServiceMyApiPermissionsResponseBodyPageResult &&) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceMyApiPermissionsResponseBodyPageResult() = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResult& operator=(const ListDataServiceMyApiPermissionsResponseBodyPageResult &) = default ;
    ListDataServiceMyApiPermissionsResponseBodyPageResult& operator=(ListDataServiceMyApiPermissionsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissionList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // permissionList Field Functions 
    bool hasPermissionList() const { return this->permissionList_ != nullptr;};
    void deletePermissionList() { this->permissionList_ = nullptr;};
    inline const vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList> & permissionList() const { DARABONBA_PTR_GET_CONST(permissionList_, vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList>) };
    inline vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList> permissionList() { DARABONBA_PTR_GET(permissionList_, vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList>) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResult& setPermissionList(const vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList> & permissionList) { DARABONBA_PTR_SET_VALUE(permissionList_, permissionList) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResult& setPermissionList(vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList> && permissionList) { DARABONBA_PTR_SET_RVALUE(permissionList_, permissionList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceMyApiPermissionsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceMyApiPermissionsResponseBodyPageResultPermissionList>> permissionList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
