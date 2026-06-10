// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ListScriptVariablesRequest() = default ;
    ListScriptVariablesRequest(const ListScriptVariablesRequest &) = default ;
    ListScriptVariablesRequest(ListScriptVariablesRequest &&) = default ;
    ListScriptVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptVariablesRequest() = default ;
    ListScriptVariablesRequest& operator=(const ListScriptVariablesRequest &) = default ;
    ListScriptVariablesRequest& operator=(ListScriptVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->sandbox_ == nullptr && this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptVariablesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline bool getSandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, false) };
    inline ListScriptVariablesRequest& setSandbox(bool sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptVariablesRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // The instance ID, also known as the business ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to retrieve variables from the sandbox.
    shared_ptr<bool> sandbox_ {};
    // The script ID.
    // 
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
