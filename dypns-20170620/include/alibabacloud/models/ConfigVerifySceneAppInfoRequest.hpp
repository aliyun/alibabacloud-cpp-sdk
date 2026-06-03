// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGVERIFYSCENEAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGVERIFYSCENEAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class ConfigVerifySceneAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigVerifySceneAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CM, CM_);
      DARABONBA_PTR_TO_JSON(CT, CT_);
      DARABONBA_PTR_TO_JSON(CU, CU_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigVerifySceneAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CM, CM_);
      DARABONBA_PTR_FROM_JSON(CT, CT_);
      DARABONBA_PTR_FROM_JSON(CU, CU_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    ConfigVerifySceneAppInfoRequest() = default ;
    ConfigVerifySceneAppInfoRequest(const ConfigVerifySceneAppInfoRequest &) = default ;
    ConfigVerifySceneAppInfoRequest(ConfigVerifySceneAppInfoRequest &&) = default ;
    ConfigVerifySceneAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigVerifySceneAppInfoRequest() = default ;
    ConfigVerifySceneAppInfoRequest& operator=(const ConfigVerifySceneAppInfoRequest &) = default ;
    ConfigVerifySceneAppInfoRequest& operator=(ConfigVerifySceneAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CM_ == nullptr
        && this->CT_ == nullptr && this->CU_ == nullptr && this->email_ == nullptr && this->ipWhitelist_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sceneCode_ == nullptr; };
    // CM Field Functions 
    bool hasCM() const { return this->CM_ != nullptr;};
    void deleteCM() { this->CM_ = nullptr;};
    inline bool getCM() const { DARABONBA_PTR_GET_DEFAULT(CM_, false) };
    inline ConfigVerifySceneAppInfoRequest& setCM(bool CM) { DARABONBA_PTR_SET_VALUE(CM_, CM) };


    // CT Field Functions 
    bool hasCT() const { return this->CT_ != nullptr;};
    void deleteCT() { this->CT_ = nullptr;};
    inline bool getCT() const { DARABONBA_PTR_GET_DEFAULT(CT_, false) };
    inline ConfigVerifySceneAppInfoRequest& setCT(bool CT) { DARABONBA_PTR_SET_VALUE(CT_, CT) };


    // CU Field Functions 
    bool hasCU() const { return this->CU_ != nullptr;};
    void deleteCU() { this->CU_ = nullptr;};
    inline bool getCU() const { DARABONBA_PTR_GET_DEFAULT(CU_, false) };
    inline ConfigVerifySceneAppInfoRequest& setCU(bool CU) { DARABONBA_PTR_SET_VALUE(CU_, CU) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ConfigVerifySceneAppInfoRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline ConfigVerifySceneAppInfoRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ConfigVerifySceneAppInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ConfigVerifySceneAppInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ConfigVerifySceneAppInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline ConfigVerifySceneAppInfoRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    shared_ptr<bool> CM_ {};
    shared_ptr<bool> CT_ {};
    shared_ptr<bool> CU_ {};
    // This parameter is required.
    shared_ptr<string> email_ {};
    shared_ptr<string> ipWhitelist_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
