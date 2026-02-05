// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCRIPTRECORDINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListScriptRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScriptRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RefIdsJson, refIdsJson_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(StatesJson, statesJson_);
      DARABONBA_PTR_TO_JSON(UuidsJson, uuidsJson_);
    };
    friend void from_json(const Darabonba::Json& j, ListScriptRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RefIdsJson, refIdsJson_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(StatesJson, statesJson_);
      DARABONBA_PTR_FROM_JSON(UuidsJson, uuidsJson_);
    };
    ListScriptRecordingRequest() = default ;
    ListScriptRecordingRequest(const ListScriptRecordingRequest &) = default ;
    ListScriptRecordingRequest(ListScriptRecordingRequest &&) = default ;
    ListScriptRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScriptRecordingRequest() = default ;
    ListScriptRecordingRequest& operator=(const ListScriptRecordingRequest &) = default ;
    ListScriptRecordingRequest& operator=(ListScriptRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->refIdsJson_ == nullptr && this->scriptId_ == nullptr && this->search_ == nullptr
        && this->statesJson_ == nullptr && this->uuidsJson_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListScriptRecordingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListScriptRecordingRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListScriptRecordingRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // refIdsJson Field Functions 
    bool hasRefIdsJson() const { return this->refIdsJson_ != nullptr;};
    void deleteRefIdsJson() { this->refIdsJson_ = nullptr;};
    inline string getRefIdsJson() const { DARABONBA_PTR_GET_DEFAULT(refIdsJson_, "") };
    inline ListScriptRecordingRequest& setRefIdsJson(string refIdsJson) { DARABONBA_PTR_SET_VALUE(refIdsJson_, refIdsJson) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListScriptRecordingRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListScriptRecordingRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // statesJson Field Functions 
    bool hasStatesJson() const { return this->statesJson_ != nullptr;};
    void deleteStatesJson() { this->statesJson_ = nullptr;};
    inline string getStatesJson() const { DARABONBA_PTR_GET_DEFAULT(statesJson_, "") };
    inline ListScriptRecordingRequest& setStatesJson(string statesJson) { DARABONBA_PTR_SET_VALUE(statesJson_, statesJson) };


    // uuidsJson Field Functions 
    bool hasUuidsJson() const { return this->uuidsJson_ != nullptr;};
    void deleteUuidsJson() { this->uuidsJson_ = nullptr;};
    inline string getUuidsJson() const { DARABONBA_PTR_GET_DEFAULT(uuidsJson_, "") };
    inline ListScriptRecordingRequest& setUuidsJson(string uuidsJson) { DARABONBA_PTR_SET_VALUE(uuidsJson_, uuidsJson) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> refIdsJson_ {};
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> search_ {};
    shared_ptr<string> statesJson_ {};
    shared_ptr<string> uuidsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
