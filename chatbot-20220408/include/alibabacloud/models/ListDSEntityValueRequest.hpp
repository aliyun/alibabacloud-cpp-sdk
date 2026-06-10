// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDSENTITYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDSENTITYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListDSEntityValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDSEntityValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDSEntityValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityValueId, entityValueId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDSEntityValueRequest() = default ;
    ListDSEntityValueRequest(const ListDSEntityValueRequest &) = default ;
    ListDSEntityValueRequest(ListDSEntityValueRequest &&) = default ;
    ListDSEntityValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDSEntityValueRequest() = default ;
    ListDSEntityValueRequest& operator=(const ListDSEntityValueRequest &) = default ;
    ListDSEntityValueRequest& operator=(ListDSEntityValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->entityId_ == nullptr && this->entityValueId_ == nullptr && this->instanceId_ == nullptr && this->keyword_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListDSEntityValueRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline ListDSEntityValueRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityValueId Field Functions 
    bool hasEntityValueId() const { return this->entityValueId_ != nullptr;};
    void deleteEntityValueId() { this->entityValueId_ = nullptr;};
    inline int64_t getEntityValueId() const { DARABONBA_PTR_GET_DEFAULT(entityValueId_, 0L) };
    inline ListDSEntityValueRequest& setEntityValueId(int64_t entityValueId) { DARABONBA_PTR_SET_VALUE(entityValueId_, entityValueId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDSEntityValueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListDSEntityValueRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDSEntityValueRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDSEntityValueRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The key for the business space. If omitted, the default business space is used. You can get this key from the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // The ID of the entity.
    // 
    // This parameter is required.
    shared_ptr<int64_t> entityId_ {};
    // The ID of the entity value.
    shared_ptr<int64_t> entityValueId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The keyword used to search for entity values and their synonyms.
    shared_ptr<string> keyword_ {};
    // The page number. Defaults to 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Defaults to 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
