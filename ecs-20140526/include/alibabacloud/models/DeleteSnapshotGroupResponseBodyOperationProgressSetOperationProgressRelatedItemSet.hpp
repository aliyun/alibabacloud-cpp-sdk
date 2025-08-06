// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#define ALIBABACLOUD_MODELS_DELETESNAPSHOTGROUPRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedItem, relatedItem_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedItem, relatedItem_);
    };
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet(DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(const DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relatedItem_ != nullptr; };
    // relatedItem Field Functions 
    bool hasRelatedItem() const { return this->relatedItem_ != nullptr;};
    void deleteRelatedItem() { this->relatedItem_ = nullptr;};
    inline const vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem() const { DARABONBA_PTR_GET_CONST(relatedItem_, vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> relatedItem() { DARABONBA_PTR_GET(relatedItem_, vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(const vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem) { DARABONBA_PTR_SET_VALUE(relatedItem_, relatedItem) };
    inline DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> && relatedItem) { DARABONBA_PTR_SET_RVALUE(relatedItem_, relatedItem) };


  protected:
    std::shared_ptr<vector<Models::DeleteSnapshotGroupResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>> relatedItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
