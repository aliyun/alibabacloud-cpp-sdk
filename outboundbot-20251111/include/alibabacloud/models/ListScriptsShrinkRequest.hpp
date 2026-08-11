// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListScriptsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishOnly, publishOnly_);
      DARABONBA_PTR_TO_JSON(ScriptIds, scriptIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishOnly, publishOnly_);
      DARABONBA_PTR_FROM_JSON(ScriptIds, scriptIdsShrink_);
    };
    ListScriptsShrinkRequest() = default ;
    ListScriptsShrinkRequest(const ListScriptsShrinkRequest &) = default ;
    ListScriptsShrinkRequest(ListScriptsShrinkRequest &&) = default ;
    ListScriptsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptsShrinkRequest() = default ;
    ListScriptsShrinkRequest& operator=(const ListScriptsShrinkRequest &) = default ;
    ListScriptsShrinkRequest& operator=(ListScriptsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->publishOnly_ == nullptr && this->scriptIdsShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListScriptsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListScriptsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScriptsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishOnly Field Functions 
    bool hasPublishOnly() const { return this->publishOnly_ != nullptr;};
    void deletePublishOnly() { this->publishOnly_ = nullptr;};
    inline bool getPublishOnly() const { DARABONBA_PTR_GET_DEFAULT(publishOnly_, false) };
    inline ListScriptsShrinkRequest& setPublishOnly(bool publishOnly) { DARABONBA_PTR_SET_VALUE(publishOnly_, publishOnly) };


    // scriptIdsShrink Field Functions 
    bool hasScriptIdsShrink() const { return this->scriptIdsShrink_ != nullptr;};
    void deleteScriptIdsShrink() { this->scriptIdsShrink_ = nullptr;};
    inline string getScriptIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(scriptIdsShrink_, "") };
    inline ListScriptsShrinkRequest& setScriptIdsShrink(string scriptIdsShrink) { DARABONBA_PTR_SET_VALUE(scriptIdsShrink_, scriptIdsShrink) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The scenario name.
    shared_ptr<string> name_ {};
    // The page number, starting from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to return only published scenarios.
    shared_ptr<bool> publishOnly_ {};
    // The list of scenario IDs.
    shared_ptr<string> scriptIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
