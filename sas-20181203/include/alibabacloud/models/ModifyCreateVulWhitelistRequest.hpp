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
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCreateVulWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
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
    virtual bool empty() const override { this->reason_ != nullptr
        && this->targetInfo_ != nullptr && this->whitelist_ != nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyCreateVulWhitelistRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline ModifyCreateVulWhitelistRequest& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline ModifyCreateVulWhitelistRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The reason why you add the vulnerability to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The applicable scope of the whitelist. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: the type of the applicable scope. Valid values:
    // 
    //     *   **GroupId**: the ID of a server group.
    //     *   **Uuid**: the UUID of a server.
    // 
    // *   **uuids**: the UUIDs of servers. This field is of the string type.
    // 
    // *   **groupIds**: the IDs of server groups. This field is of the long type.
    // 
    // >  If you leave this parameter empty, the applicable scope is all servers. If you set the **type** field to **GroupId**, you must also specify the **groupIds** field. If you set the **type** field to **Uuid**, you must also specify the **uuids** field.
    std::shared_ptr<string> targetInfo_ = nullptr;
    // The information about the vulnerability that you want to add to the whitelist. The value is a JSON string that contains the following fields:
    // 
    // *   **Status**: the status of the vulnerability.
    // 
    // *   **GmtLast**: the timestamp when the vulnerability was last detected. Unit: milliseconds.
    // 
    // *   **LaterCount**: the number of vulnerabilities that have the medium priority.
    // 
    // *   **AsapCount**: the number of vulnerabilities that have the high priority.
    // 
    // *   **Name**: the name of the vulnerability.
    // 
    // *   **Type**: the type of the vulnerability. Valid values:
    // 
    //     *   **cve**: Linux software vulnerability
    //     *   **sys**: Windows system vulnerability
    //     *   **cms**: Web-CMS vulnerability
    //     *   **app**: application vulnerability
    //     *   **emg**: urgent vulnerability
    // 
    // *   **Related**: the Common Vulnerabilities and Exposures (CVE) ID of the vulnerability.
    // 
    // *   **HandledCount**: the number of handled vulnerabilities.
    // 
    // *   **AliasName**: the alias of the vulnerability.
    // 
    // *   **RuleModifyTime**: the time when the vulnerability was last disclosed.
    // 
    // *   **NntfCount**: the number of vulnerabilities that have the low priority.
    // 
    // *   **TotalFixCount**: the total number of fixed vulnerabilities.
    // 
    // *   **Tags**: the tag that is added to the vulnerability.
    // 
    // >  You can call the [DescribeGroupedVul](~~DescribeGroupedVul~~) operation to query the information about the vulnerability that you want to add to the whitelist.
    // 
    // This parameter is required.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
