// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FASTFAILPOLICY_HPP_
#define ALIBABACLOUD_MODELS_FASTFAILPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FastFailPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FastFailPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
    };
    friend void from_json(const Darabonba::Json& j, FastFailPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
    };
    FastFailPolicy() = default ;
    FastFailPolicy(const FastFailPolicy &) = default ;
    FastFailPolicy(FastFailPolicy &&) = default ;
    FastFailPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FastFailPolicy() = default ;
    FastFailPolicy& operator=(const FastFailPolicy &) = default ;
    FastFailPolicy& operator=(FastFailPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline FastFailPolicy& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
