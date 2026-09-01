// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCREATEVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCreateVulWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCreateVulWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCreateVulWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    ModifyCreateVulWhitelistRequest() = default ;
    ModifyCreateVulWhitelistRequest(const ModifyCreateVulWhitelistRequest &) = default ;
    ModifyCreateVulWhitelistRequest(ModifyCreateVulWhitelistRequest &&) = default ;
    ModifyCreateVulWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCreateVulWhitelistRequest() = default ;
    ModifyCreateVulWhitelistRequest& operator=(const ModifyCreateVulWhitelistRequest &) = default ;
    ModifyCreateVulWhitelistRequest& operator=(ModifyCreateVulWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->reason_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->targetInfo_ == nullptr && this->whitelist_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyCreateVulWhitelistRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyCreateVulWhitelistRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ModifyCreateVulWhitelistRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string getTargetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline ModifyCreateVulWhitelistRequest& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline ModifyCreateVulWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests must use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The reason for adding the vulnerability to the whitelist.
    shared_ptr<string> reason_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The scope in which the whitelist takes effect. The value is a JSON string that contains the following fields:
    // - **type**: The scope type. Valid values:
    //     - **GroupId**: server group
    //     - **Uuid**: host asset
    // - **uuids**: The collection of host asset UUIDs. The field type is String.
    // - **groupIds**: The collection of server group IDs. The field type is Long.
    // > If this parameter is left empty, the whitelist takes effect on all hosts. If **type** is set to **GroupId**, **groupIds** cannot be empty. If **type** is set to **Uuid**, **uuids** cannot be empty.
    shared_ptr<string> targetInfo_ {};
    // The information about the vulnerability to add to the whitelist. The value is a JSON string that contains the following fields:
    // 
    // - **Status**: The vulnerability status.
    // - **GmtLast**: The timestamp when the vulnerability was last detected. Unit: milliseconds.
    // - **LaterCount**: The number of medium-priority vulnerabilities.
    // - **AsapCount**: The number of high-priority vulnerabilities.
    // - **Name**: The vulnerability name.
    // - **Type**: The vulnerability type. Valid values:
    // 
    //     - **cve**: Linux software vulnerability
    //     - **sys**: Windows system vulnerability
    //     - **cms**: Web-CMS vulnerability
    //     - **app**: application vulnerability
    //     - **emg**: emergency vulnerability
    // 
    // - **Related**: The CVE ID of the vulnerability.
    // - **HandledCount**: The number of handled vulnerabilities.
    // - **AliasName**: The alias of the vulnerability.
    // - **RuleModifyTime**: The time when the vulnerability was last published.
    // - **NntfCount**: The number of low-priority vulnerabilities.
    // - **TotalFixCount**: The total number of fixed vulnerabilities.
    // - **Tags**: The vulnerability tags.
    // 
    // > You can call the [DescribeGroupedVul](~~DescribeGroupedVul~~) operation to obtain the vulnerability information to add to the whitelist.
    // 
    // This parameter is required.
    shared_ptr<string> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
