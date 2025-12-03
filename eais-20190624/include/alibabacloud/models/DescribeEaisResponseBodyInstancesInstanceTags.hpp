// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCESINSTANCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAISRESPONSEBODYINSTANCESINSTANCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEaisResponseBodyInstancesInstanceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DescribeEaisResponseBodyInstancesInstanceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEaisResponseBodyInstancesInstanceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEaisResponseBodyInstancesInstanceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEaisResponseBodyInstancesInstanceTags() = default ;
    DescribeEaisResponseBodyInstancesInstanceTags(const DescribeEaisResponseBodyInstancesInstanceTags &) = default ;
    DescribeEaisResponseBodyInstancesInstanceTags(DescribeEaisResponseBodyInstancesInstanceTags &&) = default ;
    DescribeEaisResponseBodyInstancesInstanceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEaisResponseBodyInstancesInstanceTags() = default ;
    DescribeEaisResponseBodyInstancesInstanceTags& operator=(const DescribeEaisResponseBodyInstancesInstanceTags &) = default ;
    DescribeEaisResponseBodyInstancesInstanceTags& operator=(DescribeEaisResponseBodyInstancesInstanceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag>) };
    inline vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag>) };
    inline DescribeEaisResponseBodyInstancesInstanceTags& setTag(const vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEaisResponseBodyInstancesInstanceTags& setTag(vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeEaisResponseBodyInstancesInstanceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
