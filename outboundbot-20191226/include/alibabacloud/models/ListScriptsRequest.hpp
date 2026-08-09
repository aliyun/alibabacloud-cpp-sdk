// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
    };
    ListScriptsRequest() = default ;
    ListScriptsRequest(const ListScriptsRequest &) = default ;
    ListScriptsRequest(ListScriptsRequest &&) = default ;
    ListScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsRequest() = default ;
    ListScriptsRequest& operator=(const ListScriptsRequest &) = default ;
    ListScriptsRequest& operator=(ListScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nluEngine_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scriptName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline ListScriptsRequest& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListScriptsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScriptsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ListScriptsRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The NLU robot engine.
    // 
    // - If this parameter is left empty, small model scenarios are queried.
    // 
    // - If this parameter is set to Prompts, the text input mode under large model scenarios is queried.
    // 
    // - If this parameter is set to SSE_FUNCTION, the function computing mode under large model scenarios is queried.
    // - If this parameter is set to BeeBot, the workflow configuration mode under large model scenarios is queried.
    shared_ptr<string> nluEngine_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The script name.
    shared_ptr<string> scriptName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
