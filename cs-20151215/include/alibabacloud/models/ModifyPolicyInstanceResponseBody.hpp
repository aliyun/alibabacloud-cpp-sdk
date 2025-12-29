// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyPolicyInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    ModifyPolicyInstanceResponseBody() = default ;
    ModifyPolicyInstanceResponseBody(const ModifyPolicyInstanceResponseBody &) = default ;
    ModifyPolicyInstanceResponseBody(ModifyPolicyInstanceResponseBody &&) = default ;
    ModifyPolicyInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyInstanceResponseBody() = default ;
    ModifyPolicyInstanceResponseBody& operator=(const ModifyPolicyInstanceResponseBody &) = default ;
    ModifyPolicyInstanceResponseBody& operator=(ModifyPolicyInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline ModifyPolicyInstanceResponseBody& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyPolicyInstanceResponseBody& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The list of policy instances that are updated.
    shared_ptr<vector<string>> instances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
