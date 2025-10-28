// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERASSOCIATIONALLOWEDPREFIXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTROUTERASSOCIATIONALLOWEDPREFIXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class ModifyExpressConnectRouterAssociationAllowedPrefixRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectRouterAssociationAllowedPrefixRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_TO_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_TO_JSON(AssociationId, associationId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectRouterAssociationAllowedPrefixRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedPrefixes, allowedPrefixes_);
      DARABONBA_PTR_FROM_JSON(AllowedPrefixesMode, allowedPrefixesMode_);
      DARABONBA_PTR_FROM_JSON(AssociationId, associationId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest() = default ;
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &) = default ;
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest(ModifyExpressConnectRouterAssociationAllowedPrefixRequest &&) = default ;
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectRouterAssociationAllowedPrefixRequest() = default ;
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest& operator=(const ModifyExpressConnectRouterAssociationAllowedPrefixRequest &) = default ;
    ModifyExpressConnectRouterAssociationAllowedPrefixRequest& operator=(ModifyExpressConnectRouterAssociationAllowedPrefixRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedPrefixes_ == nullptr
        && return this->allowedPrefixesMode_ == nullptr && return this->associationId_ == nullptr && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->ecrId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->version_ == nullptr; };
    // allowedPrefixes Field Functions 
    bool hasAllowedPrefixes() const { return this->allowedPrefixes_ != nullptr;};
    void deleteAllowedPrefixes() { this->allowedPrefixes_ = nullptr;};
    inline const vector<string> & allowedPrefixes() const { DARABONBA_PTR_GET_CONST(allowedPrefixes_, vector<string>) };
    inline vector<string> allowedPrefixes() { DARABONBA_PTR_GET(allowedPrefixes_, vector<string>) };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setAllowedPrefixes(const vector<string> & allowedPrefixes) { DARABONBA_PTR_SET_VALUE(allowedPrefixes_, allowedPrefixes) };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setAllowedPrefixes(vector<string> && allowedPrefixes) { DARABONBA_PTR_SET_RVALUE(allowedPrefixes_, allowedPrefixes) };


    // allowedPrefixesMode Field Functions 
    bool hasAllowedPrefixesMode() const { return this->allowedPrefixesMode_ != nullptr;};
    void deleteAllowedPrefixesMode() { this->allowedPrefixesMode_ = nullptr;};
    inline string allowedPrefixesMode() const { DARABONBA_PTR_GET_DEFAULT(allowedPrefixesMode_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setAllowedPrefixesMode(string allowedPrefixesMode) { DARABONBA_PTR_SET_VALUE(allowedPrefixesMode_, allowedPrefixesMode) };


    // associationId Field Functions 
    bool hasAssociationId() const { return this->associationId_ != nullptr;};
    void deleteAssociationId() { this->associationId_ = nullptr;};
    inline string associationId() const { DARABONBA_PTR_GET_DEFAULT(associationId_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setAssociationId(string associationId) { DARABONBA_PTR_SET_VALUE(associationId_, associationId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyExpressConnectRouterAssociationAllowedPrefixRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The allowed route prefixes.
    std::shared_ptr<vector<string>> allowedPrefixes_ = nullptr;
    // The route prefix mode.
    // 
    // *   MatchMode: After you distribute new route CIDR blocks to data centers, original specific routes that are distributed are withdrawn.
    // *   IncrementalMode: After you distribute new route CIDR blocks to data centers, the original specific routes that fall in the CIDR blocks that you configure are withdrawn, and the original specific routes that do not fall in the CIDR blocks are still distributed.
    std::shared_ptr<string> allowedPrefixesMode_ = nullptr;
    // The ID of the association between the ECR and the VPC or TR.
    // 
    // This parameter is required.
    std::shared_ptr<string> associationId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ECR ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecrId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
