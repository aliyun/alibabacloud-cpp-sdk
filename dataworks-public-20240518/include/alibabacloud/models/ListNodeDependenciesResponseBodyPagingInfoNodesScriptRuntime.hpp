// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESSCRIPTRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESSCRIPTRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime(const ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime(ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


  protected:
    // The command used to distinguish node types.
    std::shared_ptr<string> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
