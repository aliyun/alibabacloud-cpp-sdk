// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMSADDRESSPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODYITEMSADDRESSPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterNetInfoResponseBodyItemsAddressPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetInfoResponseBodyItemsAddressPorts& obj) { 
      DARABONBA_PTR_TO_JSON(ports, ports_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetInfoResponseBodyItemsAddressPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(ports, ports_);
    };
    DescribeClusterNetInfoResponseBodyItemsAddressPorts() = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPorts(const DescribeClusterNetInfoResponseBodyItemsAddressPorts &) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPorts(DescribeClusterNetInfoResponseBodyItemsAddressPorts &&) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetInfoResponseBodyItemsAddressPorts() = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPorts& operator=(const DescribeClusterNetInfoResponseBodyItemsAddressPorts &) = default ;
    DescribeClusterNetInfoResponseBodyItemsAddressPorts& operator=(DescribeClusterNetInfoResponseBodyItemsAddressPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ports_ != nullptr; };
    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts>) };
    inline vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts> ports() { DARABONBA_PTR_GET(ports_, vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts>) };
    inline DescribeClusterNetInfoResponseBodyItemsAddressPorts& setPorts(const vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeClusterNetInfoResponseBodyItemsAddressPorts& setPorts(vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


  protected:
    std::shared_ptr<vector<Models::DescribeClusterNetInfoResponseBodyItemsAddressPortsPorts>> ports_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
