// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSRESPONSEBODYPAGERESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultDataPeriod.hpp>
#include <vector>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList.hpp>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultDataResourceInfo.hpp>
#include <alibabacloud/models/ListResourcePermissionsResponseBodyPageResultDataTargetAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionsResponseBodyPageResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionsResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthScope, authScope_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PermissionPeriodList, permissionPeriodList_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionsResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthScope, authScope_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PermissionPeriodList, permissionPeriodList_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
    };
    ListResourcePermissionsResponseBodyPageResultData() = default ;
    ListResourcePermissionsResponseBodyPageResultData(const ListResourcePermissionsResponseBodyPageResultData &) = default ;
    ListResourcePermissionsResponseBodyPageResultData(ListResourcePermissionsResponseBodyPageResultData &&) = default ;
    ListResourcePermissionsResponseBodyPageResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionsResponseBodyPageResultData() = default ;
    ListResourcePermissionsResponseBodyPageResultData& operator=(const ListResourcePermissionsResponseBodyPageResultData &) = default ;
    ListResourcePermissionsResponseBodyPageResultData& operator=(ListResourcePermissionsResponseBodyPageResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authScope_ != nullptr
        && this->period_ != nullptr && this->permissionPeriodList_ != nullptr && this->recordId_ != nullptr && this->resourceInfo_ != nullptr && this->targetAccount_ != nullptr; };
    // authScope Field Functions 
    bool hasAuthScope() const { return this->authScope_ != nullptr;};
    void deleteAuthScope() { this->authScope_ = nullptr;};
    inline string authScope() const { DARABONBA_PTR_GET_DEFAULT(authScope_, "") };
    inline ListResourcePermissionsResponseBodyPageResultData& setAuthScope(string authScope) { DARABONBA_PTR_SET_VALUE(authScope_, authScope) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListResourcePermissionsResponseBodyPageResultDataPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListResourcePermissionsResponseBodyPageResultDataPeriod) };
    inline Models::ListResourcePermissionsResponseBodyPageResultDataPeriod period() { DARABONBA_PTR_GET(period_, Models::ListResourcePermissionsResponseBodyPageResultDataPeriod) };
    inline ListResourcePermissionsResponseBodyPageResultData& setPeriod(const Models::ListResourcePermissionsResponseBodyPageResultDataPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListResourcePermissionsResponseBodyPageResultData& setPeriod(Models::ListResourcePermissionsResponseBodyPageResultDataPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // permissionPeriodList Field Functions 
    bool hasPermissionPeriodList() const { return this->permissionPeriodList_ != nullptr;};
    void deletePermissionPeriodList() { this->permissionPeriodList_ = nullptr;};
    inline const vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList> & permissionPeriodList() const { DARABONBA_PTR_GET_CONST(permissionPeriodList_, vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList>) };
    inline vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList> permissionPeriodList() { DARABONBA_PTR_GET(permissionPeriodList_, vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList>) };
    inline ListResourcePermissionsResponseBodyPageResultData& setPermissionPeriodList(const vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList> & permissionPeriodList) { DARABONBA_PTR_SET_VALUE(permissionPeriodList_, permissionPeriodList) };
    inline ListResourcePermissionsResponseBodyPageResultData& setPermissionPeriodList(vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList> && permissionPeriodList) { DARABONBA_PTR_SET_RVALUE(permissionPeriodList_, permissionPeriodList) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline ListResourcePermissionsResponseBodyPageResultData& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline const Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo & resourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo) };
    inline Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo resourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo) };
    inline ListResourcePermissionsResponseBodyPageResultData& setResourceInfo(const Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
    inline ListResourcePermissionsResponseBodyPageResultData& setResourceInfo(Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


    // targetAccount Field Functions 
    bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
    void deleteTargetAccount() { this->targetAccount_ = nullptr;};
    inline const Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount & targetAccount() const { DARABONBA_PTR_GET_CONST(targetAccount_, Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount) };
    inline Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount targetAccount() { DARABONBA_PTR_GET(targetAccount_, Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount) };
    inline ListResourcePermissionsResponseBodyPageResultData& setTargetAccount(const Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount & targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };
    inline ListResourcePermissionsResponseBodyPageResultData& setTargetAccount(Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount && targetAccount) { DARABONBA_PTR_SET_RVALUE(targetAccount_, targetAccount) };


  protected:
    std::shared_ptr<string> authScope_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionsResponseBodyPageResultDataPeriod> period_ = nullptr;
    std::shared_ptr<vector<Models::ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList>> permissionPeriodList_ = nullptr;
    std::shared_ptr<string> recordId_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionsResponseBodyPageResultDataResourceInfo> resourceInfo_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionsResponseBodyPageResultDataTargetAccount> targetAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
