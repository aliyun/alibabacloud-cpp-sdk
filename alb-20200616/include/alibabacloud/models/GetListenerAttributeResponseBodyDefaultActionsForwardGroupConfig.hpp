// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYDEFAULTACTIONSFORWARDGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
    };
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig() = default ;
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig(const GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig &) = default ;
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig(GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig &&) = default ;
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig() = default ;
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& operator=(const GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig &) = default ;
    GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& operator=(GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serverGroupTuples_ != nullptr; };
    // serverGroupTuples Field Functions 
    bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
    void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
    inline const vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples> serverGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples>) };
    inline GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& setServerGroupTuples(const vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
    inline GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig& setServerGroupTuples(vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


  protected:
    // The server group to which requests are forwarded.
    std::shared_ptr<vector<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfigServerGroupTuples>> serverGroupTuples_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
