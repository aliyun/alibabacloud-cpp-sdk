// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSSCRIPTRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSSCRIPTRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComponentsResponseBodyPagingInfoComponentsScriptRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyPagingInfoComponentsScriptRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyPagingInfoComponentsScriptRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime() = default ;
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime(const ListComponentsResponseBodyPagingInfoComponentsScriptRuntime &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime(ListComponentsResponseBodyPagingInfoComponentsScriptRuntime &&) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyPagingInfoComponentsScriptRuntime() = default ;
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime& operator=(const ListComponentsResponseBodyPagingInfoComponentsScriptRuntime &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScriptRuntime& operator=(ListComponentsResponseBodyPagingInfoComponentsScriptRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsScriptRuntime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


  protected:
    // 脚本所属类型
    std::shared_ptr<string> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
