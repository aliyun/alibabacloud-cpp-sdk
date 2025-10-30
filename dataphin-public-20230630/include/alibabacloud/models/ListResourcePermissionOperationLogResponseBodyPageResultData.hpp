// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGRESPONSEBODYPAGERESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataAccount.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo.hpp>
#include <alibabacloud/models/ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionOperationLogResponseBodyPageResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AuthScope, authScope_);
      DARABONBA_PTR_TO_JSON(OperateId, operateId_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_TO_JSON(TargetAccount, targetAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AuthScope, authScope_);
      DARABONBA_PTR_FROM_JSON(OperateId, operateId_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(TargetAccount, targetAccount_);
    };
    ListResourcePermissionOperationLogResponseBodyPageResultData() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultData(const ListResourcePermissionOperationLogResponseBodyPageResultData &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultData(ListResourcePermissionOperationLogResponseBodyPageResultData &&) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogResponseBodyPageResultData() = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultData& operator=(const ListResourcePermissionOperationLogResponseBodyPageResultData &) = default ;
    ListResourcePermissionOperationLogResponseBodyPageResultData& operator=(ListResourcePermissionOperationLogResponseBodyPageResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->authScope_ == nullptr && return this->operateId_ == nullptr && return this->operateTime_ == nullptr && return this->operateType_ == nullptr && return this->period_ == nullptr
        && return this->reason_ == nullptr && return this->resourceInfo_ == nullptr && return this->targetAccount_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount & account() const { DARABONBA_PTR_GET_CONST(account_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount account() { DARABONBA_PTR_GET(account_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setAccount(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setAccount(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // authScope Field Functions 
    bool hasAuthScope() const { return this->authScope_ != nullptr;};
    void deleteAuthScope() { this->authScope_ = nullptr;};
    inline string authScope() const { DARABONBA_PTR_GET_DEFAULT(authScope_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setAuthScope(string authScope) { DARABONBA_PTR_SET_VALUE(authScope_, authScope) };


    // operateId Field Functions 
    bool hasOperateId() const { return this->operateId_ != nullptr;};
    void deleteOperateId() { this->operateId_ = nullptr;};
    inline int64_t operateId() const { DARABONBA_PTR_GET_DEFAULT(operateId_, 0L) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setOperateId(int64_t operateId) { DARABONBA_PTR_SET_VALUE(operateId_, operateId) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline int64_t operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string operateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod & period() const { DARABONBA_PTR_GET_CONST(period_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod period() { DARABONBA_PTR_GET(period_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setPeriod(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod & period) { DARABONBA_PTR_SET_VALUE(period_, period) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setPeriod(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod && period) { DARABONBA_PTR_SET_RVALUE(period_, period) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo & resourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo resourceInfo() { DARABONBA_PTR_GET(resourceInfo_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setResourceInfo(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setResourceInfo(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


    // targetAccount Field Functions 
    bool hasTargetAccount() const { return this->targetAccount_ != nullptr;};
    void deleteTargetAccount() { this->targetAccount_ = nullptr;};
    inline const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount & targetAccount() const { DARABONBA_PTR_GET_CONST(targetAccount_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount) };
    inline Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount targetAccount() { DARABONBA_PTR_GET(targetAccount_, Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setTargetAccount(const Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount & targetAccount) { DARABONBA_PTR_SET_VALUE(targetAccount_, targetAccount) };
    inline ListResourcePermissionOperationLogResponseBodyPageResultData& setTargetAccount(Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount && targetAccount) { DARABONBA_PTR_SET_RVALUE(targetAccount_, targetAccount) };


  protected:
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataAccount> account_ = nullptr;
    std::shared_ptr<string> authScope_ = nullptr;
    std::shared_ptr<int64_t> operateId_ = nullptr;
    std::shared_ptr<int64_t> operateTime_ = nullptr;
    std::shared_ptr<string> operateType_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod> period_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo> resourceInfo_ = nullptr;
    std::shared_ptr<Models::ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount> targetAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
