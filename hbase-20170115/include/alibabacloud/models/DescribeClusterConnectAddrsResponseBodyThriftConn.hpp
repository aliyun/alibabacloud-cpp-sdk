// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYTHRIFTCONN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERCONNECTADDRSRESPONSEBODYTHRIFTCONN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeClusterConnectAddrsResponseBodyThriftConn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterConnectAddrsResponseBodyThriftConn& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAddr, connAddr_);
      DARABONBA_PTR_TO_JSON(ConnAddrPort, connAddrPort_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterConnectAddrsResponseBodyThriftConn& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAddr, connAddr_);
      DARABONBA_PTR_FROM_JSON(ConnAddrPort, connAddrPort_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
    };
    DescribeClusterConnectAddrsResponseBodyThriftConn() = default ;
    DescribeClusterConnectAddrsResponseBodyThriftConn(const DescribeClusterConnectAddrsResponseBodyThriftConn &) = default ;
    DescribeClusterConnectAddrsResponseBodyThriftConn(DescribeClusterConnectAddrsResponseBodyThriftConn &&) = default ;
    DescribeClusterConnectAddrsResponseBodyThriftConn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterConnectAddrsResponseBodyThriftConn() = default ;
    DescribeClusterConnectAddrsResponseBodyThriftConn& operator=(const DescribeClusterConnectAddrsResponseBodyThriftConn &) = default ;
    DescribeClusterConnectAddrsResponseBodyThriftConn& operator=(DescribeClusterConnectAddrsResponseBodyThriftConn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connAddr_ == nullptr
        && return this->connAddrPort_ == nullptr && return this->netType_ == nullptr; };
    // connAddr Field Functions 
    bool hasConnAddr() const { return this->connAddr_ != nullptr;};
    void deleteConnAddr() { this->connAddr_ = nullptr;};
    inline string connAddr() const { DARABONBA_PTR_GET_DEFAULT(connAddr_, "") };
    inline DescribeClusterConnectAddrsResponseBodyThriftConn& setConnAddr(string connAddr) { DARABONBA_PTR_SET_VALUE(connAddr_, connAddr) };


    // connAddrPort Field Functions 
    bool hasConnAddrPort() const { return this->connAddrPort_ != nullptr;};
    void deleteConnAddrPort() { this->connAddrPort_ = nullptr;};
    inline string connAddrPort() const { DARABONBA_PTR_GET_DEFAULT(connAddrPort_, "") };
    inline DescribeClusterConnectAddrsResponseBodyThriftConn& setConnAddrPort(string connAddrPort) { DARABONBA_PTR_SET_VALUE(connAddrPort_, connAddrPort) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeClusterConnectAddrsResponseBodyThriftConn& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


  protected:
    std::shared_ptr<string> connAddr_ = nullptr;
    std::shared_ptr<string> connAddrPort_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
