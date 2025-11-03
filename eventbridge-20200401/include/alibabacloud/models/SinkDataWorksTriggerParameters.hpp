// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKDATAWORKSTRIGGERPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKDATAWORKSTRIGGERPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkDataWorksTriggerParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkDataWorksTriggerParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, SinkDataWorksTriggerParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    SinkDataWorksTriggerParameters() = default ;
    SinkDataWorksTriggerParameters(const SinkDataWorksTriggerParameters &) = default ;
    SinkDataWorksTriggerParameters(SinkDataWorksTriggerParameters &&) = default ;
    SinkDataWorksTriggerParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkDataWorksTriggerParameters() = default ;
    SinkDataWorksTriggerParameters& operator=(const SinkDataWorksTriggerParameters &) = default ;
    SinkDataWorksTriggerParameters& operator=(SinkDataWorksTriggerParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline SinkDataWorksTriggerParameters& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<string> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
