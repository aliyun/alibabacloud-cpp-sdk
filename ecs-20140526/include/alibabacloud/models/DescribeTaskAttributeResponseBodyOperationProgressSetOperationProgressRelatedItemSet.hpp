// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKATTRIBUTERESPONSEBODYOPERATIONPROGRESSSETOPERATIONPROGRESSRELATEDITEMSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedItem, relatedItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedItem, relatedItem_);
    };
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet(DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet() = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(const DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet &) = default ;
    DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& operator=(DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedItem_ == nullptr; };
    // relatedItem Field Functions 
    bool hasRelatedItem() const { return this->relatedItem_ != nullptr;};
    void deleteRelatedItem() { this->relatedItem_ = nullptr;};
    inline const vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem() const { DARABONBA_PTR_GET_CONST(relatedItem_, vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> relatedItem() { DARABONBA_PTR_GET(relatedItem_, vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(const vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> & relatedItem) { DARABONBA_PTR_SET_VALUE(relatedItem_, relatedItem) };
    inline DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSet& setRelatedItem(vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem> && relatedItem) { DARABONBA_PTR_SET_RVALUE(relatedItem_, relatedItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeTaskAttributeResponseBodyOperationProgressSetOperationProgressRelatedItemSetRelatedItem>> relatedItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
