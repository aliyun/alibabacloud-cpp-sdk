// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESSTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags(const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags(DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags &&) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& operator=(const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& operator=(DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag>) };
    inline vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag>) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& setTag(const vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags& setTag(vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
