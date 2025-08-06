// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLOCKVODOBJECTCACHESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BLOCKVODOBJECTCACHESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class BlockVodObjectCachesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlockVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Maxage, maxage_);
      DARABONBA_PTR_TO_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BlockVodObjectCachesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Maxage, maxage_);
      DARABONBA_PTR_FROM_JSON(ObjectPath, objectPath_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BlockVodObjectCachesRequest() = default ;
    BlockVodObjectCachesRequest(const BlockVodObjectCachesRequest &) = default ;
    BlockVodObjectCachesRequest(BlockVodObjectCachesRequest &&) = default ;
    BlockVodObjectCachesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlockVodObjectCachesRequest() = default ;
    BlockVodObjectCachesRequest& operator=(const BlockVodObjectCachesRequest &) = default ;
    BlockVodObjectCachesRequest& operator=(BlockVodObjectCachesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxage_ != nullptr
        && this->objectPath_ != nullptr && this->ownerId_ != nullptr && this->securityToken_ != nullptr && this->type_ != nullptr; };
    // maxage Field Functions 
    bool hasMaxage() const { return this->maxage_ != nullptr;};
    void deleteMaxage() { this->maxage_ = nullptr;};
    inline int32_t maxage() const { DARABONBA_PTR_GET_DEFAULT(maxage_, 0) };
    inline BlockVodObjectCachesRequest& setMaxage(int32_t maxage) { DARABONBA_PTR_SET_VALUE(maxage_, maxage) };


    // objectPath Field Functions 
    bool hasObjectPath() const { return this->objectPath_ != nullptr;};
    void deleteObjectPath() { this->objectPath_ = nullptr;};
    inline string objectPath() const { DARABONBA_PTR_GET_DEFAULT(objectPath_, "") };
    inline BlockVodObjectCachesRequest& setObjectPath(string objectPath) { DARABONBA_PTR_SET_VALUE(objectPath_, objectPath) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BlockVodObjectCachesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline BlockVodObjectCachesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BlockVodObjectCachesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> maxage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> objectPath_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
