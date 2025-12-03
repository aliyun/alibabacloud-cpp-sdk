// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODYSUBSCRIPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONSRESPONSEBODYSUBSCRIPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSubscriptionsResponseBodySubscriptionsDBInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeSubscriptionsResponseBodySubscriptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionsResponseBodySubscriptions& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(Mapping, mapping_);
      DARABONBA_PTR_TO_JSON(SubscriptionDescription, subscriptionDescription_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(SubscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionsResponseBodySubscriptions& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(Mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(SubscriptionDescription, subscriptionDescription_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    DescribeSubscriptionsResponseBodySubscriptions() = default ;
    DescribeSubscriptionsResponseBodySubscriptions(const DescribeSubscriptionsResponseBodySubscriptions &) = default ;
    DescribeSubscriptionsResponseBodySubscriptions(DescribeSubscriptionsResponseBodySubscriptions &&) = default ;
    DescribeSubscriptionsResponseBodySubscriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionsResponseBodySubscriptions() = default ;
    DescribeSubscriptionsResponseBodySubscriptions& operator=(const DescribeSubscriptionsResponseBodySubscriptions &) = default ;
    DescribeSubscriptionsResponseBodySubscriptions& operator=(DescribeSubscriptionsResponseBodySubscriptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstances_ == nullptr
        && return this->mapping_ == nullptr && return this->subscriptionDescription_ == nullptr && return this->subscriptionId_ == nullptr && return this->subscriptionStatus_ == nullptr && return this->subscriptionType_ == nullptr; };
    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances>) };
    inline vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances>) };
    inline DescribeSubscriptionsResponseBodySubscriptions& setDBInstances(const vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline DescribeSubscriptionsResponseBodySubscriptions& setDBInstances(vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline string mapping() const { DARABONBA_PTR_GET_DEFAULT(mapping_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptions& setMapping(string mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };


    // subscriptionDescription Field Functions 
    bool hasSubscriptionDescription() const { return this->subscriptionDescription_ != nullptr;};
    void deleteSubscriptionDescription() { this->subscriptionDescription_ = nullptr;};
    inline string subscriptionDescription() const { DARABONBA_PTR_GET_DEFAULT(subscriptionDescription_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptions& setSubscriptionDescription(string subscriptionDescription) { DARABONBA_PTR_SET_VALUE(subscriptionDescription_, subscriptionDescription) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string subscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptions& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // subscriptionStatus Field Functions 
    bool hasSubscriptionStatus() const { return this->subscriptionStatus_ != nullptr;};
    void deleteSubscriptionStatus() { this->subscriptionStatus_ = nullptr;};
    inline string subscriptionStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStatus_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptions& setSubscriptionStatus(string subscriptionStatus) { DARABONBA_PTR_SET_VALUE(subscriptionStatus_, subscriptionStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeSubscriptionsResponseBodySubscriptions& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    std::shared_ptr<vector<Models::DescribeSubscriptionsResponseBodySubscriptionsDBInstances>> DBInstances_ = nullptr;
    std::shared_ptr<string> mapping_ = nullptr;
    std::shared_ptr<string> subscriptionDescription_ = nullptr;
    std::shared_ptr<string> subscriptionId_ = nullptr;
    std::shared_ptr<string> subscriptionStatus_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
