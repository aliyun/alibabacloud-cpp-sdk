// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHOBJECTCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHOBJECTCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class RefreshObjectCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshObjectCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshObjectCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    RefreshObjectCachesRequest() = default ;
    RefreshObjectCachesRequest(const RefreshObjectCachesRequest &) = default ;
    RefreshObjectCachesRequest(RefreshObjectCachesRequest &&) = default ;
    RefreshObjectCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshObjectCachesRequest() = default ;
    RefreshObjectCachesRequest& operator=(const RefreshObjectCachesRequest &) = default ;
    RefreshObjectCachesRequest& operator=(RefreshObjectCachesRequest &&) = default ;
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
    inline RefreshObjectCachesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline RefreshObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline RefreshObjectCachesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RefreshObjectCachesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RefreshObjectCachesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // When the comparison between the source content and the source site resources is consistent, should the resources within the corresponding range be forcibly refreshed. The default is false.
    // 
    // *   **true**: purges all resources in the range that corresponds to the type of the purge task. If you set this parameter to true, when the requested resource matches the resource in the range that corresponds to the type of the purge task, the POP retrieves the resource from the origin server, returns the resource to the client, and caches the resource.
    // *   **false**: purges the changed resources in the range that corresponds to the type of the purge task. If you set this parameter to false, when the requested resource matches the resource in the range that corresponds to the type of the purge task, the POP obtains the Last-Modified parameter of the resource from the origin server. If the obtained value of the Last-Modified parameter is the same as that of the cached resource, the cached resource is returned. Otherwise, the POP retrieves the resource from the origin server, returns the resource to the client, and caches the resource.
    // 
    // >  This parameter takes effect only when the ObjectType parameter is not set to File.
    shared_ptr<bool> force_ {};
    // *   If you submit multiple URLs or directories at a time, separate them with line breaks (\\n) or (\\r\\n).
    // *   The total number of domain names contained all URLs in a submitted task cannot exceed 10.
    // 
    // This parameter is required.
    shared_ptr<string> objectPath_ {};
    // The type of the object that you want to refresh. Valid values:
    // 
    // *   **File** (default): refreshes one or more files.
    // *   **Directory**: refreshes the files in one or more directories.
    // *   **Regex**: refreshes content based on regular expressions.
    // *   **ExQuery**: omits parameters after the question mark in the URL and refreshes content.
    // 
    // If you set the ObjectType parameter to File or Directory, you can view [Refresh and prefetch resources](https://help.aliyun.com/document_detail/27140.html) to obtain more information. If you set the ObjectType parameter to Regex, you can view [Configure URL refresh rules that contain regular expressions](https://help.aliyun.com/document_detail/146195.html) to obtain more information.
    // 
    // If you set the ObjectType parameter to Directory, the resources in the directory that you want to refresh are marked as expired. You cannot delete the directory. If clients request resources on POPs that are marked as expired, Alibaba Cloud CDN checks whether the resources on your origin server are updated. If resources are updated, Alibaba Cloud CDN retrieves the latest version of the resources and returns the resources to the clients. Otherwise, the origin server returns the 304 status code.
    shared_ptr<string> objectType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
