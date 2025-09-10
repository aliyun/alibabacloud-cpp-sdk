// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMSCONNECTIONIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYITEMSCONNECTIONIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp &&) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& operator=(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& operator=(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->DBInstanceNetType_ != nullptr && this->port_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceNetType Field Functions 
    bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
    void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
    inline int32_t DBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, 0) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& setDBInstanceNetType(int32_t DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyItemsConnectionIp& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<int32_t> DBInstanceNetType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
