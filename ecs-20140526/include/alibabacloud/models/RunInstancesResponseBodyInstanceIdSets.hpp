// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESRESPONSEBODYINSTANCEIDSETS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESRESPONSEBODYINSTANCEIDSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesResponseBodyInstanceIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesResponseBodyInstanceIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesResponseBodyInstanceIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
    };
    RunInstancesResponseBodyInstanceIdSets() = default ;
    RunInstancesResponseBodyInstanceIdSets(const RunInstancesResponseBodyInstanceIdSets &) = default ;
    RunInstancesResponseBodyInstanceIdSets(RunInstancesResponseBodyInstanceIdSets &&) = default ;
    RunInstancesResponseBodyInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesResponseBodyInstanceIdSets() = default ;
    RunInstancesResponseBodyInstanceIdSets& operator=(const RunInstancesResponseBodyInstanceIdSets &) = default ;
    RunInstancesResponseBodyInstanceIdSets& operator=(RunInstancesResponseBodyInstanceIdSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIdSet_ == nullptr; };
    // instanceIdSet Field Functions 
    bool hasInstanceIdSet() const { return this->instanceIdSet_ != nullptr;};
    void deleteInstanceIdSet() { this->instanceIdSet_ = nullptr;};
    inline const vector<string> & instanceIdSet() const { DARABONBA_PTR_GET_CONST(instanceIdSet_, vector<string>) };
    inline vector<string> instanceIdSet() { DARABONBA_PTR_GET(instanceIdSet_, vector<string>) };
    inline RunInstancesResponseBodyInstanceIdSets& setInstanceIdSet(const vector<string> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
    inline RunInstancesResponseBodyInstanceIdSets& setInstanceIdSet(vector<string> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


  protected:
    std::shared_ptr<vector<string>> instanceIdSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
