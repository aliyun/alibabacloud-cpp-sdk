// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODYINSTANCEIDSETS_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESRESPONSEBODYINSTANCEIDSETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesResponseBodyInstanceIdSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesResponseBodyInstanceIdSets& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSet, instanceIdSet_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesResponseBodyInstanceIdSets& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSet, instanceIdSet_);
    };
    RunRCInstancesResponseBodyInstanceIdSets() = default ;
    RunRCInstancesResponseBodyInstanceIdSets(const RunRCInstancesResponseBodyInstanceIdSets &) = default ;
    RunRCInstancesResponseBodyInstanceIdSets(RunRCInstancesResponseBodyInstanceIdSets &&) = default ;
    RunRCInstancesResponseBodyInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesResponseBodyInstanceIdSets() = default ;
    RunRCInstancesResponseBodyInstanceIdSets& operator=(const RunRCInstancesResponseBodyInstanceIdSets &) = default ;
    RunRCInstancesResponseBodyInstanceIdSets& operator=(RunRCInstancesResponseBodyInstanceIdSets &&) = default ;
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
    inline RunRCInstancesResponseBodyInstanceIdSets& setInstanceIdSet(const vector<string> & instanceIdSet) { DARABONBA_PTR_SET_VALUE(instanceIdSet_, instanceIdSet) };
    inline RunRCInstancesResponseBodyInstanceIdSets& setInstanceIdSet(vector<string> && instanceIdSet) { DARABONBA_PTR_SET_RVALUE(instanceIdSet_, instanceIdSet) };


  protected:
    std::shared_ptr<vector<string>> instanceIdSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
