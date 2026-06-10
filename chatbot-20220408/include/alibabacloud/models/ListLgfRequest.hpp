// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLGFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLGFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListLgfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLgfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(LgfText, lgfText_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListLgfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(LgfText, lgfText_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListLgfRequest() = default ;
    ListLgfRequest(const ListLgfRequest &) = default ;
    ListLgfRequest(ListLgfRequest &&) = default ;
    ListLgfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLgfRequest() = default ;
    ListLgfRequest& operator=(const ListLgfRequest &) = default ;
    ListLgfRequest& operator=(ListLgfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->lgfText_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListLgfRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListLgfRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline ListLgfRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // lgfText Field Functions 
    bool hasLgfText() const { return this->lgfText_ != nullptr;};
    void deleteLgfText() { this->lgfText_ = nullptr;};
    inline string getLgfText() const { DARABONBA_PTR_GET_DEFAULT(lgfText_, "") };
    inline ListLgfRequest& setLgfText(string lgfText) { DARABONBA_PTR_SET_VALUE(lgfText_, lgfText) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLgfRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLgfRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The key of the business space. If you do not specify this parameter, the default business space is used. You can obtain the key from the Business Management page of your main account.
    shared_ptr<string> agentKey_ {};
    // The ID of the chatbot.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the intent.
    // 
    // This parameter is required.
    shared_ptr<int64_t> intentId_ {};
    // The text used to filter the advanced semantic configurations.
    shared_ptr<string> lgfText_ {};
    // The number of the page to return. Defaults to 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Defaults to 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
