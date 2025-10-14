// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYAFFINITY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYAFFINITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyAffinityCPU.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBodyAffinity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyAffinity& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyAffinity& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
    };
    GetInstanceResponseBodyAffinity() = default ;
    GetInstanceResponseBodyAffinity(const GetInstanceResponseBodyAffinity &) = default ;
    GetInstanceResponseBodyAffinity(GetInstanceResponseBodyAffinity &&) = default ;
    GetInstanceResponseBodyAffinity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyAffinity() = default ;
    GetInstanceResponseBodyAffinity& operator=(const GetInstanceResponseBodyAffinity &) = default ;
    GetInstanceResponseBodyAffinity& operator=(GetInstanceResponseBodyAffinity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline const Models::GetInstanceResponseBodyAffinityCPU & CPU() const { DARABONBA_PTR_GET_CONST(CPU_, Models::GetInstanceResponseBodyAffinityCPU) };
    inline Models::GetInstanceResponseBodyAffinityCPU CPU() { DARABONBA_PTR_GET(CPU_, Models::GetInstanceResponseBodyAffinityCPU) };
    inline GetInstanceResponseBodyAffinity& setCPU(const Models::GetInstanceResponseBodyAffinityCPU & CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };
    inline GetInstanceResponseBodyAffinity& setCPU(Models::GetInstanceResponseBodyAffinityCPU && CPU) { DARABONBA_PTR_SET_RVALUE(CPU_, CPU) };


  protected:
    // The CPU affinity configuration. Only subscription instances that use general-purpose computing resources support CPU affinity configuration.
    std::shared_ptr<Models::GetInstanceResponseBodyAffinityCPU> CPU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
