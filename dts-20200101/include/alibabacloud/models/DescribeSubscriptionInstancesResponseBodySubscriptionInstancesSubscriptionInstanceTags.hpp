// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONINSTANCESRESPONSEBODYSUBSCRIPTIONINSTANCESSUBSCRIPTIONINSTANCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags &&) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags() = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& operator=(const DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags &) = default ;
    DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& operator=(DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag>) };
    inline vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag>) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& setTag(const vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTags& setTag(vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionInstancesResponseBodySubscriptionInstancesSubscriptionInstanceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
