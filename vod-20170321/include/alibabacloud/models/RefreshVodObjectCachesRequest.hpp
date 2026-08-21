// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHVODOBJECTCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHVODOBJECTCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshVodObjectCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    RefreshVodObjectCachesRequest() = default ;
    RefreshVodObjectCachesRequest(const RefreshVodObjectCachesRequest &) = default ;
    RefreshVodObjectCachesRequest(RefreshVodObjectCachesRequest &&) = default ;
    RefreshVodObjectCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshVodObjectCachesRequest() = default ;
    RefreshVodObjectCachesRequest& operator=(const RefreshVodObjectCachesRequest &) = default ;
    RefreshVodObjectCachesRequest& operator=(RefreshVodObjectCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->objectPath_ == nullptr && this->objectType_ == nullptr && this->ownerId_ == nullptr && this->securityToken_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshVodObjectCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline RefreshVodObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline RefreshVodObjectCachesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RefreshVodObjectCachesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RefreshVodObjectCachesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // Specifies whether to purge all resources in the corresponding directory when the back-to-origin content is inconsistent with the origin server resources. Default value: false.
    // 
    // - **true**: purges all resources in the corresponding directory. When "Purge All Resources" is selected, if the requested content matches a resource in the directory, the CDN node fetches the new resource from the origin server, returns it to the user, and re-caches the resource.
    // - **false**: purges only changed resources in the corresponding directory. When "Purge Changed Resources" is selected, if the requested content matches a resource in the directory, the CDN node retrieves the Last-Modified information of the resource from the origin server. If it matches the currently cached resource, the cached resource is returned directly. If it does not match, the CDN node fetches the new resource from the origin server, returns it to the user, and re-caches the resource.
    shared_ptr<bool> force_ {};
    // The URL of the file to prefetch. Separate multiple URLs with line breaks (
    //  or 
    // ).
    // 
    // This parameter is required.
    shared_ptr<string> objectPath_ {};
    // The type of purge. Valid values:
    // 
    // - **File** (default): file purge.
    // - **Directory**: directory purge.
    // - **Regex**: regular expression-based purge.
    // - **IgnoreParams**: parameter-stripped purge. Parameter stripping refers to removing the question mark (?) and all characters after it from the request URL. Parameter-stripped purge means that you submit a parameter-stripped URL through the API, and the submitted URL is matched against cached resource URLs after parameter stripping. If a cached resource URL matches the submitted URL after parameter stripping, the CDN node purges the cached resource.
    shared_ptr<string> objectType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
