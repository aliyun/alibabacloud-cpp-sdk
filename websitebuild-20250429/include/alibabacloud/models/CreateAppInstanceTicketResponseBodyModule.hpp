// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCETICKETRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCETICKETRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppInstanceTicketResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceTicketResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenExpiresAt, accessTokenExpiresAt_);
      DARABONBA_PTR_TO_JSON(AccessTokenIssuedAt, accessTokenIssuedAt_);
      DARABONBA_PTR_TO_JSON(AccessTokenValue, accessTokenValue_);
      DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AuthorizationGrantType, authorizationGrantType_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(ParentPk, parentPk_);
      DARABONBA_PTR_TO_JSON(RefreshTokenExpiresAt, refreshTokenExpiresAt_);
      DARABONBA_PTR_TO_JSON(RefreshTokenIssuedAt, refreshTokenIssuedAt_);
      DARABONBA_PTR_TO_JSON(RefreshTokenValue, refreshTokenValue_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceTicketResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenExpiresAt, accessTokenExpiresAt_);
      DARABONBA_PTR_FROM_JSON(AccessTokenIssuedAt, accessTokenIssuedAt_);
      DARABONBA_PTR_FROM_JSON(AccessTokenValue, accessTokenValue_);
      DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AuthorizationGrantType, authorizationGrantType_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(ParentPk, parentPk_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenExpiresAt, refreshTokenExpiresAt_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenIssuedAt, refreshTokenIssuedAt_);
      DARABONBA_PTR_FROM_JSON(RefreshTokenValue, refreshTokenValue_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CreateAppInstanceTicketResponseBodyModule() = default ;
    CreateAppInstanceTicketResponseBodyModule(const CreateAppInstanceTicketResponseBodyModule &) = default ;
    CreateAppInstanceTicketResponseBodyModule(CreateAppInstanceTicketResponseBodyModule &&) = default ;
    CreateAppInstanceTicketResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceTicketResponseBodyModule() = default ;
    CreateAppInstanceTicketResponseBodyModule& operator=(const CreateAppInstanceTicketResponseBodyModule &) = default ;
    CreateAppInstanceTicketResponseBodyModule& operator=(CreateAppInstanceTicketResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTokenExpiresAt_ == nullptr
        && return this->accessTokenIssuedAt_ == nullptr && return this->accessTokenValue_ == nullptr && return this->aliyunPk_ == nullptr && return this->attributes_ == nullptr && return this->authorizationGrantType_ == nullptr
        && return this->bid_ == nullptr && return this->parentPk_ == nullptr && return this->refreshTokenExpiresAt_ == nullptr && return this->refreshTokenIssuedAt_ == nullptr && return this->refreshTokenValue_ == nullptr
        && return this->uuid_ == nullptr; };
    // accessTokenExpiresAt Field Functions 
    bool hasAccessTokenExpiresAt() const { return this->accessTokenExpiresAt_ != nullptr;};
    void deleteAccessTokenExpiresAt() { this->accessTokenExpiresAt_ = nullptr;};
    inline string accessTokenExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(accessTokenExpiresAt_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAccessTokenExpiresAt(string accessTokenExpiresAt) { DARABONBA_PTR_SET_VALUE(accessTokenExpiresAt_, accessTokenExpiresAt) };


    // accessTokenIssuedAt Field Functions 
    bool hasAccessTokenIssuedAt() const { return this->accessTokenIssuedAt_ != nullptr;};
    void deleteAccessTokenIssuedAt() { this->accessTokenIssuedAt_ = nullptr;};
    inline string accessTokenIssuedAt() const { DARABONBA_PTR_GET_DEFAULT(accessTokenIssuedAt_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAccessTokenIssuedAt(string accessTokenIssuedAt) { DARABONBA_PTR_SET_VALUE(accessTokenIssuedAt_, accessTokenIssuedAt) };


    // accessTokenValue Field Functions 
    bool hasAccessTokenValue() const { return this->accessTokenValue_ != nullptr;};
    void deleteAccessTokenValue() { this->accessTokenValue_ = nullptr;};
    inline string accessTokenValue() const { DARABONBA_PTR_GET_DEFAULT(accessTokenValue_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAccessTokenValue(string accessTokenValue) { DARABONBA_PTR_SET_VALUE(accessTokenValue_, accessTokenValue) };


    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // authorizationGrantType Field Functions 
    bool hasAuthorizationGrantType() const { return this->authorizationGrantType_ != nullptr;};
    void deleteAuthorizationGrantType() { this->authorizationGrantType_ = nullptr;};
    inline string authorizationGrantType() const { DARABONBA_PTR_GET_DEFAULT(authorizationGrantType_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setAuthorizationGrantType(string authorizationGrantType) { DARABONBA_PTR_SET_VALUE(authorizationGrantType_, authorizationGrantType) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // parentPk Field Functions 
    bool hasParentPk() const { return this->parentPk_ != nullptr;};
    void deleteParentPk() { this->parentPk_ = nullptr;};
    inline string parentPk() const { DARABONBA_PTR_GET_DEFAULT(parentPk_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setParentPk(string parentPk) { DARABONBA_PTR_SET_VALUE(parentPk_, parentPk) };


    // refreshTokenExpiresAt Field Functions 
    bool hasRefreshTokenExpiresAt() const { return this->refreshTokenExpiresAt_ != nullptr;};
    void deleteRefreshTokenExpiresAt() { this->refreshTokenExpiresAt_ = nullptr;};
    inline string refreshTokenExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenExpiresAt_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setRefreshTokenExpiresAt(string refreshTokenExpiresAt) { DARABONBA_PTR_SET_VALUE(refreshTokenExpiresAt_, refreshTokenExpiresAt) };


    // refreshTokenIssuedAt Field Functions 
    bool hasRefreshTokenIssuedAt() const { return this->refreshTokenIssuedAt_ != nullptr;};
    void deleteRefreshTokenIssuedAt() { this->refreshTokenIssuedAt_ = nullptr;};
    inline string refreshTokenIssuedAt() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenIssuedAt_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setRefreshTokenIssuedAt(string refreshTokenIssuedAt) { DARABONBA_PTR_SET_VALUE(refreshTokenIssuedAt_, refreshTokenIssuedAt) };


    // refreshTokenValue Field Functions 
    bool hasRefreshTokenValue() const { return this->refreshTokenValue_ != nullptr;};
    void deleteRefreshTokenValue() { this->refreshTokenValue_ = nullptr;};
    inline string refreshTokenValue() const { DARABONBA_PTR_GET_DEFAULT(refreshTokenValue_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setRefreshTokenValue(string refreshTokenValue) { DARABONBA_PTR_SET_VALUE(refreshTokenValue_, refreshTokenValue) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateAppInstanceTicketResponseBodyModule& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> accessTokenExpiresAt_ = nullptr;
    std::shared_ptr<string> accessTokenIssuedAt_ = nullptr;
    std::shared_ptr<string> accessTokenValue_ = nullptr;
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<string> authorizationGrantType_ = nullptr;
    // bid
    std::shared_ptr<string> bid_ = nullptr;
    std::shared_ptr<string> parentPk_ = nullptr;
    std::shared_ptr<string> refreshTokenExpiresAt_ = nullptr;
    std::shared_ptr<string> refreshTokenIssuedAt_ = nullptr;
    std::shared_ptr<string> refreshTokenValue_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
