// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmInstancesResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    ListCloudGtmInstancesResponseBodyInstances() = default ;
    ListCloudGtmInstancesResponseBodyInstances(const ListCloudGtmInstancesResponseBodyInstances &) = default ;
    ListCloudGtmInstancesResponseBodyInstances(ListCloudGtmInstancesResponseBodyInstances &&) = default ;
    ListCloudGtmInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstancesResponseBodyInstances() = default ;
    ListCloudGtmInstancesResponseBodyInstances& operator=(const ListCloudGtmInstancesResponseBodyInstances &) = default ;
    ListCloudGtmInstancesResponseBodyInstances& operator=(ListCloudGtmInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance>) };
    inline vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance>) };
    inline ListCloudGtmInstancesResponseBodyInstances& setInstance(const vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ListCloudGtmInstancesResponseBodyInstances& setInstance(vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmInstancesResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
