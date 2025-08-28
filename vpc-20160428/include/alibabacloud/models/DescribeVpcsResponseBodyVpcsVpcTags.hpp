// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcsVpcTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpcTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpcTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpcTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVpcsResponseBodyVpcsVpcTags() = default ;
    DescribeVpcsResponseBodyVpcsVpcTags(const DescribeVpcsResponseBodyVpcsVpcTags &) = default ;
    DescribeVpcsResponseBodyVpcsVpcTags(DescribeVpcsResponseBodyVpcsVpcTags &&) = default ;
    DescribeVpcsResponseBodyVpcsVpcTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpcTags() = default ;
    DescribeVpcsResponseBodyVpcsVpcTags& operator=(const DescribeVpcsResponseBodyVpcsVpcTags &) = default ;
    DescribeVpcsResponseBodyVpcsVpcTags& operator=(DescribeVpcsResponseBodyVpcsVpcTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag>) };
    inline vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag>) };
    inline DescribeVpcsResponseBodyVpcsVpcTags& setTag(const vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVpcsResponseBodyVpcsVpcTags& setTag(vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpcsResponseBodyVpcsVpcTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
