// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICASETROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICASETROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeReplicaSetRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicaSetRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ReplicaSets, replicaSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicaSetRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ReplicaSets, replicaSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeReplicaSetRoleResponseBody() = default ;
    DescribeReplicaSetRoleResponseBody(const DescribeReplicaSetRoleResponseBody &) = default ;
    DescribeReplicaSetRoleResponseBody(DescribeReplicaSetRoleResponseBody &&) = default ;
    DescribeReplicaSetRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicaSetRoleResponseBody() = default ;
    DescribeReplicaSetRoleResponseBody& operator=(const DescribeReplicaSetRoleResponseBody &) = default ;
    DescribeReplicaSetRoleResponseBody& operator=(DescribeReplicaSetRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReplicaSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReplicaSets& obj) { 
        DARABONBA_PTR_TO_JSON(ReplicaSet, replicaSet_);
      };
      friend void from_json(const Darabonba::Json& j, ReplicaSets& obj) { 
        DARABONBA_PTR_FROM_JSON(ReplicaSet, replicaSet_);
      };
      ReplicaSets() = default ;
      ReplicaSets(const ReplicaSets &) = default ;
      ReplicaSets(ReplicaSets &&) = default ;
      ReplicaSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReplicaSets() = default ;
      ReplicaSets& operator=(const ReplicaSets &) = default ;
      ReplicaSets& operator=(ReplicaSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReplicaSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReplicaSet& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_TO_JSON(ConnectionPort, connectionPort_);
          DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(ReplicaSetRole, replicaSetRole_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        };
        friend void from_json(const Darabonba::Json& j, ReplicaSet& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDomain, connectionDomain_);
          DARABONBA_PTR_FROM_JSON(ConnectionPort, connectionPort_);
          DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(ReplicaSetRole, replicaSetRole_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        };
        ReplicaSet() = default ;
        ReplicaSet(const ReplicaSet &) = default ;
        ReplicaSet(ReplicaSet &&) = default ;
        ReplicaSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReplicaSet() = default ;
        ReplicaSet& operator=(const ReplicaSet &) = default ;
        ReplicaSet& operator=(ReplicaSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDomain_ == nullptr
        && this->connectionPort_ == nullptr && this->connectionType_ == nullptr && this->expiredTime_ == nullptr && this->networkType_ == nullptr && this->replicaSetRole_ == nullptr
        && this->roleId_ == nullptr; };
        // connectionDomain Field Functions 
        bool hasConnectionDomain() const { return this->connectionDomain_ != nullptr;};
        void deleteConnectionDomain() { this->connectionDomain_ = nullptr;};
        inline string getConnectionDomain() const { DARABONBA_PTR_GET_DEFAULT(connectionDomain_, "") };
        inline ReplicaSet& setConnectionDomain(string connectionDomain) { DARABONBA_PTR_SET_VALUE(connectionDomain_, connectionDomain) };


        // connectionPort Field Functions 
        bool hasConnectionPort() const { return this->connectionPort_ != nullptr;};
        void deleteConnectionPort() { this->connectionPort_ = nullptr;};
        inline string getConnectionPort() const { DARABONBA_PTR_GET_DEFAULT(connectionPort_, "") };
        inline ReplicaSet& setConnectionPort(string connectionPort) { DARABONBA_PTR_SET_VALUE(connectionPort_, connectionPort) };


        // connectionType Field Functions 
        bool hasConnectionType() const { return this->connectionType_ != nullptr;};
        void deleteConnectionType() { this->connectionType_ = nullptr;};
        inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
        inline ReplicaSet& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline ReplicaSet& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline ReplicaSet& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // replicaSetRole Field Functions 
        bool hasReplicaSetRole() const { return this->replicaSetRole_ != nullptr;};
        void deleteReplicaSetRole() { this->replicaSetRole_ = nullptr;};
        inline string getReplicaSetRole() const { DARABONBA_PTR_GET_DEFAULT(replicaSetRole_, "") };
        inline ReplicaSet& setReplicaSetRole(string replicaSetRole) { DARABONBA_PTR_SET_VALUE(replicaSetRole_, replicaSetRole) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline ReplicaSet& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      protected:
        // The endpoint of the node.
        shared_ptr<string> connectionDomain_ {};
        // The port number that is used to connect to the node.
        shared_ptr<string> connectionPort_ {};
        // The connection type of the node.
        shared_ptr<string> connectionType_ {};
        // The remaining duration of the classic network endpoint. Unit: seconds.
        shared_ptr<string> expiredTime_ {};
        // The network type of the instance. Valid values:
        // 
        // *   **VPC**: the virtual private cloud (VPC)
        // *   **Classic**: the classic network
        // *   **Public**: the Internet
        shared_ptr<string> networkType_ {};
        // The role of the node in the replica set instance. Valid values:
        // 
        // *   **Primary**
        // *   **Secondary**
        shared_ptr<string> replicaSetRole_ {};
        // The role ID of the node.
        shared_ptr<string> roleId_ {};
      };

      virtual bool empty() const override { return this->replicaSet_ == nullptr; };
      // replicaSet Field Functions 
      bool hasReplicaSet() const { return this->replicaSet_ != nullptr;};
      void deleteReplicaSet() { this->replicaSet_ = nullptr;};
      inline const vector<ReplicaSets::ReplicaSet> & getReplicaSet() const { DARABONBA_PTR_GET_CONST(replicaSet_, vector<ReplicaSets::ReplicaSet>) };
      inline vector<ReplicaSets::ReplicaSet> getReplicaSet() { DARABONBA_PTR_GET(replicaSet_, vector<ReplicaSets::ReplicaSet>) };
      inline ReplicaSets& setReplicaSet(const vector<ReplicaSets::ReplicaSet> & replicaSet) { DARABONBA_PTR_SET_VALUE(replicaSet_, replicaSet) };
      inline ReplicaSets& setReplicaSet(vector<ReplicaSets::ReplicaSet> && replicaSet) { DARABONBA_PTR_SET_RVALUE(replicaSet_, replicaSet) };


    protected:
      shared_ptr<vector<ReplicaSets::ReplicaSet>> replicaSet_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->replicaSets_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeReplicaSetRoleResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // replicaSets Field Functions 
    bool hasReplicaSets() const { return this->replicaSets_ != nullptr;};
    void deleteReplicaSets() { this->replicaSets_ = nullptr;};
    inline const DescribeReplicaSetRoleResponseBody::ReplicaSets & getReplicaSets() const { DARABONBA_PTR_GET_CONST(replicaSets_, DescribeReplicaSetRoleResponseBody::ReplicaSets) };
    inline DescribeReplicaSetRoleResponseBody::ReplicaSets getReplicaSets() { DARABONBA_PTR_GET(replicaSets_, DescribeReplicaSetRoleResponseBody::ReplicaSets) };
    inline DescribeReplicaSetRoleResponseBody& setReplicaSets(const DescribeReplicaSetRoleResponseBody::ReplicaSets & replicaSets) { DARABONBA_PTR_SET_VALUE(replicaSets_, replicaSets) };
    inline DescribeReplicaSetRoleResponseBody& setReplicaSets(DescribeReplicaSetRoleResponseBody::ReplicaSets && replicaSets) { DARABONBA_PTR_SET_RVALUE(replicaSets_, replicaSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReplicaSetRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The details of the roles of the replica set instance.
    shared_ptr<DescribeReplicaSetRoleResponseBody::ReplicaSets> replicaSets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
