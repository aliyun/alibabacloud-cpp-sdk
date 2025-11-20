// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESRESPONSEBODYPROTECTEDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTEDRESOURCESRESPONSEBODYPROTECTEDRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ListProtectedResourcesResponseBodyProtectedResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectedResourcesResponseBodyProtectedResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
      DARABONBA_PTR_TO_JSON(ProtectedResourceId, protectedResourceId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectedResourcesResponseBodyProtectedResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedByProduct, createdByProduct_);
      DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
      DARABONBA_PTR_FROM_JSON(ProtectedResourceId, protectedResourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotCount, snapshotCount_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListProtectedResourcesResponseBodyProtectedResources() = default ;
    ListProtectedResourcesResponseBodyProtectedResources(const ListProtectedResourcesResponseBodyProtectedResources &) = default ;
    ListProtectedResourcesResponseBodyProtectedResources(ListProtectedResourcesResponseBodyProtectedResources &&) = default ;
    ListProtectedResourcesResponseBodyProtectedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectedResourcesResponseBodyProtectedResources() = default ;
    ListProtectedResourcesResponseBodyProtectedResources& operator=(const ListProtectedResourcesResponseBodyProtectedResources &) = default ;
    ListProtectedResourcesResponseBodyProtectedResources& operator=(ListProtectedResourcesResponseBodyProtectedResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdByProduct_ == nullptr
        && return this->protectedDataSize_ == nullptr && return this->protectedResourceId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->snapshotCount_ == nullptr
        && return this->sourceType_ == nullptr; };
    // createdByProduct Field Functions 
    bool hasCreatedByProduct() const { return this->createdByProduct_ != nullptr;};
    void deleteCreatedByProduct() { this->createdByProduct_ = nullptr;};
    inline string createdByProduct() const { DARABONBA_PTR_GET_DEFAULT(createdByProduct_, "") };
    inline ListProtectedResourcesResponseBodyProtectedResources& setCreatedByProduct(string createdByProduct) { DARABONBA_PTR_SET_VALUE(createdByProduct_, createdByProduct) };


    // protectedDataSize Field Functions 
    bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
    void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
    inline int64_t protectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
    inline ListProtectedResourcesResponseBodyProtectedResources& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


    // protectedResourceId Field Functions 
    bool hasProtectedResourceId() const { return this->protectedResourceId_ != nullptr;};
    void deleteProtectedResourceId() { this->protectedResourceId_ = nullptr;};
    inline string protectedResourceId() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceId_, "") };
    inline ListProtectedResourcesResponseBodyProtectedResources& setProtectedResourceId(string protectedResourceId) { DARABONBA_PTR_SET_VALUE(protectedResourceId_, protectedResourceId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListProtectedResourcesResponseBodyProtectedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListProtectedResourcesResponseBodyProtectedResources& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotCount Field Functions 
    bool hasSnapshotCount() const { return this->snapshotCount_ != nullptr;};
    void deleteSnapshotCount() { this->snapshotCount_ = nullptr;};
    inline int64_t snapshotCount() const { DARABONBA_PTR_GET_DEFAULT(snapshotCount_, 0L) };
    inline ListProtectedResourcesResponseBodyProtectedResources& setSnapshotCount(int64_t snapshotCount) { DARABONBA_PTR_SET_VALUE(snapshotCount_, snapshotCount) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListProtectedResourcesResponseBodyProtectedResources& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<string> createdByProduct_ = nullptr;
    std::shared_ptr<int64_t> protectedDataSize_ = nullptr;
    std::shared_ptr<string> protectedResourceId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> snapshotCount_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
