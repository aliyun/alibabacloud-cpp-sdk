// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESSTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags &&) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& operator=(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& operator=(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag>) };
    inline vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag>) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& setTag(const vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags& setTag(vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
