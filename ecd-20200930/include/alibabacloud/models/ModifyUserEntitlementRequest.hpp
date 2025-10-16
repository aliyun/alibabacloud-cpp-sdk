// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERENTITLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERENTITLEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyUserEntitlementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserEntitlementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizeDesktopId, authorizeDesktopId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RevokeDesktopId, revokeDesktopId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserEntitlementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizeDesktopId, authorizeDesktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RevokeDesktopId, revokeDesktopId_);
    };
    ModifyUserEntitlementRequest() = default ;
    ModifyUserEntitlementRequest(const ModifyUserEntitlementRequest &) = default ;
    ModifyUserEntitlementRequest(ModifyUserEntitlementRequest &&) = default ;
    ModifyUserEntitlementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserEntitlementRequest() = default ;
    ModifyUserEntitlementRequest& operator=(const ModifyUserEntitlementRequest &) = default ;
    ModifyUserEntitlementRequest& operator=(ModifyUserEntitlementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizeDesktopId_ == nullptr
        && return this->endUserId_ == nullptr && return this->regionId_ == nullptr && return this->revokeDesktopId_ == nullptr; };
    // authorizeDesktopId Field Functions 
    bool hasAuthorizeDesktopId() const { return this->authorizeDesktopId_ != nullptr;};
    void deleteAuthorizeDesktopId() { this->authorizeDesktopId_ = nullptr;};
    inline const vector<string> & authorizeDesktopId() const { DARABONBA_PTR_GET_CONST(authorizeDesktopId_, vector<string>) };
    inline vector<string> authorizeDesktopId() { DARABONBA_PTR_GET(authorizeDesktopId_, vector<string>) };
    inline ModifyUserEntitlementRequest& setAuthorizeDesktopId(const vector<string> & authorizeDesktopId) { DARABONBA_PTR_SET_VALUE(authorizeDesktopId_, authorizeDesktopId) };
    inline ModifyUserEntitlementRequest& setAuthorizeDesktopId(vector<string> && authorizeDesktopId) { DARABONBA_PTR_SET_RVALUE(authorizeDesktopId_, authorizeDesktopId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & endUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> endUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline ModifyUserEntitlementRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline ModifyUserEntitlementRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserEntitlementRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // revokeDesktopId Field Functions 
    bool hasRevokeDesktopId() const { return this->revokeDesktopId_ != nullptr;};
    void deleteRevokeDesktopId() { this->revokeDesktopId_ = nullptr;};
    inline const vector<string> & revokeDesktopId() const { DARABONBA_PTR_GET_CONST(revokeDesktopId_, vector<string>) };
    inline vector<string> revokeDesktopId() { DARABONBA_PTR_GET(revokeDesktopId_, vector<string>) };
    inline ModifyUserEntitlementRequest& setRevokeDesktopId(const vector<string> & revokeDesktopId) { DARABONBA_PTR_SET_VALUE(revokeDesktopId_, revokeDesktopId) };
    inline ModifyUserEntitlementRequest& setRevokeDesktopId(vector<string> && revokeDesktopId) { DARABONBA_PTR_SET_RVALUE(revokeDesktopId_, revokeDesktopId) };


  protected:
    // The IDs of the cloud computers to which you want to add end users.
    std::shared_ptr<vector<string>> authorizeDesktopId_ = nullptr;
    // The ID of the users.
    std::shared_ptr<vector<string>> endUserId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the cloud computers whose end users you want to remove.
    std::shared_ptr<vector<string>> revokeDesktopId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
