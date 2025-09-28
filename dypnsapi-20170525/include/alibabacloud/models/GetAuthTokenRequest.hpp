// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetAuthTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_TO_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_TO_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CmApiCode, cmApiCode_);
      DARABONBA_PTR_FROM_JSON(CtApiCode, ctApiCode_);
      DARABONBA_PTR_FROM_JSON(CuApiCode, cuApiCode_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAuthTokenRequest() = default ;
    GetAuthTokenRequest(const GetAuthTokenRequest &) = default ;
    GetAuthTokenRequest(GetAuthTokenRequest &&) = default ;
    GetAuthTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthTokenRequest() = default ;
    GetAuthTokenRequest& operator=(const GetAuthTokenRequest &) = default ;
    GetAuthTokenRequest& operator=(GetAuthTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->cmApiCode_ != nullptr && this->ctApiCode_ != nullptr && this->cuApiCode_ != nullptr && this->origin_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->sceneCode_ != nullptr && this->url_ != nullptr && this->version_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline GetAuthTokenRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cmApiCode Field Functions 
    bool hasCmApiCode() const { return this->cmApiCode_ != nullptr;};
    void deleteCmApiCode() { this->cmApiCode_ = nullptr;};
    inline int32_t cmApiCode() const { DARABONBA_PTR_GET_DEFAULT(cmApiCode_, 0) };
    inline GetAuthTokenRequest& setCmApiCode(int32_t cmApiCode) { DARABONBA_PTR_SET_VALUE(cmApiCode_, cmApiCode) };


    // ctApiCode Field Functions 
    bool hasCtApiCode() const { return this->ctApiCode_ != nullptr;};
    void deleteCtApiCode() { this->ctApiCode_ = nullptr;};
    inline int32_t ctApiCode() const { DARABONBA_PTR_GET_DEFAULT(ctApiCode_, 0) };
    inline GetAuthTokenRequest& setCtApiCode(int32_t ctApiCode) { DARABONBA_PTR_SET_VALUE(ctApiCode_, ctApiCode) };


    // cuApiCode Field Functions 
    bool hasCuApiCode() const { return this->cuApiCode_ != nullptr;};
    void deleteCuApiCode() { this->cuApiCode_ = nullptr;};
    inline int32_t cuApiCode() const { DARABONBA_PTR_GET_DEFAULT(cuApiCode_, 0) };
    inline GetAuthTokenRequest& setCuApiCode(int32_t cuApiCode) { DARABONBA_PTR_SET_VALUE(cuApiCode_, cuApiCode) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline GetAuthTokenRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetAuthTokenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetAuthTokenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetAuthTokenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline GetAuthTokenRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetAuthTokenRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAuthTokenRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int32_t> bizType_ = nullptr;
    std::shared_ptr<int32_t> cmApiCode_ = nullptr;
    std::shared_ptr<int32_t> ctApiCode_ = nullptr;
    std::shared_ptr<int32_t> cuApiCode_ = nullptr;
    // The requested domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The URL of the requested web page.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
