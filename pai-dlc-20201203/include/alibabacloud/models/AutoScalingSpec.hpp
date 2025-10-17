// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGSPEC_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class AutoScalingSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingSpec& obj) { 
      DARABONBA_PTR_TO_JSON(ScalingStrategy, scalingStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(ScalingStrategy, scalingStrategy_);
    };
    AutoScalingSpec() = default ;
    AutoScalingSpec(const AutoScalingSpec &) = default ;
    AutoScalingSpec(AutoScalingSpec &&) = default ;
    AutoScalingSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingSpec() = default ;
    AutoScalingSpec& operator=(const AutoScalingSpec &) = default ;
    AutoScalingSpec& operator=(AutoScalingSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scalingStrategy_ == nullptr; };
    // scalingStrategy Field Functions 
    bool hasScalingStrategy() const { return this->scalingStrategy_ != nullptr;};
    void deleteScalingStrategy() { this->scalingStrategy_ = nullptr;};
    inline string scalingStrategy() const { DARABONBA_PTR_GET_DEFAULT(scalingStrategy_, "") };
    inline AutoScalingSpec& setScalingStrategy(string scalingStrategy) { DARABONBA_PTR_SET_VALUE(scalingStrategy_, scalingStrategy) };


  protected:
    std::shared_ptr<string> scalingStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
