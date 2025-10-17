// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODYRESERVEDINSTANCESRESERVEDINSTANCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags &&) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags() = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& operator=(const DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags &) = default ;
    DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& operator=(DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag>) };
    inline vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag>) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& setTag(const vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTags& setTag(vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeReservedInstancesResponseBodyReservedInstancesReservedInstanceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
