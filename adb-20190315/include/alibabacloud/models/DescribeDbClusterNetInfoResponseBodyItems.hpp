// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyItemsAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    DescribeDBClusterNetInfoResponseBodyItems() = default ;
    DescribeDBClusterNetInfoResponseBodyItems(const DescribeDBClusterNetInfoResponseBodyItems &) = default ;
    DescribeDBClusterNetInfoResponseBodyItems(DescribeDBClusterNetInfoResponseBodyItems &&) = default ;
    DescribeDBClusterNetInfoResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyItems() = default ;
    DescribeDBClusterNetInfoResponseBodyItems& operator=(const DescribeDBClusterNetInfoResponseBodyItems &) = default ;
    DescribeDBClusterNetInfoResponseBodyItems& operator=(DescribeDBClusterNetInfoResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress>) };
    inline vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress>) };
    inline DescribeDBClusterNetInfoResponseBodyItems& setAddress(const vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline DescribeDBClusterNetInfoResponseBodyItems& setAddress(vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterNetInfoResponseBodyItemsAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
