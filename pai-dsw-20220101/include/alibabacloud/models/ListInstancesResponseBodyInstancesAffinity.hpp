// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESAFFINITY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESAFFINITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstancesAffinityCPU.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstancesAffinity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesAffinity& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesAffinity& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
    };
    ListInstancesResponseBodyInstancesAffinity() = default ;
    ListInstancesResponseBodyInstancesAffinity(const ListInstancesResponseBodyInstancesAffinity &) = default ;
    ListInstancesResponseBodyInstancesAffinity(ListInstancesResponseBodyInstancesAffinity &&) = default ;
    ListInstancesResponseBodyInstancesAffinity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesAffinity() = default ;
    ListInstancesResponseBodyInstancesAffinity& operator=(const ListInstancesResponseBodyInstancesAffinity &) = default ;
    ListInstancesResponseBodyInstancesAffinity& operator=(ListInstancesResponseBodyInstancesAffinity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstancesAffinityCPU & CPU() const { DARABONBA_PTR_GET_CONST(CPU_, Models::ListInstancesResponseBodyInstancesAffinityCPU) };
    inline Models::ListInstancesResponseBodyInstancesAffinityCPU CPU() { DARABONBA_PTR_GET(CPU_, Models::ListInstancesResponseBodyInstancesAffinityCPU) };
    inline ListInstancesResponseBodyInstancesAffinity& setCPU(const Models::ListInstancesResponseBodyInstancesAffinityCPU & CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };
    inline ListInstancesResponseBodyInstancesAffinity& setCPU(Models::ListInstancesResponseBodyInstancesAffinityCPU && CPU) { DARABONBA_PTR_SET_RVALUE(CPU_, CPU) };


  protected:
    // The CPU affinity configuration. Only subscription instances that use general-purpose computing resources support CPU affinity configuration.
    std::shared_ptr<Models::ListInstancesResponseBodyInstancesAffinityCPU> CPU_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
