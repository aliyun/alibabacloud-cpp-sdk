// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterId, DBProxyClusterId_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterNum, DBProxyClusterNum_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterStatus, DBProxyClusterStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterId, DBProxyClusterId_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterNum, DBProxyClusterNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterStatus, DBProxyClusterStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterProxyResponseBody() = default ;
    DescribeDBClusterProxyResponseBody(const DescribeDBClusterProxyResponseBody &) = default ;
    DescribeDBClusterProxyResponseBody(DescribeDBClusterProxyResponseBody &&) = default ;
    DescribeDBClusterProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterProxyResponseBody() = default ;
    DescribeDBClusterProxyResponseBody& operator=(const DescribeDBClusterProxyResponseBody &) = default ;
    DescribeDBClusterProxyResponseBody& operator=(DescribeDBClusterProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChildInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChildInstances& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_TO_JSON(DBNodeIP, DBNodeIP_);
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(DBNodePort, DBNodePort_);
        DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
      };
      friend void from_json(const Darabonba::Json& j, ChildInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
        DARABONBA_PTR_FROM_JSON(DBNodeIP, DBNodeIP_);
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(DBNodePort, DBNodePort_);
        DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      };
      ChildInstances() = default ;
      ChildInstances(const ChildInstances &) = default ;
      ChildInstances(ChildInstances &&) = default ;
      ChildInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChildInstances() = default ;
      ChildInstances& operator=(const ChildInstances &) = default ;
      ChildInstances& operator=(ChildInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBNodeClass_ == nullptr
        && this->DBNodeIP_ == nullptr && this->DBNodeId_ == nullptr && this->DBNodePort_ == nullptr && this->DBNodeStatus_ == nullptr && this->hostName_ == nullptr; };
      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline ChildInstances& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


      // DBNodeIP Field Functions 
      bool hasDBNodeIP() const { return this->DBNodeIP_ != nullptr;};
      void deleteDBNodeIP() { this->DBNodeIP_ = nullptr;};
      inline string getDBNodeIP() const { DARABONBA_PTR_GET_DEFAULT(DBNodeIP_, "") };
      inline ChildInstances& setDBNodeIP(string DBNodeIP) { DARABONBA_PTR_SET_VALUE(DBNodeIP_, DBNodeIP) };


      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline ChildInstances& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // DBNodePort Field Functions 
      bool hasDBNodePort() const { return this->DBNodePort_ != nullptr;};
      void deleteDBNodePort() { this->DBNodePort_ = nullptr;};
      inline string getDBNodePort() const { DARABONBA_PTR_GET_DEFAULT(DBNodePort_, "") };
      inline ChildInstances& setDBNodePort(string DBNodePort) { DARABONBA_PTR_SET_VALUE(DBNodePort_, DBNodePort) };


      // DBNodeStatus Field Functions 
      bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
      void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
      inline string getDBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
      inline ChildInstances& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline ChildInstances& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    protected:
      shared_ptr<string> DBNodeClass_ {};
      shared_ptr<string> DBNodeIP_ {};
      shared_ptr<string> DBNodeId_ {};
      shared_ptr<string> DBNodePort_ {};
      shared_ptr<string> DBNodeStatus_ {};
      shared_ptr<string> hostName_ {};
    };

    virtual bool empty() const override { return this->childInstances_ == nullptr
        && this->DBProxyClusterId_ == nullptr && this->DBProxyClusterNum_ == nullptr && this->DBProxyClusterStatus_ == nullptr && this->requestId_ == nullptr; };
    // childInstances Field Functions 
    bool hasChildInstances() const { return this->childInstances_ != nullptr;};
    void deleteChildInstances() { this->childInstances_ = nullptr;};
    inline const vector<DescribeDBClusterProxyResponseBody::ChildInstances> & getChildInstances() const { DARABONBA_PTR_GET_CONST(childInstances_, vector<DescribeDBClusterProxyResponseBody::ChildInstances>) };
    inline vector<DescribeDBClusterProxyResponseBody::ChildInstances> getChildInstances() { DARABONBA_PTR_GET(childInstances_, vector<DescribeDBClusterProxyResponseBody::ChildInstances>) };
    inline DescribeDBClusterProxyResponseBody& setChildInstances(const vector<DescribeDBClusterProxyResponseBody::ChildInstances> & childInstances) { DARABONBA_PTR_SET_VALUE(childInstances_, childInstances) };
    inline DescribeDBClusterProxyResponseBody& setChildInstances(vector<DescribeDBClusterProxyResponseBody::ChildInstances> && childInstances) { DARABONBA_PTR_SET_RVALUE(childInstances_, childInstances) };


    // DBProxyClusterId Field Functions 
    bool hasDBProxyClusterId() const { return this->DBProxyClusterId_ != nullptr;};
    void deleteDBProxyClusterId() { this->DBProxyClusterId_ = nullptr;};
    inline string getDBProxyClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterId_, "") };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterId(string DBProxyClusterId) { DARABONBA_PTR_SET_VALUE(DBProxyClusterId_, DBProxyClusterId) };


    // DBProxyClusterNum Field Functions 
    bool hasDBProxyClusterNum() const { return this->DBProxyClusterNum_ != nullptr;};
    void deleteDBProxyClusterNum() { this->DBProxyClusterNum_ = nullptr;};
    inline int64_t getDBProxyClusterNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterNum_, 0L) };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterNum(int64_t DBProxyClusterNum) { DARABONBA_PTR_SET_VALUE(DBProxyClusterNum_, DBProxyClusterNum) };


    // DBProxyClusterStatus Field Functions 
    bool hasDBProxyClusterStatus() const { return this->DBProxyClusterStatus_ != nullptr;};
    void deleteDBProxyClusterStatus() { this->DBProxyClusterStatus_ = nullptr;};
    inline string getDBProxyClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterStatus_, "") };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterStatus(string DBProxyClusterStatus) { DARABONBA_PTR_SET_VALUE(DBProxyClusterStatus_, DBProxyClusterStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDBClusterProxyResponseBody::ChildInstances>> childInstances_ {};
    shared_ptr<string> DBProxyClusterId_ {};
    shared_ptr<int64_t> DBProxyClusterNum_ {};
    shared_ptr<string> DBProxyClusterStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
