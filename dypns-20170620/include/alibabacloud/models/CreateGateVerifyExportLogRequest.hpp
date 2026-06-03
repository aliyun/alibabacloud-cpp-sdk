// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEVERIFYEXPORTLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEVERIFYEXPORTLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateGateVerifyExportLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGateVerifyExportLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryMonth, queryMonth_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGateVerifyExportLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryMonth, queryMonth_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
    };
    CreateGateVerifyExportLogRequest() = default ;
    CreateGateVerifyExportLogRequest(const CreateGateVerifyExportLogRequest &) = default ;
    CreateGateVerifyExportLogRequest(CreateGateVerifyExportLogRequest &&) = default ;
    CreateGateVerifyExportLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGateVerifyExportLogRequest() = default ;
    CreateGateVerifyExportLogRequest& operator=(const CreateGateVerifyExportLogRequest &) = default ;
    CreateGateVerifyExportLogRequest& operator=(CreateGateVerifyExportLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->osType_ == nullptr && this->ownerId_ == nullptr && this->queryMonth_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sceneCode_ == nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline int32_t getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, 0) };
    inline CreateGateVerifyExportLogRequest& setAuthenticationType(int32_t authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline CreateGateVerifyExportLogRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateGateVerifyExportLogRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryMonth Field Functions 
    bool hasQueryMonth() const { return this->queryMonth_ != nullptr;};
    void deleteQueryMonth() { this->queryMonth_ = nullptr;};
    inline string getQueryMonth() const { DARABONBA_PTR_GET_DEFAULT(queryMonth_, "") };
    inline CreateGateVerifyExportLogRequest& setQueryMonth(string queryMonth) { DARABONBA_PTR_SET_VALUE(queryMonth_, queryMonth) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateGateVerifyExportLogRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateGateVerifyExportLogRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline CreateGateVerifyExportLogRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> authenticationType_ {};
    shared_ptr<string> osType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> queryMonth_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> sceneCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
