// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVELAZYPULLSTREAMINFOCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVELAZYPULLSTREAMINFOCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveLazyPullStreamInfoConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveLazyPullStreamInfoConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveLazyPullStreamInfoConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteLiveLazyPullStreamInfoConfigRequest() = default ;
    DeleteLiveLazyPullStreamInfoConfigRequest(const DeleteLiveLazyPullStreamInfoConfigRequest &) = default ;
    DeleteLiveLazyPullStreamInfoConfigRequest(DeleteLiveLazyPullStreamInfoConfigRequest &&) = default ;
    DeleteLiveLazyPullStreamInfoConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveLazyPullStreamInfoConfigRequest() = default ;
    DeleteLiveLazyPullStreamInfoConfigRequest& operator=(const DeleteLiveLazyPullStreamInfoConfigRequest &) = default ;
    DeleteLiveLazyPullStreamInfoConfigRequest& operator=(DeleteLiveLazyPullStreamInfoConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteLiveLazyPullStreamInfoConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteLiveLazyPullStreamInfoConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveLazyPullStreamInfoConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveLazyPullStreamInfoConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // >  If you want to delete configurations of triggered stream pulling for all applications, set the value to **ali_all_app**.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
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
