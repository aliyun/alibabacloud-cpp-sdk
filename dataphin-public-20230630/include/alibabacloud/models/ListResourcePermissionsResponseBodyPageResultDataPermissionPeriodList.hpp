// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULTDATAPERMISSIONPERIODLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULTDATAPERMISSIONPERIODLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& obj) { 
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& obj) { 
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
    };
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList() = default ;
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList(const ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList &) = default ;
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList(ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList &&) = default ;
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList() = default ;
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& operator=(const ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList &) = default ;
    ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& operator=(ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->period_ != nullptr
        && this->permissionType_ != nullptr; };
    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod) };
    inline Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod period() { DARABONBA_PTR_GET(period_, Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod) };
    inline ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& setPeriod(const Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& setPeriod(Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string permissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


  protected:
    std::shared_ptr<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod> period_ = nullptr;
    std::shared_ptr<string> permissionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
