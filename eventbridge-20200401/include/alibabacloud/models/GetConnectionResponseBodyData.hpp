// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConnectionResponseBodyDataConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetConnectionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
    };
    GetConnectionResponseBodyData() = default ;
    GetConnectionResponseBodyData(const GetConnectionResponseBodyData &) = default ;
    GetConnectionResponseBodyData(GetConnectionResponseBodyData &&) = default ;
    GetConnectionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionResponseBodyData() = default ;
    GetConnectionResponseBodyData& operator=(const GetConnectionResponseBodyData &) = default ;
    GetConnectionResponseBodyData& operator=(GetConnectionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connections_ != nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<Models::GetConnectionResponseBodyDataConnections> & connections() const { DARABONBA_PTR_GET_CONST(connections_, vector<Models::GetConnectionResponseBodyDataConnections>) };
    inline vector<Models::GetConnectionResponseBodyDataConnections> connections() { DARABONBA_PTR_GET(connections_, vector<Models::GetConnectionResponseBodyDataConnections>) };
    inline GetConnectionResponseBodyData& setConnections(const vector<Models::GetConnectionResponseBodyDataConnections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline GetConnectionResponseBodyData& setConnections(vector<Models::GetConnectionResponseBodyDataConnections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


  protected:
    // The queried connections.
    std::shared_ptr<vector<Models::GetConnectionResponseBodyDataConnections>> connections_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
