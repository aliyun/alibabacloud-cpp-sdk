// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRELOADVODOBJECTCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRELOADVODOBJECTCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class PreloadVodObjectCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreloadVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(L2Preload, l2Preload_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(WithHeader, withHeader_);
    };
    friend void from_json(const Darabonba::Json& j, PreloadVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(L2Preload, l2Preload_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(WithHeader, withHeader_);
    };
    PreloadVodObjectCachesRequest() = default ;
    PreloadVodObjectCachesRequest(const PreloadVodObjectCachesRequest &) = default ;
    PreloadVodObjectCachesRequest(PreloadVodObjectCachesRequest &&) = default ;
    PreloadVodObjectCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreloadVodObjectCachesRequest() = default ;
    PreloadVodObjectCachesRequest& operator=(const PreloadVodObjectCachesRequest &) = default ;
    PreloadVodObjectCachesRequest& operator=(PreloadVodObjectCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && this->l2Preload_ == nullptr && this->objectPath_ == nullptr && this->ownerId_ == nullptr && this->securityToken_ == nullptr && this->withHeader_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline PreloadVodObjectCachesRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // l2Preload Field Functions 
    bool hasL2Preload() const { return this->l2Preload_ != nullptr;};
    void deleteL2Preload() { this->l2Preload_ = nullptr;};
    inline bool getL2Preload() const { DARABONBA_PTR_GET_DEFAULT(l2Preload_, false) };
    inline PreloadVodObjectCachesRequest& setL2Preload(bool l2Preload) { DARABONBA_PTR_SET_VALUE(l2Preload_, l2Preload) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string getObjectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline PreloadVodObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline PreloadVodObjectCachesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline PreloadVodObjectCachesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // withHeader Field Functions 
    bool hasWithHeader() const { return this->withHeader_ != nullptr;};
    void deleteWithHeader() { this->withHeader_ = nullptr;};
    inline string getWithHeader() const { DARABONBA_PTR_GET_DEFAULT(withHeader_, "") };
    inline PreloadVodObjectCachesRequest& setWithHeader(string withHeader) { DARABONBA_PTR_SET_VALUE(withHeader_, withHeader) };


  protected:
    // The acceleration region in which you want to prefetch content. If you do not specify a region, the value overseas is used.
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: outside the Chinese mainland
    shared_ptr<string> area_ {};
    // Specifies whether to prefetch content to POPs. Valid values:
    // 
    // *   **true**: prefetches content to nodes that include L2 DCDN nodes.
    // *   **false**: prefetches content to L2 POPs or L3 POPs.
    shared_ptr<bool> l2Preload_ {};
    // The URL of the file to be prefetched. Separate multiple URLs with line breaks (\\n or \\r\\n).
    // 
    // This parameter is required.
    shared_ptr<string> objectPath_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> securityToken_ {};
    // The custom header for prefetch in the JSON format.
    shared_ptr<string> withHeader_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
