// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODYDEDICATEDHOSTSDEDICATEDHOSTTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags &&) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags() = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& operator=(const DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags &) = default ;
    DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& operator=(DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag>) };
    inline vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag>) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& setTag(const vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTags& setTag(vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHostTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
