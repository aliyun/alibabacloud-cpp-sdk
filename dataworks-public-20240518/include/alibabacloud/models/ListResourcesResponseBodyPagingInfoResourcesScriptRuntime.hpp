// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESSCRIPTRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESSCRIPTRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourcesResponseBodyPagingInfoResourcesScriptRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyPagingInfoResourcesScriptRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyPagingInfoResourcesScriptRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() = default ;
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime(const ListResourcesResponseBodyPagingInfoResourcesScriptRuntime &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime(ListResourcesResponseBodyPagingInfoResourcesScriptRuntime &&) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() = default ;
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime& operator=(const ListResourcesResponseBodyPagingInfoResourcesScriptRuntime &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScriptRuntime& operator=(ListResourcesResponseBodyPagingInfoResourcesScriptRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListResourcesResponseBodyPagingInfoResourcesScriptRuntime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


  protected:
    // The command used to distinguish file resource types.
    std::shared_ptr<string> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
