// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners.hpp>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listeners_ == nullptr
        && return this->rules_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners) };
    inline Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners listeners() { DARABONBA_PTR_GET(listeners_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& setListeners(const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& setListeners(Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules) };
    inline Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules rules() { DARABONBA_PTR_GET(rules_, Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& setRules(const Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjects& setRules(Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The listeners.
    std::shared_ptr<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners> listeners_ = nullptr;
    // The forwarding rules.
    std::shared_ptr<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
