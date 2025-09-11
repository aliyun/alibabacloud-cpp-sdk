// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBCLUSTERSNETINFOSPORTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODYDBCLUSTERSNETINFOSPORTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList(const DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList(DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList &&) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList() = default ;
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& operator=(const DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList &) = default ;
    DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& operator=(DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->protocol_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port that is used to connect to the BE cluster.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol of the port.
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
