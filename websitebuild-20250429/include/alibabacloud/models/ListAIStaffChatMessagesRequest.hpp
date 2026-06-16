// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAISTAFFCHATMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAISTAFFCHATMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAIStaffChatMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIStaffChatMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartCreateTime, startCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIStaffChatMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartCreateTime, startCreateTime_);
    };
    ListAIStaffChatMessagesRequest() = default ;
    ListAIStaffChatMessagesRequest(const ListAIStaffChatMessagesRequest &) = default ;
    ListAIStaffChatMessagesRequest(ListAIStaffChatMessagesRequest &&) = default ;
    ListAIStaffChatMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIStaffChatMessagesRequest() = default ;
    ListAIStaffChatMessagesRequest& operator=(const ListAIStaffChatMessagesRequest &) = default ;
    ListAIStaffChatMessagesRequest& operator=(ListAIStaffChatMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->conversationId_ == nullptr && this->pageSize_ == nullptr && this->startCreateTime_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAIStaffChatMessagesRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ListAIStaffChatMessagesRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAIStaffChatMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startCreateTime Field Functions 
    bool hasStartCreateTime() const { return this->startCreateTime_ != nullptr;};
    void deleteStartCreateTime() { this->startCreateTime_ = nullptr;};
    inline string getStartCreateTime() const { DARABONBA_PTR_GET_DEFAULT(startCreateTime_, "") };
    inline ListAIStaffChatMessagesRequest& setStartCreateTime(string startCreateTime) { DARABONBA_PTR_SET_VALUE(startCreateTime_, startCreateTime) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The conversation ID.
    shared_ptr<string> conversationId_ {};
    // The number of records per page. Valid values: 10 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The gmtCreate value of the last record on the previous page. Leave this parameter empty for the first page.
    shared_ptr<string> startCreateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
