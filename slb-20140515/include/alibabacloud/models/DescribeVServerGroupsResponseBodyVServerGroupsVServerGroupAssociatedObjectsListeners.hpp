// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& obj) { 
      DARABONBA_PTR_TO_JSON(Listener, listener_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(Listener, listener_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listener_ == nullptr; };
    // listener Field Functions 
    bool hasListener() const { return this->listener_ != nullptr;};
    void deleteListener() { this->listener_ = nullptr;};
    inline const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener> & listener() const { DARABONBA_PTR_GET_CONST(listener_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener>) };
    inline vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener> listener() { DARABONBA_PTR_GET(listener_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener>) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& setListener(const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener> & listener) { DARABONBA_PTR_SET_VALUE(listener_, listener) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListeners& setListener(vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener> && listener) { DARABONBA_PTR_SET_RVALUE(listener_, listener) };


  protected:
    std::shared_ptr<vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsListenersListener>> listener_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
