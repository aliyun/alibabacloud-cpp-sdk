// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSERVERLESSAUTHTOMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyServerlessAuthToMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyServerlessAuthToMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCriteria, appCriteria_);
      DARABONBA_PTR_TO_JSON(AuthItem, authItem_);
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
      DARABONBA_PTR_TO_JSON(BindAppList, bindAppList_);
      DARABONBA_PTR_TO_JSON(BindAssetType, bindAssetType_);
      DARABONBA_PTR_TO_JSON(BindUuidList, bindUuidList_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(NtmVersion, ntmVersion_);
      DARABONBA_PTR_TO_JSON(PreBind, preBind_);
      DARABONBA_PTR_TO_JSON(PreBindOrderId, preBindOrderId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
      DARABONBA_PTR_TO_JSON(UnBindAppList, unBindAppList_);
      DARABONBA_PTR_TO_JSON(UnBindUuidList, unBindUuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyServerlessAuthToMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCriteria, appCriteria_);
      DARABONBA_PTR_FROM_JSON(AuthItem, authItem_);
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
      DARABONBA_PTR_FROM_JSON(BindAppList, bindAppList_);
      DARABONBA_PTR_FROM_JSON(BindAssetType, bindAssetType_);
      DARABONBA_PTR_FROM_JSON(BindUuidList, bindUuidList_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(NtmVersion, ntmVersion_);
      DARABONBA_PTR_FROM_JSON(PreBind, preBind_);
      DARABONBA_PTR_FROM_JSON(PreBindOrderId, preBindOrderId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryUid, resourceDirectoryUid_);
      DARABONBA_PTR_FROM_JSON(UnBindAppList, unBindAppList_);
      DARABONBA_PTR_FROM_JSON(UnBindUuidList, unBindUuidList_);
    };
    ModifyServerlessAuthToMachineRequest() = default ;
    ModifyServerlessAuthToMachineRequest(const ModifyServerlessAuthToMachineRequest &) = default ;
    ModifyServerlessAuthToMachineRequest(ModifyServerlessAuthToMachineRequest &&) = default ;
    ModifyServerlessAuthToMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyServerlessAuthToMachineRequest() = default ;
    ModifyServerlessAuthToMachineRequest& operator=(const ModifyServerlessAuthToMachineRequest &) = default ;
    ModifyServerlessAuthToMachineRequest& operator=(ModifyServerlessAuthToMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCriteria_ == nullptr
        && return this->authItem_ == nullptr && return this->autoBind_ == nullptr && return this->bindAll_ == nullptr && return this->bindAppList_ == nullptr && return this->bindAssetType_ == nullptr
        && return this->bindUuidList_ == nullptr && return this->criteria_ == nullptr && return this->logicalExp_ == nullptr && return this->ntmVersion_ == nullptr && return this->preBind_ == nullptr
        && return this->preBindOrderId_ == nullptr && return this->resourceDirectoryUid_ == nullptr && return this->unBindAppList_ == nullptr && return this->unBindUuidList_ == nullptr; };
    // appCriteria Field Functions 
    bool hasAppCriteria() const { return this->appCriteria_ != nullptr;};
    void deleteAppCriteria() { this->appCriteria_ = nullptr;};
    inline string appCriteria() const { DARABONBA_PTR_GET_DEFAULT(appCriteria_, "") };
    inline ModifyServerlessAuthToMachineRequest& setAppCriteria(string appCriteria) { DARABONBA_PTR_SET_VALUE(appCriteria_, appCriteria) };


    // authItem Field Functions 
    bool hasAuthItem() const { return this->authItem_ != nullptr;};
    void deleteAuthItem() { this->authItem_ = nullptr;};
    inline string authItem() const { DARABONBA_PTR_GET_DEFAULT(authItem_, "") };
    inline ModifyServerlessAuthToMachineRequest& setAuthItem(string authItem) { DARABONBA_PTR_SET_VALUE(authItem_, authItem) };


    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t autoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline ModifyServerlessAuthToMachineRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // bindAll Field Functions 
    bool hasBindAll() const { return this->bindAll_ != nullptr;};
    void deleteBindAll() { this->bindAll_ = nullptr;};
    inline bool bindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
    inline ModifyServerlessAuthToMachineRequest& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


    // bindAppList Field Functions 
    bool hasBindAppList() const { return this->bindAppList_ != nullptr;};
    void deleteBindAppList() { this->bindAppList_ = nullptr;};
    inline const vector<string> & bindAppList() const { DARABONBA_PTR_GET_CONST(bindAppList_, vector<string>) };
    inline vector<string> bindAppList() { DARABONBA_PTR_GET(bindAppList_, vector<string>) };
    inline ModifyServerlessAuthToMachineRequest& setBindAppList(const vector<string> & bindAppList) { DARABONBA_PTR_SET_VALUE(bindAppList_, bindAppList) };
    inline ModifyServerlessAuthToMachineRequest& setBindAppList(vector<string> && bindAppList) { DARABONBA_PTR_SET_RVALUE(bindAppList_, bindAppList) };


    // bindAssetType Field Functions 
    bool hasBindAssetType() const { return this->bindAssetType_ != nullptr;};
    void deleteBindAssetType() { this->bindAssetType_ = nullptr;};
    inline string bindAssetType() const { DARABONBA_PTR_GET_DEFAULT(bindAssetType_, "") };
    inline ModifyServerlessAuthToMachineRequest& setBindAssetType(string bindAssetType) { DARABONBA_PTR_SET_VALUE(bindAssetType_, bindAssetType) };


    // bindUuidList Field Functions 
    bool hasBindUuidList() const { return this->bindUuidList_ != nullptr;};
    void deleteBindUuidList() { this->bindUuidList_ = nullptr;};
    inline const vector<string> & bindUuidList() const { DARABONBA_PTR_GET_CONST(bindUuidList_, vector<string>) };
    inline vector<string> bindUuidList() { DARABONBA_PTR_GET(bindUuidList_, vector<string>) };
    inline ModifyServerlessAuthToMachineRequest& setBindUuidList(const vector<string> & bindUuidList) { DARABONBA_PTR_SET_VALUE(bindUuidList_, bindUuidList) };
    inline ModifyServerlessAuthToMachineRequest& setBindUuidList(vector<string> && bindUuidList) { DARABONBA_PTR_SET_RVALUE(bindUuidList_, bindUuidList) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ModifyServerlessAuthToMachineRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string logicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline ModifyServerlessAuthToMachineRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // ntmVersion Field Functions 
    bool hasNtmVersion() const { return this->ntmVersion_ != nullptr;};
    void deleteNtmVersion() { this->ntmVersion_ = nullptr;};
    inline string ntmVersion() const { DARABONBA_PTR_GET_DEFAULT(ntmVersion_, "") };
    inline ModifyServerlessAuthToMachineRequest& setNtmVersion(string ntmVersion) { DARABONBA_PTR_SET_VALUE(ntmVersion_, ntmVersion) };


    // preBind Field Functions 
    bool hasPreBind() const { return this->preBind_ != nullptr;};
    void deletePreBind() { this->preBind_ = nullptr;};
    inline int32_t preBind() const { DARABONBA_PTR_GET_DEFAULT(preBind_, 0) };
    inline ModifyServerlessAuthToMachineRequest& setPreBind(int32_t preBind) { DARABONBA_PTR_SET_VALUE(preBind_, preBind) };


    // preBindOrderId Field Functions 
    bool hasPreBindOrderId() const { return this->preBindOrderId_ != nullptr;};
    void deletePreBindOrderId() { this->preBindOrderId_ = nullptr;};
    inline int64_t preBindOrderId() const { DARABONBA_PTR_GET_DEFAULT(preBindOrderId_, 0L) };
    inline ModifyServerlessAuthToMachineRequest& setPreBindOrderId(int64_t preBindOrderId) { DARABONBA_PTR_SET_VALUE(preBindOrderId_, preBindOrderId) };


    // resourceDirectoryUid Field Functions 
    bool hasResourceDirectoryUid() const { return this->resourceDirectoryUid_ != nullptr;};
    void deleteResourceDirectoryUid() { this->resourceDirectoryUid_ = nullptr;};
    inline int64_t resourceDirectoryUid() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryUid_, 0L) };
    inline ModifyServerlessAuthToMachineRequest& setResourceDirectoryUid(int64_t resourceDirectoryUid) { DARABONBA_PTR_SET_VALUE(resourceDirectoryUid_, resourceDirectoryUid) };


    // unBindAppList Field Functions 
    bool hasUnBindAppList() const { return this->unBindAppList_ != nullptr;};
    void deleteUnBindAppList() { this->unBindAppList_ = nullptr;};
    inline const vector<string> & unBindAppList() const { DARABONBA_PTR_GET_CONST(unBindAppList_, vector<string>) };
    inline vector<string> unBindAppList() { DARABONBA_PTR_GET(unBindAppList_, vector<string>) };
    inline ModifyServerlessAuthToMachineRequest& setUnBindAppList(const vector<string> & unBindAppList) { DARABONBA_PTR_SET_VALUE(unBindAppList_, unBindAppList) };
    inline ModifyServerlessAuthToMachineRequest& setUnBindAppList(vector<string> && unBindAppList) { DARABONBA_PTR_SET_RVALUE(unBindAppList_, unBindAppList) };


    // unBindUuidList Field Functions 
    bool hasUnBindUuidList() const { return this->unBindUuidList_ != nullptr;};
    void deleteUnBindUuidList() { this->unBindUuidList_ = nullptr;};
    inline const vector<string> & unBindUuidList() const { DARABONBA_PTR_GET_CONST(unBindUuidList_, vector<string>) };
    inline vector<string> unBindUuidList() { DARABONBA_PTR_GET(unBindUuidList_, vector<string>) };
    inline ModifyServerlessAuthToMachineRequest& setUnBindUuidList(const vector<string> & unBindUuidList) { DARABONBA_PTR_SET_VALUE(unBindUuidList_, unBindUuidList) };
    inline ModifyServerlessAuthToMachineRequest& setUnBindUuidList(vector<string> && unBindUuidList) { DARABONBA_PTR_SET_RVALUE(unBindUuidList_, unBindUuidList) };


  protected:
    // Application query condition.
    std::shared_ptr<string> appCriteria_ = nullptr;
    // Instance type. Values:
    // - **SERVERLESS**: Serverless asset
    std::shared_ptr<string> authItem_ = nullptr;
    // Enable auto-binding. Values:
    // 
    // - **0**: Off
    // - **1**: On
    std::shared_ptr<int32_t> autoBind_ = nullptr;
    // Whether to bind all. Default is **false**. Values:
    // 
    // - **true**: Yes
    // - **false**: No
    std::shared_ptr<bool> bindAll_ = nullptr;
    // List of application IDs to be bound.
    // 
    // > Obtained through the [ListMachineApps](~~ListMachineApps~~) interface.
    std::shared_ptr<vector<string>> bindAppList_ = nullptr;
    // Type of asset to operate on. Values:
    // - **INSTANCE**: Instance
    // - **APP**: Application
    std::shared_ptr<string> bindAssetType_ = nullptr;
    // List of asset UUIDs to be bound.
    std::shared_ptr<vector<string>> bindUuidList_ = nullptr;
    // Set the conditions for searching assets. This parameter is in JSON format, and case sensitivity should be noted when entering parameters.
    // > Supports searching assets using instance ID, instance name, VPC ID, region, public IP address, etc. You can call the [DescribeCriteria](~~DescribeCriteria~~) interface to query supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // Set the logical relationship between multiple search conditions. Values:
    // - **OR**: Indicates an **or** relationship between multiple conditions.
    // - **AND**: Indicates an **and** relationship between multiple conditions.
    std::shared_ptr<string> logicalExp_ = nullptr;
    // NTM version code, used for pre-binding.
    std::shared_ptr<string> ntmVersion_ = nullptr;
    // Whether it is a pre-bind operation. Values:
    // 
    // - **0**: No
    // - **1**: Yes
    // 
    // 
    // > After enabling pre-binding, the specified server will automatically bind the corresponding version\\"s authorization count after the purchase is completed.
    std::shared_ptr<int32_t> preBind_ = nullptr;
    // Pre-bind order ID.
    std::shared_ptr<int64_t> preBindOrderId_ = nullptr;
    // UID of the associated resource directory.
    std::shared_ptr<int64_t> resourceDirectoryUid_ = nullptr;
    // List of application IDs to be unbound.
    // 
    // > Obtained through the [ListMachineApps](~~ListMachineApps~~) interface.
    std::shared_ptr<vector<string>> unBindAppList_ = nullptr;
    // List of asset UUIDs to be unbound.
    std::shared_ptr<vector<string>> unBindUuidList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
