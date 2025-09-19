// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODYVULWHITELISTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODYVULWHITELISTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulWhitelistResponseBodyVulWhitelists : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulWhitelistResponseBodyVulWhitelists& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulWhitelistResponseBodyVulWhitelists& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    DescribeVulWhitelistResponseBodyVulWhitelists() = default ;
    DescribeVulWhitelistResponseBodyVulWhitelists(const DescribeVulWhitelistResponseBodyVulWhitelists &) = default ;
    DescribeVulWhitelistResponseBodyVulWhitelists(DescribeVulWhitelistResponseBodyVulWhitelists &&) = default ;
    DescribeVulWhitelistResponseBodyVulWhitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulWhitelistResponseBodyVulWhitelists() = default ;
    DescribeVulWhitelistResponseBodyVulWhitelists& operator=(const DescribeVulWhitelistResponseBodyVulWhitelists &) = default ;
    DescribeVulWhitelistResponseBodyVulWhitelists& operator=(DescribeVulWhitelistResponseBodyVulWhitelists &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->reason_ != nullptr && this->targetInfo_ != nullptr && this->type_ != nullptr
        && this->whitelist_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // targetInfo Field Functions 
    bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
    void deleteTargetInfo() { this->targetInfo_ = nullptr;};
    inline string targetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline DescribeVulWhitelistResponseBodyVulWhitelists& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The alias of the vulnerability.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> id_ = nullptr;
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
    // > If this field is empty, the rule is applied to all assets.
    std::shared_ptr<string> targetInfo_ = nullptr;
    // The type of the vulnerability.
    std::shared_ptr<string> type_ = nullptr;
    // The information about the vulnerability. The value of this parameter is in the JSON format. Valid values:
    // 
    // *   **name**: the name of the vulnerability
    // *   **type**: the type of the vulnerability.
    // *   **aliasName**: the alias of the vulnerability
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
