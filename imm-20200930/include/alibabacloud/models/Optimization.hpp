// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPTIMIZATION_HPP_
#define ALIBABACLOUD_MODELS_OPTIMIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Optimization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Optimization& obj) { 
      DARABONBA_PTR_TO_JSON(LearningRate, learningRate_);
      DARABONBA_PTR_TO_JSON(Optimizer, optimizer_);
    };
    friend void from_json(const Darabonba::Json& j, Optimization& obj) { 
      DARABONBA_PTR_FROM_JSON(LearningRate, learningRate_);
      DARABONBA_PTR_FROM_JSON(Optimizer, optimizer_);
    };
    Optimization() = default ;
    Optimization(const Optimization &) = default ;
    Optimization(Optimization &&) = default ;
    Optimization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Optimization() = default ;
    Optimization& operator=(const Optimization &) = default ;
    Optimization& operator=(Optimization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->learningRate_ == nullptr
        && return this->optimizer_ == nullptr; };
    // learningRate Field Functions 
    bool hasLearningRate() const { return this->learningRate_ != nullptr;};
    void deleteLearningRate() { this->learningRate_ = nullptr;};
    inline float learningRate() const { DARABONBA_PTR_GET_DEFAULT(learningRate_, 0.0) };
    inline Optimization& setLearningRate(float learningRate) { DARABONBA_PTR_SET_VALUE(learningRate_, learningRate) };


    // optimizer Field Functions 
    bool hasOptimizer() const { return this->optimizer_ != nullptr;};
    void deleteOptimizer() { this->optimizer_ = nullptr;};
    inline string optimizer() const { DARABONBA_PTR_GET_DEFAULT(optimizer_, "") };
    inline Optimization& setOptimizer(string optimizer) { DARABONBA_PTR_SET_VALUE(optimizer_, optimizer) };


  protected:
    std::shared_ptr<float> learningRate_ = nullptr;
    std::shared_ptr<string> optimizer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
