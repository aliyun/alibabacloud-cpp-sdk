// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYENDPOINTCONNECTITEMSENDPOINTCONNECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYENDPOINTCONNECTITEMSENDPOINTCONNECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyEndpointConnectString, dbProxyEndpointConnectString_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointNetType, dbProxyEndpointNetType_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointPort, dbProxyEndpointPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointConnectString, dbProxyEndpointConnectString_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointNetType, dbProxyEndpointNetType_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointPort, dbProxyEndpointPort_);
    };
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems() = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems(const DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems &) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems(DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems &&) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems() = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& operator=(const DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems &) = default ;
    DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& operator=(DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyEndpointConnectString_ == nullptr
        && return this->dbProxyEndpointNetType_ == nullptr && return this->dbProxyEndpointPort_ == nullptr; };
    // dbProxyEndpointConnectString Field Functions 
    bool hasDbProxyEndpointConnectString() const { return this->dbProxyEndpointConnectString_ != nullptr;};
    void deleteDbProxyEndpointConnectString() { this->dbProxyEndpointConnectString_ = nullptr;};
    inline string dbProxyEndpointConnectString() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointConnectString_, "") };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& setDbProxyEndpointConnectString(string dbProxyEndpointConnectString) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointConnectString_, dbProxyEndpointConnectString) };


    // dbProxyEndpointNetType Field Functions 
    bool hasDbProxyEndpointNetType() const { return this->dbProxyEndpointNetType_ != nullptr;};
    void deleteDbProxyEndpointNetType() { this->dbProxyEndpointNetType_ = nullptr;};
    inline string dbProxyEndpointNetType() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointNetType_, "") };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& setDbProxyEndpointNetType(string dbProxyEndpointNetType) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointNetType_, dbProxyEndpointNetType) };


    // dbProxyEndpointPort Field Functions 
    bool hasDbProxyEndpointPort() const { return this->dbProxyEndpointPort_ != nullptr;};
    void deleteDbProxyEndpointPort() { this->dbProxyEndpointPort_ = nullptr;};
    inline string dbProxyEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointPort_, "") };
    inline DescribeDBProxyEndpointResponseBodyEndpointConnectItemsEndpointConnectItems& setDbProxyEndpointPort(string dbProxyEndpointPort) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointPort_, dbProxyEndpointPort) };


  protected:
    // The proxy endpoint queried.
    std::shared_ptr<string> dbProxyEndpointConnectString_ = nullptr;
    // The network type of the instance. Valid values:
    // 
    // *   **0**: Internet
    // *   **1**: classic network
    // *   **2**: virtual private cloud (VPC)
    std::shared_ptr<string> dbProxyEndpointNetType_ = nullptr;
    // The port number that is associated with the proxy endpoint. Default value: **3306**.
    std::shared_ptr<string> dbProxyEndpointPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
