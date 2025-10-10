// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig() = default ;
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig(const ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig &) = default ;
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig(ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig &&) = default ;
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig() = default ;
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& operator=(const ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig &) = default ;
    ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& operator=(ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig& setServerGroupTuples(vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The server groups to which requests are forwarded.
    std::shared_ptr<vector<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
