// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTSCALINGCONFIGOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTSCALINGCONFIGOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutScalingConfigOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutScalingConfigOutput& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, PutScalingConfigOutput& obj) { 
    };
    PutScalingConfigOutput() = default ;
    PutScalingConfigOutput(const PutScalingConfigOutput &) = default ;
    PutScalingConfigOutput(PutScalingConfigOutput &&) = default ;
    PutScalingConfigOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutScalingConfigOutput() = default ;
    PutScalingConfigOutput& operator=(const PutScalingConfigOutput &) = default ;
    PutScalingConfigOutput& operator=(PutScalingConfigOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
