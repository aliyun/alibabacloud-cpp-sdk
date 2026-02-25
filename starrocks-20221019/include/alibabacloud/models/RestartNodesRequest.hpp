// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class RestartNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RestartNodeGroups, restartNodeGroups_);
    };
    friend void from_json(const Darabonba::Json& j, RestartNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RestartNodeGroups, restartNodeGroups_);
    };
    RestartNodesRequest() = default ;
    RestartNodesRequest(const RestartNodesRequest &) = default ;
    RestartNodesRequest(RestartNodesRequest &&) = default ;
    RestartNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartNodesRequest() = default ;
    RestartNodesRequest& operator=(const RestartNodesRequest &) = default ;
    RestartNodesRequest& operator=(RestartNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestartNodeGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestartNodeGroups& obj) { 
        DARABONBA_PTR_TO_JSON(FastMode, fastMode_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      };
      friend void from_json(const Darabonba::Json& j, RestartNodeGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(FastMode, fastMode_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      };
      RestartNodeGroups() = default ;
      RestartNodeGroups(const RestartNodeGroups &) = default ;
      RestartNodeGroups(RestartNodeGroups &&) = default ;
      RestartNodeGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestartNodeGroups() = default ;
      RestartNodeGroups& operator=(const RestartNodeGroups &) = default ;
      RestartNodeGroups& operator=(RestartNodeGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fastMode_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeIds_ == nullptr; };
      // fastMode Field Functions 
      bool hasFastMode() const { return this->fastMode_ != nullptr;};
      void deleteFastMode() { this->fastMode_ = nullptr;};
      inline bool getFastMode() const { DARABONBA_PTR_GET_DEFAULT(fastMode_, false) };
      inline RestartNodeGroups& setFastMode(bool fastMode) { DARABONBA_PTR_SET_VALUE(fastMode_, fastMode) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline RestartNodeGroups& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeIds Field Functions 
      bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
      void deleteNodeIds() { this->nodeIds_ = nullptr;};
      inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
      inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
      inline RestartNodeGroups& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
      inline RestartNodeGroups& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    protected:
      shared_ptr<bool> fastMode_ {};
      shared_ptr<string> nodeGroupId_ {};
      shared_ptr<vector<string>> nodeIds_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->restartNodeGroups_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RestartNodesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // restartNodeGroups Field Functions 
    bool hasRestartNodeGroups() const { return this->restartNodeGroups_ != nullptr;};
    void deleteRestartNodeGroups() { this->restartNodeGroups_ = nullptr;};
    inline const vector<RestartNodesRequest::RestartNodeGroups> & getRestartNodeGroups() const { DARABONBA_PTR_GET_CONST(restartNodeGroups_, vector<RestartNodesRequest::RestartNodeGroups>) };
    inline vector<RestartNodesRequest::RestartNodeGroups> getRestartNodeGroups() { DARABONBA_PTR_GET(restartNodeGroups_, vector<RestartNodesRequest::RestartNodeGroups>) };
    inline RestartNodesRequest& setRestartNodeGroups(const vector<RestartNodesRequest::RestartNodeGroups> & restartNodeGroups) { DARABONBA_PTR_SET_VALUE(restartNodeGroups_, restartNodeGroups) };
    inline RestartNodesRequest& setRestartNodeGroups(vector<RestartNodesRequest::RestartNodeGroups> && restartNodeGroups) { DARABONBA_PTR_SET_RVALUE(restartNodeGroups_, restartNodeGroups) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<RestartNodesRequest::RestartNodeGroups>> restartNodeGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
