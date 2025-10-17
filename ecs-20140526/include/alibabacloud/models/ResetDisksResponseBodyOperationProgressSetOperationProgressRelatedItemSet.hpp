// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedItem, relatedItem_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedItem, relatedItem_);
    };
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet(ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(const ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedItem_ == nullptr; };
    // relatedItem Field Functions 
    bool hasRelatedItem() const { return this->relatedItem_ != nullptr;};
    void deleteRelatedItem() { this->relatedItem_ = nullptr;};
    inline const vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem() const { DARABONBA_PTR_GET_CONST(relatedItem_, vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> relatedItem() { DARABONBA_PTR_GET(relatedItem_, vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(const vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem) { DARABONBA_PTR_SET_VALUE(relatedItem_, relatedItem) };
    inline ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> && relatedItem) { DARABONBA_PTR_SET_RVALUE(relatedItem_, relatedItem) };


  protected:
    std::shared_ptr<vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>> relatedItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
