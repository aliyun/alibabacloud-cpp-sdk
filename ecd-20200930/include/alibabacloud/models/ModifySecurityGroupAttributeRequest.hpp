// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifySecurityGroupAttributeRequestAuthorizeEgress.hpp>
#include <alibabacloud/models/ModifySecurityGroupAttributeRequestAuthorizeIngress.hpp>
#include <alibabacloud/models/ModifySecurityGroupAttributeRequestRevokeEgress.hpp>
#include <alibabacloud/models/ModifySecurityGroupAttributeRequestRevokeIngress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifySecurityGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizeEgress, authorizeEgress_);
      DARABONBA_PTR_TO_JSON(AuthorizeIngress, authorizeIngress_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RevokeEgress, revokeEgress_);
      DARABONBA_PTR_TO_JSON(RevokeIngress, revokeIngress_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizeEgress, authorizeEgress_);
      DARABONBA_PTR_FROM_JSON(AuthorizeIngress, authorizeIngress_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RevokeEgress, revokeEgress_);
      DARABONBA_PTR_FROM_JSON(RevokeIngress, revokeIngress_);
    };
    ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest(ModifySecurityGroupAttributeRequest &&) = default ;
    ModifySecurityGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest& operator=(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest& operator=(ModifySecurityGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizeEgress_ == nullptr
        && return this->authorizeIngress_ == nullptr && return this->officeSiteId_ == nullptr && return this->regionId_ == nullptr && return this->revokeEgress_ == nullptr && return this->revokeIngress_ == nullptr; };
    // authorizeEgress Field Functions 
    bool hasAuthorizeEgress() const { return this->authorizeEgress_ != nullptr;};
    void deleteAuthorizeEgress() { this->authorizeEgress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequestAuthorizeEgress> & authorizeEgress() const { DARABONBA_PTR_GET_CONST(authorizeEgress_, vector<ModifySecurityGroupAttributeRequestAuthorizeEgress>) };
    inline vector<ModifySecurityGroupAttributeRequestAuthorizeEgress> authorizeEgress() { DARABONBA_PTR_GET(authorizeEgress_, vector<ModifySecurityGroupAttributeRequestAuthorizeEgress>) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeEgress(const vector<ModifySecurityGroupAttributeRequestAuthorizeEgress> & authorizeEgress) { DARABONBA_PTR_SET_VALUE(authorizeEgress_, authorizeEgress) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeEgress(vector<ModifySecurityGroupAttributeRequestAuthorizeEgress> && authorizeEgress) { DARABONBA_PTR_SET_RVALUE(authorizeEgress_, authorizeEgress) };


    // authorizeIngress Field Functions 
    bool hasAuthorizeIngress() const { return this->authorizeIngress_ != nullptr;};
    void deleteAuthorizeIngress() { this->authorizeIngress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequestAuthorizeIngress> & authorizeIngress() const { DARABONBA_PTR_GET_CONST(authorizeIngress_, vector<ModifySecurityGroupAttributeRequestAuthorizeIngress>) };
    inline vector<ModifySecurityGroupAttributeRequestAuthorizeIngress> authorizeIngress() { DARABONBA_PTR_GET(authorizeIngress_, vector<ModifySecurityGroupAttributeRequestAuthorizeIngress>) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeIngress(const vector<ModifySecurityGroupAttributeRequestAuthorizeIngress> & authorizeIngress) { DARABONBA_PTR_SET_VALUE(authorizeIngress_, authorizeIngress) };
    inline ModifySecurityGroupAttributeRequest& setAuthorizeIngress(vector<ModifySecurityGroupAttributeRequestAuthorizeIngress> && authorizeIngress) { DARABONBA_PTR_SET_RVALUE(authorizeIngress_, authorizeIngress) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifySecurityGroupAttributeRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySecurityGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revokeEgress Field Functions 
    bool hasRevokeEgress() const { return this->revokeEgress_ != nullptr;};
    void deleteRevokeEgress() { this->revokeEgress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequestRevokeEgress> & revokeEgress() const { DARABONBA_PTR_GET_CONST(revokeEgress_, vector<ModifySecurityGroupAttributeRequestRevokeEgress>) };
    inline vector<ModifySecurityGroupAttributeRequestRevokeEgress> revokeEgress() { DARABONBA_PTR_GET(revokeEgress_, vector<ModifySecurityGroupAttributeRequestRevokeEgress>) };
    inline ModifySecurityGroupAttributeRequest& setRevokeEgress(const vector<ModifySecurityGroupAttributeRequestRevokeEgress> & revokeEgress) { DARABONBA_PTR_SET_VALUE(revokeEgress_, revokeEgress) };
    inline ModifySecurityGroupAttributeRequest& setRevokeEgress(vector<ModifySecurityGroupAttributeRequestRevokeEgress> && revokeEgress) { DARABONBA_PTR_SET_RVALUE(revokeEgress_, revokeEgress) };


    // revokeIngress Field Functions 
    bool hasRevokeIngress() const { return this->revokeIngress_ != nullptr;};
    void deleteRevokeIngress() { this->revokeIngress_ = nullptr;};
    inline const vector<ModifySecurityGroupAttributeRequestRevokeIngress> & revokeIngress() const { DARABONBA_PTR_GET_CONST(revokeIngress_, vector<ModifySecurityGroupAttributeRequestRevokeIngress>) };
    inline vector<ModifySecurityGroupAttributeRequestRevokeIngress> revokeIngress() { DARABONBA_PTR_GET(revokeIngress_, vector<ModifySecurityGroupAttributeRequestRevokeIngress>) };
    inline ModifySecurityGroupAttributeRequest& setRevokeIngress(const vector<ModifySecurityGroupAttributeRequestRevokeIngress> & revokeIngress) { DARABONBA_PTR_SET_VALUE(revokeIngress_, revokeIngress) };
    inline ModifySecurityGroupAttributeRequest& setRevokeIngress(vector<ModifySecurityGroupAttributeRequestRevokeIngress> && revokeIngress) { DARABONBA_PTR_SET_RVALUE(revokeIngress_, revokeIngress) };


  protected:
    std::shared_ptr<vector<ModifySecurityGroupAttributeRequestAuthorizeEgress>> authorizeEgress_ = nullptr;
    std::shared_ptr<vector<ModifySecurityGroupAttributeRequestAuthorizeIngress>> authorizeIngress_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<ModifySecurityGroupAttributeRequestRevokeEgress>> revokeEgress_ = nullptr;
    std::shared_ptr<vector<ModifySecurityGroupAttributeRequestRevokeIngress>> revokeIngress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
