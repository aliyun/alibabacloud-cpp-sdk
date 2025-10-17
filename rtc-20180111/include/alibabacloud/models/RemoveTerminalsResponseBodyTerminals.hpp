// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODYTERMINALS_HPP_
#define ALIBABACLOUD_MODELS_REMOVETERMINALSRESPONSEBODYTERMINALS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveTerminalsResponseBodyTerminalsTerminal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveTerminalsResponseBodyTerminals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTerminalsResponseBodyTerminals& obj) { 
      DARABONBA_PTR_TO_JSON(Terminal, terminal_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTerminalsResponseBodyTerminals& obj) { 
      DARABONBA_PTR_FROM_JSON(Terminal, terminal_);
    };
    RemoveTerminalsResponseBodyTerminals() = default ;
    RemoveTerminalsResponseBodyTerminals(const RemoveTerminalsResponseBodyTerminals &) = default ;
    RemoveTerminalsResponseBodyTerminals(RemoveTerminalsResponseBodyTerminals &&) = default ;
    RemoveTerminalsResponseBodyTerminals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTerminalsResponseBodyTerminals() = default ;
    RemoveTerminalsResponseBodyTerminals& operator=(const RemoveTerminalsResponseBodyTerminals &) = default ;
    RemoveTerminalsResponseBodyTerminals& operator=(RemoveTerminalsResponseBodyTerminals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->terminal_ == nullptr; };
    // terminal Field Functions 
    bool hasTerminal() const { return this->terminal_ != nullptr;};
    void deleteTerminal() { this->terminal_ = nullptr;};
    inline const vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal> & terminal() const { DARABONBA_PTR_GET_CONST(terminal_, vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal>) };
    inline vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal> terminal() { DARABONBA_PTR_GET(terminal_, vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal>) };
    inline RemoveTerminalsResponseBodyTerminals& setTerminal(const vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal> & terminal) { DARABONBA_PTR_SET_VALUE(terminal_, terminal) };
    inline RemoveTerminalsResponseBodyTerminals& setTerminal(vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal> && terminal) { DARABONBA_PTR_SET_RVALUE(terminal_, terminal) };


  protected:
    std::shared_ptr<vector<Models::RemoveTerminalsResponseBodyTerminalsTerminal>> terminal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
