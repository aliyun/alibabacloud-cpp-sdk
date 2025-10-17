// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLEPRESTOP_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLEPRESTOP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecyclePreStopExec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class LifecyclePreStop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecyclePreStop& obj) { 
      DARABONBA_PTR_TO_JSON(Exec, exec_);
    };
    friend void from_json(const Darabonba::Json& j, LifecyclePreStop& obj) { 
      DARABONBA_PTR_FROM_JSON(Exec, exec_);
    };
    LifecyclePreStop() = default ;
    LifecyclePreStop(const LifecyclePreStop &) = default ;
    LifecyclePreStop(LifecyclePreStop &&) = default ;
    LifecyclePreStop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecyclePreStop() = default ;
    LifecyclePreStop& operator=(const LifecyclePreStop &) = default ;
    LifecyclePreStop& operator=(LifecyclePreStop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exec_ == nullptr; };
    // exec Field Functions 
    bool hasExec() const { return this->exec_ != nullptr;};
    void deleteExec() { this->exec_ = nullptr;};
    inline const Models::LifecyclePreStopExec & exec() const { DARABONBA_PTR_GET_CONST(exec_, Models::LifecyclePreStopExec) };
    inline Models::LifecyclePreStopExec exec() { DARABONBA_PTR_GET(exec_, Models::LifecyclePreStopExec) };
    inline LifecyclePreStop& setExec(const Models::LifecyclePreStopExec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
    inline LifecyclePreStop& setExec(Models::LifecyclePreStopExec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


  protected:
    std::shared_ptr<Models::LifecyclePreStopExec> exec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
