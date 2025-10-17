// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTERTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERSDEDICATEDHOSTCLUSTERTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags &&) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& operator=(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& operator=(DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag>) };
    inline vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag>) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& setTag(const vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTags& setTag(vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostClusterTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
