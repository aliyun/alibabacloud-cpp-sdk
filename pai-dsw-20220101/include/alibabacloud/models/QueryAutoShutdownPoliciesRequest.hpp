// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUTOSHUTDOWNPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUTOSHUTDOWNPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class QueryAutoShutdownPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAutoShutdownPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAutoShutdownPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
    };
    QueryAutoShutdownPoliciesRequest() = default ;
    QueryAutoShutdownPoliciesRequest(const QueryAutoShutdownPoliciesRequest &) = default ;
    QueryAutoShutdownPoliciesRequest(QueryAutoShutdownPoliciesRequest &&) = default ;
    QueryAutoShutdownPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAutoShutdownPoliciesRequest() = default ;
    QueryAutoShutdownPoliciesRequest& operator=(const QueryAutoShutdownPoliciesRequest &) = default ;
    QueryAutoShutdownPoliciesRequest& operator=(QueryAutoShutdownPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->token_ == nullptr && this->instanceIds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryAutoShutdownPoliciesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline QueryAutoShutdownPoliciesRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline QueryAutoShutdownPoliciesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline QueryAutoShutdownPoliciesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> token_ {};
    shared_ptr<vector<string>> instanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
