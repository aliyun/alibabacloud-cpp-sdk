// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBEEBOTINTENTUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListBeebotIntentUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBeebotIntentUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ListBeebotIntentUserSayRequest() = default ;
    ListBeebotIntentUserSayRequest(const ListBeebotIntentUserSayRequest &) = default ;
    ListBeebotIntentUserSayRequest(ListBeebotIntentUserSayRequest &&) = default ;
    ListBeebotIntentUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBeebotIntentUserSayRequest() = default ;
    ListBeebotIntentUserSayRequest& operator=(const ListBeebotIntentUserSayRequest &) = default ;
    ListBeebotIntentUserSayRequest& operator=(ListBeebotIntentUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->instanceId_ == nullptr && return this->intentId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->scriptId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListBeebotIntentUserSayRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBeebotIntentUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline string intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
    inline ListBeebotIntentUserSayRequest& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBeebotIntentUserSayRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBeebotIntentUserSayRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListBeebotIntentUserSayRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> intentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
