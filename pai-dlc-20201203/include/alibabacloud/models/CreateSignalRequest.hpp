// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIGNALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESIGNALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SignalTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateSignalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSignalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Signal, signal_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSignalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Signal, signal_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    CreateSignalRequest() = default ;
    CreateSignalRequest(const CreateSignalRequest &) = default ;
    CreateSignalRequest(CreateSignalRequest &&) = default ;
    CreateSignalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSignalRequest() = default ;
    CreateSignalRequest& operator=(const CreateSignalRequest &) = default ;
    CreateSignalRequest& operator=(CreateSignalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->signal_ == nullptr
        && this->target_ == nullptr; };
    // signal Field Functions 
    bool hasSignal() const { return this->signal_ != nullptr;};
    void deleteSignal() { this->signal_ = nullptr;};
    inline string getSignal() const { DARABONBA_PTR_GET_DEFAULT(signal_, "") };
    inline CreateSignalRequest& setSignal(string signal) { DARABONBA_PTR_SET_VALUE(signal_, signal) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const SignalTarget & getTarget() const { DARABONBA_PTR_GET_CONST(target_, SignalTarget) };
    inline SignalTarget getTarget() { DARABONBA_PTR_GET(target_, SignalTarget) };
    inline CreateSignalRequest& setTarget(const SignalTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateSignalRequest& setTarget(SignalTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The signal code.
    shared_ptr<string> signal_ {};
    // The signal delivery scope.
    shared_ptr<SignalTarget> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
