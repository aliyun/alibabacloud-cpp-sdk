// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishOnly, publishOnly_);
      DARABONBA_PTR_TO_JSON(ScriptIds, scriptIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishOnly, publishOnly_);
      DARABONBA_PTR_FROM_JSON(ScriptIds, scriptIds_);
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
        && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->publishOnly_ == nullptr && this->scriptIds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScriptsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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


    // publishOnly Field Functions 
    bool hasPublishOnly() const { return this->publishOnly_ != nullptr;};
    void deletePublishOnly() { this->publishOnly_ = nullptr;};
    inline bool getPublishOnly() const { DARABONBA_PTR_GET_DEFAULT(publishOnly_, false) };
    inline ListScriptsRequest& setPublishOnly(bool publishOnly) { DARABONBA_PTR_SET_VALUE(publishOnly_, publishOnly) };


    // scriptIds Field Functions 
    bool hasScriptIds() const { return this->scriptIds_ != nullptr;};
    void deleteScriptIds() { this->scriptIds_ = nullptr;};
    inline const vector<string> & getScriptIds() const { DARABONBA_PTR_GET_CONST(scriptIds_, vector<string>) };
    inline vector<string> getScriptIds() { DARABONBA_PTR_GET(scriptIds_, vector<string>) };
    inline ListScriptsRequest& setScriptIds(const vector<string> & scriptIds) { DARABONBA_PTR_SET_VALUE(scriptIds_, scriptIds) };
    inline ListScriptsRequest& setScriptIds(vector<string> && scriptIds) { DARABONBA_PTR_SET_RVALUE(scriptIds_, scriptIds) };


  protected:
    // 实例ID
    shared_ptr<string> instanceId_ {};
    // 搜索关键词
    shared_ptr<string> name_ {};
    // 页码，从1开始
    shared_ptr<int32_t> pageNumber_ {};
    // 每页记录数
    shared_ptr<int32_t> pageSize_ {};
    // 是否仅返回已发布的场景
    shared_ptr<bool> publishOnly_ {};
    // 场景ID列表
    shared_ptr<vector<string>> scriptIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
