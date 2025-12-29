// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCEFORPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListServiceInstanceForPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceForPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Pager, pager_);
      DARABONBA_PTR_TO_JSON(RelationNumber, relationNumber_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(UsageId, usageId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceForPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Pager, pager_);
      DARABONBA_PTR_FROM_JSON(RelationNumber, relationNumber_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(UsageId, usageId_);
    };
    ListServiceInstanceForPageRequest() = default ;
    ListServiceInstanceForPageRequest(const ListServiceInstanceForPageRequest &) = default ;
    ListServiceInstanceForPageRequest(ListServiceInstanceForPageRequest &&) = default ;
    ListServiceInstanceForPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceForPageRequest() = default ;
    ListServiceInstanceForPageRequest& operator=(const ListServiceInstanceForPageRequest &) = default ;
    ListServiceInstanceForPageRequest& operator=(ListServiceInstanceForPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pager : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pager& obj) { 
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Pager& obj) { 
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      };
      Pager() = default ;
      Pager(const Pager &) = default ;
      Pager(Pager &&) = default ;
      Pager(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pager() = default ;
      Pager& operator=(const Pager &) = default ;
      Pager& operator=(Pager &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr; };
      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
      inline Pager& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Pager& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // 当前页码
      shared_ptr<int64_t> pageIndex_ {};
      // 每页数量，默认10，最大100
      shared_ptr<int64_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ownerId_ == nullptr && this->pager_ == nullptr && this->relationNumber_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->sceneId_ == nullptr && this->usageId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListServiceInstanceForPageRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListServiceInstanceForPageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pager Field Functions 
    bool hasPager() const { return this->pager_ != nullptr;};
    void deletePager() { this->pager_ = nullptr;};
    inline const ListServiceInstanceForPageRequest::Pager & getPager() const { DARABONBA_PTR_GET_CONST(pager_, ListServiceInstanceForPageRequest::Pager) };
    inline ListServiceInstanceForPageRequest::Pager getPager() { DARABONBA_PTR_GET(pager_, ListServiceInstanceForPageRequest::Pager) };
    inline ListServiceInstanceForPageRequest& setPager(const ListServiceInstanceForPageRequest::Pager & pager) { DARABONBA_PTR_SET_VALUE(pager_, pager) };
    inline ListServiceInstanceForPageRequest& setPager(ListServiceInstanceForPageRequest::Pager && pager) { DARABONBA_PTR_SET_RVALUE(pager_, pager) };


    // relationNumber Field Functions 
    bool hasRelationNumber() const { return this->relationNumber_ != nullptr;};
    void deleteRelationNumber() { this->relationNumber_ = nullptr;};
    inline string getRelationNumber() const { DARABONBA_PTR_GET_DEFAULT(relationNumber_, "") };
    inline ListServiceInstanceForPageRequest& setRelationNumber(string relationNumber) { DARABONBA_PTR_SET_VALUE(relationNumber_, relationNumber) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListServiceInstanceForPageRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListServiceInstanceForPageRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline ListServiceInstanceForPageRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // usageId Field Functions 
    bool hasUsageId() const { return this->usageId_ != nullptr;};
    void deleteUsageId() { this->usageId_ = nullptr;};
    inline int64_t getUsageId() const { DARABONBA_PTR_GET_DEFAULT(usageId_, 0L) };
    inline ListServiceInstanceForPageRequest& setUsageId(int64_t usageId) { DARABONBA_PTR_SET_VALUE(usageId_, usageId) };


  protected:
    // 服务实例号
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<ListServiceInstanceForPageRequest::Pager> pager_ {};
    // 关联实体号码
    shared_ptr<string> relationNumber_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 场景ID
    shared_ptr<int64_t> sceneId_ {};
    // 用途ID
    shared_ptr<int64_t> usageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
