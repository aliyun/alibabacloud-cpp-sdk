// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMSPECCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMSPECCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlgorithmSpecComputeResourcePolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AlgorithmSpecComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmSpecComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmSpecComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    AlgorithmSpecComputeResource() = default ;
    AlgorithmSpecComputeResource(const AlgorithmSpecComputeResource &) = default ;
    AlgorithmSpecComputeResource(AlgorithmSpecComputeResource &&) = default ;
    AlgorithmSpecComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmSpecComputeResource() = default ;
    AlgorithmSpecComputeResource& operator=(const AlgorithmSpecComputeResource &) = default ;
    AlgorithmSpecComputeResource& operator=(AlgorithmSpecComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policy_ != nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const Models::AlgorithmSpecComputeResourcePolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, Models::AlgorithmSpecComputeResourcePolicy) };
    inline Models::AlgorithmSpecComputeResourcePolicy policy() { DARABONBA_PTR_GET(policy_, Models::AlgorithmSpecComputeResourcePolicy) };
    inline AlgorithmSpecComputeResource& setPolicy(const Models::AlgorithmSpecComputeResourcePolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline AlgorithmSpecComputeResource& setPolicy(Models::AlgorithmSpecComputeResourcePolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::AlgorithmSpecComputeResourcePolicy> policy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
