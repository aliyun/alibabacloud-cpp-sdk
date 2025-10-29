// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVESNAPSHOTNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVESNAPSHOTNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveSnapshotNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveSnapshotNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_TO_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveSnapshotNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyAuthKey, notifyAuthKey_);
      DARABONBA_PTR_FROM_JSON(NotifyReqAuth, notifyReqAuth_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLiveSnapshotNotifyConfigRequest() = default ;
    UpdateLiveSnapshotNotifyConfigRequest(const UpdateLiveSnapshotNotifyConfigRequest &) = default ;
    UpdateLiveSnapshotNotifyConfigRequest(UpdateLiveSnapshotNotifyConfigRequest &&) = default ;
    UpdateLiveSnapshotNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveSnapshotNotifyConfigRequest() = default ;
    UpdateLiveSnapshotNotifyConfigRequest& operator=(const UpdateLiveSnapshotNotifyConfigRequest &) = default ;
    UpdateLiveSnapshotNotifyConfigRequest& operator=(UpdateLiveSnapshotNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->notifyAuthKey_ == nullptr && return this->notifyReqAuth_ == nullptr && return this->notifyUrl_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateLiveSnapshotNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyAuthKey Field Functions 
    bool hasNotifyAuthKey() const { return this->notifyAuthKey_ != nullptr;};
    void deleteNotifyAuthKey() { this->notifyAuthKey_ = nullptr;};
    inline string notifyAuthKey() const { DARABONBA_PTR_GET_DEFAULT(notifyAuthKey_, "") };
    inline UpdateLiveSnapshotNotifyConfigRequest& setNotifyAuthKey(string notifyAuthKey) { DARABONBA_PTR_SET_VALUE(notifyAuthKey_, notifyAuthKey) };


    // notifyReqAuth Field Functions 
    bool hasNotifyReqAuth() const { return this->notifyReqAuth_ != nullptr;};
    void deleteNotifyReqAuth() { this->notifyReqAuth_ = nullptr;};
    inline string notifyReqAuth() const { DARABONBA_PTR_GET_DEFAULT(notifyReqAuth_, "") };
    inline UpdateLiveSnapshotNotifyConfigRequest& setNotifyReqAuth(string notifyReqAuth) { DARABONBA_PTR_SET_VALUE(notifyReqAuth_, notifyReqAuth) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline UpdateLiveSnapshotNotifyConfigRequest& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveSnapshotNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveSnapshotNotifyConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The callback authentication key. The key can be 16 to 32 characters in length and can contain only letters and digits.
    // 
    // >  This parameter is required if you set the NotifyReqAuth parameter to **yes**.
    std::shared_ptr<string> notifyAuthKey_ = nullptr;
    // Specifies whether to enable callback authentication. Valid values:
    // 
    // *   **yes**: enables callback authentication
    // *   **no**: disables callback authentication
    // 
    // >  Default value: **no**. If you set this parameter to **yes**, the NotifyAuthKey parameter is required.
    std::shared_ptr<string> notifyReqAuth_ = nullptr;
    // The callback URL. Specify a valid URL that is up to 500 characters in length.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
