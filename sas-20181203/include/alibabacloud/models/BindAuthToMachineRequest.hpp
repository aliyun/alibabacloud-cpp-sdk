// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAUTHTOMACHINEREQUEST_HPP_
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
  class BindAuthToMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAuthToMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(Bind, bind_);
      DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(IsPreBind, isPreBind_);
      DARABONBA_PTR_TO_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_TO_JSON(NtmVersion, ntmVersion_);
      DARABONBA_PTR_TO_JSON(PreBindOrderId, preBindOrderId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(UnBind, unBind_);
    };
    friend void from_json(const Darabonba::Json& j, BindAuthToMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthVersion, authVersion_);
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(Bind, bind_);
      DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(IsPreBind, isPreBind_);
      DARABONBA_PTR_FROM_JSON(LogicalExp, logicalExp_);
      DARABONBA_PTR_FROM_JSON(NtmVersion, ntmVersion_);
      DARABONBA_PTR_FROM_JSON(PreBindOrderId, preBindOrderId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(UnBind, unBind_);
    };
    BindAuthToMachineRequest() = default ;
    BindAuthToMachineRequest(const BindAuthToMachineRequest &) = default ;
    BindAuthToMachineRequest(BindAuthToMachineRequest &&) = default ;
    BindAuthToMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAuthToMachineRequest() = default ;
    BindAuthToMachineRequest& operator=(const BindAuthToMachineRequest &) = default ;
    BindAuthToMachineRequest& operator=(BindAuthToMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authVersion_ == nullptr
        && this->autoBind_ == nullptr && this->bind_ == nullptr && this->bindAll_ == nullptr && this->criteria_ == nullptr && this->isPreBind_ == nullptr
        && this->logicalExp_ == nullptr && this->ntmVersion_ == nullptr && this->preBindOrderId_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->unBind_ == nullptr; };
    // authVersion Field Functions 
    bool hasAuthVersion() const { return this->authVersion_ != nullptr;};
    void deleteAuthVersion() { this->authVersion_ = nullptr;};
    inline int32_t getAuthVersion() const { DARABONBA_PTR_GET_DEFAULT(authVersion_, 0) };
    inline BindAuthToMachineRequest& setAuthVersion(int32_t authVersion) { DARABONBA_PTR_SET_VALUE(authVersion_, authVersion) };


    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline BindAuthToMachineRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // bind Field Functions 
    bool hasBind() const { return this->bind_ != nullptr;};
    void deleteBind() { this->bind_ = nullptr;};
    inline const vector<string> & getBind() const { DARABONBA_PTR_GET_CONST(bind_, vector<string>) };
    inline vector<string> getBind() { DARABONBA_PTR_GET(bind_, vector<string>) };
    inline BindAuthToMachineRequest& setBind(const vector<string> & bind) { DARABONBA_PTR_SET_VALUE(bind_, bind) };
    inline BindAuthToMachineRequest& setBind(vector<string> && bind) { DARABONBA_PTR_SET_RVALUE(bind_, bind) };


    // bindAll Field Functions 
    bool hasBindAll() const { return this->bindAll_ != nullptr;};
    void deleteBindAll() { this->bindAll_ = nullptr;};
    inline bool getBindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
    inline BindAuthToMachineRequest& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline BindAuthToMachineRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // isPreBind Field Functions 
    bool hasIsPreBind() const { return this->isPreBind_ != nullptr;};
    void deleteIsPreBind() { this->isPreBind_ = nullptr;};
    inline int32_t getIsPreBind() const { DARABONBA_PTR_GET_DEFAULT(isPreBind_, 0) };
    inline BindAuthToMachineRequest& setIsPreBind(int32_t isPreBind) { DARABONBA_PTR_SET_VALUE(isPreBind_, isPreBind) };


    // logicalExp Field Functions 
    bool hasLogicalExp() const { return this->logicalExp_ != nullptr;};
    void deleteLogicalExp() { this->logicalExp_ = nullptr;};
    inline string getLogicalExp() const { DARABONBA_PTR_GET_DEFAULT(logicalExp_, "") };
    inline BindAuthToMachineRequest& setLogicalExp(string logicalExp) { DARABONBA_PTR_SET_VALUE(logicalExp_, logicalExp) };


    // ntmVersion Field Functions 
    bool hasNtmVersion() const { return this->ntmVersion_ != nullptr;};
    void deleteNtmVersion() { this->ntmVersion_ = nullptr;};
    inline string getNtmVersion() const { DARABONBA_PTR_GET_DEFAULT(ntmVersion_, "") };
    inline BindAuthToMachineRequest& setNtmVersion(string ntmVersion) { DARABONBA_PTR_SET_VALUE(ntmVersion_, ntmVersion) };


    // preBindOrderId Field Functions 
    bool hasPreBindOrderId() const { return this->preBindOrderId_ != nullptr;};
    void deletePreBindOrderId() { this->preBindOrderId_ = nullptr;};
    inline int64_t getPreBindOrderId() const { DARABONBA_PTR_GET_DEFAULT(preBindOrderId_, 0L) };
    inline BindAuthToMachineRequest& setPreBindOrderId(int64_t preBindOrderId) { DARABONBA_PTR_SET_VALUE(preBindOrderId_, preBindOrderId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline BindAuthToMachineRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // unBind Field Functions 
    bool hasUnBind() const { return this->unBind_ != nullptr;};
    void deleteUnBind() { this->unBind_ = nullptr;};
    inline const vector<string> & getUnBind() const { DARABONBA_PTR_GET_CONST(unBind_, vector<string>) };
    inline vector<string> getUnBind() { DARABONBA_PTR_GET(unBind_, vector<string>) };
    inline BindAuthToMachineRequest& setUnBind(const vector<string> & unBind) { DARABONBA_PTR_SET_VALUE(unBind_, unBind) };
    inline BindAuthToMachineRequest& setUnBind(vector<string> && unBind) { DARABONBA_PTR_SET_RVALUE(unBind_, unBind) };


  protected:
    // The authorization version of the asset. Valid values:
    // - **6**: Anti-virus Edition
    // - **5**: Advanced Edition
    // - **3**: Enterprise Edition
    // - **7**: Ultimate Edition
    // - **10**: Value-added Service Edition.
    shared_ptr<int32_t> authVersion_ {};
    // Specifies whether to enable automatic binding. Valid values:
    // 
    // - **0**: Disabled.
    // - **1**: Enabled.
    shared_ptr<int32_t> autoBind_ {};
    // The UUIDs of the servers to bind.
    // 
    // > **Bind** and **UnBind** cannot both be empty.
    shared_ptr<vector<string>> bind_ {};
    // Specifies whether to bind all assets. Default value: **false**. Valid values:
    // 
    // - **true**: Bind all assets.
    // - **false**: Do not bind all assets.
    shared_ptr<bool> bindAll_ {};
    // The search conditions for assets. This parameter is in JSON format. Note that the parameter values are case-sensitive.
    // > You can search for assets by instance ID, instance name, VPC ID, region, or public IP address. Call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    shared_ptr<string> criteria_ {};
    // Specifies whether this is a pre-binding operation. Valid values:
    // 
    // - **0**: No.
    // - **1**: Yes.
    // 
    // 
    // > After pre-binding is enabled, the corresponding authorization quota is automatically bound to the specified servers after the purchase is completed.
    shared_ptr<int32_t> isPreBind_ {};
    // The logical relationship among multiple search conditions. Default value: **OR**. Valid values:
    // - **OR**: The search conditions are evaluated with a logical OR.
    // - **AND**: The search conditions are evaluated with a logical AND.
    shared_ptr<string> logicalExp_ {};
    // The order version associated with the pre-binding. Valid values:
    // 
    // - **level7**: Anti-virus Edition
    // - **level3**: Advanced Edition
    // - **level2**: Enterprise Edition
    // - **level8**: Ultimate Edition
    // - **level10**: Value-added service only.
    shared_ptr<string> ntmVersion_ {};
    // The order ID associated with the pre-binding.
    shared_ptr<int64_t> preBindOrderId_ {};
    // The ID of the member accounts in the resource folder (Alibaba Cloud account).
    // > Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The UUIDs of the servers to unbind.
    // > **Bind** and **UnBind** cannot both be empty.
    shared_ptr<vector<string>> unBind_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
