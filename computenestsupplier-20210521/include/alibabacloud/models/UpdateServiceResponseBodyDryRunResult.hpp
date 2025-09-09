// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODYDRYRUNRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICERESPONSEBODYDRYRUNRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceResponseBodyDryRunResultRolePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceResponseBodyDryRunResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_TO_JSON(RolePolicy, rolePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceResponseBodyDryRunResult& obj) { 
      DARABONBA_PTR_FROM_JSON(RolePolicy, rolePolicy_);
    };
    UpdateServiceResponseBodyDryRunResult() = default ;
    UpdateServiceResponseBodyDryRunResult(const UpdateServiceResponseBodyDryRunResult &) = default ;
    UpdateServiceResponseBodyDryRunResult(UpdateServiceResponseBodyDryRunResult &&) = default ;
    UpdateServiceResponseBodyDryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceResponseBodyDryRunResult() = default ;
    UpdateServiceResponseBodyDryRunResult& operator=(const UpdateServiceResponseBodyDryRunResult &) = default ;
    UpdateServiceResponseBodyDryRunResult& operator=(UpdateServiceResponseBodyDryRunResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rolePolicy_ != nullptr; };
    // rolePolicy Field Functions 
    bool hasRolePolicy() const { return this->rolePolicy_ != nullptr;};
    void deleteRolePolicy() { this->rolePolicy_ = nullptr;};
    inline const Models::UpdateServiceResponseBodyDryRunResultRolePolicy & rolePolicy() const { DARABONBA_PTR_GET_CONST(rolePolicy_, Models::UpdateServiceResponseBodyDryRunResultRolePolicy) };
    inline Models::UpdateServiceResponseBodyDryRunResultRolePolicy rolePolicy() { DARABONBA_PTR_GET(rolePolicy_, Models::UpdateServiceResponseBodyDryRunResultRolePolicy) };
    inline UpdateServiceResponseBodyDryRunResult& setRolePolicy(const Models::UpdateServiceResponseBodyDryRunResultRolePolicy & rolePolicy) { DARABONBA_PTR_SET_VALUE(rolePolicy_, rolePolicy) };
    inline UpdateServiceResponseBodyDryRunResult& setRolePolicy(Models::UpdateServiceResponseBodyDryRunResultRolePolicy && rolePolicy) { DARABONBA_PTR_SET_RVALUE(rolePolicy_, rolePolicy) };


  protected:
    // The required ram policy for deploying role.
    std::shared_ptr<Models::UpdateServiceResponseBodyDryRunResultRolePolicy> rolePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
