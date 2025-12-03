// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODYIPCONTROLPOLICYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSRESPONSEBODYIPCONTROLPOLICYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlPolicyItem, ipControlPolicyItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlPolicyItem, ipControlPolicyItem_);
    };
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems() = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems(const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems &) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems(DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems &&) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems() = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& operator=(const DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems &) = default ;
    DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& operator=(DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlPolicyItem_ == nullptr; };
    // ipControlPolicyItem Field Functions 
    bool hasIpControlPolicyItem() const { return this->ipControlPolicyItem_ != nullptr;};
    void deleteIpControlPolicyItem() { this->ipControlPolicyItem_ = nullptr;};
    inline const vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem> & ipControlPolicyItem() const { DARABONBA_PTR_GET_CONST(ipControlPolicyItem_, vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem>) };
    inline vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem> ipControlPolicyItem() { DARABONBA_PTR_GET(ipControlPolicyItem_, vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem>) };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& setIpControlPolicyItem(const vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem> & ipControlPolicyItem) { DARABONBA_PTR_SET_VALUE(ipControlPolicyItem_, ipControlPolicyItem) };
    inline DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItems& setIpControlPolicyItem(vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem> && ipControlPolicyItem) { DARABONBA_PTR_SET_RVALUE(ipControlPolicyItem_, ipControlPolicyItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpControlPolicyItemsResponseBodyIpControlPolicyItemsIpControlPolicyItem>> ipControlPolicyItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
