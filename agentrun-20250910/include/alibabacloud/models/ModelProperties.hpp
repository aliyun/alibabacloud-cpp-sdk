// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_MODELPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelProperties& obj) { 
      DARABONBA_PTR_TO_JSON(contextSize, contextSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModelProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(contextSize, contextSize_);
    };
    ModelProperties() = default ;
    ModelProperties(const ModelProperties &) = default ;
    ModelProperties(ModelProperties &&) = default ;
    ModelProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelProperties() = default ;
    ModelProperties& operator=(const ModelProperties &) = default ;
    ModelProperties& operator=(ModelProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextSize_ == nullptr; };
    // contextSize Field Functions 
    bool hasContextSize() const { return this->contextSize_ != nullptr;};
    void deleteContextSize() { this->contextSize_ = nullptr;};
    inline int32_t contextSize() const { DARABONBA_PTR_GET_DEFAULT(contextSize_, 0) };
    inline ModelProperties& setContextSize(int32_t contextSize) { DARABONBA_PTR_SET_VALUE(contextSize_, contextSize) };


  protected:
    std::shared_ptr<int32_t> contextSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
