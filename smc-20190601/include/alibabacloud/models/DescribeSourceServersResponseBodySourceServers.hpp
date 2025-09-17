// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServers& obj) { 
      DARABONBA_PTR_TO_JSON(SourceServer, sourceServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServers& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceServer, sourceServer_);
    };
    DescribeSourceServersResponseBodySourceServers() = default ;
    DescribeSourceServersResponseBodySourceServers(const DescribeSourceServersResponseBodySourceServers &) = default ;
    DescribeSourceServersResponseBodySourceServers(DescribeSourceServersResponseBodySourceServers &&) = default ;
    DescribeSourceServersResponseBodySourceServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServers() = default ;
    DescribeSourceServersResponseBodySourceServers& operator=(const DescribeSourceServersResponseBodySourceServers &) = default ;
    DescribeSourceServersResponseBodySourceServers& operator=(DescribeSourceServersResponseBodySourceServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceServer_ != nullptr; };
    // sourceServer Field Functions 
    bool hasSourceServer() const { return this->sourceServer_ != nullptr;};
    void deleteSourceServer() { this->sourceServer_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer> & sourceServer() const { DARABONBA_PTR_GET_CONST(sourceServer_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer> sourceServer() { DARABONBA_PTR_GET(sourceServer_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer>) };
    inline DescribeSourceServersResponseBodySourceServers& setSourceServer(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer> & sourceServer) { DARABONBA_PTR_SET_VALUE(sourceServer_, sourceServer) };
    inline DescribeSourceServersResponseBodySourceServers& setSourceServer(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer> && sourceServer) { DARABONBA_PTR_SET_RVALUE(sourceServer_, sourceServer) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServer>> sourceServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
