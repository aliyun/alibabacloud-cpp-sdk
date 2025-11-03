// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomerGatewayResponseBodyTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCustomerGatewayResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerGatewayResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerGatewayResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCustomerGatewayResponseBodyTags() = default ;
    DescribeCustomerGatewayResponseBodyTags(const DescribeCustomerGatewayResponseBodyTags &) = default ;
    DescribeCustomerGatewayResponseBodyTags(DescribeCustomerGatewayResponseBodyTags &&) = default ;
    DescribeCustomerGatewayResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerGatewayResponseBodyTags() = default ;
    DescribeCustomerGatewayResponseBodyTags& operator=(const DescribeCustomerGatewayResponseBodyTags &) = default ;
    DescribeCustomerGatewayResponseBodyTags& operator=(DescribeCustomerGatewayResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCustomerGatewayResponseBodyTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCustomerGatewayResponseBodyTagsTag>) };
    inline vector<Models::DescribeCustomerGatewayResponseBodyTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCustomerGatewayResponseBodyTagsTag>) };
    inline DescribeCustomerGatewayResponseBodyTags& setTag(const vector<Models::DescribeCustomerGatewayResponseBodyTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCustomerGatewayResponseBodyTags& setTag(vector<Models::DescribeCustomerGatewayResponseBodyTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomerGatewayResponseBodyTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
