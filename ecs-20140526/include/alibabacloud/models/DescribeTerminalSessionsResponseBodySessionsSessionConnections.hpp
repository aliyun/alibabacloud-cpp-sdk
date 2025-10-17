// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSIONCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETERMINALSESSIONSRESPONSEBODYSESSIONSSESSIONCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeTerminalSessionsResponseBodySessionsSessionConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTerminalSessionsResponseBodySessionsSessionConnections& obj) { 
      DARABONBA_PTR_TO_JSON(Connection, connection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTerminalSessionsResponseBodySessionsSessionConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(Connection, connection_);
    };
    DescribeTerminalSessionsResponseBodySessionsSessionConnections() = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnections(const DescribeTerminalSessionsResponseBodySessionsSessionConnections &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnections(DescribeTerminalSessionsResponseBodySessionsSessionConnections &&) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTerminalSessionsResponseBodySessionsSessionConnections() = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnections& operator=(const DescribeTerminalSessionsResponseBodySessionsSessionConnections &) = default ;
    DescribeTerminalSessionsResponseBodySessionsSessionConnections& operator=(DescribeTerminalSessionsResponseBodySessionsSessionConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connection_ == nullptr; };
    // connection Field Functions 
    bool hasConnection() const { return this->connection_ != nullptr;};
    void deleteConnection() { this->connection_ = nullptr;};
    inline const vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection> & connection() const { DARABONBA_PTR_GET_CONST(connection_, vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection>) };
    inline vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection> connection() { DARABONBA_PTR_GET(connection_, vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection>) };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnections& setConnection(const vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection> & connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };
    inline DescribeTerminalSessionsResponseBodySessionsSessionConnections& setConnection(vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection> && connection) { DARABONBA_PTR_SET_RVALUE(connection_, connection) };


  protected:
    std::shared_ptr<vector<Models::DescribeTerminalSessionsResponseBodySessionsSessionConnectionsConnection>> connection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
