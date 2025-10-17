// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODYCHILDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODYCHILDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterProxyResponseBodyChildInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterProxyResponseBodyChildInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeIP, DBNodeIP_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodePort, DBNodePort_);
      DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterProxyResponseBodyChildInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeIP, DBNodeIP_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodePort, DBNodePort_);
      DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
    };
    DescribeDBClusterProxyResponseBodyChildInstances() = default ;
    DescribeDBClusterProxyResponseBodyChildInstances(const DescribeDBClusterProxyResponseBodyChildInstances &) = default ;
    DescribeDBClusterProxyResponseBodyChildInstances(DescribeDBClusterProxyResponseBodyChildInstances &&) = default ;
    DescribeDBClusterProxyResponseBodyChildInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterProxyResponseBodyChildInstances() = default ;
    DescribeDBClusterProxyResponseBodyChildInstances& operator=(const DescribeDBClusterProxyResponseBodyChildInstances &) = default ;
    DescribeDBClusterProxyResponseBodyChildInstances& operator=(DescribeDBClusterProxyResponseBodyChildInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBNodeClass_ == nullptr
        && return this->DBNodeIP_ == nullptr && return this->DBNodeId_ == nullptr && return this->DBNodePort_ == nullptr && return this->DBNodeStatus_ == nullptr && return this->hostName_ == nullptr; };
    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeIP Field Functions 
    bool hasDBNodeIP() const { return this->DBNodeIP_ != nullptr;};
    void deleteDBNodeIP() { this->DBNodeIP_ = nullptr;};
    inline string DBNodeIP() const { DARABONBA_PTR_GET_DEFAULT(DBNodeIP_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setDBNodeIP(string DBNodeIP) { DARABONBA_PTR_SET_VALUE(DBNodeIP_, DBNodeIP) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodePort Field Functions 
    bool hasDBNodePort() const { return this->DBNodePort_ != nullptr;};
    void deleteDBNodePort() { this->DBNodePort_ = nullptr;};
    inline string DBNodePort() const { DARABONBA_PTR_GET_DEFAULT(DBNodePort_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setDBNodePort(string DBNodePort) { DARABONBA_PTR_SET_VALUE(DBNodePort_, DBNodePort) };


    // DBNodeStatus Field Functions 
    bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
    void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
    inline string DBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeDBClusterProxyResponseBodyChildInstances& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


  protected:
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<string> DBNodeIP_ = nullptr;
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> DBNodePort_ = nullptr;
    std::shared_ptr<string> DBNodeStatus_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
