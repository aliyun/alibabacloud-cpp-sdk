// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSYNC_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSYNC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressSync : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressSync& obj) { 
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressSync& obj) { 
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    RLProgressSync() = default ;
    RLProgressSync(const RLProgressSync &) = default ;
    RLProgressSync(RLProgressSync &&) = default ;
    RLProgressSync(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressSync() = default ;
    RLProgressSync& operator=(const RLProgressSync &) = default ;
    RLProgressSync& operator=(RLProgressSync &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cost_ == nullptr
        && this->state_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline double getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0.0) };
    inline RLProgressSync& setCost(double cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline RLProgressSync& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The parameter synchronization duration in seconds. This property has a value only when State is end.
    shared_ptr<double> cost_ {};
    // begin / end
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
