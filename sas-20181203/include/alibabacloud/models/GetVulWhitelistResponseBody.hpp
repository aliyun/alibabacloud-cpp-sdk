// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulWhitelist, vulWhitelist_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulWhitelist, vulWhitelist_);
    };
    GetVulWhitelistResponseBody() = default ;
    GetVulWhitelistResponseBody(const GetVulWhitelistResponseBody &) = default ;
    GetVulWhitelistResponseBody(GetVulWhitelistResponseBody &&) = default ;
    GetVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulWhitelistResponseBody() = default ;
    GetVulWhitelistResponseBody& operator=(const GetVulWhitelistResponseBody &) = default ;
    GetVulWhitelistResponseBody& operator=(GetVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulWhitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulWhitelist& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, VulWhitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      };
      VulWhitelist() = default ;
      VulWhitelist(const VulWhitelist &) = default ;
      VulWhitelist(VulWhitelist &&) = default ;
      VulWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulWhitelist() = default ;
      VulWhitelist& operator=(const VulWhitelist &) = default ;
      VulWhitelist& operator=(VulWhitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->reason_ == nullptr && this->target_ == nullptr && this->type_ == nullptr
        && this->whitelist_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulWhitelist& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline VulWhitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulWhitelist& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline VulWhitelist& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline VulWhitelist& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VulWhitelist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
      inline VulWhitelist& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


    protected:
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The ID of the whitelist.
      shared_ptr<int64_t> id_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The reason why the vulnerability is added to the whitelist.
      shared_ptr<string> reason_ {};
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
      shared_ptr<string> target_ {};
      // The type of the vulnerability.
      shared_ptr<string> type_ {};
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
      shared_ptr<string> whitelist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vulWhitelist_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulWhitelist Field Functions 
    bool hasVulWhitelist() const { return this->vulWhitelist_ != nullptr;};
    void deleteVulWhitelist() { this->vulWhitelist_ = nullptr;};
    inline const GetVulWhitelistResponseBody::VulWhitelist & getVulWhitelist() const { DARABONBA_PTR_GET_CONST(vulWhitelist_, GetVulWhitelistResponseBody::VulWhitelist) };
    inline GetVulWhitelistResponseBody::VulWhitelist getVulWhitelist() { DARABONBA_PTR_GET(vulWhitelist_, GetVulWhitelistResponseBody::VulWhitelist) };
    inline GetVulWhitelistResponseBody& setVulWhitelist(const GetVulWhitelistResponseBody::VulWhitelist & vulWhitelist) { DARABONBA_PTR_SET_VALUE(vulWhitelist_, vulWhitelist) };
    inline GetVulWhitelistResponseBody& setVulWhitelist(GetVulWhitelistResponseBody::VulWhitelist && vulWhitelist) { DARABONBA_PTR_SET_RVALUE(vulWhitelist_, vulWhitelist) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the whitelist.
    shared_ptr<GetVulWhitelistResponseBody::VulWhitelist> vulWhitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
