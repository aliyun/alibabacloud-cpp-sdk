// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVELAZYPULLSTREAMINFOCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVELAZYPULLSTREAMINFOCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveLazyPullStreamInfoConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveLazyPullStreamInfoConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PullAppName, pullAppName_);
      DARABONBA_PTR_TO_JSON(PullDomainName, pullDomainName_);
      DARABONBA_PTR_TO_JSON(PullProtocol, pullProtocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TranscodeLazy, transcodeLazy_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveLazyPullStreamInfoConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PullAppName, pullAppName_);
      DARABONBA_PTR_FROM_JSON(PullDomainName, pullDomainName_);
      DARABONBA_PTR_FROM_JSON(PullProtocol, pullProtocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TranscodeLazy, transcodeLazy_);
    };
    SetLiveLazyPullStreamInfoConfigRequest() = default ;
    SetLiveLazyPullStreamInfoConfigRequest(const SetLiveLazyPullStreamInfoConfigRequest &) = default ;
    SetLiveLazyPullStreamInfoConfigRequest(SetLiveLazyPullStreamInfoConfigRequest &&) = default ;
    SetLiveLazyPullStreamInfoConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveLazyPullStreamInfoConfigRequest() = default ;
    SetLiveLazyPullStreamInfoConfigRequest& operator=(const SetLiveLazyPullStreamInfoConfigRequest &) = default ;
    SetLiveLazyPullStreamInfoConfigRequest& operator=(SetLiveLazyPullStreamInfoConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->domainName_ == nullptr && return this->ownerId_ == nullptr && return this->pullAppName_ == nullptr && return this->pullDomainName_ == nullptr && return this->pullProtocol_ == nullptr
        && return this->regionId_ == nullptr && return this->transcodeLazy_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveLazyPullStreamInfoConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pullAppName Field Functions 
    bool hasPullAppName() const { return this->pullAppName_ != nullptr;};
    void deletePullAppName() { this->pullAppName_ = nullptr;};
    inline string pullAppName() const { DARABONBA_PTR_GET_DEFAULT(pullAppName_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setPullAppName(string pullAppName) { DARABONBA_PTR_SET_VALUE(pullAppName_, pullAppName) };


    // pullDomainName Field Functions 
    bool hasPullDomainName() const { return this->pullDomainName_ != nullptr;};
    void deletePullDomainName() { this->pullDomainName_ = nullptr;};
    inline string pullDomainName() const { DARABONBA_PTR_GET_DEFAULT(pullDomainName_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setPullDomainName(string pullDomainName) { DARABONBA_PTR_SET_VALUE(pullDomainName_, pullDomainName) };


    // pullProtocol Field Functions 
    bool hasPullProtocol() const { return this->pullProtocol_ != nullptr;};
    void deletePullProtocol() { this->pullProtocol_ = nullptr;};
    inline string pullProtocol() const { DARABONBA_PTR_GET_DEFAULT(pullProtocol_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setPullProtocol(string pullProtocol) { DARABONBA_PTR_SET_VALUE(pullProtocol_, pullProtocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // transcodeLazy Field Functions 
    bool hasTranscodeLazy() const { return this->transcodeLazy_ != nullptr;};
    void deleteTranscodeLazy() { this->transcodeLazy_ = nullptr;};
    inline string transcodeLazy() const { DARABONBA_PTR_GET_DEFAULT(transcodeLazy_, "") };
    inline SetLiveLazyPullStreamInfoConfigRequest& setTranscodeLazy(string transcodeLazy) { DARABONBA_PTR_SET_VALUE(transcodeLazy_, transcodeLazy) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // >  If you want to configure triggered stream pulling for all applications, set the value to **ali_all_app**.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the application for back-to-origin stream pulling.
    // 
    // >  If you want to use the application specified in the streaming URL, leave this parameter empty.
    std::shared_ptr<string> pullAppName_ = nullptr;
    // The origin server address of the live stream. Separate multiple addresses with semicolons (;).
    // 
    // This parameter is required.
    std::shared_ptr<string> pullDomainName_ = nullptr;
    // The protocol for back-to-origin stream pulling. Valid values:
    // 
    // *   **rtmp**
    // *   **httpflv**
    // *   **hls**
    // 
    // This parameter is required.
    std::shared_ptr<string> pullProtocol_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to trigger stream pulling when the transcoded stream is played. The default value is **no**. Valid values:
    // 
    // *   **yes**
    // *   **no**
    std::shared_ptr<string> transcodeLazy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
