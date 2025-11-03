// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHATTRIBUTESRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVSwitchAttributesResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVSwitchAttributesResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchAttributesResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchAttributesResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVSwitchAttributesResponseBodyTags() = default ;
    DescribeVSwitchAttributesResponseBodyTags(const DescribeVSwitchAttributesResponseBodyTags &) = default ;
    DescribeVSwitchAttributesResponseBodyTags(DescribeVSwitchAttributesResponseBodyTags &&) = default ;
    DescribeVSwitchAttributesResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchAttributesResponseBodyTags() = default ;
    DescribeVSwitchAttributesResponseBodyTags& operator=(const DescribeVSwitchAttributesResponseBodyTags &) = default ;
    DescribeVSwitchAttributesResponseBodyTags& operator=(DescribeVSwitchAttributesResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag>) };
    inline vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag>) };
    inline DescribeVSwitchAttributesResponseBodyTags& setTag(const vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVSwitchAttributesResponseBodyTags& setTag(vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVSwitchAttributesResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
