// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMONGODBCURRENTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetMongoDBCurrentOpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMongoDBCurrentOpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterDoc, filterDoc_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GetMongoDBCurrentOpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterDoc, filterDoc_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    GetMongoDBCurrentOpRequest() = default ;
    GetMongoDBCurrentOpRequest(const GetMongoDBCurrentOpRequest &) = default ;
    GetMongoDBCurrentOpRequest(GetMongoDBCurrentOpRequest &&) = default ;
    GetMongoDBCurrentOpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMongoDBCurrentOpRequest() = default ;
    GetMongoDBCurrentOpRequest& operator=(const GetMongoDBCurrentOpRequest &) = default ;
    GetMongoDBCurrentOpRequest& operator=(GetMongoDBCurrentOpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterDoc_ == nullptr
        && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->role_ == nullptr; };
    // filterDoc Field Functions 
    bool hasFilterDoc() const { return this->filterDoc_ != nullptr;};
    void deleteFilterDoc() { this->filterDoc_ = nullptr;};
    inline string getFilterDoc() const { DARABONBA_PTR_GET_DEFAULT(filterDoc_, "") };
    inline GetMongoDBCurrentOpRequest& setFilterDoc(string filterDoc) { DARABONBA_PTR_SET_VALUE(filterDoc_, filterDoc) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetMongoDBCurrentOpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetMongoDBCurrentOpRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetMongoDBCurrentOpRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // The `db.currentOp()` command that is used to filter sessions. For more information, see [db.currentOp()](https://docs.mongodb.com/manual/reference/method/db.currentOp/) of MongoDB Documentation.
    shared_ptr<string> filterDoc_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The node ID.
    // 
    // >  If you do not specify a node ID, the sessions of the primary node are queried by default.
    shared_ptr<string> nodeId_ {};
    // A reserved parameter. You do not need to specify the parameter.
    shared_ptr<string> role_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
