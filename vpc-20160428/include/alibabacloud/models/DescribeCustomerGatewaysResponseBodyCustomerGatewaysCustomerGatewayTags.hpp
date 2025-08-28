// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODYCUSTOMERGATEWAYSCUSTOMERGATEWAYTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODYCUSTOMERGATEWAYSCUSTOMERGATEWAYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags() = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags(const DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags &) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags(DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags &&) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags() = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& operator=(const DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags &) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& operator=(DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag>) };
    inline vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag>) };
    inline DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& setTag(const vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTags& setTag(vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGatewayTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
