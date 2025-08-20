// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNetInfoResponseBodyItemsAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterNetInfoResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    DescribeClusterNetInfoResponseBodyItems() = default ;
    DescribeClusterNetInfoResponseBodyItems(const DescribeClusterNetInfoResponseBodyItems &) = default ;
    DescribeClusterNetInfoResponseBodyItems(DescribeClusterNetInfoResponseBodyItems &&) = default ;
    DescribeClusterNetInfoResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetInfoResponseBodyItems() = default ;
    DescribeClusterNetInfoResponseBodyItems& operator=(const DescribeClusterNetInfoResponseBodyItems &) = default ;
    DescribeClusterNetInfoResponseBodyItems& operator=(DescribeClusterNetInfoResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress>) };
    inline vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress>) };
    inline DescribeClusterNetInfoResponseBodyItems& setAddress(const vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline DescribeClusterNetInfoResponseBodyItems& setAddress(vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterNetInfoResponseBodyItemsAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
