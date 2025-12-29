// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGAPPLYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGAPPLYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTagApplyRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagApplyRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagApplyRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    QueryTagApplyRuleRequest() = default ;
    QueryTagApplyRuleRequest(const QueryTagApplyRuleRequest &) = default ;
    QueryTagApplyRuleRequest(QueryTagApplyRuleRequest &&) = default ;
    QueryTagApplyRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagApplyRuleRequest() = default ;
    QueryTagApplyRuleRequest& operator=(const QueryTagApplyRuleRequest &) = default ;
    QueryTagApplyRuleRequest& operator=(QueryTagApplyRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tagId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryTagApplyRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryTagApplyRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryTagApplyRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline QueryTagApplyRuleRequest& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag ID.
    shared_ptr<int64_t> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
