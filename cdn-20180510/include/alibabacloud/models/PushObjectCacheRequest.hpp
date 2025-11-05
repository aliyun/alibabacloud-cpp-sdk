// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHOBJECTCACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHOBJECTCACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class PushObjectCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushObjectCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(ConsistencyHash, consistencyHash_);
      DARABONBA_PTR_TO_JSON(L2Preload, l2Preload_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryHashkey, queryHashkey_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(WithHeader, withHeader_);
    };
    friend void from_json(const Darabonba::Json& j, PushObjectCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(ConsistencyHash, consistencyHash_);
      DARABONBA_PTR_FROM_JSON(L2Preload, l2Preload_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryHashkey, queryHashkey_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(WithHeader, withHeader_);
    };
    PushObjectCacheRequest() = default ;
    PushObjectCacheRequest(const PushObjectCacheRequest &) = default ;
    PushObjectCacheRequest(PushObjectCacheRequest &&) = default ;
    PushObjectCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushObjectCacheRequest() = default ;
    PushObjectCacheRequest& operator=(const PushObjectCacheRequest &) = default ;
    PushObjectCacheRequest& operator=(PushObjectCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->consistencyHash_ == nullptr && return this->l2Preload_ == nullptr && return this->objectPath_ == nullptr && return this->ownerId_ == nullptr && return this->queryHashkey_ == nullptr
        && return this->securityToken_ == nullptr && return this->withHeader_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline PushObjectCacheRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // consistencyHash Field Functions 
    bool hasConsistencyHash() const { return this->consistencyHash_ != nullptr;};
    void deleteConsistencyHash() { this->consistencyHash_ = nullptr;};
    inline bool consistencyHash() const { DARABONBA_PTR_GET_DEFAULT(consistencyHash_, false) };
    inline PushObjectCacheRequest& setConsistencyHash(bool consistencyHash) { DARABONBA_PTR_SET_VALUE(consistencyHash_, consistencyHash) };


    // l2Preload Field Functions 
    bool hasL2Preload() const { return this->l2Preload_ != nullptr;};
    void deleteL2Preload() { this->l2Preload_ = nullptr;};
    inline bool l2Preload() const { DARABONBA_PTR_GET_DEFAULT(l2Preload_, false) };
    inline PushObjectCacheRequest& setL2Preload(bool l2Preload) { DARABONBA_PTR_SET_VALUE(l2Preload_, l2Preload) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline PushObjectCacheRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline PushObjectCacheRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryHashkey Field Functions 
    bool hasQueryHashkey() const { return this->queryHashkey_ != nullptr;};
    void deleteQueryHashkey() { this->queryHashkey_ = nullptr;};
    inline bool queryHashkey() const { DARABONBA_PTR_GET_DEFAULT(queryHashkey_, false) };
    inline PushObjectCacheRequest& setQueryHashkey(bool queryHashkey) { DARABONBA_PTR_SET_VALUE(queryHashkey_, queryHashkey) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline PushObjectCacheRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // withHeader Field Functions 
    bool hasWithHeader() const { return this->withHeader_ != nullptr;};
    void deleteWithHeader() { this->withHeader_ = nullptr;};
    inline string withHeader() const { DARABONBA_PTR_GET_DEFAULT(withHeader_, "") };
    inline PushObjectCacheRequest& setWithHeader(string withHeader) { DARABONBA_PTR_SET_VALUE(withHeader_, withHeader) };


  protected:
    // The acceleration region where content is to be prefetched. Valid values:
    // 
    // *   **domestic****: Chinese mainland**
    // *   **overseas****: regions outside the Chinese mainland**
    // 
    // If you do not set this parameter, content in the service location (specified by parameter Coverage) that you configured for the domain is prefetched. Content is prefetched based on the following rules:
    // 
    // *   If the acceleration region is set to **Chinese Mainland Only**, content in regions in the Chinese mainland is prefetched.
    // *   If the acceleration region is set to **Global**, content in all regions is prefetched.
    // *   If the acceleration region is set to **Global (Excluding the Chinese Mainland)**, content in regions outside the Chinese mainland is prefetched.
    std::shared_ptr<string> area_ = nullptr;
    std::shared_ptr<bool> consistencyHash_ = nullptr;
    // Specifies whether to prefetch content to L2 points of presence (POPs). Valid values:
    // 
    // *   **true**: prefetches content to L2 POPs.
    // *   **false**: prefetches content to regular POPs. Regular POPs can be L2 POPs or L3 POPs. Default value: **false**.
    std::shared_ptr<bool> l2Preload_ = nullptr;
    // The URLs based on which content is prefetched. Format: **accelerated domain name/files to be prefetched**.
    // 
    // > Separate URLs with line feeds (\\n or \\r\\n). Each object path can be up to 1,024 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectPath_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter specifies whether to enable the hash key query mode when you run a prefetch task. Valid values:
    // 
    // *   false: The default mode, in which the submitted URL is used as the hash key for the prefetch.
    // *   true: In this mode, the actual hash key used for the prefetch is queried based on the configuration of the domain name.
    std::shared_ptr<bool> queryHashkey_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The custom header for prefetch in the JSON format.
    std::shared_ptr<string> withHeader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
