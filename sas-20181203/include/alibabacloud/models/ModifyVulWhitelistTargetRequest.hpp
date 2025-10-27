// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVULWHITELISTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVULWHITELISTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyVulWhitelistTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVulWhitelistTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVulWhitelistTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
    };
    ModifyVulWhitelistTargetRequest() = default ;
    ModifyVulWhitelistTargetRequest(const ModifyVulWhitelistTargetRequest &) = default ;
    ModifyVulWhitelistTargetRequest(ModifyVulWhitelistTargetRequest &&) = default ;
    ModifyVulWhitelistTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVulWhitelistTargetRequest() = default ;
    ModifyVulWhitelistTargetRequest& operator=(const ModifyVulWhitelistTargetRequest &) = default ;
    ModifyVulWhitelistTargetRequest& operator=(ModifyVulWhitelistTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->reason_ == nullptr && return this->sourceIp_ == nullptr && return this->targetInfo_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyVulWhitelistTargetRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyVulWhitelistTargetRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyVulWhitelistTargetRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline ModifyVulWhitelistTargetRequest& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


  protected:
    // The ID of the whitelist.
    // 
    // >  You can call the [DescribeVulWhitelist](~~DescribeVulWhitelist~~) operation to query the IDs of whitelists.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The reason why you add the server to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The applicable scope of the whitelist. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: the type of the applicable scope. Valid values:
    // 
    //     *   **GroupId**: the ID of a server group
    //     *   **Uuid**: the UUID of a server
    // 
    // *   **uuids**: the UUIDs of servers
    // 
    // *   **groupIds**: the IDs of server groups
    // 
    // >  If you leave this parameter empty, all servers are added to the whitelist. If you set the **type** field to **GroupId**, you must also specify the **groupIds** field. If you set the **type** field to **Uuid**, you must also specify the **uuids** field.
    std::shared_ptr<string> targetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
