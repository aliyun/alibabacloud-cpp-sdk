// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIME_HPP_
#define ALIBABACLOUD_MODELS_RUNTIME_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Hyperparameters.hpp>
#include <alibabacloud/models/Resource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Runtime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
      DARABONBA_PTR_TO_JSON(Hyperparameters, hyperparameters_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
      DARABONBA_PTR_FROM_JSON(Hyperparameters, hyperparameters_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    Runtime() = default ;
    Runtime(const Runtime &) = default ;
    Runtime(Runtime &&) = default ;
    Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Runtime() = default ;
    Runtime& operator=(const Runtime &) = default ;
    Runtime& operator=(Runtime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hyperparameters_ != nullptr
        && this->resource_ != nullptr; };
    // hyperparameters Field Functions 
    bool hasHyperparameters() const { return this->hyperparameters_ != nullptr;};
    void deleteHyperparameters() { this->hyperparameters_ = nullptr;};
    inline const Hyperparameters & hyperparameters() const { DARABONBA_PTR_GET_CONST(hyperparameters_, Hyperparameters) };
    inline Hyperparameters hyperparameters() { DARABONBA_PTR_GET(hyperparameters_, Hyperparameters) };
    inline Runtime& setHyperparameters(const Hyperparameters & hyperparameters) { DARABONBA_PTR_SET_VALUE(hyperparameters_, hyperparameters) };
    inline Runtime& setHyperparameters(Hyperparameters && hyperparameters) { DARABONBA_PTR_SET_RVALUE(hyperparameters_, hyperparameters) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const Resource & resource() const { DARABONBA_PTR_GET_CONST(resource_, Resource) };
    inline Resource resource() { DARABONBA_PTR_GET(resource_, Resource) };
    inline Runtime& setResource(const Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline Runtime& setResource(Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    // This parameter is required.
    std::shared_ptr<Hyperparameters> hyperparameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Resource> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
