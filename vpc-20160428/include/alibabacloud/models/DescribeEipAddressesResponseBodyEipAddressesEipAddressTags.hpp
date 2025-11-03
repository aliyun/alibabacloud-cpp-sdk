// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipAddressesResponseBodyEipAddressesEipAddressTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags(const DescribeEipAddressesResponseBodyEipAddressesEipAddressTags &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags(DescribeEipAddressesResponseBodyEipAddressesEipAddressTags &&) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBodyEipAddressesEipAddressTags() = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& operator=(const DescribeEipAddressesResponseBodyEipAddressesEipAddressTags &) = default ;
    DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& operator=(DescribeEipAddressesResponseBodyEipAddressesEipAddressTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag>) };
    inline vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag>) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& setTag(const vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEipAddressesResponseBodyEipAddressesEipAddressTags& setTag(vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipAddressesResponseBodyEipAddressesEipAddressTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
