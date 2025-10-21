// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPOINTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SAVEPOINTSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SavepointFailure.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SavepointStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavepointStatus& obj) { 
      DARABONBA_PTR_TO_JSON(failure, failure_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, SavepointStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(failure, failure_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    SavepointStatus() = default ;
    SavepointStatus(const SavepointStatus &) = default ;
    SavepointStatus(SavepointStatus &&) = default ;
    SavepointStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavepointStatus() = default ;
    SavepointStatus& operator=(const SavepointStatus &) = default ;
    SavepointStatus& operator=(SavepointStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failure_ == nullptr
        && return this->state_ == nullptr; };
    // failure Field Functions 
    bool hasFailure() const { return this->failure_ != nullptr;};
    void deleteFailure() { this->failure_ = nullptr;};
    inline const SavepointFailure & failure() const { DARABONBA_PTR_GET_CONST(failure_, SavepointFailure) };
    inline SavepointFailure failure() { DARABONBA_PTR_GET(failure_, SavepointFailure) };
    inline SavepointStatus& setFailure(const SavepointFailure & failure) { DARABONBA_PTR_SET_VALUE(failure_, failure) };
    inline SavepointStatus& setFailure(SavepointFailure && failure) { DARABONBA_PTR_SET_RVALUE(failure_, failure) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SavepointStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<SavepointFailure> failure_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
