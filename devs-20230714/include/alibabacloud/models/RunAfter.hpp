// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAFTER_HPP_
#define ALIBABACLOUD_MODELS_RUNAFTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class RunAfter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAfter& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RunAfter& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    RunAfter() = default ;
    RunAfter(const RunAfter &) = default ;
    RunAfter(RunAfter &&) = default ;
    RunAfter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAfter() = default ;
    RunAfter& operator=(const RunAfter &) = default ;
    RunAfter& operator=(RunAfter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunAfter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
