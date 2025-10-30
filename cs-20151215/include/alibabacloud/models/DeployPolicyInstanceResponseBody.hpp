// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYPOLICYINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYPOLICYINSTANCERESPONSEBODY_HPP_
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
  class DeployPolicyInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployPolicyInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, DeployPolicyInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instances, instances_);
    };
    DeployPolicyInstanceResponseBody() = default ;
    DeployPolicyInstanceResponseBody(const DeployPolicyInstanceResponseBody &) = default ;
    DeployPolicyInstanceResponseBody(DeployPolicyInstanceResponseBody &&) = default ;
    DeployPolicyInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployPolicyInstanceResponseBody() = default ;
    DeployPolicyInstanceResponseBody& operator=(const DeployPolicyInstanceResponseBody &) = default ;
    DeployPolicyInstanceResponseBody& operator=(DeployPolicyInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline DeployPolicyInstanceResponseBody& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DeployPolicyInstanceResponseBody& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // A list of policy instances.
    std::shared_ptr<vector<string>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
