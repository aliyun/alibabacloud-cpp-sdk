// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODYVULWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODYVULWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulWhitelistResponseBodyVulWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulWhitelistResponseBodyVulWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulWhitelistResponseBodyVulWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    GetVulWhitelistResponseBodyVulWhitelist() = default ;
    GetVulWhitelistResponseBodyVulWhitelist(const GetVulWhitelistResponseBodyVulWhitelist &) = default ;
    GetVulWhitelistResponseBodyVulWhitelist(GetVulWhitelistResponseBodyVulWhitelist &&) = default ;
    GetVulWhitelistResponseBodyVulWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulWhitelistResponseBodyVulWhitelist() = default ;
    GetVulWhitelistResponseBodyVulWhitelist& operator=(const GetVulWhitelistResponseBodyVulWhitelist &) = default ;
    GetVulWhitelistResponseBodyVulWhitelist& operator=(GetVulWhitelistResponseBodyVulWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->reason_ != nullptr && this->target_ != nullptr && this->type_ != nullptr
        && this->whitelist_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetVulWhitelistResponseBodyVulWhitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline GetVulWhitelistResponseBodyVulWhitelist& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The ID of the whitelist.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The reason why the vulnerability is added to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The application scope of the rule. The value is a JSON string that contains the following fields:
    // 
    // *   **type**: the type of the assets to which the rule is applied. Valid values:
    // 
    //     *   **Uuid**: server
    //     *   **GroupId**: server group
    // 
    // *   **groupIds**: the ID of the server group
    // 
    // *   **uuids**: the UUID of the server
    // 
    // > If this parameter is empty, the rule is applied to all types of assets.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the vulnerability.
    std::shared_ptr<string> type_ = nullptr;
    // The information about the vulnerability that is added to the whitelist. The value is a JSON string that contains the following fields:
    // 
    // *   **Name**: the name of the vulnerability.
    // 
    // *   **Type**: the type of the vulnerability. Valid values:
    // 
    //     *   **cve**: Linux software vulnerability
    //     *   **sys**: Windows system vulnerability
    //     *   **cms**: Web-CMS vulnerability
    //     *   **app**: application vulnerability
    //     *   **emg**: urgent vulnerabilities
    // 
    // *   **AliasName**: the alias of the vulnerability.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
