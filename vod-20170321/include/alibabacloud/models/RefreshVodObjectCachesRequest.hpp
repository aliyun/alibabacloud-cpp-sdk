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
        && return this->objectPath_ == nullptr && return this->objectType_ == nullptr && return this->ownerId_ == nullptr && return this->securityToken_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RefreshVodObjectCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline RefreshVodObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline RefreshVodObjectCachesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RefreshVodObjectCachesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RefreshVodObjectCachesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // Specifies whether to purge resources in a directory if the resources requested are different from the resources on the origin server.
    // 
    // *   **true**: refreshes all resources in the directory. If you set this parameter to true, when the requested content matches the resource in the directory, the POP retrieves the resource from the origin server, returns the resource to the client, and caches the resource.
    // *   **false** (default): refreshes the changed resources in the directory. If you set this parameter to false, when the requested content matches the resource in the directory, the POP obtains the Last-Modified parameter of the resource from the origin server. If the value of the obtained Last-Modified parameter is the same as that of the cached resource, the cached resource is returned. Otherwise, the POP retrieves the resource from the origin server, returns the resource to the client, and caches the resource.
    std::shared_ptr<bool> force_ = nullptr;
    // The URL of the file to be prefetched. Separate multiple URLs with line breaks (\\n or \\r\\n).
    // 
    // This parameter is required.
    std::shared_ptr<string> objectPath_ = nullptr;
    // The type of the object that you want to refresh. Valid values:
    // 
    // *   **File** (default): refreshes one or more files.
    // *   **Directory**: refreshes the files in specified directories.
    // *   **Regex**: refreshes content based on regular expressions.
    // *   **IgnoreParams**: removes the question mark (?) and parameters after the question mark (?) in a request URL and refreshes content. After you call this operation with the request URL submitted, the system compares the submitted URL with the URL of the cached resource without specific parameters. If the URLs match, the POPs refresh the cached resource.
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
