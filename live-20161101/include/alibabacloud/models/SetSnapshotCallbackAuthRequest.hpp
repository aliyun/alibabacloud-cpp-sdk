// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSNAPSHOTCALLBACKAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSNAPSHOTCALLBACKAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetSnapshotCallbackAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSnapshotCallbackAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackAuthKey, callbackAuthKey_);
      DARABONBA_PTR_TO_JSON(CallbackReqAuth, callbackReqAuth_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetSnapshotCallbackAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackAuthKey, callbackAuthKey_);
      DARABONBA_PTR_FROM_JSON(CallbackReqAuth, callbackReqAuth_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetSnapshotCallbackAuthRequest() = default ;
    SetSnapshotCallbackAuthRequest(const SetSnapshotCallbackAuthRequest &) = default ;
    SetSnapshotCallbackAuthRequest(SetSnapshotCallbackAuthRequest &&) = default ;
    SetSnapshotCallbackAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSnapshotCallbackAuthRequest() = default ;
    SetSnapshotCallbackAuthRequest& operator=(const SetSnapshotCallbackAuthRequest &) = default ;
    SetSnapshotCallbackAuthRequest& operator=(SetSnapshotCallbackAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackAuthKey_ != nullptr
        && this->callbackReqAuth_ != nullptr && this->domainName_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr; };
    // callbackAuthKey Field Functions 
    bool hasCallbackAuthKey() const { return this->callbackAuthKey_ != nullptr;};
    void deleteCallbackAuthKey() { this->callbackAuthKey_ = nullptr;};
    inline string callbackAuthKey() const { DARABONBA_PTR_GET_DEFAULT(callbackAuthKey_, "") };
    inline SetSnapshotCallbackAuthRequest& setCallbackAuthKey(string callbackAuthKey) { DARABONBA_PTR_SET_VALUE(callbackAuthKey_, callbackAuthKey) };


    // callbackReqAuth Field Functions 
    bool hasCallbackReqAuth() const { return this->callbackReqAuth_ != nullptr;};
    void deleteCallbackReqAuth() { this->callbackReqAuth_ = nullptr;};
    inline string callbackReqAuth() const { DARABONBA_PTR_GET_DEFAULT(callbackReqAuth_, "") };
    inline SetSnapshotCallbackAuthRequest& setCallbackReqAuth(string callbackReqAuth) { DARABONBA_PTR_SET_VALUE(callbackReqAuth_, callbackReqAuth) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetSnapshotCallbackAuthRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetSnapshotCallbackAuthRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetSnapshotCallbackAuthRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The custom key that is used for callback authentication.
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackAuthKey_ = nullptr;
    // Specifies whether to enable callback authentication. Valid values:
    // 
    // *   **yes**: enables callback authentication.
    // *   **no**: disables callback authentication.
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackReqAuth_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
