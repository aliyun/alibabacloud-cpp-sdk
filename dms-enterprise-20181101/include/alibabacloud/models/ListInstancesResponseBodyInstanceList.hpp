// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstancesResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    ListInstancesResponseBodyInstanceList() = default ;
    ListInstancesResponseBodyInstanceList(const ListInstancesResponseBodyInstanceList &) = default ;
    ListInstancesResponseBodyInstanceList(ListInstancesResponseBodyInstanceList &&) = default ;
    ListInstancesResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstanceList() = default ;
    ListInstancesResponseBodyInstanceList& operator=(const ListInstancesResponseBodyInstanceList &) = default ;
    ListInstancesResponseBodyInstanceList& operator=(ListInstancesResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstanceListInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::ListInstancesResponseBodyInstanceListInstance>) };
    inline vector<Models::ListInstancesResponseBodyInstanceListInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::ListInstancesResponseBodyInstanceListInstance>) };
    inline ListInstancesResponseBodyInstanceList& setInstance(const vector<Models::ListInstancesResponseBodyInstanceListInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline ListInstancesResponseBodyInstanceList& setInstance(vector<Models::ListInstancesResponseBodyInstanceListInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstanceListInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
