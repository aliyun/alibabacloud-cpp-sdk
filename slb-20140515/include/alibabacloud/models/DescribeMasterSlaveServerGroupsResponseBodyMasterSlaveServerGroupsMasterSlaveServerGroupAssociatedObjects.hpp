// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUPASSOCIATEDOBJECTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPSRESPONSEBODYMASTERSLAVESERVERGROUPSMASTERSLAVESERVERGROUPASSOCIATEDOBJECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects &&) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects() = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& operator=(const DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects &) = default ;
    DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& operator=(DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listeners_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners) };
    inline Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners listeners() { DARABONBA_PTR_GET(listeners_, Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& setListeners(const Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjects& setListeners(Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


  protected:
    // The listeners.
    std::shared_ptr<Models::DescribeMasterSlaveServerGroupsResponseBodyMasterSlaveServerGroupsMasterSlaveServerGroupAssociatedObjectsListeners> listeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
