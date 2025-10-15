// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForNetworkZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForNetworkZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkZoneId, networkZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForNetworkZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkZoneId, networkZoneId_);
    };
    ListConditionalAccessPoliciesForNetworkZoneRequest() = default ;
    ListConditionalAccessPoliciesForNetworkZoneRequest(const ListConditionalAccessPoliciesForNetworkZoneRequest &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneRequest(ListConditionalAccessPoliciesForNetworkZoneRequest &&) = default ;
    ListConditionalAccessPoliciesForNetworkZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForNetworkZoneRequest() = default ;
    ListConditionalAccessPoliciesForNetworkZoneRequest& operator=(const ListConditionalAccessPoliciesForNetworkZoneRequest &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneRequest& operator=(ListConditionalAccessPoliciesForNetworkZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->networkZoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConditionalAccessPoliciesForNetworkZoneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkZoneId Field Functions 
    bool hasNetworkZoneId() const { return this->networkZoneId_ != nullptr;};
    void deleteNetworkZoneId() { this->networkZoneId_ = nullptr;};
    inline string networkZoneId() const { DARABONBA_PTR_GET_DEFAULT(networkZoneId_, "") };
    inline ListConditionalAccessPoliciesForNetworkZoneRequest& setNetworkZoneId(string networkZoneId) { DARABONBA_PTR_SET_VALUE(networkZoneId_, networkZoneId) };


  protected:
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Application ID associated with the conditional access policy
    // 
    // This parameter is required.
    std::shared_ptr<string> networkZoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
