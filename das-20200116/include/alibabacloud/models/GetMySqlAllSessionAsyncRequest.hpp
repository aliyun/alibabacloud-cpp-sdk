// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMYSQLALLSESSIONASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMySQLAllSessionAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMySQLAllSessionAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMySQLAllSessionAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
    };
    GetMySQLAllSessionAsyncRequest() = default ;
    GetMySQLAllSessionAsyncRequest(const GetMySQLAllSessionAsyncRequest &) = default ;
    GetMySQLAllSessionAsyncRequest(GetMySQLAllSessionAsyncRequest &&) = default ;
    GetMySQLAllSessionAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMySQLAllSessionAsyncRequest() = default ;
    GetMySQLAllSessionAsyncRequest& operator=(const GetMySQLAllSessionAsyncRequest &) = default ;
    GetMySQLAllSessionAsyncRequest& operator=(GetMySQLAllSessionAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->resultId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetMySQLAllSessionAsyncRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetMySQLAllSessionAsyncRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline GetMySQLAllSessionAsyncRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The instance ID.
    // 
    // >  Only ApsaraDB RDS for MySQL, PolarDB for MySQL, and PolarDB-X 2.0 instances are supported.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID.
    // 
    // >  You must specify this parameter for PolarDB for MySQL clusters. If you do not specify a node ID, the session data of the primary node is returned by default.
    shared_ptr<string> nodeId_ {};
    // The asynchronous request ID.
    // 
    // >  GetMySQLAllSessionAsync is an asynchronous operation. After a request is sent, the system does not return complete results but returns a **request ID**. You need to use the **request ID** to initiate requests until the value of the **isFinish** field in the returned results is **true**, the complete results are returned. This indicates that to obtain complete data, you must call this operation at least twice.
    shared_ptr<string> resultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
