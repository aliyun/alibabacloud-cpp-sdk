// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDBInstanceTopologyResponseBodyDataConnections.hpp>
#include <alibabacloud/models/GetDBInstanceTopologyResponseBodyDataNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDBInstanceTopologyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceTopologyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceTopologyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
    };
    GetDBInstanceTopologyResponseBodyData() = default ;
    GetDBInstanceTopologyResponseBodyData(const GetDBInstanceTopologyResponseBodyData &) = default ;
    GetDBInstanceTopologyResponseBodyData(GetDBInstanceTopologyResponseBodyData &&) = default ;
    GetDBInstanceTopologyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceTopologyResponseBodyData() = default ;
    GetDBInstanceTopologyResponseBodyData& operator=(const GetDBInstanceTopologyResponseBodyData &) = default ;
    GetDBInstanceTopologyResponseBodyData& operator=(GetDBInstanceTopologyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connections_ == nullptr
        && return this->DBInstanceName_ == nullptr && return this->nodes_ == nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<Models::GetDBInstanceTopologyResponseBodyDataConnections> & connections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Models::GetDBInstanceTopologyResponseBodyDataConnections>) };
    inline vector<Models::GetDBInstanceTopologyResponseBodyDataConnections> connections() { DARABONBA_PTR_GET(connections_, vector<Models::GetDBInstanceTopologyResponseBodyDataConnections>) };
    inline GetDBInstanceTopologyResponseBodyData& setConnections(const vector<Models::GetDBInstanceTopologyResponseBodyDataConnections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline GetDBInstanceTopologyResponseBodyData& setConnections(vector<Models::GetDBInstanceTopologyResponseBodyDataConnections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline GetDBInstanceTopologyResponseBodyData& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetDBInstanceTopologyResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetDBInstanceTopologyResponseBodyDataNodes>) };
    inline vector<Models::GetDBInstanceTopologyResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetDBInstanceTopologyResponseBodyDataNodes>) };
    inline GetDBInstanceTopologyResponseBodyData& setNodes(const vector<Models::GetDBInstanceTopologyResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetDBInstanceTopologyResponseBodyData& setNodes(vector<Models::GetDBInstanceTopologyResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


  protected:
    // The network connection information of the instance.
    std::shared_ptr<vector<Models::GetDBInstanceTopologyResponseBodyDataConnections>> connections_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The queried nodes.
    std::shared_ptr<vector<Models::GetDBInstanceTopologyResponseBodyDataNodes>> nodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
