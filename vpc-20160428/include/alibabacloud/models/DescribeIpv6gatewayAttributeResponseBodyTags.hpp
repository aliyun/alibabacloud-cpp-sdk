// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYATTRIBUTERESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6GATEWAYATTRIBUTERESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpv6GatewayAttributeResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6GatewayAttributeResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6GatewayAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6GatewayAttributeResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeIpv6GatewayAttributeResponseBodyTags() = default ;
    DescribeIpv6GatewayAttributeResponseBodyTags(const DescribeIpv6GatewayAttributeResponseBodyTags &) = default ;
    DescribeIpv6GatewayAttributeResponseBodyTags(DescribeIpv6GatewayAttributeResponseBodyTags &&) = default ;
    DescribeIpv6GatewayAttributeResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6GatewayAttributeResponseBodyTags() = default ;
    DescribeIpv6GatewayAttributeResponseBodyTags& operator=(const DescribeIpv6GatewayAttributeResponseBodyTags &) = default ;
    DescribeIpv6GatewayAttributeResponseBodyTags& operator=(DescribeIpv6GatewayAttributeResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag>) };
    inline vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag>) };
    inline DescribeIpv6GatewayAttributeResponseBodyTags& setTag(const vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeIpv6GatewayAttributeResponseBodyTags& setTag(vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpv6GatewayAttributeResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
