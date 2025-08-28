// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnGatewayResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVpnGatewayResponseBodyTags() = default ;
    DescribeVpnGatewayResponseBodyTags(const DescribeVpnGatewayResponseBodyTags &) = default ;
    DescribeVpnGatewayResponseBodyTags(DescribeVpnGatewayResponseBodyTags &&) = default ;
    DescribeVpnGatewayResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayResponseBodyTags() = default ;
    DescribeVpnGatewayResponseBodyTags& operator=(const DescribeVpnGatewayResponseBodyTags &) = default ;
    DescribeVpnGatewayResponseBodyTags& operator=(DescribeVpnGatewayResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVpnGatewayResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVpnGatewayResponseBodyTagsTag>) };
    inline vector<Models::DescribeVpnGatewayResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVpnGatewayResponseBodyTagsTag>) };
    inline DescribeVpnGatewayResponseBodyTags& setTag(const vector<Models::DescribeVpnGatewayResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVpnGatewayResponseBodyTags& setTag(vector<Models::DescribeVpnGatewayResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnGatewayResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
