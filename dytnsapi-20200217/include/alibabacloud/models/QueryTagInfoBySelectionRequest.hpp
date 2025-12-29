// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGINFOBYSELECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGINFOBYSELECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class QueryTagInfoBySelectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagInfoBySelectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagInfoBySelectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    QueryTagInfoBySelectionRequest() = default ;
    QueryTagInfoBySelectionRequest(const QueryTagInfoBySelectionRequest &) = default ;
    QueryTagInfoBySelectionRequest(QueryTagInfoBySelectionRequest &&) = default ;
    QueryTagInfoBySelectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagInfoBySelectionRequest() = default ;
    QueryTagInfoBySelectionRequest& operator=(const QueryTagInfoBySelectionRequest &) = default ;
    QueryTagInfoBySelectionRequest& operator=(QueryTagInfoBySelectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->industryId_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sceneId_ == nullptr && this->tagId_ == nullptr; };
    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int64_t getIndustryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0L) };
    inline QueryTagInfoBySelectionRequest& setIndustryId(int64_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryTagInfoBySelectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryTagInfoBySelectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryTagInfoBySelectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline QueryTagInfoBySelectionRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline int64_t getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, 0L) };
    inline QueryTagInfoBySelectionRequest& setTagId(int64_t tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The industry ID.
    shared_ptr<int64_t> industryId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The scene ID.
    shared_ptr<int64_t> sceneId_ {};
    // The tag ID.
    shared_ptr<int64_t> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
