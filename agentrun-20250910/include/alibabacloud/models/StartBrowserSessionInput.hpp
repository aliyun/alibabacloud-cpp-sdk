// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBROWSERSESSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_STARTBROWSERSESSIONINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class StartBrowserSessionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBrowserSessionInput& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, StartBrowserSessionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    StartBrowserSessionInput() = default ;
    StartBrowserSessionInput(const StartBrowserSessionInput &) = default ;
    StartBrowserSessionInput(StartBrowserSessionInput &&) = default ;
    StartBrowserSessionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBrowserSessionInput() = default ;
    StartBrowserSessionInput& operator=(const StartBrowserSessionInput &) = default ;
    StartBrowserSessionInput& operator=(StartBrowserSessionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StartBrowserSessionInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
