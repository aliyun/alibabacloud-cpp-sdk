// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLEPOSTSTART_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLEPOSTSTART_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecyclePostStartExec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class LifecyclePostStart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecyclePostStart& obj) { 
      DARABONBA_PTR_TO_JSON(Exec, exec_);
    };
    friend void from_json(const Darabonba::Json& j, LifecyclePostStart& obj) { 
      DARABONBA_PTR_FROM_JSON(Exec, exec_);
    };
    LifecyclePostStart() = default ;
    LifecyclePostStart(const LifecyclePostStart &) = default ;
    LifecyclePostStart(LifecyclePostStart &&) = default ;
    LifecyclePostStart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecyclePostStart() = default ;
    LifecyclePostStart& operator=(const LifecyclePostStart &) = default ;
    LifecyclePostStart& operator=(LifecyclePostStart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exec_ != nullptr; };
    // exec Field Functions 
    bool hasExec() const { return this->exec_ != nullptr;};
    void deleteExec() { this->exec_ = nullptr;};
    inline const Models::LifecyclePostStartExec & exec() const { DARABONBA_PTR_GET_CONST(exec_, Models::LifecyclePostStartExec) };
    inline Models::LifecyclePostStartExec exec() { DARABONBA_PTR_GET(exec_, Models::LifecyclePostStartExec) };
    inline LifecyclePostStart& setExec(const Models::LifecyclePostStartExec & exec) { DARABONBA_PTR_SET_VALUE(exec_, exec) };
    inline LifecyclePostStart& setExec(Models::LifecyclePostStartExec && exec) { DARABONBA_PTR_SET_RVALUE(exec_, exec) };


  protected:
    std::shared_ptr<Models::LifecyclePostStartExec> exec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
