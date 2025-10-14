// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTAFFINITY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTAFFINITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestAffinityCPU.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateInstanceRequestAffinity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestAffinity& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestAffinity& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
    };
    CreateInstanceRequestAffinity() = default ;
    CreateInstanceRequestAffinity(const CreateInstanceRequestAffinity &) = default ;
    CreateInstanceRequestAffinity(CreateInstanceRequestAffinity &&) = default ;
    CreateInstanceRequestAffinity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestAffinity() = default ;
    CreateInstanceRequestAffinity& operator=(const CreateInstanceRequestAffinity &) = default ;
    CreateInstanceRequestAffinity& operator=(CreateInstanceRequestAffinity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline const Models::CreateInstanceRequestAffinityCPU & CPU() const { DARABONBA_PTR_GET_CONST(CPU_, Models::CreateInstanceRequestAffinityCPU) };
    inline Models::CreateInstanceRequestAffinityCPU CPU() { DARABONBA_PTR_GET(CPU_, Models::CreateInstanceRequestAffinityCPU) };
    inline CreateInstanceRequestAffinity& setCPU(const Models::CreateInstanceRequestAffinityCPU & CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };
    inline CreateInstanceRequestAffinity& setCPU(Models::CreateInstanceRequestAffinityCPU && CPU) { DARABONBA_PTR_SET_RVALUE(CPU_, CPU) };


  protected:
    // The CPU affinity configuration. Only subscription instances that use general-purpose computing resources support CPU affinity configuration.
    std::shared_ptr<Models::CreateInstanceRequestAffinityCPU> CPU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
